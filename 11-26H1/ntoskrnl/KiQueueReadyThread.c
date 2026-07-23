/*
 * XREFs of KiQueueReadyThread @ 0x140224FE0
 * Callers:
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 * Callees:
 *     EtwTraceReadyQueueInsertion @ 0x1402260FC (EtwTraceReadyQueueInsertion.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402261D0 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiEnterDeferredReadyState @ 0x140230060 (KiEnterDeferredReadyState.c)
 *     KiIsThreadExemptFromForcePark @ 0x14023137C (KiIsThreadExemptFromForcePark.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiShouldPreemptionBeDeferred @ 0x140231EA0 (KiShouldPreemptionBeDeferred.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiQueryQuantumReset @ 0x14023B390 (KiQueryQuantumReset.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140308BF0 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KiCheckPrcbAffinityEx @ 0x140308C80 (KiCheckPrcbAffinityEx.c)
 *     KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x140309DBC (KiUpdateLocalReadyQueueStatisticsOnInsertion.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x140337FA0 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z @ 0x1403388C0 (-KiChargeSchedulingGroupCycleTime@@YAEPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@@Z.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140420700 (KeInterlockedSetProcessorAffinityEx.c)
 *     ?KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14043E7DC (-KiCheckForEffectivePriorityChange@@YAXPEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@.c)
 *     KiCheckThreadAffinity @ 0x14045C320 (KiCheckThreadAffinity.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1404607C0 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     KiComputeNewPriority @ 0x140486450 (KiComputeNewPriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14048D9C4 (KiTryScheduleNextForegroundBoost.c)
 *     KiAddThreadToScbQueue @ 0x1404A57FC (KiAddThreadToScbQueue.c)
 *     KiSetClockTimerDeadlineNoWake @ 0x1404E0500 (KiSetClockTimerDeadlineNoWake.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiArmForceParkDutyCyclingForSharedReadyQueue @ 0x14052B5F8 (KiArmForceParkDutyCyclingForSharedReadyQueue.c)
 *     EtwTraceScbRankChange @ 0x1406C897C (EtwTraceScbRankChange.c)
 */

