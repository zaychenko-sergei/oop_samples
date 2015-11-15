// (C) 2013-2015, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _TIME_V2_HPP_
#define _TIME_V2_HPP_

/*****************************************************************************/


class Time
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Time ( int _hours, int _minutes );

	int GetHours () const;
	int GetMinutes () const;

	const char * ToString () const;

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	bool IsValid () const;

/*-----------------------------------------------------------------*/

	int m_hours, m_minutes;

	mutable char m_tempBuf[ 6 ];

/*-----------------------------------------------------------------*/

};


/*****************************************************************************/


inline int Time::GetHours () const
{
	return m_hours;
}


/*****************************************************************************/


inline int Time::GetMinutes () const
{
	return m_minutes;
}


/*****************************************************************************/

#endif //  _TIME_V2_HPP_