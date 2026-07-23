/*
 * XREFs of KiProcessDeferredReadyList @ 0x14037E6D0
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14022BDF0 (KiSoftParkElectionDpcRoutine.c)
 *     KeAdjustPriorityFloor @ 0x14023972C (KeAdjustPriorityFloor.c)
 *     KiVpBackingThreadYieldExecution @ 0x140239F24 (KiVpBackingThreadYieldExecution.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KiSetLegacyAffinityThread @ 0x14025BD0C (KiSetLegacyAffinityThread.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F4F4C (KeCpuSetReportParkedProcessors.c)
 *     KeSetUserGroupAffinityThread @ 0x1402F56D4 (KeSetUserGroupAffinityThread.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14037D7D0 (HalpTimerStallExecutionProcessor.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1403C9C40 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiBeginThreadWait @ 0x1403CC710 (KiBeginThreadWait.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 *     ?KiAbThreadUnboostCpuPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140429430 (-KiAbThreadUnboostCpuPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x14043D434 (KeSetSchedulingGroupRankBias.c)
 *     KeSetSelectedCpuSetsThread @ 0x14045BD60 (KeSetSelectedCpuSetsThread.c)
 *     KeSetDisableBoostProcess @ 0x14049D728 (KeSetDisableBoostProcess.c)
 *     KeSetDisableBoostThread @ 0x14049D82C (KeSetDisableBoostThread.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1404CCBF0 (KeEnableCoreIsolationMitigationPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404F2634 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     ?KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z @ 0x1404FE3F0 (-KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140501124 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140509604 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140528290 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052EA80 (KeBoostPriorityThread.c)
 *     KeSetCpuSetsProcess @ 0x14052FE54 (KeSetCpuSetsProcess.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405ED984 (KiFinalizeCoreControlBlockAssignment.c)
 *     KeSetCpuSetWorkloadClassThread @ 0x1405F6878 (KeSetCpuSetWorkloadClassThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405FB3A0 (KiForceParkDutyCycleDpcCallback.c)
 *     ?KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1406001C4 (-KiAbForceProcessLockEntry@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403D3A10 (KiSendSoftwareInterruptAffinity.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
