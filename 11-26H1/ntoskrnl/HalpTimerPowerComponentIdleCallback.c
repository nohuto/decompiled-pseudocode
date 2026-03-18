/*
 * XREFs of HalpTimerPowerComponentIdleCallback @ 0x140582CE0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x140489250 (PoFxCompleteIdleCondition.c)
 */

void __fastcall HalpTimerPowerComponentIdleCallback(__int64 a1, ULONG_PTR a2)
{
  PoFxCompleteIdleCondition(*(_QWORD **)(*(_QWORD *)(a1 + 288) + 40LL), a2);
}
