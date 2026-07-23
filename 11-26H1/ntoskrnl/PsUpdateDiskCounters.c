/*
 * XREFs of PsUpdateDiskCounters @ 0x140468710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall PsUpdateDiskCounters(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  volatile signed __int64 *result; // rax

  result = *(volatile signed __int64 **)(a1 + 1592);
  if ( result )
  {
    if ( a2 )
      _InterlockedAdd64(result, a2);
    if ( a3 )
      _InterlockedAdd64(result + 1, a3);
    if ( a4 )
      _InterlockedAdd64(result + 2, a4);
    if ( a5 )
      _InterlockedAdd64(result + 3, a5);
    if ( a6 )
      _InterlockedAdd64(result + 4, a6);
  }
  return result;
}
