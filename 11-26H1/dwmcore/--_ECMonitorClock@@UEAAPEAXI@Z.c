/*
 * XREFs of ??_ECMonitorClock@@UEAAPEAXI@Z @ 0x1801D79B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CMonitorClock *__fastcall CMonitorClock::`vector deleting destructor'(CMonitorClock *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}
