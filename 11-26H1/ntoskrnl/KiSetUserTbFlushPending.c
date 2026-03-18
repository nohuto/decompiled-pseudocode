/*
 * XREFs of KiSetUserTbFlushPending @ 0x1407284C0
 * Callers:
 *     MiIssueFlushTbEntire @ 0x140250040 (MiIssueFlushTbEntire.c)
 *     KeFlushTb @ 0x1402507D0 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x14025128C (KxFlushEntireTb.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     KiFlushRangeWorker @ 0x14032AFA0 (KiFlushRangeWorker.c)
 *     KiIpiProcessRequest @ 0x14032C2E0 (KiIpiProcessRequest.c)
 *     KiFlushRangeTb @ 0x14041D770 (KiFlushRangeTb.c)
 *     KiFlushCurrentTbOnly @ 0x140470540 (KiFlushCurrentTbOnly.c)
 *     KeDeepSleepProcessor @ 0x1405F0AF4 (KeDeepSleepProcessor.c)
 *     KiFlushSingleTbWorker @ 0x1405FC970 (KiFlushSingleTbWorker.c)
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 *     KeWriteProtectPAT @ 0x140BF80B0 (KeWriteProtectPAT.c)
 * Callees:
 *     <none>
 */

void KiSetUserTbFlushPending()
{
  __writegsdword(0xB018u, __readgsdword(0xB018u) | 1);
}
