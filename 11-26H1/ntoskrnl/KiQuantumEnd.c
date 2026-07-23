/*
 * XREFs of KiQuantumEnd @ 0x1403330A0
 * Callers:
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 *     KiIdleLoop @ 0x14072D980 (KiIdleLoop.c)
 * Callees:
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiEnterDeferredReadyState @ 0x140230060 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x140230D00 (KiDeferredReadyThread.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140232008 (KiRemoveThreadFromReadyQueue.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiQueryQuantumReset @ 0x14023B390 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiClearForegroundBoost @ 0x14023B460 (KiClearForegroundBoost.c)
 *     KiScheduleNextForegroundBoost @ 0x14023B490 (KiScheduleNextForegroundBoost.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140312BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KeIsUserVaAccessAllowed @ 0x1403A98D0 (KeIsUserVaAccessAllowed.c)
 *     KiScanSharedReadyThreads @ 0x1403C93BC (KiScanSharedReadyThreads.c)
 *     KiShouldScanSharedReadyQueue @ 0x1403C98C8 (KiShouldScanSharedReadyQueue.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     EtwTraceAntiStarvationBoost @ 0x140531784 (EtwTraceAntiStarvationBoost.c)
 *     KiSwapContext @ 0x140734AA0 (KiSwapContext.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiQuantumEnd(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r12
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 CycleTime; // rsi
  unsigned int v4; // ebx
  char v5; // bl
  int v6; // eax
  unsigned __int64 *v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  _BYTE *v10; // rax
  unsigned int v11; // ecx
  __int64 *v12; // rbx
  __int64 v13; // rsi
  unsigned int CurrentRunTime; // edx
  __int64 v15; // r8
  char v16; // cl
  char v17; // al
  char v18; // cl
  char v19; // al
  __int64 v20; // rcx
  unsigned __int8 *v21; // rax
  __int64 v22; // rax
  unsigned __int8 v23; // cl
  int v24; // esi
  char v25; // bl
  char v26; // r13
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r15
  unsigned int v28; // r9d
  __int64 v29; // r8
  unsigned int k; // edx
  char v31; // cl
  char v32; // si
  char v33; // r14
  unsigned int n; // ebx
  _KCORE_CONTROL_BLOCK *v35; // rcx
  __int64 v36; // rax
  unsigned __int8 *v37; // r9
  unsigned __int64 v38; // rdx
  unsigned int v39; // r10d
  unsigned __int8 *v40; // rcx
  __int64 v41; // r8
  __int64 NextThread; // rbx
  struct _KTHREAD *v43; // rsi
  _BYTE *v44; // rax
  __int64 v45; // rcx
  unsigned __int64 *v46; // rdi
  __int64 v47; // r11
  int IsEnabledNoReportingNoInline; // eax
  __int64 Priority; // rcx
  char v50; // bl
  int v51; // eax
  int BasePriority; // r8d
  int v53; // r13d
  char v54; // dl
  char v55; // cl
  signed int PriorityFloorSummary; // eax
  char DecayBoost; // al
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  char v59; // bl
  _KPRCB **Prcbs; // r15
  __int64 ProcessorCount; // r12
  _KPRCB *v62; // rsi
  unsigned int v63; // r14d
  int v64; // edx
  _BYTE *v65; // rax
  __int64 v66; // rdx
  unsigned __int64 *v67; // r8
  int QuantumReset; // eax
  int v69; // ebx
  unsigned int v70; // ebx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  _KAFFINITY_EX *Affinity; // rcx
  unsigned __int64 v75; // r8
  int v76; // r9d
  bool v77; // cc
  int v78; // ecx
  __int64 v79; // rdx
  unsigned int i; // r8d
  char v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rax
  unsigned int j; // r10d
  unsigned __int8 *v85; // r9
  __int64 v86; // rcx
  __int64 v87; // rax
  _BYTE *v88; // rax
  __int64 v89; // rdx
  unsigned __int64 *v90; // r8
  __int64 v91; // r8
  unsigned __int64 v92; // r9
  char IsUserVaAccessAllowed; // di
  __int64 v94; // r8
  struct _KTHREAD *v95; // rdx
  __int64 v96; // rcx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  volatile unsigned int ReadySummary; // ebx
  int v99; // ebx
  unsigned int QueueIndex; // ecx
  _LIST_ENTRY *DispatcherReadyListHead; // r9
  struct _LIST_ENTRY *v102; // r15
  int v103; // r11d
  unsigned int v104; // ebx
  unsigned int v105; // eax
  struct _KPRCB *v106; // rdi
  unsigned int v107; // eax
  char v108; // bl
  _LIST_ENTRY *v109; // r12
  _LIST_ENTRY *Flink; // r13
  __int64 p_Blink; // rsi
  bool v112; // cl
  bool v113; // zf
  _LIST_ENTRY *v114; // r14
  int v115; // edx
  int v116; // ecx
  __int64 v117; // r8
  unsigned int v118; // r14d
  char v119; // al
  __int64 Prcb; // rsi
  unsigned __int8 *v121; // rbx
  unsigned __int8 v122; // al
  unsigned __int8 TargetType; // al
  unsigned int v124; // edx
  unsigned __int16 *p_Count; // r12
  __int64 v126; // rcx
  __int64 v127; // rdx
  int v128; // edx
  _DWORD *SchedulerAssist; // rcx
  __int64 v130; // r12
  unsigned int SingleTargetIndex; // edx
  unsigned int m; // edx
  int v133; // ecx
  _BYTE *v134; // rax
  unsigned int v135; // ecx
  __int64 *v136; // rbx
  __int64 v137; // rsi
  unsigned int ExpectedRunTime; // edx
  __int64 v139; // r8
  char v140; // cl
  char v141; // al
  char v142; // cl
  char v143; // al
  __int64 v144; // rcx
  char v145; // cl
  unsigned __int64 v146; // r13
  volatile signed __int32 *v147; // rbx
  char v148; // r12
  unsigned __int64 v149; // r14
  unsigned int v150; // esi
  int v151; // esi
  __int16 v152; // cx
  unsigned __int64 v153; // rcx
  int GuestSchedulerAssistPriority; // eax
  int v155; // ebx
  unsigned int v156; // edx
  int v157; // eax
  __int64 v158; // [rsp+30h] [rbp-79h] BYREF
  struct _KPRCB *v159; // [rsp+38h] [rbp-71h]
  unsigned int v160; // [rsp+40h] [rbp-69h]
  int v161; // [rsp+44h] [rbp-65h]
  struct _SINGLE_LIST_ENTRY v162; // [rsp+48h] [rbp-61h] BYREF
  struct _KTHREAD *v163; // [rsp+50h] [rbp-59h]
  unsigned int v164; // [rsp+58h] [rbp-51h]
  unsigned int v165; // [rsp+5Ch] [rbp-4Dh]
  __int128 v166; // [rsp+60h] [rbp-49h] BYREF
  __int128 v167; // [rsp+70h] [rbp-39h] BYREF
  volatile signed __int64 *v168; // [rsp+80h] [rbp-29h]
  unsigned __int64 v169; // [rsp+88h] [rbp-21h]
  __int64 v170; // [rsp+90h] [rbp-19h] BYREF
  __int64 v171; // [rsp+98h] [rbp-11h] BYREF
  _LIST_ENTRY *v172; // [rsp+A0h] [rbp-9h]
  __int128 v173; // [rsp+A8h] [rbp-1h]
  unsigned __int64 v174; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v175; // [rsp+118h] [rbp+6Fh] BYREF
  int v176; // [rsp+120h] [rbp+77h]
  int v177; // [rsp+128h] [rbp+7Fh]

  v162.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(v174) = 0;
  v159 = CurrentPrcb;
  v158 = 0LL;
  CurrentThread = CurrentPrcb->CurrentThread;
  v163 = CurrentThread;
  if ( CurrentThread != CurrentPrcb->IdleThread )
  {
    CycleTime = CurrentThread->CycleTime;
    v4 = 0;
    v175 = CycleTime;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentThread->ThreadLock );
    }
    if ( CycleTime < CurrentThread->QuantumTarget )
      goto LABEL_9;
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x100) != 0 && CurrentThread->Priority >= 16 )
    {
      v69 = 127;
LABEL_114:
      v70 = KiCyclesPerClockQuantum * v69;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      CurrentThread->QuantumTarget = CycleTime + v70;
      if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
        && !_bittestandreset((signed __int32 *)&CurrentThread->116, 7u)
        && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->SchedulerSubNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
      {
        v71 = *(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192);
        v72 = *(_QWORD *)(v71 + 24) & *(_QWORD *)(v71 + 80);
        v73 = *(unsigned __int16 *)(v71 + 136);
        Affinity = CurrentThread->Affinity;
        v75 = (unsigned __int16)v73 >= Affinity->Count ? 0LL : Affinity->Bitmap[v73];
        if ( (v75 & v72) != 0 )
        {
          CurrentThread->MiscFlags |= 0x80u;
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
        }
      }
LABEL_9:
      v166 = 0LL;
      v168 = 0LL;
      v167 = 0LL;
      v5 = KiAcquireThreadStateLockForWrite(CurrentThread, &v166);
      v6 = KiComputeThreadQos((__int64)CurrentThread);
      if ( v6 != (unsigned __int8)CurrentThread->BamQosLevel )
        CurrentThread->BamQosLevel = v6;
      v8 = v166;
      if ( v5 == 2 )
      {
        if ( *(_QWORD *)(v166 + 16) )
          goto LABEL_22;
        v9 = *((_DWORD *)&CurrentThread->0 + 1) >> 1;
        v171 = v166;
        if ( (v9 & 1) != 0 )
        {
          v10 = *(_BYTE **)(v166 + 36504);
          v11 = (unsigned __int8)*v10;
          v12 = (__int64 *)(v10 + 8);
          if ( !*v10 )
            goto LABEL_22;
        }
        else
        {
          v12 = &v171;
          v11 = 1;
        }
        v13 = v11;
        do
        {
          CurrentRunTime = CurrentThread->CurrentRunTime;
          v15 = *(_QWORD *)(*v12 + 56);
          v16 = *(_BYTE *)(v15 + 64) ^ (CurrentThread->BamQosLevel ^ *(_BYTE *)(v15 + 64)) & 7;
          v17 = v16 ^ (v16 ^ (8 * CurrentThread->HardwareFeedbackClass)) & 0x38;
          if ( CurrentRunTime <= CurrentThread->ExpectedRunTime )
            CurrentRunTime = CurrentThread->ExpectedRunTime;
          v18 = 64;
          if ( CurrentRunTime < KiDynamicHeteroCpuPolicyExpectedCycles )
            v18 = 0;
          v19 = v18 | v17 & 0xBF;
          v20 = *v12;
          *(_BYTE *)(v15 + 64) = v19;
          KiUpdateThreadQosGroupingSummaries(v20);
          ++v12;
          --v13;
        }
        while ( v13 );
        goto LABEL_21;
      }
      if ( v5 == 3 )
      {
        v133 = *((_DWORD *)&CurrentThread->0 + 1) >> 1;
        v170 = v166;
        if ( (v133 & 1) == 0 )
        {
          v136 = &v170;
          v135 = 1;
LABEL_254:
          v137 = v135;
          do
          {
            ExpectedRunTime = CurrentThread->CurrentRunTime;
            v139 = *(_QWORD *)(*v136 + 56);
            v140 = *(_BYTE *)(v139 + 64) ^ (CurrentThread->BamQosLevel ^ *(_BYTE *)(v139 + 64)) & 7;
            v141 = v140 ^ (v140 ^ (8 * CurrentThread->HardwareFeedbackClass)) & 0x38;
            if ( ExpectedRunTime <= CurrentThread->ExpectedRunTime )
              ExpectedRunTime = CurrentThread->ExpectedRunTime;
            v142 = 64;
            if ( ExpectedRunTime < KiDynamicHeteroCpuPolicyExpectedCycles )
              v142 = 0;
            v143 = v142 | v141 & 0xBF;
            v144 = *v136;
            *(_BYTE *)(v139 + 64) = v143;
            KiUpdateThreadQosGroupingSummaries(v144);
            ++v136;
            --v137;
          }
          while ( v137 );
LABEL_21:
          v8 = v166;
          goto LABEL_22;
        }
        v134 = *(_BYTE **)(v166 + 36504);
        v135 = (unsigned __int8)*v134;
        v136 = (__int64 *)(v134 + 8);
        if ( *v134 )
          goto LABEL_254;
      }
LABEL_22:
      if ( !v8 )
        goto LABEL_29;
      v7 = 0LL;
      v8 = 0LL;
      v175 = *((_QWORD *)&v166 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (BYTE8(v166) & 1) != 0 )
      {
        if ( (BYTE8(v166) & 1) == 1 )
        {
          v21 = *(unsigned __int8 **)((*((_QWORD *)&v166 + 1) & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
          v8 = *v21;
          v7 = (unsigned __int64 *)(v21 + 8);
        }
        if ( !(_DWORD)v8 )
          goto LABEL_28;
      }
      else
      {
        v7 = &v175;
        LODWORD(v8) = 1;
      }
      do
      {
        v8 = (unsigned int)(v8 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(v7[v8] + 48), 0LL);
      }
      while ( (_DWORD)v8 );
LABEL_28:
      *((_QWORD *)&v166 + 1) = 0LL;
LABEL_29:
      if ( (_QWORD)v167 )
      {
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          _m_prefetchw((char *)&v167 + 8);
          v22 = *((_QWORD *)&v167 + 1);
          if ( *((_QWORD *)&v167 + 1) )
            goto LABEL_34;
          if ( (__int128 *)_InterlockedCompareExchange64(v168, 0LL, (signed __int64)&v167 + 8) != (__int128 *)((char *)&v167 + 8) )
          {
            v22 = KxWaitForLockChainValid((__int64 *)&v167 + 1, v8, (__int64)v7);
LABEL_34:
            *((_QWORD *)&v167 + 1) = 0LL;
            v23 = (unsigned __int8)v168;
            if ( ((v23 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v22 + 8), (__int64)v168)) & 4) != 0 )
              KeWakeAddressAll();
          }
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v167, 0LL);
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor((__int64)CurrentThread, (__int64)CurrentPrcb, 1) )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
      CurrentThread->ThreadLock = 0LL;
      goto LABEL_39;
    }
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(a1);
    Priority = (unsigned int)CurrentThread->Priority;
    if ( !IsEnabledNoReportingNoInline )
    {
      if ( CurrentThread->Priority >= 16 && (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) == 0 )
      {
        v53 = CurrentThread->Priority;
        goto LABEL_97;
      }
      v155 = 0;
      v156 = 6;
      if ( CurrentThread->DecayBoost - 1 >= 0 )
        v155 = CurrentThread->DecayBoost - 1;
      if ( KiSchedulerForegroundBoostDecayPolicy )
        KiClearForegroundBoost((__int64)CurrentThread);
      v157 = KiComputeThreadPriority(CurrentThread, v156, 0);
      v53 = v155 + CurrentThread->BasePriority;
      if ( v157 >= v53 )
        v53 = v157;
      CurrentThread->PriorityDecrement &= 0xF00Fu;
      DecayBoost = CurrentThread->DecayBoost;
      if ( DecayBoost < 1 )
      {
LABEL_96:
        CurrentThread->DecayBoost = 0;
        goto LABEL_97;
      }
LABEL_135:
      CurrentThread->DecayBoost = DecayBoost - 1;
      goto LABEL_97;
    }
    if ( CurrentThread->Priority >= 16 && (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) == 0 )
    {
      v53 = CurrentThread->Priority;
LABEL_97:
      CoreControlBlock = CurrentPrcb->CoreControlBlock;
      v59 = (unsigned __int8)CurrentPrcb | 1;
      Prcbs = CoreControlBlock->Prcbs;
      if ( CoreControlBlock->ProcessorCount )
      {
        ProcessorCount = CoreControlBlock->ProcessorCount;
        do
        {
          v62 = *Prcbs;
          v63 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v62->PrcbLock, 0LL) )
          {
            do
            {
              if ( (++v63 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v63);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( v62->PrcbLock );
          }
          ++Prcbs;
          --ProcessorCount;
        }
        while ( ProcessorCount );
        CycleTime = v175;
        CurrentPrcb = v159;
      }
      CurrentThread = v163;
      if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(v163) )
        KiUpdateThreadPriority((_DWORD)CurrentPrcb, v64, (_DWORD)v163, v53, CurrentPrcb->NextThread == 0LL);
      v174 = (unsigned __int64)CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v59 & 1) != 0 )
      {
        v65 = *(_BYTE **)(((unsigned __int64)CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
        LODWORD(v66) = (unsigned __int8)*v65;
        v67 = (unsigned __int64 *)(v65 + 8);
        if ( !*v65 )
          goto LABEL_112;
      }
      else
      {
        v67 = &v174;
        LODWORD(v66) = 1;
      }
      do
      {
        v66 = (unsigned int)(v66 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(v67[v66] + 48), 0LL);
      }
      while ( (_DWORD)v66 );
LABEL_112:
      v158 = 0LL;
      QuantumReset = KiQueryQuantumReset((__int64)v163);
      LOBYTE(v174) = 1;
      v69 = QuantumReset;
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        if ( (*(_DWORD *)&v163->Process->0 & 0x2000) != 0 )
        {
          v145 = v163->Priority;
          if ( v145 < 16 && (*((_DWORD *)&v163->0 + 1) & 8) == 0 && v145 > 0 )
            KiScheduleNextForegroundBoost((__int64)v163);
        }
      }
      goto LABEL_114;
    }
    v50 = 2;
    if ( KiSchedulerForegroundBoostDecayPolicy )
    {
      v50 = 3;
      if ( (CurrentThread->PriorityDecrement & 0xF) != 0 )
      {
        CurrentThread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
        CurrentThread->PriorityDecrement &= 0xFFF0u;
      }
    }
    v51 = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(Priority);
    BasePriority = CurrentThread->BasePriority;
    v53 = BasePriority;
    if ( v51 )
    {
      if ( BasePriority < 16 )
      {
        if ( (v50 & 1) == 0 )
        {
          v78 = BasePriority + (CurrentThread->PriorityDecrement & 0xF);
          if ( !__OFSUB__(v78, BasePriority) && v78 != BasePriority )
            v53 = BasePriority + (CurrentThread->PriorityDecrement & 0xF);
        }
        v54 = CurrentThread->DecayBoost;
        v55 = v54 - 1;
        if ( v54 <= 1 )
          v55 = 0;
        v53 += v55;
        if ( v53 >= 16 )
          v53 = 15;
      }
      PriorityFloorSummary = CurrentThread->PriorityFloorSummary;
      if ( !PriorityFloorSummary )
        goto LABEL_95;
      _BitScanReverse((unsigned int *)&PriorityFloorSummary, PriorityFloorSummary);
      v77 = v53 < PriorityFloorSummary;
    }
    else
    {
      v76 = CurrentThread->BasePriority;
      if ( BasePriority < 16 )
      {
        if ( (v50 & 1) == 0 && BasePriority + (CurrentThread->PriorityDecrement & 0xF) > BasePriority )
          v76 = BasePriority + (CurrentThread->PriorityDecrement & 0xF);
        if ( BasePriority + CurrentThread->DecayBoost > v76 )
          v76 = BasePriority + CurrentThread->DecayBoost;
        if ( v76 >= 16 && (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) == 0 )
          v76 = 15;
      }
      PriorityFloorSummary = CurrentThread->PriorityFloorSummary;
      v53 = v76;
      if ( !PriorityFloorSummary )
      {
LABEL_95:
        CurrentThread->PriorityDecrement &= 0xF00Fu;
        DecayBoost = CurrentThread->DecayBoost;
        if ( DecayBoost < 1 )
          goto LABEL_96;
        goto LABEL_135;
      }
      _BitScanReverse((unsigned int *)&PriorityFloorSummary, PriorityFloorSummary);
      v77 = v76 < PriorityFloorSummary;
    }
    if ( v77 )
      v53 = PriorityFloorSummary;
    LODWORD(v174) = 0;
    goto LABEL_95;
  }
LABEL_39:
  v24 = MEMORY[0xFFFFF78000000320];
  v25 = 0;
  if ( (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0 )
  {
    v25 = 1;
    if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
        KiScanSharedReadyThreads(v96, SharedReadyQueue, 0LL);
    }
  }
  if ( KiGroupSchedulingEnabled )
    KiGroupSchedulingQuantumEnd(CurrentPrcb);
  else
    KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1, (unsigned __int64 *)&v158);
  if ( v25 )
  {
    ReadySummary = CurrentPrcb->ReadySummary;
    CurrentPrcb->ReadyScanTick = v24 + 75;
    v99 = ReadySummary & 0x7FFE;
    if ( v99 )
    {
      QueueIndex = CurrentPrcb->QueueIndex;
      DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
      v173 = 0LL;
      v102 = 0LL;
      v103 = MEMORY[0xFFFFF78000000320] - 300;
      v164 = QueueIndex;
      v176 = MEMORY[0xFFFFF78000000320] - 300;
      v104 = __ROR4__(v99, QueueIndex);
      v172 = CurrentPrcb->DispatcherReadyListHead;
      LODWORD(v175) = 10;
      v177 = 16;
      v165 = KiLockQuantumTarget;
      while ( 1 )
      {
        _BitScanForward(&v105, v104);
        v106 = v159;
        v161 = v104 ^ (1 << v105);
        v107 = ((_BYTE)QueueIndex + (_BYTE)v105) & 0x1F;
        v108 = v107;
        v109 = &DispatcherReadyListHead[v107];
        v160 = v107;
        Flink = v109->Flink;
        do
        {
          p_Blink = (__int64)&Flink[-14].Blink;
          v112 = 0;
          v113 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
          v114 = Flink;
          Flink = Flink->Flink;
          if ( !v113 )
          {
            GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink, 0LL);
            v103 = v176;
            v112 = GuestSchedulerAssistPriority != *(_DWORD *)(p_Blink + 1024);
          }
          if ( v103 - *(_DWORD *)(p_Blink + 436) > 0 )
          {
            KiRemoveThreadFromReadyQueue((__int64)v106, v114, v108);
            KiEnterDeferredReadyState(p_Blink);
            LODWORD(v175) = v175 - 1;
LABEL_270:
            v103 = v176;
            v114->Flink = v102;
            v102 = v114;
            goto LABEL_189;
          }
          if ( v112 )
          {
            KiRemoveThreadFromReadyQueue((__int64)v106, v114, v108);
            KiEnterDeferredReadyState(p_Blink);
            goto LABEL_270;
          }
LABEL_189:
          v115 = --v177;
        }
        while ( Flink != v109 && (_DWORD)v175 && v115 );
        v104 = v161;
        if ( v161 )
        {
          if ( (_DWORD)v175 )
          {
            LOBYTE(QueueIndex) = v164;
            DispatcherReadyListHead = v172;
            if ( v115 )
              continue;
          }
        }
        if ( v102 )
        {
          KiReleasePrcbLocksForIsolationUnit(&v158);
          v146 = v165;
          do
          {
            v147 = (volatile signed __int32 *)&v102[-14].Blink;
            v148 = 0;
            v149 = (unsigned __int64)v102[-9].Flink;
            v150 = 0;
            v102 = v102->Flink;
            while ( _interlockedbittestandset64(v147 + 16, 0LL) )
            {
              do
              {
                if ( (++v150 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v150);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *((_QWORD *)v147 + 8) );
            }
            v151 = *((char *)v147 + 195);
            if ( v176 - *((_DWORD *)v147 + 109) > 0 && v151 < 15 )
            {
              v152 = *((_WORD *)v147 + 259);
              v148 = 1;
              if ( (v152 & 0xFF0u) < 0xF0 )
                *((_WORD *)v147 + 259) = v152 & 0xF00F | 0xF0;
              KiUpdateThreadPriority(0, 240, (_DWORD)v147, 15, 0);
              v153 = *((_QWORD *)v147 + 4);
              if ( v149 > v153 || v153 - v149 < v146 )
                *((_QWORD *)v147 + 4) = v149 + v146;
            }
            *((_QWORD *)v147 + 8) = 0LL;
            if ( v148 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
              EtwTraceAntiStarvationBoost(v147, (unsigned int)v151, 15LL);
            CurrentPrcb = v159;
            KiDeferredReadyThread(v159);
          }
          while ( v102 );
          KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1, (unsigned __int64 *)&v158);
          v115 = v177;
        }
        else
        {
          CurrentPrcb = v159;
        }
        if ( v115 && (_DWORD)v175 )
        {
          v116 = 1;
        }
        else
        {
          v116 = 1;
          if ( v160 + 1 <= 0xE )
            v116 = v160 + 1;
        }
        CurrentThread = v163;
        CurrentPrcb->QueueIndex = v116;
        break;
      }
    }
  }
  v26 = v174;
  if ( CurrentPrcb->NextThread || !(_BYTE)v174 && (*((_DWORD *)&CurrentThread->0 + 1) & 0x1000) == 0 )
    goto LABEL_61;
  StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v158, 0LL);
  v28 = StaticRescheduleContext->ProcessorCount;
  if ( (*((_DWORD *)&v163->0 + 1) & 0x1000) != 0 )
  {
    v79 = 0LL;
    for ( i = 0; i < v28; ++i )
    {
      if ( StaticRescheduleContext->ProcessorEntries[i].Prcb == CurrentPrcb )
      {
        v79 = (__int64)&StaticRescheduleContext->ProcessorEntries[i];
        break;
      }
    }
    *(_BYTE *)(v79 + 34) |= 2u;
    v81 = *(_BYTE *)(v79 + 32);
    v82 = *(_QWORD *)v79;
    *(_QWORD *)(v79 + 16) = *(_QWORD *)(*(_QWORD *)v79 + 24LL);
    *(_BYTE *)(v79 + 32) = v81 & 0xC0 | 5;
    v83 = *(_QWORD *)(v82 + 24);
    *(_BYTE *)(v79 + 33) &= ~1u;
    *(_QWORD *)(v79 + 24) = v83;
    if ( (v81 & 2) != 0 )
    {
      for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
      {
        v85 = &StaticRescheduleContext->ProcessorCount + 40 * j;
        if ( v85 + 16 != (unsigned __int8 *)v79 )
        {
          v85[50] |= 2u;
          v86 = *((_QWORD *)v85 + 2);
          *((_QWORD *)v85 + 4) = *(_QWORD *)(v86 + 24);
          v85[48] = v85[48] & 0xC0 | 5;
          v87 = *(_QWORD *)(v86 + 24);
          v85[49] &= ~1u;
          *((_QWORD *)v85 + 5) = v87;
        }
      }
      if ( (v81 & 2) != 0 )
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    }
  }
  else
  {
    v29 = 0LL;
    for ( k = 0; k < v28; ++k )
    {
      if ( StaticRescheduleContext->ProcessorEntries[k].Prcb == CurrentPrcb )
      {
        v29 = (__int64)&StaticRescheduleContext->ProcessorEntries[k];
        break;
      }
    }
    v31 = *(_BYTE *)(v29 + 32);
    *(_BYTE *)(v29 + 34) |= 2u;
    *(_BYTE *)(v29 + 32) = v31 | 8;
    if ( (v31 & 2) != 0 )
    {
      for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
      {
        if ( &StaticRescheduleContext->ProcessorEntries[m] != (_KI_RESCHEDULE_CONTEXT_ENTRY *)v29 )
        {
          StaticRescheduleContext->ProcessorEntries[m].AllCompareThreadStateFlags |= 8u;
          StaticRescheduleContext->ProcessorEntries[m].___u5[0] |= 2u;
        }
      }
    }
  }
  KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v162);
  v32 = 0;
  v33 = 0;
  if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
    v33 = 2;
  for ( n = 0; n < StaticRescheduleContext->ProcessorCount; ++n )
    v32 |= KiCommitRescheduleContextEntry(
             (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * n + 8 * n),
             CurrentPrcb,
             v33,
             &v162);
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    v35 = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    if ( ++v35->ScanStartIndex >= v35->ProcessorCount )
      v35->ScanStartIndex = 0;
  }
  if ( !v32 && !v162.Next )
    goto LABEL_61;
  KiReleasePrcbLocksForIsolationUnit(&v158);
  if ( !v32 )
    goto LABEL_215;
  v118 = 0;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_214;
  do
  {
    v119 = StaticRescheduleContext->ProcessorEntries[v118].___u6[0];
    Prcb = (__int64)StaticRescheduleContext->ProcessorEntries[v118].Prcb;
    v121 = &StaticRescheduleContext->ProcessorCount + 40 * v118;
    if ( (v119 & 0x10) != 0 )
    {
      TargetType = CurrentPrcb->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
        CurrentPrcb->DeferredDispatchInterrupts.TargetType = 1;
        CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(Prcb + 36);
        goto LABEL_206;
      }
      if ( TargetType != 1 )
      {
        p_Count = &CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count;
LABEL_239:
        v126 = *(unsigned __int8 *)(Prcb + 208);
        v127 = *(_QWORD *)(Prcb + 200);
        if ( *p_Count <= (unsigned __int16)v126 )
        {
LABEL_240:
          if ( p_Count[1] > (unsigned __int16)v126 )
          {
            *p_Count = v126 + 1;
            goto LABEL_224;
          }
LABEL_225:
          CurrentPrcb = v159;
          goto LABEL_206;
        }
LABEL_224:
        *(_QWORD *)&p_Count[4 * v126 + 4] |= v127;
        goto LABEL_225;
      }
      SingleTargetIndex = CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( SingleTargetIndex != *(_DWORD *)(Prcb + 36) )
      {
        CurrentPrcb->DeferredDispatchInterrupts.TargetType = 2;
        p_Count = &CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count;
        KeAddProcessorAffinityEx(p_Count, SingleTargetIndex);
        goto LABEL_239;
      }
    }
    else if ( (v119 & 8) != 0 && *(_BYTE *)(Prcb + 7) )
    {
      v122 = CurrentPrcb->DeferredDispatchInterrupts.TargetType;
      if ( !v122 )
      {
        CurrentPrcb->DeferredDispatchInterrupts.TargetType = 1;
        CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(Prcb + 36);
        goto LABEL_206;
      }
      if ( v122 == 1 )
      {
        v124 = CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( v124 == *(_DWORD *)(Prcb + 36) )
          goto LABEL_206;
        CurrentPrcb->DeferredDispatchInterrupts.TargetType = 2;
        p_Count = &CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count;
        KeAddProcessorAffinityEx(p_Count, v124);
      }
      else
      {
        p_Count = &CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count;
      }
      v126 = *(unsigned __int8 *)(Prcb + 208);
      v127 = *(_QWORD *)(Prcb + 200);
      if ( *p_Count <= (unsigned __int16)v126 )
        goto LABEL_240;
      goto LABEL_224;
    }
LABEL_206:
    if ( (v121[51] & 2) != 0 )
      EtwTraceScheduleThread(*((_QWORD *)v121 + 5), Prcb, 0LL);
    if ( (v121[51] & 4) != 0 )
    {
      if ( *(_QWORD *)(Prcb + 36600) )
      {
        if ( CurrentPrcb->SchedulerAssist )
        {
          if ( CurrentPrcb != (struct _KPRCB *)Prcb )
          {
            v128 = **(_DWORD **)(Prcb + 36600);
            if ( (v128 & 0x100000) != 0
              || (**(_DWORD **)(Prcb + 36600) & 0x40000) != 0 && (unsigned __int8)v128 < (char)v121[52] )
            {
              v113 = HvlpVirtualProcessorsIdentityMapped == 0;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              SchedulerAssist[3] = 2;
              v130 = *(unsigned int *)(Prcb + 36);
              if ( v113 )
                LODWORD(v130) = (unsigned __int8)byte_140FC71C1[2 * v130] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v130] << 6);
              SchedulerAssist[2] = v130;
              if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(Prcb + 36), 2LL, v117);
              __writemsr(0x400000C2u, (unsigned int)v130);
            }
          }
        }
      }
    }
    if ( (v121[51] & 1) != 0 )
      _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v121 + 5) + 868LL));
    ++v118;
    CurrentPrcb = v159;
  }
  while ( v118 < StaticRescheduleContext->ProcessorCount );
  v26 = v174;
LABEL_214:
  KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
LABEL_215:
  if ( v162.Next )
    KiReadyDeferredReadyList(CurrentPrcb, &v162);
  KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, (unsigned __int64 *)&v158);
LABEL_61:
  v36 = v158;
  v37 = 0LL;
  v38 = v158 & 0xFFFFFFFFFFFFFFFEuLL;
  v39 = 0;
  v169 = v158 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v158 & 1) != 0 )
  {
    if ( (v158 & 1) == 1 )
    {
      v40 = *(unsigned __int8 **)(v38 + 36504);
      v39 = *v40;
      v37 = v40 + 8;
    }
    LODWORD(v41) = 0;
    if ( v39 )
    {
      v47 = v39;
      do
      {
        if ( v38 == *(_QWORD *)v37 )
        {
          v41 = (unsigned int)(v41 + 1);
          if ( (_DWORD)v41 == 1 )
            v38 = -1LL;
          else
            v38 = *(&v169 + v41);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v37 + 48LL), 0LL);
        }
        v37 += 8;
        --v47;
      }
      while ( v47 );
    }
    v36 &= ~1uLL;
    v158 = v36;
  }
  NextThread = (__int64)CurrentPrcb->NextThread;
  v43 = v163;
  if ( NextThread )
  {
    if ( v163 == CurrentPrcb->IdleThread )
    {
LABEL_159:
      if ( v26 )
        v43->Preempted = 0;
      if ( v43 == CurrentPrcb->IdleThread )
        goto LABEL_67;
      CurrentPrcb->NextThread = 0LL;
      KiUpdatePriorityMatrixForRunningTransition((__int64)CurrentPrcb, NextThread);
      v43->WaitReason = 30;
      KiQueueReadyThread(CurrentPrcb, (unsigned __int64)&v158, (__int64)v43, 0);
      IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
      if ( KeSmapEnabled )
        __asm { stac }
      LOBYTE(v94) = 1;
      KiSwapContext(v43, NextThread, v94);
      if ( !IsUserVaAccessAllowed && KeSmapEnabled )
        __asm { clac }
      KiAbProcessPostContextSwitch((__int64)v43, v95);
      return;
    }
    v174 = v36 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v36 & 1) != 0 )
    {
      v88 = *(_BYTE **)((v36 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
      v89 = (unsigned __int8)*v88;
      v90 = (unsigned __int64 *)(v88 + 8);
      if ( !*v88 )
        goto LABEL_158;
    }
    else
    {
      v90 = &v174;
      LODWORD(v89) = 1;
    }
    do
    {
      v89 = (unsigned int)(v89 - 1);
      _InterlockedAnd64((volatile signed __int64 *)(v90[v89] + 48), 0LL);
    }
    while ( (_DWORD)v89 );
LABEL_158:
    v158 = 0LL;
    KiAbProcessPreContextSwitch((struct _KLOCK_ENTRY *)v43, v89);
    KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)v43, v91, v92);
    KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 0, (unsigned __int64 *)&v158);
    NextThread = (__int64)CurrentPrcb->NextThread;
    v36 = v158;
    if ( !NextThread )
      goto LABEL_67;
    goto LABEL_159;
  }
LABEL_67:
  v174 = v36 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v36 & 1) == 0 )
  {
    v46 = &v174;
    LODWORD(v45) = 1;
    goto LABEL_69;
  }
  v44 = *(_BYTE **)((v36 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
  LODWORD(v45) = (unsigned __int8)*v44;
  v46 = (unsigned __int64 *)(v44 + 8);
  if ( *v44 )
  {
    do
    {
LABEL_69:
      v45 = (unsigned int)(v45 - 1);
      _InterlockedAnd64((volatile signed __int64 *)(v46[v45] + 48), 0LL);
    }
    while ( (_DWORD)v45 );
  }
  if ( v43 != CurrentPrcb->IdleThread )
    KeCheckAndApplyBamQos((__int64)CurrentPrcb);
}
