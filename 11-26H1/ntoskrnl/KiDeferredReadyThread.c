/*
 * XREFs of KiDeferredReadyThread @ 0x14022F370
 * Callers:
 *     KiFastReadyThread @ 0x14022F1E8 (KiFastReadyThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1403BF1A4 (KiNormalPriorityReadyScan.c)
 *     KiScanSharedReadyThreads @ 0x1403BF4BC (KiScanSharedReadyThreads.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 */

__int64 __fastcall KiDeferredReadyThread(struct _KPRCB *a1)
{
  __int64 v2; // rdx

  KiDeferredReadySingleThread(a1);
  return KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts, v2);
}
