/*
 * XREFs of HalpTimerPowerCriticalTransitionCallback @ 0x140582D00
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerPowerChange @ 0x140582BE4 (HalpTimerPowerChange.c)
 */

void __fastcall HalpTimerPowerCriticalTransitionCallback(ULONG_PTR a1, __int64 a2, char a3)
{
  HalpTimerPowerChange(a1, a3);
}
