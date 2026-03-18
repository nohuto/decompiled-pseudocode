/*
 * XREFs of HalpSetTimerAnyMode @ 0x1404E3060
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x140426F38 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerClockPowerChange @ 0x1405811D0 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpSetTimer @ 0x1402086B0 (HalpSetTimer.c)
 *     HalpTimerClearProblem @ 0x1404E3108 (HalpTimerClearProblem.c)
 */

__int64 __fastcall HalpSetTimerAnyMode(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // eax
  int v13; // eax

  v7 = HalpSetTimer(a1, 3u, a2, 1, a4);
  v8 = (unsigned int)v7;
  if ( v7 >= 0
    || (v12 = HalpSetTimer(a1, 2u, a2, 1, a4), v8 = (unsigned int)v12, v12 >= 0)
    || (v13 = HalpSetTimer(a1, 1u, a2, 1, a4), v8 = (unsigned int)v13, v13 >= 0) )
  {
    HalpTimerClearProblem(a1, 17LL, v8);
    HalpTimerClearProblem(v9, 18LL, v10);
  }
  return (unsigned int)v8;
}
