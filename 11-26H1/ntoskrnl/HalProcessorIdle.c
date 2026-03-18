/*
 * XREFs of HalProcessorIdle @ 0x140722A90
 * Callers:
 *     KiHaltOnAddress @ 0x1403E57E8 (KiHaltOnAddress.c)
 *     PoIdle @ 0x1403E9FF0 (PoIdle.c)
 *     PpmIdleGuestExecute @ 0x14049AF80 (PpmIdleGuestExecute.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F6610 (KiExecuteSmtIsolationThread.c)
 *     PpmIdleDefaultExecute @ 0x140602100 (PpmIdleDefaultExecute.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x1402C7C10 (HalpTimerResetProfileAdjustment.c)
 */

void __fastcall __noreturn HalProcessorIdle(__int64 a1, __int64 a2, __int64 a3)
{
  HalpTimerResetProfileAdjustment(a1, a2, a3);
  _enable();
  __halt();
}
