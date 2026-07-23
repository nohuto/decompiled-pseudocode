/*
 * XREFs of HalpTimerPowerCriticalTransitionCallback @ 0x140585220
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerPowerChange @ 0x140585104 (HalpTimerPowerChange.c)
 */

void __fastcall HalpTimerPowerCriticalTransitionCallback(ULONG_PTR a1, __int64 a2, char a3)
{
  HalpTimerPowerChange(a1, a3);
}
