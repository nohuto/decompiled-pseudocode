/*
 * XREFs of PerfTargetDefaultHandler @ 0x140005520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfTargetDefaultHandler(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  if ( a2 >= a3 )
    a3 = a2;
  if ( a3 > a4 )
    a3 = a4;
  if ( a6 )
    *a6 = 0LL;
  return a3;
}
