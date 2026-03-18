/*
 * XREFs of CcIsWriteBehindThreadpoolAtLowPriority @ 0x1403835E8
 * Callers:
 *     CcWriteBehind @ 0x14038338C (CcWriteBehind.c)
 *     CcWriteBehindPreProcess @ 0x1403848C4 (CcWriteBehindPreProcess.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1403856E4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcApplyLowIoPriorityToThread @ 0x140385788 (CcApplyLowIoPriorityToThread.c)
 *     CcPostWorkQueueRegular @ 0x14038641C (CcPostWorkQueueRegular.c)
 *     CcWorkerThread @ 0x1403865D0 (CcWorkerThread.c)
 *     CcShouldWorkOnThisQueue @ 0x140386D48 (CcShouldWorkOnThisQueue.c)
 *     CcComputeNextScanTime @ 0x1404D60DC (CcComputeNextScanTime.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsWriteBehindThreadpoolAtLowPriority(__int64 a1)
{
  return !CcEnablePerVolumeLazyWriter
      && (unsigned int)CcNumberNumaNodes <= 1
      && *(_DWORD *)(a1 + 1288) < *(_DWORD *)(a1 + 840);
}
