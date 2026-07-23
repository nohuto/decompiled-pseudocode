/*
 * XREFs of KiIsPrcbThread @ 0x1403078D0
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x14022FC30 (KiScheduleThreadToRescheduleContext.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405FDD3C (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405FDFAC (KiAdjustRescheduleContextForProcessorAddition.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsPrcbThread(__int64 a1)
{
  return a1 && *(_UNKNOWN **)(a1 + 544) == &unk_140FC9F40;
}
