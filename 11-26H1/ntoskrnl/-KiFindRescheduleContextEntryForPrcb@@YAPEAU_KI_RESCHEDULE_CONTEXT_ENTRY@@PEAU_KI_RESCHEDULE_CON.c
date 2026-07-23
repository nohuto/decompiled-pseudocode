/*
 * XREFs of ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930
 * Callers:
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiAdjustRescheduleContextForParking @ 0x1403375CC (KiAdjustRescheduleContextForParking.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405FDD3C (KiAdjustRescheduleContextForIsolationWidthChange.c)
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
