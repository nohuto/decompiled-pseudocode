/*
 * XREFs of HalpInterruptPowerComponentIdleCallback @ 0x1405910D0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x140489250 (PoFxCompleteIdleCondition.c)
 *     HalpInterruptPowerChange @ 0x14059101C (HalpInterruptPowerChange.c)
 */

void __fastcall HalpInterruptPowerComponentIdleCallback(ULONG_PTR a1, unsigned int a2)
{
  HalpInterruptPowerChange(a1, 0LL);
  PoFxCompleteIdleCondition(*(_QWORD **)(a1 + 368), a2);
}
