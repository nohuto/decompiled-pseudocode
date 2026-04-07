/*
 * XREFs of ??_ECTimer@@UEAAPEAXI@Z @ 0x18006CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTimer@@UEAA@XZ @ 0x18006CDDC (--1CTimer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CTimer *__fastcall CTimer::`vector deleting destructor'(CTimer *this, char a2)
{
  CTimer::~CTimer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
