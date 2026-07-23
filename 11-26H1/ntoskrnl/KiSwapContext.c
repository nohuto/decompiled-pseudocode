/*
 * XREFs of KiSwapContext @ 0x140734AA0
 * Callers:
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiExecuteSmtIsolationThread @ 0x1405F8FD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
