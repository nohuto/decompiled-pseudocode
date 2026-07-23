/*
 * XREFs of HalProcessorIdle @ 0x140727660
 * Callers:
 *     PoIdle @ 0x1402F6ED0 (PoIdle.c)
 *     KiHaltOnAddress @ 0x1403E89D8 (KiHaltOnAddress.c)
 *     PpmIdleGuestExecute @ 0x140494AD0 (PpmIdleGuestExecute.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 *     PpmIdleDefaultExecute @ 0x140604BB0 (PpmIdleDefaultExecute.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x1403128B0 (HalpTimerResetProfileAdjustment.c)
 */

void __fastcall __noreturn HalProcessorIdle(__int64 a1, __int64 a2, __int64 a3)
{
  HalpTimerResetProfileAdjustment(a1, a2, a3);
  _enable();
  __halt();
}
