/*
 * XREFs of KiProcessDeferredReadyList @ 0x14037C920
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KeRemoveQueueEx @ 0x140220B60 (KeRemoveQueueEx.c)
 *     KeWaitForAlertByThreadId @ 0x140222460 (KeWaitForAlertByThreadId.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14022A460 (KiSoftParkElectionDpcRoutine.c)
 *     KeAdjustPriorityFloor @ 0x140237DCC (KeAdjustPriorityFloor.c)
 *     KiVpBackingThreadYieldExecution @ 0x1402385C4 (KiVpBackingThreadYieldExecution.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     KiSetLegacyAffinityThread @ 0x14025A52C (KiSetLegacyAffinityThread.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272FF0 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x140274C5C (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KiParkCurrentProcessor @ 0x1403346DC (KiParkCurrentProcessor.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14037BA20 (HalpTimerStallExecutionProcessor.c)
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     KeSetThreadSchedulerAssist @ 0x1403BFAB8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1403BFD40 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiBeginThreadWait @ 0x1403C2810 (KiBeginThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x1403E806C (KeCpuSetReportParkedProcessors.c)
 *     KeSetUserGroupAffinityThread @ 0x1403E87F4 (KeSetUserGroupAffinityThread.c)
 *     KeRemovePriQueue @ 0x1403F5D50 (KeRemovePriQueue.c)
 *     KeSetUserAffinityThread @ 0x1403F7154 (KeSetUserAffinityThread.c)
 *     ?KiAbThreadUnboostCpuPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140434360 (-KiAbThreadUnboostCpuPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x140444924 (KeSetSchedulingGroupRankBias.c)
 *     KeSetSelectedCpuSetsThread @ 0x140462DA0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetDisableBoostProcess @ 0x1404A3C18 (KeSetDisableBoostProcess.c)
 *     KeSetDisableBoostThread @ 0x1404A3D1C (KeSetDisableBoostThread.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1404D3380 (KeEnableCoreIsolationMitigationPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404F9024 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     ?KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z @ 0x140504AAC (-KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140507754 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14050BCE4 (KeSetAffinityProcess.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14050FB94 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140525C20 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetBasePriorityThread @ 0x140528B30 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052C560 (KeBoostPriorityThread.c)
 *     KeSetCpuSetsProcess @ 0x14052D934 (KeSetCpuSetsProcess.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405EB014 (KiFinalizeCoreControlBlockAssignment.c)
 *     KeSetCpuSetWorkloadClassThread @ 0x1405F3EB8 (KeSetCpuSetWorkloadClassThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405F8980 (KiForceParkDutyCycleDpcCallback.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1405FD774 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403C9B60 (KiSendSoftwareInterruptAffinity.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall KiProcessDeferredReadyList(struct _KPRCB *a1, struct _SINGLE_LIST_ENTRY *a2, __int64 a3, __int64 a4)
{
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned __int8 v5; // r15
  char v8; // bp
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rdi
  unsigned __int8 TargetType; // al
  unsigned int v11; // edx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 Level; // r8
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int SingleTargetIndex; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+2Ch] [rbp-2Ch]

  Next = a2->Next;
  v5 = a3;
  v8 = 0;
  if ( a2->Next )
  {
    a2->Next = Next->Next;
    do
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], a2, 0LL);
      Next = a2->Next;
      ++v8;
      if ( a2->Next )
        a2->Next = Next->Next;
      p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
      if ( (v8 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
    }
    while ( Next );
  }
  else
  {
    p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
  }
  TargetType = p_DeferredDispatchInterrupts->TargetType;
  if ( TargetType )
  {
    if ( TargetType == 1 )
    {
      v11 = 31;
      CurrentPrcb = KeGetCurrentPrcb();
      Level = p_DeferredDispatchInterrupts->Level;
      SingleTargetIndex = p_DeferredDispatchInterrupts->SingleTargetIndex;
      v15 = 6LL;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v17 = 0LL;
      if ( Level != 1 )
        v11 = 47;
      HalpInterruptSendIpi((unsigned int *)&v15, v11);
    }
    else
    {
      KiSendSoftwareInterruptAffinity(
        &p_DeferredDispatchInterrupts->MultipleTargetAffinity,
        p_DeferredDispatchInterrupts->Level);
    }
    if ( p_DeferredDispatchInterrupts->TargetType == 2 )
    {
      *(_QWORD *)&p_DeferredDispatchInterrupts->MultipleTargetAffinity.Count = 2097153LL;
      memset_0(
        &p_DeferredDispatchInterrupts->MultipleTargetAffinity.8,
        0,
        sizeof(p_DeferredDispatchInterrupts->MultipleTargetAffinity.8));
    }
    p_DeferredDispatchInterrupts->TargetType = 0;
    p_DeferredDispatchInterrupts->SingleTargetIndex = 0xFFFF;
  }
  return KiCheckForThreadDispatch(a1, v5, a3, a4);
}
