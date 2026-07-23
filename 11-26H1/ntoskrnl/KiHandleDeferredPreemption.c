/*
 * XREFs of KiHandleDeferredPreemption @ 0x1402300C0
 * Callers:
 *     KiSchedulerApc @ 0x14049B710 (KiSchedulerApc.c)
 * Callees:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x14022F870 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KzReleaseAdditionalPrcbLocks @ 0x140231040 (KzReleaseAdditionalPrcbLocks.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140231EC0 (KiCheckForMaxOverQuotaScb.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140312BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140411870 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSwapContext @ 0x140734AA0 (KiSwapContext.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiHandleDeferredPreemption(AutoBoost *this)
{
  AutoBoost *v1; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int8 *v11; // r10
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int8 *v14; // rax
  _KTHREAD *NextThread; // rdi
  unsigned __int8 *v16; // rax
  int v17; // edx
  unsigned __int64 *v18; // r8
  __int64 v19; // rdx
  __int64 result; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KTHREAD *v22; // rdx
  struct _KTHREAD *v23; // rdx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v24; // r11
  char v25; // r10
  unsigned int i; // r10d
  char v27; // bl
  __int64 v28; // rdx
  char v29; // r11
  unsigned int j; // r14d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v31; // rcx
  unsigned __int64 v32; // [rsp+70h] [rbp+40h] BYREF
  __int64 v33; // [rsp+78h] [rbp+48h] BYREF
  unsigned __int64 v34; // [rsp+80h] [rbp+50h] BYREF

  v1 = this;
  v33 = 0LL;
  v32 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(this) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(this, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _interlockedbittestandreset((volatile signed __int32 *)v1 + 30, 0xAu);
  KiAbProcessPreContextSwitch(v1);
  KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 1LL, &v32);
  if ( !CurrentPrcb->NextThread )
  {
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext(StaticRescheduleContext, &v32, 0LL);
    if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(v1, v7, v8) )
    {
      v9 = *((_QWORD *)v1 + 13);
      if ( v9 )
      {
        if ( v9 + CurrentPrcb->ScbOffset )
        {
          if ( (unsigned __int8)KiCheckForMaxOverQuotaScb() )
          {
            RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, CurrentPrcb);
            KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v22, 0, 1u);
            if ( (v25 & 1) != 0 )
            {
              for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
              {
                v31 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i);
                if ( v31 != v24 )
                  KiAdjustRescheduleContextEntryForThreadRemoval(v31, v23, 0, 1u);
              }
              StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
            }
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v33);
    if ( (unsigned __int8)KiCommitRescheduleContext(StaticRescheduleContext, CurrentPrcb, 0LL, &v33) || v33 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v32);
      if ( v29 )
      {
        for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * j + 8 * j),
            CurrentPrcb,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts, v28);
      }
      if ( v33 )
        KiReadyDeferredReadyList(CurrentPrcb, &v33);
      KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 0LL, &v32);
    }
  }
  v10 = v32;
  v11 = 0LL;
  v12 = v32 & 0xFFFFFFFFFFFFFFFEuLL;
  v13 = 0LL;
  v34 = v32 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v32 & 1) != 0 )
  {
    if ( (v32 & 1) == 1 )
    {
      v14 = *(unsigned __int8 **)(v12 + 36504);
      v13 = *v14;
      v11 = v14 + 8;
    }
    KzReleaseAdditionalPrcbLocks(v11, v13, &v34, 1LL);
    v10 = v12;
    v32 = v12;
  }
  NextThread = CurrentPrcb->NextThread;
  if ( NextThread )
  {
    CurrentPrcb->NextThread = 0LL;
    KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)v1, v4, v5);
    KiUpdatePriorityMatrixForRunningTransition(CurrentPrcb, NextThread);
    if ( NextThread != CurrentPrcb->IdleThread && (CurrentPrcb->IdleState & 1) == 0 )
      __fastfail(0x21u);
    *((_BYTE *)v1 + 643) = 38;
    *((_BYTE *)v1 + 390) = 0;
    KiQueueReadyThread(CurrentPrcb, (unsigned __int64)&v32, (__int64)v1, 0);
    v27 = KiSwapContext(v1, NextThread, 0LL);
    KiAbProcessPostContextSwitch(v1);
    if ( v27 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v19) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
      }
      __writecr8(1uLL);
      *((_DWORD *)v1 + 29) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
  }
  else
  {
    v32 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v10 & 1) == 0 )
    {
      v18 = &v32;
      v17 = 1;
      goto LABEL_19;
    }
    v16 = *(unsigned __int8 **)((v10 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
    v17 = *v16;
    v18 = (unsigned __int64 *)(v16 + 8);
    while ( v17 )
LABEL_19:
      _InterlockedAnd64((volatile signed __int64 *)(v18[--v17] + 48), 0LL);
    KiAbProcessPostContextSwitch(v1);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v19) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