_KTHREAD *__fastcall KiQueueReadyThread(struct _KPRCB *a1, unsigned __int64 a2, __int64 RunningSummary, int a4)
{
  unsigned __int64 v4; // rbx
  int v5; // r13d
  char v6; // r14
  _QWORD *v7; // r15
  struct _KPRCB *v8; // rsi
  struct _KSCHEDULING_GROUP *v9; // rdi
  struct _KSCB *v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 Group; // rax
  unsigned int v16; // r12d
  bool v17; // zf
  char v18; // r14
  struct _KPRCB *v19; // rdx
  int v20; // esi
  unsigned __int8 v21; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // r10d
  unsigned __int64 SharedReadyQueueMask; // rdx
  _WORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rax
  __int64 Span; // r9
  char v33; // cl
  int v34; // ecx
  _KTHREAD *NextThread; // rsi
  __int64 v36; // rcx
  unsigned __int64 v37; // r9
  _BYTE *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 *v40; // r8
  struct _SINGLE_LIST_ENTRY *v41; // r12
  struct _KPRCB *v42; // r12
  __int64 v43; // rdx
  _QWORD *v44; // rbx
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rdi
  _KTHREAD *result; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  struct _KSCB *v50; // rdx
  _BYTE *SchedulerAssist; // rax
  char v52; // bl
  __int64 v53; // rsi
  struct _KPRCB *v54; // r8
  unsigned __int64 v55; // rdx
  _WORD *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  _KSHARED_READY_QUEUE *v59; // rbx
  _LIST_ENTRY *v60; // rdi
  struct _LIST_ENTRY *v61; // rcx
  struct _LIST_ENTRY *v62; // rax
  char v63; // r10
  __int64 v64; // rdx
  unsigned __int64 v65; // r9
  _QWORD **v66; // r8
  unsigned __int64 v67; // rax
  _KTHREAD *v68; // rdi
  struct _LIST_ENTRY *v69; // rax
  int v70; // eax
  __int64 v71; // r9
  __int64 v72; // r10
  int v73; // r11d
  struct _KSCB *v74; // rcx
  int v75; // esi
  struct _SINGLE_LIST_ENTRY *p_TracingListEntry; // r13
  __int64 PrcbLockFlags; // rdx
  unsigned int Rank; // r12d
  __int16 v79; // r15
  char v80; // al
  unsigned __int16 v81; // ax
  char IsThreadConstrainedBySchedulingGroup; // al
  unsigned __int8 v83; // al
  int v84; // edi
  int v85; // edx
  unsigned __int64 v86; // rcx
  unsigned __int64 LongTermCycles; // rax
  __int64 RelativeWeight; // r8
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  unsigned int v91; // ecx
  volatile signed __int32 *ShareRank; // rax
  struct _LIST_ENTRY *v93; // rcx
  _LIST_ENTRY *v94; // rax
  struct _LIST_ENTRY *Blink; // rdx
  volatile unsigned int v96; // eax
  int v97; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v99; // rax
  unsigned int v100; // ecx
  unsigned int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rax
  _WORD *v104; // rcx
  __int64 v105; // rcx
  unsigned int v106; // edi
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  __int64 v111; // rdx
  char v112; // al
  __int64 v113; // r8
  int v114; // edx
  char v115; // r9
  int v116; // r8d
  unsigned __int8 CurrentIrql; // di
  struct _SINGLE_LIST_ENTRY *v118; // rbx
  struct _SINGLE_LIST_ENTRY *v119; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rax
  char v121; // [rsp+30h] [rbp-39h]
  unsigned __int64 v122; // [rsp+38h] [rbp-31h] BYREF
  __int128 v123; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v124; // [rsp+50h] [rbp-19h]
  unsigned int v125; // [rsp+54h] [rbp-15h]
  struct _SINGLE_LIST_ENTRY *v126; // [rsp+58h] [rbp-11h]
  int v127; // [rsp+60h] [rbp-9h] BYREF
  __int128 v128; // [rsp+64h] [rbp-5h]
  __int64 *v130; // [rsp+D8h] [rbp+6Fh]
  _QWORD *v131; // [rsp+E0h] [rbp+77h] BYREF
  int v132; // [rsp+E8h] [rbp+7Fh]

  v132 = a4;
  v131 = (_QWORD *)RunningSummary;
  v130 = (__int64 *)a2;
  v4 = *(_QWORD *)(RunningSummary + 72);
  v5 = *(unsigned __int8 *)(RunningSummary + 565);
  LODWORD(v122) = v5;
  v6 = a4;
  v7 = (_QWORD *)RunningSummary;
  v8 = a1;
  v125 = -1;
  v124 = -1;
  v121 = 0;
  v126 = 0LL;
  if ( *(_QWORD *)(RunningSummary + 568) != KiCpuSetSequence && (*(_DWORD *)(RunningSummary + 116) & 8) == 0
    || v4 >= *(_QWORD *)(RunningSummary + 32) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(RunningSummary + 64), 0LL) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(RunningSummary + 120), 0xCu);
    }
    else
    {
      v125 = *(_DWORD *)(RunningSummary + 588);
      if ( v4 >= *(_QWORD *)(RunningSummary + 32) )
      {
        v84 = KiComputeNewPriority((struct _KTHREAD *)RunningSummary);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority((struct _KTHREAD *)v7) )
          KiUpdateThreadPriority(0, v85, (_DWORD)v7, v84, 0);
        v86 = v4 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v7);
        if ( (v7[15] & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)v7 + 30, 5u);
        v7[4] = v86;
        KiTryScheduleNextForegroundBoost(v7);
        v5 = 0;
        LODWORD(v122) = 0;
      }
      if ( !(unsigned int)KiCheckThreadAffinity(v7) && (unsigned int)KiComputeThreadAffinity() )
      {
        if ( !(unsigned __int8)KiCheckPrcbAffinityEx(v7[72], v8, RunningSummary) )
          _interlockedbittestandset((volatile signed __int32 *)v7 + 30, 0xCu);
        if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        {
          v124 = *((_DWORD *)v7 + 147);
          v7[8] = 0LL;
          v121 = 1;
          goto LABEL_3;
        }
        v121 = 0;
      }
      v124 = *((_DWORD *)v7 + 147);
      v7[8] = 0LL;
    }
  }
