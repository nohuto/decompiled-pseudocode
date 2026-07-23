/*
 * XREFs of KiSetUserTbFlushPending @ 0x14072D090
 * Callers:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x140252BEC (KxFlushEntireTb.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     KiFlushRangeWorker @ 0x14032CFD0 (KiFlushRangeWorker.c)
 *     KiIpiProcessRequest @ 0x14032E310 (KiIpiProcessRequest.c)
 *     KiFlushRangeTb @ 0x140414FC0 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x140469CC0 (KiFlushCurrentTbOnly.c)
 *     KeDeepSleepProcessor @ 0x1405F3464 (KeDeepSleepProcessor.c)
 *     KiFlushSingleTbWorker @ 0x1405FF3C0 (KiFlushSingleTbWorker.c)
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140BFE0B0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xB018u, __readgsdword(0xB018u) | 1);
}
