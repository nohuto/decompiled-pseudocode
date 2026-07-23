/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x140385398
 * Callers:
 *     CcWriteBehind @ 0x14038513C (CcWriteBehind.c)
 *     CcWriteBehindPreProcess @ 0x140386674 (CcWriteBehindPreProcess.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140387494 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcApplyLowIoPriorityToThread @ 0x140387538 (CcApplyLowIoPriorityToThread.c)
 *     CcPostWorkQueueRegular @ 0x1403881CC (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcShouldWorkOnThisQueue @ 0x140388AF8 (CcShouldWorkOnThisQueue.c)
 *     CcComputeNextScanTime @ 0x1404CF8AC (CcComputeNextScanTime.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return !CcEnablePerVolumeLazyWriter
      && (unsigned int)CcNumberNumaNodes <= 1
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
