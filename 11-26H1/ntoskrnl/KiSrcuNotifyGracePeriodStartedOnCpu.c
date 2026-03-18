/*
 * XREFs of KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405F565C
 * Callers:
 *     KiSrcuProcessorInitialize @ 0x14052D6B8 (KiSrcuProcessorInitialize.c)
 *     KiSrcuNotifyWorkerDpcRoutine @ 0x1405F5700 (KiSrcuNotifyWorkerDpcRoutine.c)
 * Callees:
 *     KiSrcuCheckQuiescent @ 0x140462770 (KiSrcuCheckQuiescent.c)
 *     KiSrcuQueueGracePeriodReport @ 0x1405F5940 (KiSrcuQueueGracePeriodReport.c)
 */

void __fastcall KiSrcuNotifyGracePeriodStartedOnCpu(__int64 a1, __int64 a2)
{
  if ( (unsigned int)KiSrcuQueueGracePeriodReport(
                       *(_QWORD *)(a1 + 32) + ((unsigned __int64)*(unsigned int *)(a2 + 36) << 6),
                       a2) )
    KiSrcuCheckQuiescent(a2);
}
