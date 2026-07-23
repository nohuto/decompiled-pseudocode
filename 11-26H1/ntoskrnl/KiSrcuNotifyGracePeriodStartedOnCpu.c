/*
 * XREFs of KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405F801C
 * Callers:
 *     KiSrcuProcessorInitialize @ 0x14052FBD8 (KiSrcuProcessorInitialize.c)
 *     KiSrcuNotifyWorkerDpcRoutine @ 0x1405F80C0 (KiSrcuNotifyWorkerDpcRoutine.c)
 * Callees:
 *     KiSrcuCheckQuiescent @ 0x14045B730 (KiSrcuCheckQuiescent.c)
 *     KiSrcuQueueGracePeriodReport @ 0x1405F8300 (KiSrcuQueueGracePeriodReport.c)
 */

void __fastcall KiSrcuNotifyGracePeriodStartedOnCpu(__int64 a1, __int64 a2)
{
  if ( (unsigned int)KiSrcuQueueGracePeriodReport(
                       *(_QWORD *)(a1 + 32) + ((unsigned __int64)*(unsigned int *)(a2 + 36) << 6),
                       a2) )
    KiSrcuCheckQuiescent(a2);
}
