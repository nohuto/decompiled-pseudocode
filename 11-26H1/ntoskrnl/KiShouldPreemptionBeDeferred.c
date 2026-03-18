/*
 * XREFs of KiShouldPreemptionBeDeferred @ 0x140230510
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022CBE0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x14022F880 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402BC410 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140332850 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiShouldPreemptionBeDeferred(__int64 a1)
{
  return *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1;
}