LABEL_3:
  v9 = (struct _KSCHEDULING_GROUP *)v7[13];
  if ( v9 )
  {
    v10 = (struct _KSCB *)((char *)v9 + v8->ScbOffset);
    if ( v10 )
    {
      v75 = 0;
      p_TracingListEntry = 0LL;
      while ( 1 )
      {
        PrcbLockFlags = v10->PrcbLockFlags;
        Rank = v10->Rank;
        v79 = v10->PrcbLockFlags & 2;
        if ( (PrcbLockFlags & 4) != 0 )
        {
          if ( KiCheckMaxOverQuotaTransition(v10, v9) )
          {
            if ( (*(_BYTE *)&v10->0 & 1) != 0 )
              KiRemoveSchedulingGroupQueue(a1, v10, 1u);
          }
          else if ( v10->GenerationCycles >= v10->RankCycleTarget && (*(_BYTE *)&v10->0 & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v9, v10, a1);
          }
        }
        else
        {
          LOBYTE(RunningSummary) = 0;
          if ( (PrcbLockFlags & 0x12) == 0 )
          {
            v83 = KiChargeSchedulingGroupCycleTime(v9, v10);
            PrcbLockFlags = v10->PrcbLockFlags;
            LOBYTE(RunningSummary) = v83 != 0;
            if ( (PrcbLockFlags & 0x80u) == 0LL || v10->GenerationCycles <= v10->MaxQuotaCycleTarget )
            {
              if ( v83 )
              {
                LOWORD(PrcbLockFlags) = PrcbLockFlags | 2;
                v10->PrcbLockFlags = PrcbLockFlags;
              }
            }
            else
            {
              LOWORD(PrcbLockFlags) = PrcbLockFlags | 2;
              LOBYTE(RunningSummary) = 1;
              v10->PrcbLockFlags = PrcbLockFlags;
            }
          }
          if ( (PrcbLockFlags & 0x24) != 0 || v10->GenerationCycles < v10->MinQuotaCycleTarget )
          {
            v80 = 0;
          }
          else
          {
            LOWORD(PrcbLockFlags) = PrcbLockFlags | 4;
            v80 = 1;
            v10->PrcbLockFlags = PrcbLockFlags;
          }
          if ( (PrcbLockFlags & 0x20) == 0 && v80 || (PrcbLockFlags & 0x10) == 0 && (_BYTE)RunningSummary )
          {
            LongTermCycles = v10->LongTermCycles;
            v10->PrcbLockFlags = PrcbLockFlags | 4;
            RelativeWeight = v9->RelativeWeight;
            v89 = (unsigned __int64)(KiCycleDivisorLongTerm * RelativeWeight) >> 7;
            v90 = LongTermCycles % v89;
            v91 = LongTermCycles / v89 + 1;
            ShareRank = (volatile signed __int32 *)v10->ShareRank;
            v10->Rank = v91;
            if ( ShareRank )
              _InterlockedAdd(ShareRank, v91);
            v10->RankCycleTarget = v10->MinQuotaCycleTarget
                                 + ((unsigned __int64)(KiCycleDivisorShortTerm * RelativeWeight) >> 7);
            KiCheckForEffectivePriorityChange(a1, (union _KISOLATION_UNIT_LOCK_HANDLE *)v90, v10);
          }
          v81 = v10->PrcbLockFlags;
          if ( (v81 & 1) != 0 )
          {
            if ( (v81 & 2) != 0 )
              KiRemoveSchedulingGroupQueue(a1, v10, 1u);
            else
              KiResortScbQueue(a1, v10, 1u);
          }
          if ( (*(_BYTE *)&v10->0 & 4) != 0 && !a1->GroupSchedulingOverQuota )
          {
            KeInterlockedSetProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, a1->Number, RunningSummary);
            v17 = KiClockTimerPerCpuTickScheduling == 0;
            a1->GroupSchedulingOverQuota = 1;
            if ( !v17 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != 15 )
                __writecr8(0xFuLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(PrcbLockFlags) = 15;
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, PrcbLockFlags);
              }
              KiSetClockTimerDeadlineNoWake(a1);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
            }
          }
        }
        if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0
          && (Rank != v10->Rank || (v79 != 0) != ((v10->PrcbLockFlags >> 1) & 1)) )
        {
          v10->PrcbLockFlags |= 0x100u;
          v10->TracingListEntry.Next = p_TracingListEntry;
          p_TracingListEntry = &v10->TracingListEntry;
        }
        v75 += v10->Rank;
        v10 = v10->Parent;
        if ( !v10 )
          break;
        v9 = (struct _KSCHEDULING_GROUP *)((char *)v10 - a1->ScbOffset);
      }
      v7 = v131;
      v126 = p_TracingListEntry;
      IsThreadConstrainedBySchedulingGroup = KiIsThreadConstrainedBySchedulingGroup(v131, PrcbLockFlags, RunningSummary);
      v6 = v132;
      v5 = v122;
      if ( IsThreadConstrainedBySchedulingGroup
        && (unsigned __int8)((__int64 (*)(void))KiShouldPreemptionBeDeferred)()
        && v75 )
      {
        v8 = a1;
        if ( (v7[15] & 0xC00) == 0 )
          _interlockedbittestandset((volatile signed __int32 *)v7 + 30, 0xBu);
      }
      else
      {
        v8 = a1;
      }
    }
  }
  v11 = 0LL;
  if ( *((char *)v7 + 195) >= KiRebalanceMinPriority || (v8->IdleState & 0x10) != 0 )
  {
    v12 = v7[13];
    if ( v12 && (v13 = v12 + v8->ScbOffset) != 0 )
    {
      while ( (*(_BYTE *)(v13 + 128) & 2) == 0 )
      {
        v13 = *(_QWORD *)(v13 + 440);
        if ( !v13 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v14 = (_WORD *)v7[72];
      Group = v8->Group;
      if ( (unsigned __int16)Group >= *v14 )
        a2 = 0LL;
      else
        a2 = *(_QWORD *)&v14[4 * Group + 4];
      v11 = a2 & v8->SchedulerSubNode->IdleNonParkedCpuSet;
    }
  }
  v16 = 2;
  v17 = (v6 & 1) == 0;
  v18 = 1;
  if ( (_bittest(&KiVelocityFlags, 0x16u) & v17) != 0 )
  {
    if ( *((char *)v7 + 195) >= 16 || !v7[13] )
      goto LABEL_31;
    v19 = a1;
    v20 = 0;
    if ( a1 )
    {
      v21 = 2;
      CurrentPrcb = a1;
    }
    else
    {
      v21 = KeGetCurrentIrql();
      if ( v21 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        KiRaiseIrqlProcessIrqlFlags(v21, 2LL);
        v19 = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
    }
    v23 = v7[13];
    if ( v23 )
    {
      v24 = v23 + CurrentPrcb->ScbOffset;
      if ( v24 )
      {
        if ( v19 )
        {
          if ( *((char *)v7 + 195) < 16 && (v7[15] & 0x200) == 0 )
          {
            v25 = v24;
            do
            {
              if ( (*(_BYTE *)(v25 + 128) & 2) != 0 )
              {
                v20 = -1;
                goto LABEL_26;
              }
              v25 = *(_QWORD *)(v25 + 440);
            }
            while ( v25 );
            do
            {
              v20 = *(_DWORD *)(v24 + 140);
              if ( v20 )
                break;
              v24 = *(_QWORD *)(v24 + 440);
            }
            while ( v24 );
          }
        }
        else
        {
          do
          {
            v20 = (*(unsigned __int16 *)(v24 + 128) >> 3) & 1;
            if ( v20 )
              break;
            v24 = *(_QWORD *)(v24 + 440);
          }
          while ( v24 );
        }
      }
    }
LABEL_26:
    if ( v21 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
      __writecr8(v21);
    }
    if ( v20 )
      v26 = 1;
    else
LABEL_31:
      v26 = *((char *)v7 + 195);
    v8 = a1;
    if ( (v7[15] & 0x2000) != 0
      && (SharedReadyQueueMask = a1->SharedReadyQueueMask) != 0
      && ((v28 = (_WORD *)v7[72], v29 = a1->Group, (unsigned __int16)v29 >= *v28)
        ? (v30 = 0LL)
        : (v30 = *(_QWORD *)&v28[4 * v29 + 4]),
          (SharedReadyQueueMask & v30) == SharedReadyQueueMask) )
    {
      SharedReadyQueue = a1->SharedReadyQueue;
      a2 = (unsigned int)v26;
      RunningSummary = (__int64)SharedReadyQueue->RunningSummary;
      if ( !SharedReadyQueue->Span )
        goto LABEL_44;
      Span = SharedReadyQueue->Span;
      do
      {
        v33 = *(_BYTE *)RunningSummary++;
        v34 = v33 & 0x7F;
        if ( v34 < (int)a2 )
          a2 = (unsigned int)v34;
        --Span;
      }
      while ( Span );
    }
    else
    {
      a2 = *(_BYTE *)&a1->PriorityState->0 & 0x7F;
    }
    if ( v26 > (int)a2 )
      _interlockedbittestandset((volatile signed __int32 *)v7 + 30, 0xCu);
  }
LABEL_44:
  if ( (v7[15] & 0x1000) != 0 || v11 )
  {
    NextThread = v8->NextThread;
    KiEnterDeferredReadyState(v7, a2, RunningSummary);
    v36 = *v130;
    v37 = *v130 & 0xFFFFFFFFFFFFFFFEuLL;
    v122 = v37;
    if ( (v36 & 1) != 0 )
    {
      v38 = *(_BYTE **)(v37 + 36504);
      LODWORD(v39) = (unsigned __int8)*v38;
      v40 = (unsigned __int64 *)(v38 + 8);
      if ( !*v38 )
        goto LABEL_49;
    }
    else
    {
      v40 = &v122;
      LODWORD(v39) = 1;
    }
    do
    {
      v39 = (unsigned int)(v39 - 1);
      _InterlockedAnd64((volatile signed __int64 *)(v40[v39] + 48), 0LL);
    }
    while ( (_DWORD)v39 );
LABEL_49:
    v41 = v126;
    *v130 = 0LL;
    if ( v41 )
    {
      v119 = v41;
      do
      {
        EtwTraceScbRankChange(
          (char *)&v119[-57] - a1->ScbOffset,
          a1->Number,
          HIDWORD(v119[-40].Next),
          ((__int64)v119[-41].Next & 2) != 0);
        v119 = v119->Next;
      }
      while ( v119 );
      LODWORD(v122) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v122);
        while ( a1->PrcbLock );
      }
      Next = v41->Next;
      v7 = v131;
      while ( 1 )
      {
        LOWORD(v41[-41].Next) &= ~0x100u;
        v41->Next = 0LL;
        v41 = Next;
        if ( !Next )
          break;
        Next = Next->Next;
      }
      v42 = a1;
      _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
    }
    else
    {
      v42 = a1;
    }
    _interlockedbittestandreset((volatile signed __int32 *)v7 + 30, 0xCu);
    *((_BYTE *)v7 + 565) = v5;
    v131 = 0LL;
    KiDeferredReadySingleThread(v42);
    if ( v131 )
    {
      v131 = (_QWORD *)*v131;
      do
      {
        KiDeferredReadySingleThread(v42);
        v44 = v131;
        ++v18;
        if ( v131 )
          v131 = (_QWORD *)*v131;
        p_DeferredDispatchInterrupts = &v42->DeferredDispatchInterrupts;
        if ( (v18 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&v42->DeferredDispatchInterrupts, v43);
      }
      while ( v44 );
    }
    else
    {
      p_DeferredDispatchInterrupts = &v42->DeferredDispatchInterrupts;
    }
    result = (_KTHREAD *)KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts, v43);
    if ( !NextThread )
    {
      result = v42->IdleThread;
      if ( v42->CurrentThread != result )
      {
        if ( v42->NextThread )
        {
          if ( v42->NestingLevel )
          {
            v42->InterruptRequest = 1;
          }
          else
          {
            v128 = 0LL;
            if ( (KiTrapFeatures & 0x10) != 0 )
            {
              v112 = HalpDisableInterrupts(v48, v47, KeGetCurrentPrcb());
              v114 = *(_DWORD *)(v113 + 168);
              v115 = v112;
              *(_DWORD *)(v113 + 168) = v114 | 4;
              if ( !v114 )
                __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
              if ( v115 )
                _enable();
            }
            v127 = 5;
            result = (_KTHREAD *)HalpInterruptSendIpi(&v127, 47LL);
          }
        }
      }
    }
    goto LABEL_95;
  }
  *((_BYTE *)v7 + 565) = 0;
  *((_DWORD *)v7 + 109) = MEMORY[0xFFFFF78000000320];
  v49 = v7[13];
  if ( v49 )
    v50 = (struct _KSCB *)(v49 + v8->ScbOffset);
  else
    v50 = 0LL;
  SchedulerAssist = v8->SchedulerAssist;
  if ( SchedulerAssist )
    SchedulerAssist[16] = 0;
  v52 = 0;
  *((_BYTE *)v7 + 388) = 1;
  if ( !v50 )
    goto LABEL_68;
  v70 = *((_DWORD *)v7 + 30);
  if ( (v70 & 0xC00) != 0 )
    goto LABEL_68;
  RunningSummary = 0LL;
  if ( *((char *)v7 + 195) < 16
    && (v70 & 0x200) == 0
    && !(unsigned __int8)KiShouldPreemptionBeDeferred(v7, v50, 0LL, v50) )
  {
    v74 = v50;
    do
    {
      if ( (*(_BYTE *)&v74->0 & 2) != 0 )
      {
        RunningSummary = 0xFFFFFFFFLL;
        goto LABEL_263;
      }
      v74 = v74->Parent;
    }
    while ( v74 );
    do
    {
      RunningSummary = (unsigned int)(*(_DWORD *)(v71 + 140) + RunningSummary);
      if ( v72 )
      {
        v73 += **(_DWORD **)(v71 + 144);
      }
      else if ( (_DWORD)RunningSummary )
      {
        break;
      }
      v71 = *(_QWORD *)(v71 + 440);
    }
    while ( v71 );
    if ( v73 )
      v52 = 1;
  }
LABEL_263:
  if ( !(_DWORD)RunningSummary )
  {
LABEL_68:
    v53 = *((char *)v7 + 195);
    if ( (v7[15] & 0x400000) != 0 )
      _InterlockedOr((volatile signed __int32 *)v7[121], 0x40000u);
    KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(v7, v50, RunningSummary);
    v54 = a1;
    if ( (v7[15] & 0x2000) == 0
      || (v55 = a1->SharedReadyQueueMask) == 0
      || ((v56 = (_WORD *)v7[72], v57 = a1->Group, (unsigned __int16)v57 >= *v56)
        ? (v58 = 0LL)
        : (v58 = *(_QWORD *)&v56[4 * v57 + 4]),
          (v55 & v58) != v55 || v52) )
    {
      v93 = (struct _LIST_ENTRY *)(v7 + 27);
      v94 = &a1->DispatcherReadyListHead[v53];
      if ( v5 )
      {
        Flink = v94->Flink;
        if ( v94->Flink->Blink != v94 )
          goto LABEL_80;
        v93->Flink = Flink;
        v7[28] = v94;
        Flink->Blink = v93;
        v94->Flink = v93;
        _bittestandset(&a1->AffinitizedSelectionMask, v53);
      }
      else
      {
        Blink = v94->Blink;
        if ( Blink->Flink != v94 )
          goto LABEL_80;
        v93->Flink = v94;
        v7[28] = Blink;
        Blink->Flink = v93;
        v94->Blink = v93;
      }
      v96 = a1->ReadySummary | (1 << v53);
      v8 = a1;
      a1->ReadySummary = v96;
      KiUpdateLocalReadyQueueStatisticsOnInsertion(a1, v7);
      v97 = 0;
LABEL_211:
      v16 = v97;
      goto LABEL_87;
    }
    v59 = a1->SharedReadyQueue;
    v60 = &v59->ReadyListHead[v53];
    v123 = 0LL;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v123 + 1) = v59;
      *(_QWORD *)&v123 = 0LL;
      if ( !_InterlockedExchange64((volatile __int64 *)v59, (__int64)&v123) )
      {
LABEL_78:
        v61 = (struct _LIST_ENTRY *)(v7 + 27);
        if ( !v5 )
        {
          v62 = v60->Blink;
          if ( v62->Flink != v60 )
            goto LABEL_80;
          v61->Flink = v60;
          v7[28] = v62;
          v62->Flink = v61;
          v60->Blink = v61;
LABEL_188:
          v59->ReadySummary |= 1 << v53;
          *((_DWORD *)v7 + 134) |= 0x80000000;
          if ( ++v59->ReadyThreadCount == 1 )
            _InterlockedOr64((volatile signed __int64 *)&v59->SubNode->StealableSharedReadyQueues, v59->Affinity);
          v99 = *((unsigned int *)v7 + 21);
          *((_DWORD *)v7 + 446) = v99;
          v59->ReadyQueueExpectedRunTime += v99;
          v100 = *((_DWORD *)v7 + 21);
          *((_BYTE *)v7 + 1828) = *((_BYTE *)v7 + 516);
          *((_DWORD *)v7 + 447) = v100;
          v101 = *((_DWORD *)v7 + 20);
          if ( v101 <= v100 )
            v101 = v100;
          v102 = 0LL;
          *((_BYTE *)v7 + 1830) = v101 >= KiDynamicHeteroCpuPolicyExpectedCycles;
          *((_BYTE *)v7 + 1829) = *((_BYTE *)v7 + 517);
          v103 = v59->Group;
          *(_OWORD *)(v7 + 225) = 0LL;
          v104 = (_WORD *)v7[72];
          *((_WORD *)v7 + 904) = v103;
          if ( (unsigned __int16)v103 >= *v104 )
            v105 = 0LL;
          else
            v105 = *(_QWORD *)&v104[4 * v103 + 4];
          v7[225] = v105;
          if ( *((_DWORD *)v7 + 447) > (unsigned int)KeSoftParkedQueueThreshold )
            *((_DWORD *)v7 + 447) = KeSoftParkedQueueThreshold;
          v106 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v59->SoftParkElectionLock, 0LL) )
          {
            do
            {
              if ( (++v106 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v105, v102, v54) )
              {
                HvlNotifyLongSpinWait(v106);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( v59->SoftParkElectionLock );
          }
          v7[224] = v59->SoftParkElectionGeneration;
          ++v59->SoftParkElectionThreadCount;
          v59->SoftParkElectionRunTime += *((unsigned int *)v7 + 447);
          v59->SoftParkElectionAffinityStats.AffinitySummary |= v7[225];
          v107 = *((unsigned __int8 *)v7 + 1829)
               + 8 * (*((unsigned __int8 *)v7 + 1830) + 2LL * *((unsigned __int8 *)v7 + 1828));
          v59->SoftParkElectionHeteroStats.ExpectedRuntimeByClass[0][0][v107] += *((unsigned int *)v7 + 447);
          KiScheduleSoftParkElectionIfNecessary(v59);
          _InterlockedAnd64((volatile signed __int64 *)&v59->SoftParkElectionLock, 0LL);
          v8 = a1;
          if ( KiForceParkingConfiguration
            && (a1->IdleState & 0x20) != 0
            && !(unsigned __int8)KiIsThreadExemptFromForcePark(v7) )
          {
            KiArmForceParkDutyCyclingForSharedReadyQueue(a1, v59);
          }
          if ( (KiVelocityFlags & 0x200000) != 0 )
          {
            _m_prefetchw(&v123);
            v110 = v123;
            if ( (_QWORD)v123 )
              goto LABEL_208;
            if ( (__int128 *)_InterlockedCompareExchange64(
                               *((volatile signed __int64 **)&v123 + 1),
                               0LL,
                               (signed __int64)&v123) != &v123 )
            {
              v110 = KxWaitForLockChainValid(&v123);
LABEL_208:
              *(_QWORD *)&v123 = 0LL;
              v111 = *((_QWORD *)&v123 + 1);
              if ( (((unsigned __int8)v111 ^ (unsigned __int8)_InterlockedExchange64(
                                                                (volatile __int64 *)(v110 + 8),
                                                                *((__int64 *)&v123 + 1))) & 4) != 0 )
                KeWakeAddressAll(v110 + 8, v111, v108, v109);
            }
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v59, 0LL);
          }
          v97 = 1;
          goto LABEL_211;
        }
        v69 = v60->Flink;
        if ( v60->Flink->Blink == v60 )
        {
          v61->Flink = v69;
          v7[28] = v60;
          v69->Blink = v61;
          v60->Flink = v61;
          _bittestandreset(&v54->AffinitizedSelectionMask, v53);
          goto LABEL_188;
        }
LABEL_80:
        __fastfail(3u);
      }
      KxWaitForLockOwnerShip(&v123);
    }
    else
    {
      LODWORD(v131) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v59, 0LL) )
      {
        do
          KeYieldProcessorEx(&v131);
        while ( v59->Lock );
      }
    }
    v54 = a1;
    goto LABEL_78;
  }
  KiAddThreadToScbQueue(v8, v50);
