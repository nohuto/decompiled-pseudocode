/*
 * XREFs of KiIsThreadConstrainedBySchedulingGroup @ 0x14022FA40
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiHandleDeferredPreemption @ 0x14022E730 (KiHandleDeferredPreemption.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402BC410 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140332850 (KiGroupSchedulingQuantumEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140333BD0 (KiTransitionSchedulingGroupGeneration.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140445DC0 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadConstrainedBySchedulingGroup(__int64 a1)
{
  return *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x200) == 0;
}
