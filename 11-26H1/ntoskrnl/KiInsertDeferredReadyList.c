/*
 * XREFs of KiInsertDeferredReadyList @ 0x1402BCC40
 * Callers:
 *     ?KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140203FD4 (-KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiAttemptToStealStandbyThread @ 0x14022B800 (KiAttemptToStealStandbyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022CBE0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x14022E2A0 (KiScheduleThreadToRescheduleContext.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     ?KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140238460 (-KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14023F140 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiFlushReadyLists @ 0x140334D4C (KiFlushReadyLists.c)
 *     KiNormalPriorityReadyScan @ 0x1403BF1A4 (KiNormalPriorityReadyScan.c)
 *     KiScanSharedReadyThreads @ 0x1403BF4BC (KiScanSharedReadyThreads.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140445DC0 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405FB2E0 (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405FB550 (KiAdjustRescheduleContextForProcessorAddition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInsertDeferredReadyList(__int64 *a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r8
  __int64 *v4; // rdx
  __int64 result; // rax

  v2 = *(_BYTE *)(a2 + 388);
  if ( v2 == 1 )
  {
    *(_DWORD *)(a2 + 116) |= 2u;
  }
  else if ( v2 == 5 )
  {
    v3 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436));
    if ( *(_BYTE *)(a2 + 391) )
      *(_QWORD *)(a2 + 1000) += v3;
    else
      *(_QWORD *)(a2 + 992) += v3;
  }
  *(_BYTE *)(a2 + 388) = 7;
  v4 = (__int64 *)(a2 + 216);
  result = *a1;
  *v4 = *a1;
  *a1 = (__int64)v4;
  return result;
}