LABEL_87:
  v63 = 0;
  if ( (WORD2(xmmword_140FC0C10) & 0x800) != 0 )
  {
    v63 = 1;
    _InterlockedIncrement16((volatile signed __int16 *)v7 + 434);
  }
  v64 = *v130;
  v65 = *v130 & 0xFFFFFFFFFFFFFFFEuLL;
  v131 = (_QWORD *)v65;
  if ( (v64 & 1) == 0 )
  {
    v66 = &v131;
    LODWORD(v67) = 1;
    do
    {
LABEL_91:
      v67 = (unsigned int)(v67 - 1);
      _InterlockedAnd64(v66[v67] + 6, 0LL);
    }
    while ( (_DWORD)v67 );
    goto LABEL_92;
  }
  v67 = *(_QWORD *)(v65 + 36504);
  v66 = (_QWORD **)(v67 + 8);
  LODWORD(v67) = *(unsigned __int8 *)v67;
  if ( (_DWORD)v67 )
    goto LABEL_91;
LABEL_92:
  result = 0LL;
  *v130 = 0LL;
  if ( v63 )
  {
    result = (_KTHREAD *)EtwTraceReadyQueueInsertion(v7, v8->Number, v16, 0LL);
    _InterlockedDecrement16((volatile signed __int16 *)v7 + 434);
  }
  v68 = (_KTHREAD *)v126;
  if ( v126 )
  {
    v118 = v126;
    do
    {
      EtwTraceScbRankChange(
        (char *)&v118[-57] - v8->ScbOffset,
        v8->Number,
        HIDWORD(v118[-40].Next),
        ((__int64)v118[-41].Next & 2) != 0);
      v118 = v118->Next;
    }
    while ( v118 );
    LODWORD(v131) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v8->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v131);
      while ( v8->PrcbLock );
    }
    for ( result = *(_KTHREAD **)&v68->Header.Lock; ; result = *(_KTHREAD **)&result->Header.Lock )
    {
      LOWORD(v68[-1].InGlobalForegroundList) &= ~0x100u;
      *(_QWORD *)&v68->Header.Lock = 0LL;
      v68 = result;
      if ( !result )
        break;
    }
    _InterlockedAnd64((volatile signed __int64 *)&v8->PrcbLock, 0LL);
  }
LABEL_95:
  if ( v121 )
  {
    v116 = *((_DWORD *)v7 + 29) >> 3;
    LOBYTE(v116) = (*((_DWORD *)v7 + 29) & 8) != 0;
    result = (_KTHREAD *)EtwTraceThreadAffinity((_DWORD)v7, *((unsigned __int16 *)v7 + 292), v116, 0, v7[72], 1334);
  }
  if ( v125 != v124 && (xmmword_140FC0C10 & 0x8000000) != 0 )
    return (_KTHREAD *)EtwTraceIdealProcessor(v7, 1350LL, v125, v124);
  return result;
}
