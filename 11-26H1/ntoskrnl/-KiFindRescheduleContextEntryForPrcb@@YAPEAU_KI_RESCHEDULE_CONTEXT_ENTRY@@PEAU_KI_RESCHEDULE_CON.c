/*
 * XREFs of ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140336900
 * Callers:
 *     KiHandleDeferredPreemption @ 0x14022E730 (KiHandleDeferredPreemption.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140237654 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140332850 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiAdjustRescheduleContextForParking @ 0x14033559C (KiAdjustRescheduleContextForParking.c)
 *     KiApplyForegroundBoostThread @ 0x140521D48 (KiApplyForegroundBoostThread.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405FB2E0 (KiAdjustRescheduleContextForIsolationWidthChange.c)
 * Callees:
 *     <none>
 */

struct _KI_RESCHEDULE_CONTEXT_ENTRY *__fastcall KiFindRescheduleContextEntryForPrcb(
        struct _KI_RESCHEDULE_CONTEXT *a1,
        struct _KPRCB *a2)
{
  __int64 i; // rax

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a1->ProcessorCount )
      return 0LL;
    if ( a1->ProcessorEntries[i].Prcb == a2 )
      break;
  }
  return &a1->ProcessorEntries[i];
}
