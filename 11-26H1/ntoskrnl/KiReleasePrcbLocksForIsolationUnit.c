/*
 * XREFs of KiReleasePrcbLocksForIsolationUnit @ 0x140237A80
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14021AB70 (KeQueryTotalCycleTimeThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiHandleDeferredPreemption @ 0x14022E730 (KiHandleDeferredPreemption.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x14022F5B4 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x1402351F0 (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 *     KiChooseTargetProcessor @ 0x140235760 (KiChooseTargetProcessor.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140237654 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1402404D0 (KiSearchForNewThreadsOnTarget.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     KeQueryValuesThread @ 0x1402BAA70 (KeQueryValuesThread.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403322B0 (KiAcquireThreadStateLockForWrite.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140332850 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     KiNormalPriorityReadyScan @ 0x1403BF1A4 (KiNormalPriorityReadyScan.c)
 *     KeTransitionProcessorParkState @ 0x14042C1D0 (KeTransitionProcessorParkState.c)
 *     KiUnparkCurrentProcessor @ 0x14042C4D0 (KiUnparkCurrentProcessor.c)
 *     KeSetSchedulingGroupRankBias @ 0x140444924 (KeSetSchedulingGroupRankBias.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140445624 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1404458E0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404D35B4 (KiAdjustUserIsolationDomainThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405EB014 (KiFinalizeCoreControlBlockAssignment.c)
 *     KeTryToFreezeThreadStack @ 0x1405EC060 (KeTryToFreezeThreadStack.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405F8980 (KiForceParkDutyCycleDpcCallback.c)
 *     KiStartForceParkSingleDutyCycleTimerCallback @ 0x1405F8B80 (KiStartForceParkSingleDutyCycleTimerCallback.c)
 *     KiStopForceParkSingleDutyCycleTimerCallback @ 0x1405F8C00 (KiStopForceParkSingleDutyCycleTimerCallback.c)
 *     KiTraceParkingRundown @ 0x1405F8C7C (KiTraceParkingRundown.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FD95C (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     KiCompleteKernelInit @ 0x140BF36A8 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReleasePrcbLocksForIsolationUnit(__int64 *a1)
{
  __int64 v1; // r9
  unsigned __int64 v2; // r10
  unsigned __int64 *v3; // r8
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+8h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = *a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v6 = v2;
  if ( (v1 & 1) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 36504);
    v3 = (unsigned __int64 *)(v4 + 8);
    LODWORD(v4) = *(unsigned __int8 *)v4;
    if ( !(_DWORD)v4 )
      goto LABEL_4;
  }
  else
  {
    v3 = &v6;
    LODWORD(v4) = 1;
  }
  do
  {
    v4 = (unsigned int)(v4 - 1);
    _InterlockedAnd64((volatile signed __int64 *)(v3[v4] + 48), 0LL);
  }
  while ( (_DWORD)v4 );
LABEL_4:
  result = 0LL;
  *a1 = 0LL;
  return result;
}
