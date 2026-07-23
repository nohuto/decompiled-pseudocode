/*
 * XREFs of KiReadyDeferredReadyList @ 0x140331960
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x140203854 (KiSetThreadSchedulingGroup.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402398D4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     ?KiAbpDeferredProcessingWorker@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x14026FB90 (-KiAbpDeferredProcessingWorker@LegacyAutoBoost@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272560 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     ?KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z @ 0x1402741CC (-KiAbpConvertWaiterToOwner@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@K@Z.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     PspRevertContainerImpersonation @ 0x14037F6B0 (PspRevertContainerImpersonation.c)
 *     KiProcessPendingForegroundBoosts @ 0x1404F7DD0 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403D3A10 (KiSendSoftwareInterruptAffinity.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiReadyDeferredReadyList(struct _KPRCB *a1, struct _SINGLE_LIST_ENTRY *a2)
{
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  char v5; // bp
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rdi
  __int64 result; // rax
  unsigned int v8; // edx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 Level; // r8
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned int SingleTargetIndex; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+2Ch] [rbp-2Ch]

  Next = a2->Next;
  v5 = 0;
  if ( a2->Next )
  {
    a2->Next = Next->Next;
    do
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], a2, 0LL);
      Next = a2->Next;
      ++v5;
      if ( a2->Next )
        a2->Next = Next->Next;
      p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
      if ( (v5 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
    }
    while ( Next );
  }
  else
  {
    p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
  }
  result = p_DeferredDispatchInterrupts->TargetType;
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 1 )
    {
      v8 = 31;
      CurrentPrcb = KeGetCurrentPrcb();
      Level = p_DeferredDispatchInterrupts->Level;
      SingleTargetIndex = p_DeferredDispatchInterrupts->SingleTargetIndex;
      v11 = 6LL;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v13 = 0LL;
      if ( Level != 1 )
        v8 = 47;
      result = HalpInterruptSendIpi((unsigned int *)&v11, v8);
    }
    else
    {
      result = KiSendSoftwareInterruptAffinity(
                 &p_DeferredDispatchInterrupts->MultipleTargetAffinity,
                 p_DeferredDispatchInterrupts->Level);
    }
    if ( p_DeferredDispatchInterrupts->TargetType == 2 )
    {
      *(_QWORD *)&p_DeferredDispatchInterrupts->MultipleTargetAffinity.Count = 2097153LL;
      result = (__int64)memset_0(
                          &p_DeferredDispatchInterrupts->MultipleTargetAffinity.8,
                          0,
                          sizeof(p_DeferredDispatchInterrupts->MultipleTargetAffinity.8));
    }
    p_DeferredDispatchInterrupts->TargetType = 0;
    p_DeferredDispatchInterrupts->SingleTargetIndex = 0xFFFF;
  }
  return result;
}
