/*
 * XREFs of KiDeferredReadyThread @ 0x140230D00
 * Callers:
 *     KiFastReadyThread @ 0x140230B78 (KiFastReadyThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1403C90A4 (KiNormalPriorityReadyScan.c)
 *     KiScanSharedReadyThreads @ 0x1403C93BC (KiScanSharedReadyThreads.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 */

__int64 __fastcall KiDeferredReadyThread(struct _KPRCB *a1)
{
  __int64 v2; // rdx

  KiDeferredReadySingleThread(a1);
  return KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts, v2);
}
