/*
 * XREFs of KiSwapContext @ 0x14072FED0
 * Callers:
 *     KiDispatchInterrupt @ 0x140223290 (KiDispatchInterrupt.c)
 *     KiHandleDeferredPreemption @ 0x14022E730 (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F6610 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     SwapContext @ 0x14072FFB0 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
