/*
 * XREFs of HalpInterruptPowerComponentIdleCallback @ 0x140593850
 * Callers:
 *     <none>
 * Callees:
 *     PoFxCompleteIdleCondition @ 0x140482D90 (PoFxCompleteIdleCondition.c)
 *     HalpInterruptPowerChange @ 0x14059379C (HalpInterruptPowerChange.c)
 */

void __fastcall HalpInterruptPowerComponentIdleCallback(ULONG_PTR a1, unsigned int a2)
{
  HalpInterruptPowerChange(a1, 0LL);
  PoFxCompleteIdleCondition(*(_QWORD **)(a1 + 368), a2);
}
