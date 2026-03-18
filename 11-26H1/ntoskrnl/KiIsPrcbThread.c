/*
 * XREFs of KiIsPrcbThread @ 0x1402BCC10
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x14022B800 (KiAttemptToStealStandbyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022CBE0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x14022E2A0 (KiScheduleThreadToRescheduleContext.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14023F140 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405FB2E0 (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405FB550 (KiAdjustRescheduleContextForProcessorAddition.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsPrcbThread(__int64 a1)
{
  return a1 && *(_UNKNOWN **)(a1 + 544) == &unk_140FC8F40;
}
