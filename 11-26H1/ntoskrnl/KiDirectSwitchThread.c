/*
 * XREFs of KiDirectSwitchThread @ 0x14023B540
 * Callers:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 * Callees:
 *     EtwTraceReadyThread @ 0x140218A90 (EtwTraceReadyThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiDeferredReadyThread @ 0x140230D00 (KiDeferredReadyThread.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiShouldPreemptionBeDeferred @ 0x140231EA0 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140231EC0 (KiCheckForMaxOverQuotaScb.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiIsThreadStateControlledByProcessor @ 0x14023944C (KiIsThreadStateControlledByProcessor.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiScheduleNextForegroundBoost @ 0x14023B490 (KiScheduleNextForegroundBoost.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403070D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1403076F0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiInswapAndReadyThread @ 0x1403115E4 (KiInswapAndReadyThread.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1403CA4C0 (EtwTraceXSchedulerPriorityUpdate.c)
 *     KeIsForceParkingEnabled @ 0x1404366F0 (KeIsForceParkingEnabled.c)
 *     KiCanThreadBeReadiedImmediately @ 0x14043AA50 (KiCanThreadBeReadiedImmediately.c)
 *     KiComputeNewPriority @ 0x140486450 (KiComputeNewPriority.c)
 *     KiIsNextScheduledScbThread @ 0x1404AC8A4 (KiIsNextScheduledScbThread.c)
 *     KiGetComparisonRanks @ 0x1404C3378 (KiGetComparisonRanks.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405306A8 (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

bool __fastcall KiDirectSwitchThread(struct _KPRCB *a1, int a2, char a3)
{
  char v3; // r15
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  __int64 v6; // rsi
  _KTHREAD *CurrentThread; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 ScbOffset; // r12
  bool v14; // zf
  __int64 v15; // rbx
  __int64 v16; // rdi
  volatile signed __int32 *v17; // rsi
  unsigned int v18; // r14d
  __int64 *v19; // rax
  unsigned __int64 updated; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned int v25; // ebx
  unsigned __int64 v26; // rcx
  __int64 v27; // r14
  ULONG_PTR v28; // r12
  char v29; // si
  char v30; // di
  unsigned int v31; // ecx
  char v32; // bl
  char v33; // cl
  __int64 v34; // rcx
  char v35; // r8
  int v36; // edx
  int v37; // ebx
  AutoBoost *v38; // rcx
  char v39; // dl
  int v40; // eax
  volatile signed __int32 *v41; // r8
  int v42; // ecx
  int v43; // edx
  int v44; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  unsigned __int64 v46; // rsi
  _KPRCB **Prcbs; // r15
  __int64 ProcessorCount; // r12
  _KPRCB *v49; // rdi
  unsigned int v50; // r14d
  int v51; // r15d
  unsigned int v52; // ebx
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // r11
  unsigned __int64 v55; // rdx
  int Priority; // edi
  __int64 v57; // rcx
  unsigned int v58; // ebx
  int v59; // edx
  unsigned int i; // ecx
  __int64 v61; // r8
  __int64 v62; // r8
  bool v63; // cc
  signed int v64; // r14d
  unsigned int v65; // r9d
  unsigned int v66; // r10d
  int v67; // eax
  unsigned int v68; // edi
  __int64 Group; // rax
  _WORD *v70; // rdx
  int v71; // eax
  ULONG_PTR v72; // r11
  int v73; // edx
  int v74; // eax
  unsigned __int64 v75; // rcx
  AutoBoost *v76; // rcx
  char v77; // dl
  int v78; // eax
  volatile signed __int32 *v79; // r8
  int v80; // ecx
  int v81; // edx
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r12
  unsigned __int64 v83; // rdx
  int v84; // r8d
  unsigned __int8 *v85; // rax
  unsigned int v86; // r15d
  struct _KPRCB **v87; // r11
  int v88; // r9d
  unsigned __int8 v89; // al
  __int64 v90; // r8
  unsigned int k; // edx
  char v92; // dl
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rbx
  unsigned int n; // edx
  unsigned __int8 DoesThreadDominateRescheduleContextEntry; // al
  unsigned int v98; // ecx
  __int64 v99; // r9
  unsigned int jj; // edx
  unsigned int v101; // r10d
  unsigned int v102; // eax
  unsigned int kk; // ebx
  struct _KPRCB *v104; // r14
  char *v105; // r9
  unsigned __int64 v106; // rcx
  _KTHREAD *IdleThread; // r11
  char v108; // al
  __int64 v109; // r11
  unsigned int v110; // ebx
  unsigned __int64 v111; // r8
  $8EBF9F2B27741A17C5BF2EE4B27176E1 *v112; // rbx
  struct _KPRCB *v113; // r14
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  __int64 NextThread; // rdi
  unsigned __int8 AllCompareThreadStateFlags; // cl
  unsigned __int8 v117; // cl
  char v118; // r10
  unsigned __int8 v119; // dl
  unsigned __int8 v120; // cl
  signed __int8 v121; // dl
  unsigned int v122; // edx
  int v123; // eax
  unsigned __int8 v124; // al
  unsigned int v125; // r14d
  struct _SINGLE_LIST_ENTRY *v126; // rbx
  __int64 v127; // rdx
  _BYTE *v128; // rax
  __int64 v129; // rdx
  unsigned __int64 *v130; // r8
  int v131; // r8d
  char v132; // al
  _KPRCB *v133; // r15
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // eax
  unsigned int v136; // r8d
  __int64 v137; // rcx
  __int64 v138; // rdx
  unsigned __int64 v139; // rcx
  __int64 v140; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned int v142; // eax
  unsigned int v143; // r8d
  __int64 v144; // rcx
  __int64 v145; // rdx
  unsigned __int64 v146; // rcx
  void **p_SchedulerAssist; // r9
  int v148; // r8d
  _DWORD *v149; // r8
  __int64 Number; // rcx
  _KTHREAD *NewThread; // rcx
  unsigned __int64 **v152; // r8
  _QWORD *v153; // r8
  struct _KPRCB *v154; // rdx
  _QWORD *v155; // r8
  struct _KPRCB *v156; // rdx
  unsigned __int64 v157; // rcx
  struct _KTHREAD *v158; // rax
  unsigned int v159; // edi
  unsigned int v160; // ecx
  __int64 v161; // r11
  unsigned __int32 v162; // eax
  unsigned __int32 v163; // ett
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  __int64 v165; // rax
  int IsEnabledNoReportingNoInline; // eax
  __int64 v167; // rcx
  int v168; // edx
  int v169; // ebx
  char v170; // bl
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rax
  int v174; // eax
  int v175; // r9d
  int v176; // esi
  ULONG_PTR v177; // r11
  char v178; // cl
  char v179; // al
  __int64 v180; // rdx
  char v181; // cl
  unsigned int v182; // r15d
  unsigned __int8 v183; // r14
  unsigned int mm; // edi
  _KCORE_CONTROL_BLOCK *v185; // rcx
  unsigned __int16 v186; // di
  int v187; // edi
  _BYTE *v188; // rax
  unsigned int ii; // edi
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v190; // rcx
  char *v191; // r8
  unsigned int j; // edx
  char *v193; // r9
  unsigned __int8 *v194; // rcx
  __int64 v195; // rdx
  char v196; // al
  int v197; // ecx
  unsigned int m; // r10d
  char *v199; // r9
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rcx
  __int64 v203; // rcx
  char v204; // al
  int v205; // edi
  int v206; // eax
  int v207; // edx
  int v208; // ebx
  int v209; // edx
  _DWORD *v210; // rcx
  ULONG_PTR v211; // rcx
  char v212; // al
  unsigned __int64 v213; // rcx
  __int64 v214; // r11
  char v215; // al
  int v216; // ecx
  __int64 v217; // rcx
  unsigned int v218; // r11d
  ULONG_PTR v219; // r10
  struct _KPRCB *Prcb; // rbx
  char *v221; // r9
  unsigned __int64 v222; // rcx
  char v223; // al
  int v224; // ecx
  int v225; // r11d
  _KTHREAD *SmtIsolationThread; // r14
  char v227; // al
  char v228; // al
  char v229; // cl
  char v230; // al
  __int64 v231; // rcx
  __int64 v232; // rcx
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-59h]
  int v235; // [rsp+38h] [rbp-51h]
  int v236; // [rsp+38h] [rbp-51h]
  unsigned int v237; // [rsp+38h] [rbp-51h]
  struct _SINGLE_LIST_ENTRY v238; // [rsp+40h] [rbp-49h] BYREF
  __int64 v239; // [rsp+48h] [rbp-41h]
  unsigned __int64 v240; // [rsp+50h] [rbp-39h]
  unsigned __int64 QuantumTarget; // [rsp+58h] [rbp-31h]
  unsigned __int64 *v242; // [rsp+60h] [rbp-29h] BYREF
  __int64 v243; // [rsp+68h] [rbp-21h]
  unsigned int v244; // [rsp+70h] [rbp-19h]
  unsigned int v245; // [rsp+74h] [rbp-15h]
  struct _KTHREAD *v246; // [rsp+78h] [rbp-11h]
  struct _KPRCB **v247; // [rsp+80h] [rbp-9h]
  _KI_RESCHEDULE_CONTEXT *v248; // [rsp+88h] [rbp-1h]
  unsigned __int64 v249; // [rsp+90h] [rbp+7h]
  unsigned __int64 v250; // [rsp+F0h] [rbp+67h] BYREF
  int v251; // [rsp+F8h] [rbp+6Fh]
  char v252; // [rsp+100h] [rbp+77h]
  unsigned __int64 v253; // [rsp+108h] [rbp+7Fh] BYREF

  v252 = a3;
  v251 = a2;
  v3 = 0;
  v238.Next = 0LL;
  Next = a1->DeferredReadyListHead.Next;
  v245 = -1;
  v244 = -1;
  if ( Next )
    a1->DeferredReadyListHead = (_SINGLE_LIST_ENTRY)Next->Next;
  v6 = (__int64)&Next[-27];
  BugCheckParameter1 = (ULONG_PTR)&Next[-27];
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread((__int64)&Next[-27], 1, a2, 1);
  CurrentThread = a1->CurrentThread;
  v246 = CurrentThread;
  KiAbProcessPreContextSwitch((AutoBoost *)CurrentThread);
  v11 = *(_QWORD *)(v6 + 104);
  v235 = 0;
  if ( v11 )
  {
    ScbOffset = a1->ScbOffset;
    v14 = v11 + ScbOffset == 0;
    v12 = v11 + ScbOffset;
    v239 = v12;
    if ( !v14 )
    {
      if ( KiIsThreadConstrainedBySchedulingGroup(v6) )
      {
        if ( KiShouldPreemptionBeDeferred(v9) )
        {
          v239 = v12;
        }
        else
        {
          v239 = v12;
          if ( KiCheckForMaxOverQuotaScb(v12) )
          {
            v235 = -1;
            LODWORD(v250) = -1;
          }
          else
          {
            do
            {
              v10 = (unsigned int)(*(_DWORD *)(v8 + 140) + v10);
              if ( (_DWORD)v10 )
                break;
              v8 = *(_QWORD *)(v8 + 440);
            }
            while ( v8 );
            v9 = (unsigned int)v10;
            v235 = v10;
            LODWORD(v250) = v10;
            if ( !(_DWORD)v10 )
              goto LABEL_8;
          }
          SchedulingGroup = CurrentThread->SchedulingGroup;
          if ( SchedulingGroup )
          {
            v8 = (__int64)SchedulingGroup + a1->ScbOffset;
            if ( v8 )
            {
              if ( KiIsThreadConstrainedBySchedulingGroup((__int64)CurrentThread) && !KiShouldPreemptionBeDeferred(v9) )
              {
                v14 = KiCheckForMaxOverQuotaScb(v8) == 0;
                v165 = v8;
                if ( !v14 )
                  goto LABEL_319;
                do
                {
                  v10 = (unsigned int)(*(_DWORD *)(v8 + 140) + v10);
                  if ( (_DWORD)v10 )
                    break;
                  v8 = *(_QWORD *)(v8 + 440);
                }
                while ( v8 );
                if ( (_DWORD)v10 )
                {
LABEL_319:
                  KiGetComparisonRanks(v12, v165, &v250, &v253);
                  v235 = v250;
                }
              }
            }
          }
        }
      }
      else
      {
        v239 = v12;
      }
    }
  }
  else
  {
    v12 = 0LL;
    v239 = 0LL;
  }
LABEL_8:
  v15 = *(_QWORD *)(v6 + 208);
  v16 = v15 + 48LL * *(unsigned __int8 *)(v6 + 587);
  do
  {
    if ( *(_BYTE *)(v15 + 17) < 5u )
    {
      v17 = *(volatile signed __int32 **)(v15 + 32);
      v18 = 0;
      if ( _interlockedbittestandset(v17, 7u) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, v8, v10) )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*v17 & 0x80u) != 0 || _interlockedbittestandset(v17, 7u) );
      }
      if ( *(_BYTE *)(v15 + 17) == 4 )
      {
        v9 = *(_QWORD *)v15;
        v19 = *(__int64 **)(v15 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v19 != v15 )
          __fastfail(3u);
        *v19 = v9;
        *(_QWORD *)(v9 + 8) = v19;
      }
      _InterlockedAnd(v17, 0xFFFFFF7F);
    }
    v15 += 48LL;
  }
  while ( v15 != v16 );
  _disable();
  updated = KiUpdateTotalCyclesCurrentThread((__int64)a1, (__int64)v246, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v253 = updated;
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v162 = *SchedulerAssist;
    do
    {
      v21 = v162;
      LODWORD(v21) = v162 & 0xFFDFFFFF;
      v163 = v162;
      v162 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v162 & 0xFFDFFFFF, v162);
    }
    while ( v163 != v162 );
    if ( (v162 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v21, SchedulerAssist, v22);
  }
  _enable();
  v25 = 0;
  QuantumTarget = v246->QuantumTarget;
  v26 = *(_QWORD *)(BugCheckParameter1 + 72);
  v240 = v26;
  while ( 1 )
  {
    v27 = v12;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      break;
    do
    {
      if ( (++v25 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26, v21, SchedulerAssist) )
      {
        HvlNotifyLongSpinWait(v25);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v14 = (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0;
  v28 = BugCheckParameter1;
  v250 = 0LL;
  if ( !v14 )
  {
    _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
    v174 = KiReadGuestSchedulerAssistPriority(BugCheckParameter1, &v250);
    v175 = *(_DWORD *)(BugCheckParameter1 + 1024);
    v176 = v174;
    if ( v174 != v175 )
    {
      v177 = (char)v174 + BugCheckParameter1;
      v178 = *(_BYTE *)(v177 + 824);
      if ( v178 == -1 )
        KeBugCheckEx(0x157u, BugCheckParameter1, (char)v174, 1uLL, 0LL);
      *(_BYTE *)(v177 + 824) = v178 + 1;
      *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v174;
      if ( v175 != 32 )
      {
        v211 = (char)v175 + BugCheckParameter1;
        v212 = *(_BYTE *)(v211 + 824);
        if ( !v212 )
          KeBugCheckEx(0x157u, BugCheckParameter1, (char)v175, 2uLL, 0LL);
        v204 = v212 - 1;
        *(_BYTE *)(v211 + 824) = v204;
        if ( !v204 )
          *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v175;
      }
      *(_DWORD *)(BugCheckParameter1 + 1024) = v176;
    }
    v205 = *(char *)(BugCheckParameter1 + 195);
    *(_WORD *)(BugCheckParameter1 + 518) &= 0xF00Fu;
    *(_BYTE *)(BugCheckParameter1 + 870) = 0;
    v206 = KiComputeThreadPriority((struct _KTHREAD *)BugCheckParameter1, 0, 0);
    v208 = v206;
    if ( v206 != v205 )
      KiUpdateThreadPriority(0, v207, BugCheckParameter1, v206, 0);
    v209 = *(unsigned __int8 *)(BugCheckParameter1 + 1122);
    if ( *(_BYTE *)(BugCheckParameter1 + 1122) )
    {
      v210 = *(_DWORD **)(BugCheckParameter1 + 968);
      if ( v210 )
      {
        if ( v210[7] || v210[8] || (v210[5] & 0x4000) != 0 || (*v210 & 0x200000) != 0 )
          v209 = 0;
      }
    }
    if ( v209 != *(unsigned __int8 *)(BugCheckParameter1 + 516) )
      *(_BYTE *)(BugCheckParameter1 + 516) = v209;
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFEFFFFF);
    if ( v205 != v208 && (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
      EtwTraceXSchedulerPriorityUpdate(BugCheckParameter1, v205, v176, v208, (__int64)&v250);
    v3 = 1;
  }
  v29 = 0;
  v30 = 63;
  if ( *(char *)(BugCheckParameter1 + 195) < 16 )
  {
    v31 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(BugCheckParameter1 + 436);
    if ( v240 >= *(_QWORD *)(BugCheckParameter1 + 32) )
    {
      v32 = 4;
      if ( v31 < 2 )
        v32 = 5;
    }
    else
    {
      v32 = 0;
      v239 = v27;
      if ( *(char *)(BugCheckParameter1 + 563) < 14 )
      {
        v239 = v27;
        if ( (*(_WORD *)(BugCheckParameter1 + 518) & 0xFF0) != 0 || (v239 = v27, v31 < 2) )
        {
LABEL_32:
          v34 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter1 + 544) + 136LL);
          v35 = v32 | 2;
          if ( (v34 & 0x2000) == 0 )
            v35 = v32;
          v36 = *(_DWORD *)(BugCheckParameter1 + 120);
          if ( ((unsigned __int8)~v35 & ((v36 & 8) == 0)) != 0 && *(char *)(BugCheckParameter1 + 195) > 0 )
          {
            LOBYTE(v37) = v251;
            if ( (char)v251 > *(char *)(BugCheckParameter1 + 870) )
            {
              LOBYTE(v34) = ~v35 & ((v36 & 8) == 0);
              IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v34);
              v167 = (unsigned int)*(char *)(BugCheckParameter1 + 563);
              v37 = (char)v37;
              v168 = *(char *)(BugCheckParameter1 + 563);
              if ( IsEnabledNoReportingNoInline )
              {
                v167 = v168 + (*(unsigned __int16 *)(BugCheckParameter1 + 518) & 0xFu);
                if ( (int)v167 >= 16 )
                  v167 = 15LL;
                v169 = v167 + v37;
                if ( v169 >= 16 )
                  LOBYTE(v169) = 15;
              }
              else
              {
                v169 = v168 + v37;
                if ( v169 >= 16 )
                  LOBYTE(v169) = 15;
              }
              v170 = v169 - v167;
              Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v167);
              *(_BYTE *)(BugCheckParameter1 + 870) = v170;
              v30 = KiComputeThreadPriority((struct _KTHREAD *)BugCheckParameter1, 0, 0);
            }
          }
          else if ( KiSchedulerForegroundBoostDecayPolicy
                 && (v35 & 6) == 6
                 && (v36 & 8) == 0
                 && *(char *)(BugCheckParameter1 + 195) > 0 )
          {
            v29 |= 2u;
          }
          goto LABEL_37;
        }
      }
    }
    v29 = 1;
    v30 = 63;
    v33 = KiComputeNewPriority((struct _KTHREAD *)BugCheckParameter1);
    if ( !v3 )
      v30 = v33;
    goto LABEL_32;
  }
  if ( v3 )
  {
    v29 = (*(_WORD *)(BugCheckParameter1 + 518) & 0xFF0u) < 0x100;
    if ( v240 >= *(_QWORD *)(BugCheckParameter1 + 32) )
    {
      v29 = 1;
      KiComputeNewPriority((struct _KTHREAD *)BugCheckParameter1);
    }
  }
  else
  {
    v29 = 1;
  }
LABEL_37:
  if ( v30 == 63 )
    goto LABEL_45;
  v38 = (AutoBoost *)KeGetCurrentPrcb();
  v39 = *(_BYTE *)(BugCheckParameter1 + 195);
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    if ( v30 <= v39 )
      goto LABEL_40;
    if ( !*(_BYTE *)(BugCheckParameter1 + 792) )
      goto LABEL_40;
    v155 = (_QWORD *)(BugCheckParameter1 + 808);
    if ( *(_QWORD *)(BugCheckParameter1 + 808) != 1LL )
      goto LABEL_40;
    v156 = (struct _KPRCB *)((char *)v38 + 37304);
    if ( v38 == (AutoBoost *)-37304LL )
      goto LABEL_40;
  }
  else
  {
    if ( v30 <= v39 )
      goto LABEL_40;
    if ( !*(_BYTE *)(BugCheckParameter1 + 792) )
      goto LABEL_40;
    v155 = (_QWORD *)(BugCheckParameter1 + 808);
    if ( *(_QWORD *)(BugCheckParameter1 + 808) != 1LL )
      goto LABEL_40;
    v156 = (struct _KPRCB *)((char *)v38 + 37304);
    if ( v38 == (AutoBoost *)-37304LL )
      goto LABEL_40;
  }
  *v155 = *(_QWORD *)&v156->MxCsr;
  *(_QWORD *)&v156->MxCsr = v155;
  _InterlockedIncrement16((volatile signed __int16 *)(BugCheckParameter1 + 868));
  AutoBoost::KiAbpQueueAutoBoostDpc(v38, v156);
LABEL_40:
  *(_BYTE *)(BugCheckParameter1 + 195) = v30;
  v40 = KiComputeThreadQos(BugCheckParameter1);
  if ( v40 != *(unsigned __int8 *)(BugCheckParameter1 + 516) )
    *(_BYTE *)(BugCheckParameter1 + 516) = v40;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    v41 = *(volatile signed __int32 **)(BugCheckParameter1 + 968);
    v42 = *(char *)(BugCheckParameter1 + 195);
    v43 = (unsigned __int8)*v41;
    if ( v42 != v43 )
      _InterlockedAdd(v41, v42 - v43);
  }
LABEL_45:
  if ( (v29 & 2) != 0 )
    KiScheduleNextForegroundBoost(BugCheckParameter1);
  v44 = 32 * (v29 & 1);
  if ( *(_QWORD *)(BugCheckParameter1 + 568) != KiCpuSetSequence && (*(_DWORD *)(BugCheckParameter1 + 116) & 8) == 0 )
  {
    v159 = *(_DWORD *)(BugCheckParameter1 + 588);
    v245 = v159;
    if ( (unsigned int)KiComputeThreadAffinity(BugCheckParameter1) )
    {
      v160 = *(_DWORD *)(BugCheckParameter1 + 588);
      v244 = v160;
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        v44 |= 0x200u;
      if ( (xmmword_140FC0C10 & 0x8000000) != 0 && v159 != v160 )
        v44 |= 0x400u;
      if ( (v44 & 0x200) != 0 || (v44 & 0x400) != 0 )
        _InterlockedIncrement16((volatile signed __int16 *)(BugCheckParameter1 + 868));
    }
  }
  CoreControlBlock = a1->CoreControlBlock;
  v46 = (unsigned __int64)a1 | 1;
  Prcbs = CoreControlBlock->Prcbs;
  if ( CoreControlBlock->ProcessorCount )
  {
    ProcessorCount = CoreControlBlock->ProcessorCount;
    while ( 1 )
    {
      v49 = *Prcbs;
      v50 = 0;
LABEL_51:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&v49->PrcbLock, 0LL) )
        break;
      ++Prcbs;
      if ( !--ProcessorCount )
      {
        v28 = BugCheckParameter1;
        goto LABEL_54;
      }
    }
    while ( 1 )
    {
      if ( (++v50 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_79:
          HvlNotifyLongSpinWait(v50);
          goto LABEL_68;
        }
        for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
        {
          v61 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v61 + 35) & 1) != 0 )
          {
            v62 = *(_QWORD *)(v61 + 36600);
            if ( !v62 || !*(_BYTE *)(v62 + 65) || !*(_BYTE *)(v62 + 64) )
              goto LABEL_79;
          }
        }
      }
      _mm_pause();
LABEL_68:
      if ( !v49->PrcbLock )
        goto LABEL_51;
    }
  }
LABEL_54:
  v51 = *(char *)(v28 + 195);
  v52 = v44 | 0xF;
  v53 = v253;
  v54 = QuantumTarget;
  v55 = v253 + (unsigned int)KiDirectQuantumTarget;
  LODWORD(v250) = v52;
  Priority = v246->Priority;
  if ( v55 > QuantumTarget )
    LODWORD(v250) = v52 & 0xFFFFFFFA;
  v57 = v52 & 0xFFFFFFFA;
  if ( v55 <= QuantumTarget )
    v57 = v52;
  LODWORD(v250) = v57;
  if ( !v252 )
    LODWORD(v250) = v57 & 0xFFFFFFF3;
  LODWORD(v253) = 0;
  v58 = v57 & 0xFFFFFFF3;
  if ( v252 )
    v58 = v57;
  if ( v51 <= Priority )
  {
    if ( (v58 & 4) != 0 )
    {
      v59 = Priority;
      goto LABEL_82;
    }
    if ( (v58 & 8) == 0 )
    {
      v59 = 0;
      LODWORD(v253) = 0;
      goto LABEL_83;
    }
    if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v57) )
    {
      if ( v246->Priority >= 16 && (*((_DWORD *)&v246->0 + 1) & 0x400000) == 0 )
      {
        v59 = v246->Priority;
LABEL_178:
        v54 = QuantumTarget;
        if ( v59 > Priority )
          v59 = Priority;
LABEL_82:
        LODWORD(v253) = v59;
        if ( v59 >= 16 )
        {
          if ( v51 >= 16 )
          {
            v63 = v59 < v51;
            if ( v59 > v51 )
            {
              v59 = v51;
              LODWORD(v253) = v51;
LABEL_262:
              v64 = v59;
              goto LABEL_86;
            }
LABEL_84:
            if ( v63 )
            {
              v64 = v51;
              goto LABEL_86;
            }
            goto LABEL_262;
          }
          v59 = 15;
          LODWORD(v253) = 15;
        }
LABEL_83:
        v63 = v59 < v51;
        goto LABEL_84;
      }
      v122 = 10;
      if ( KiSchedulerForegroundBoostDecayPolicy )
        v122 = 11;
      v123 = KiComputeThreadPriority(v246, v122, 1);
    }
    else
    {
      v123 = KiComputeNewPriorityNonStacking(v246, v121, 0);
    }
    v59 = v123;
    goto LABEL_178;
  }
  v64 = v51;
  v58 &= ~1u;
  v246->Preempted = 1;
LABEL_86:
  v65 = v58 & 0xFFFFFFFD;
  if ( !a1->NextThread )
    v65 = v58;
  v66 = a1->SharedReadyQueue->ReadySummary | a1->ReadySummary;
  LODWORD(v250) = 0;
  _BitScanReverse((unsigned int *)&v67, v66);
  if ( (int)(v64 + (v65 & 1)) <= v67 )
  {
    v68 = v65 & 0xFFFFFFFD;
  }
  else
  {
    v68 = v65;
    if ( v235
      && (v66 > 1 || !(unsigned __int8)KiIsNextScheduledScbThread(
                                         a1,
                                         *(unsigned int *)(*(_QWORD *)(v239 + 448) + 140LL))) )
    {
      v68 = v65 & 0xFFFFFFFD;
    }
  }
  Group = a1->Group;
  v70 = *(_WORD **)(BugCheckParameter1 + 576);
  if ( (unsigned __int16)Group >= *v70 || ((*(_QWORD *)&v70[4 * Group + 4] >> a1->GroupIndex) & 1) == 0 )
    v68 &= ~2u;
  v71 = *(_DWORD *)(BugCheckParameter1 + 120);
  if ( (v71 & 0x20000) == 0 || (v71 & 0x100000) != 0 )
    v68 &= ~2u;
  if ( (v68 & 1) != 0 )
  {
    if ( !_bittest((const int *)&v66, v64) && (v68 & 2) != 0 )
    {
      v157 = v54 + v240 - v53;
    }
    else
    {
      v157 = (unsigned int)KiDirectQuantumTarget + v240;
      v53 = v54 - (unsigned int)KiDirectQuantumTarget;
    }
    v72 = BugCheckParameter1;
    if ( (v68 & 2) == 0 )
      *(_BYTE *)(BugCheckParameter1 + 565) = 1;
    v158 = v246;
    v68 &= ~0x20u;
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 5u);
    *(_QWORD *)(BugCheckParameter1 + 32) = v157;
    v158->QuantumTarget = v53;
  }
  else
  {
    v72 = BugCheckParameter1;
  }
  LODWORD(v239) = v68;
  if ( (v68 & 0x20) != 0 )
  {
    v73 = *(unsigned __int8 *)(v72 + 651);
    if ( (KiVelocityFlags & 0x40000) != 0 && KiVariableQuantumEnabled )
    {
      v74 = *(unsigned __int8 *)(v72 + 516);
      if ( v74 == 4 )
      {
LABEL_101:
        v73 = 36;
      }
      else if ( v74 == 7 )
      {
LABEL_170:
        v73 = 2;
      }
      else
      {
        switch ( *(_BYTE *)(v72 + 516) )
        {
          case 0:
          case 3:
            goto LABEL_101;
          case 1:
            v73 = 18;
            break;
          case 2:
          case 5:
          case 6:
            goto LABEL_170;
          default:
            break;
        }
      }
    }
    v75 = v240 + (unsigned int)(KiCyclesPerClockQuantum * v73);
    if ( (*(_DWORD *)(v72 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v72 + 120), 5u);
    *(_QWORD *)(v72 + 32) = v75;
  }
  if ( v64 == v51 )
    goto LABEL_115;
  if ( (unsigned __int8)(*(unsigned __int16 *)(v72 + 518) >> 4) < v64 )
    *(_WORD *)(v72 + 518) ^= (*(_WORD *)(v72 + 518) ^ (16 * (char)v64)) & 0xFF0;
  v76 = (AutoBoost *)KeGetCurrentPrcb();
  v77 = *(_BYTE *)(v72 + 195);
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    if ( (char)v64 <= v77 )
      goto LABEL_110;
    if ( !*(_BYTE *)(v72 + 792) )
      goto LABEL_110;
    v153 = (_QWORD *)(v72 + 808);
    if ( *(_QWORD *)(v72 + 808) != 1LL )
      goto LABEL_110;
    v154 = (struct _KPRCB *)((char *)v76 + 37304);
    if ( v76 == (AutoBoost *)-37304LL )
      goto LABEL_110;
  }
  else
  {
    if ( (char)v64 <= v77 )
      goto LABEL_110;
    if ( !*(_BYTE *)(v72 + 792) )
      goto LABEL_110;
    v153 = (_QWORD *)(v72 + 808);
    if ( *(_QWORD *)(v72 + 808) != 1LL )
      goto LABEL_110;
    v154 = (struct _KPRCB *)((char *)v76 + 37304);
    if ( v76 == (AutoBoost *)-37304LL )
      goto LABEL_110;
  }
  *v153 = *(_QWORD *)&v154->MxCsr;
  *(_QWORD *)&v154->MxCsr = v153;
  _InterlockedIncrement16((volatile signed __int16 *)(v72 + 868));
  AutoBoost::KiAbpQueueAutoBoostDpc(v76, v154);
  v72 = BugCheckParameter1;
LABEL_110:
  *(_BYTE *)(v72 + 195) = v64;
  v78 = KiComputeThreadQos(v72);
  v72 = BugCheckParameter1;
  if ( v78 != *(unsigned __int8 *)(BugCheckParameter1 + 516) )
    *(_BYTE *)(BugCheckParameter1 + 516) = v78;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    v79 = *(volatile signed __int32 **)(BugCheckParameter1 + 968);
    v80 = *(char *)(BugCheckParameter1 + 195);
    v81 = (unsigned __int8)*v79;
    if ( v80 != v81 )
      _InterlockedAdd(v79, v80 - v81);
  }
LABEL_115:
  *(_BYTE *)(v72 + 567) = v251;
  *(_BYTE *)(v72 + 566) = 0;
  if ( (v68 & 2) == 0 )
    goto LABEL_198;
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v248 = StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  v83 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v247 = 0LL;
  v242 = (unsigned __int64 *)((unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL);
  v84 = 1;
  v249 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  LODWORD(v240) = 1;
  v85 = *(unsigned __int8 **)(((unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
  v86 = *v85;
  v87 = (struct _KPRCB **)(v85 + 8);
  v247 = (struct _KPRCB **)(v85 + 8);
  v236 = 0;
  v88 = 0;
  if ( !v86 )
    goto LABEL_117;
  v111 = v86;
  v112 = &StaticRescheduleContext->ProcessorEntries[0].32;
  QuantumTarget = v86;
  do
  {
    *(_OWORD *)&v112[-16].0 = 0LL;
    *(_OWORD *)&v112[-8].0 = 0LL;
    *(_QWORD *)&v112->0 = 0LL;
    *(_QWORD *)&v112[-4].0 = -1LL;
    v112[2].AllCompareThreadStateFlags = 63;
    v113 = *v87;
    *(_QWORD *)&v112[-16].0 = *v87;
    *(_QWORD *)&v112[-12].0 = 0LL;
    SharedReadyQueue = v113->SharedReadyQueue;
    if ( SharedReadyQueue )
    {
      if ( (v113->IdleState & 0x10) == 0
        || ((unsigned __int8)KeIsForceParkingEnabled(SharedReadyQueue) && (v113->IdleState & 0x20) != 0
          ? (v173 = ~*(_QWORD *)(v171 + 104))
          : (v173 = *(_QWORD *)(v171 + 80)),
            (v173 & *(_QWORD *)(v172 + 712)) == 0) )
      {
        *(_QWORD *)&v112[-12].0 = v113->SharedReadyQueue;
      }
    }
    NextThread = (__int64)v113->NextThread;
    *(_QWORD *)&v112[-8].0 = NextThread;
    if ( !NextThread )
    {
      NextThread = (__int64)v113->CurrentThread;
      *(_QWORD *)&v112[-8].0 = NextThread;
    }
    if ( v113->NextThread == (_KTHREAD *)NextThread )
    {
      v112->AllCompareThreadStateFlags |= 4u;
    }
    else
    {
      AllCompareThreadStateFlags = v112->AllCompareThreadStateFlags;
      if ( v113 == KeGetCurrentPrcb() )
        v117 = AllCompareThreadStateFlags | 4;
      else
        v117 = AllCompareThreadStateFlags & 0xFB;
      v112->AllCompareThreadStateFlags = v117;
    }
    v118 = 0;
    v14 = (*(_DWORD *)(NextThread + 120) & 0x400000) == 0;
    LOBYTE(v250) = 0;
    if ( !v14 )
    {
      if ( NextThread != BugCheckParameter1 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(NextThread + 64), 0LL) )
          goto LABEL_164;
        v118 = 1;
        LOBYTE(v250) = 1;
      }
      if ( (*(_DWORD *)(NextThread + 120) & 0x400000) != 0 )
      {
        if ( KiIsThreadStateControlledByProcessor(NextThread, (__int64)v113) )
        {
          KiUpdateVPBackingThreadPriority((struct _KTHREAD *)NextThread);
          v118 = v250;
          v87 = v247;
        }
        v111 = QuantumTarget;
      }
      v88 = v236;
      if ( v118 )
        *(_QWORD *)(NextThread + 64) = 0LL;
    }
LABEL_164:
    v119 = v112->AllCompareThreadStateFlags & 0xFE | ((v113->IdleState & 1) == 0);
    v112->AllCompareThreadStateFlags = v119;
    v120 = v119 ^ (v119 ^ (v113->PriorityState->AllFields >> 6)) & 2;
    v112->AllCompareThreadStateFlags = v120;
    if ( ((v120 >> 1) & 1) > v88 )
      v88 = (v120 >> 1) & 1;
    ++v87;
    v112 += 20;
    v236 = v88;
    --v111;
    v247 = v87;
    QuantumTarget = v111;
  }
  while ( v111 );
  StaticRescheduleContext = v248;
  v84 = v240;
  v83 = (unsigned __int64)v242;
LABEL_117:
  StaticRescheduleContext->MaximumThreadIsolationWidth = v88;
  StaticRescheduleContext->IsolationWidth = v84;
  StaticRescheduleContext->ProcessorCount = v86;
  if ( v84 )
    v89 = *(_BYTE *)(*(_QWORD *)(v83 + 36504) + 1LL);
  else
    v89 = 0;
  StaticRescheduleContext->ScanStart = v89;
  if ( v88 )
  {
    v191 = 0LL;
    for ( j = 0; j < v86; ++j )
    {
      v193 = (char *)StaticRescheduleContext + 40 * j;
      if ( *((_QWORD *)v193 + 4) != *(_QWORD *)(*((_QWORD *)v193 + 2) + 36544LL) )
      {
        v191 = v193 + 16;
        break;
      }
    }
    if ( v86 )
    {
      v194 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[0].32;
      v195 = v86;
      do
      {
        if ( v194 - 32 != (unsigned __int8 *)v191 )
        {
          *((_QWORD *)v194 - 2) = *((_QWORD *)v191 + 2);
          *v194 = v191[32] | 0x20;
        }
        v194 += 40;
        --v195;
      }
      while ( v195 );
    }
  }
  v90 = 0LL;
  for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
  {
    if ( StaticRescheduleContext->ProcessorEntries[k].Prcb == a1 )
    {
      v90 = (__int64)&StaticRescheduleContext->ProcessorEntries[k];
      break;
    }
  }
  *(_BYTE *)(v90 + 34) |= 2u;
  v92 = *(_BYTE *)(v90 + 32);
  v93 = *(_QWORD *)v90;
  *(_QWORD *)(v90 + 16) = *(_QWORD *)(*(_QWORD *)v90 + 24LL);
  *(_BYTE *)(v90 + 32) = v92 & 0xC0 | 5;
  v94 = *(_QWORD *)(v93 + 24);
  *(_BYTE *)(v90 + 33) &= ~1u;
  *(_QWORD *)(v90 + 24) = v94;
  if ( (v92 & 2) != 0 )
  {
    for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
    {
      v199 = (char *)StaticRescheduleContext + 40 * m;
      if ( v199 + 16 != (char *)v90 )
      {
        v199[50] |= 2u;
        v200 = *((_QWORD *)v199 + 2);
        *((_QWORD *)v199 + 4) = *(_QWORD *)(v200 + 24);
        v199[48] = v199[48] & 0xC0 | 5;
        v201 = *(_QWORD *)(v200 + 24);
        v199[49] &= ~1u;
        *((_QWORD *)v199 + 5) = v201;
      }
    }
    if ( (v92 & 2) != 0 )
      StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
  }
  v95 = 0LL;
  for ( n = 0; n < StaticRescheduleContext->ProcessorCount; ++n )
  {
    if ( StaticRescheduleContext->ProcessorEntries[n].Prcb == a1 )
    {
      v95 = (__int64)&StaticRescheduleContext->ProcessorEntries[n];
      break;
    }
  }
  v250 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    DoesThreadDominateRescheduleContextEntry = KiEvaluateGroupSchedulingPreemption(v95, BugCheckParameter1, 0LL, &v250);
    v72 = BugCheckParameter1;
    if ( DoesThreadDominateRescheduleContextEntry )
      goto LABEL_133;
  }
  else
  {
    v179 = *(_BYTE *)(v95 + 32);
    v180 = *(_QWORD *)(v95 + 16);
    v72 = BugCheckParameter1;
    if ( (v179 & 1) != 0
      || (v181 = *(_BYTE *)(BugCheckParameter1 + 195), v181 > *(char *)(v180 + 195))
      || v181 == *(_BYTE *)(v180 + 195) && (v179 & 0x18) != 0
      || (v179 & 0x10) != 0 && v181 )
    {
LABEL_133:
      v98 = (*(_DWORD *)(v72 + 120) >> 1) & 1;
      if ( v98 < ((*(unsigned __int8 *)(v95 + 32) >> 1) & 1u) )
        v98 = (*(unsigned __int8 *)(v95 + 32) >> 1) & 1;
      if ( v98 == 1 )
      {
        for ( ii = 0; ii < StaticRescheduleContext->ProcessorCount; ++ii )
        {
          v190 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * ii + 8 * ii);
          if ( v190 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)v95 )
          {
            DoesThreadDominateRescheduleContextEntry = KiDoesThreadDominateRescheduleContextEntry(
                                                         v190,
                                                         (struct _KTHREAD *)v72,
                                                         0,
                                                         0LL);
            v72 = BugCheckParameter1;
            if ( !DoesThreadDominateRescheduleContextEntry )
              goto LABEL_137;
          }
        }
      }
      DoesThreadDominateRescheduleContextEntry = 1;
    }
    else
    {
      DoesThreadDominateRescheduleContextEntry = 0;
    }
  }
LABEL_137:
  v68 = v239 ^ ((unsigned __int8)v239 ^ (unsigned __int8)(2 * DoesThreadDominateRescheduleContextEntry)) & 2;
  if ( (DoesThreadDominateRescheduleContextEntry & 1) != 0 )
  {
    *(_BYTE *)(v72 + 565) = 0;
    v99 = 0LL;
    for ( jj = 0; jj < StaticRescheduleContext->ProcessorCount; ++jj )
    {
      if ( StaticRescheduleContext->ProcessorEntries[jj].Prcb == a1 )
      {
        v99 = (__int64)&StaticRescheduleContext->ProcessorEntries[jj];
        break;
      }
    }
    v101 = (*(_DWORD *)(v72 + 120) >> 1) & 1;
    v102 = (*(unsigned __int8 *)(v99 + 32) >> 1) & 1;
    LODWORD(v250) = v101;
    if ( v101 >= v102 )
    {
      if ( v101 )
      {
        v218 = 0;
        if ( StaticRescheduleContext->ProcessorCount )
        {
          v219 = BugCheckParameter1;
          do
          {
            Prcb = StaticRescheduleContext->ProcessorEntries[v218].Prcb;
            v221 = (char *)StaticRescheduleContext + 40 * v218;
            v222 = *((_QWORD *)v221 + 5);
            if ( Prcb == a1 )
            {
              if ( v222 && v222 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v222) )
              {
                if ( (v221[49] & 1) != 0 )
                  *(_DWORD *)(v231 + 116) |= 2u;
                *(_BYTE *)(v231 + 565) = 1;
                KiInsertDeferredReadyList(&v238, v231);
              }
              v221[48] &= ~1u;
              v223 = v221[48];
              *((_QWORD *)v221 + 4) = v219;
              v224 = *(_DWORD *)(v219 + 120);
              v221[49] &= ~1u;
              *((_QWORD *)v221 + 5) = v219;
              v221[48] = (v223 & 0xFD ^ (2 * ((v224 & 2) != 0))) & 0xC3 | 4;
              if ( !(unsigned __int8)KiIsPrcbThread(v219) )
                *(_DWORD *)(v219 + 536) = Prcb->Number;
            }
            else
            {
              SmtIsolationThread = Prcb->SmtIsolationThread;
              if ( v222 && v222 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v222) )
              {
                if ( (v221[49] & 1) != 0 )
                  *(_DWORD *)(v232 + 116) |= 2u;
                *(_BYTE *)(v232 + 565) = 1;
                KiInsertDeferredReadyList(&v238, v232);
              }
              v221[48] &= ~1u;
              v227 = v221[48] & 0xFD;
              *((_QWORD *)v221 + 4) = v219;
              v228 = (v227 ^ (2 * ((*(_DWORD *)(v219 + 120) & 2) != 0))) & 0xE3 | 4;
              v229 = v228 | 0x20;
              v230 = v228 & 0xDF;
              if ( (_KTHREAD *)v219 == SmtIsolationThread )
                v229 = v230;
              v221[48] = v229;
              v221[49] &= ~1u;
              *((_QWORD *)v221 + 5) = SmtIsolationThread;
              if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
                SmtIsolationThread->NextProcessor = Prcb->Number;
            }
            v218 = v225 + 1;
          }
          while ( v218 < StaticRescheduleContext->ProcessorCount );
          StaticRescheduleContext->MaximumThreadIsolationWidth = v250;
          v110 = v68 & 0xFFFFFF7F;
        }
        else
        {
          StaticRescheduleContext->MaximumThreadIsolationWidth = v101;
          v110 = v68 & 0xFFFFFF7F;
        }
      }
      else
      {
        v213 = *(_QWORD *)(v99 + 24);
        v214 = *(_QWORD *)v99;
        if ( v213 && v213 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v213) )
        {
          if ( (*(_BYTE *)(v99 + 33) & 1) != 0 )
            *(_DWORD *)(v217 + 116) |= 2u;
          *(_BYTE *)(v217 + 565) = 1;
          KiInsertDeferredReadyList(&v238, v217);
        }
        v215 = *(_BYTE *)(v99 + 32) & 0xFE;
        *(_QWORD *)(v99 + 16) = BugCheckParameter1;
        *(_BYTE *)(v99 + 32) = v215;
        v216 = *(_DWORD *)(BugCheckParameter1 + 120);
        *(_BYTE *)(v99 + 33) &= ~1u;
        *(_QWORD *)(v99 + 24) = BugCheckParameter1;
        *(_BYTE *)(v99 + 32) = (v215 & 0xFD ^ (2 * ((v216 & 2) != 0))) & 0xC3 | 4;
        if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) != &unk_140FC9F40 )
          *(_DWORD *)(BugCheckParameter1 + 536) = *(_DWORD *)(v214 + 36);
        StaticRescheduleContext->MaximumThreadIsolationWidth = v101;
        v110 = v68 & 0xFFFFFF7F;
      }
    }
    else
    {
      for ( kk = 0; kk < StaticRescheduleContext->ProcessorCount; ++kk )
      {
        v104 = StaticRescheduleContext->ProcessorEntries[kk].Prcb;
        v105 = (char *)StaticRescheduleContext + 40 * kk;
        v106 = *((_QWORD *)v105 + 5);
        if ( v104 == a1 )
        {
          if ( v106 && v106 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v106) )
          {
            if ( (v105[49] & 1) != 0 )
              *(_DWORD *)(v203 + 116) |= 2u;
            *(_BYTE *)(v203 + 565) = 1;
            KiInsertDeferredReadyList(&v238, v203);
          }
          v105[48] &= ~1u;
          v196 = v105[48];
          *((_QWORD *)v105 + 4) = v72;
          v197 = *(_DWORD *)(v72 + 120);
          v105[49] &= ~1u;
          *((_QWORD *)v105 + 5) = v72;
          v105[48] = (v196 & 0xFD ^ (2 * ((v197 & 2) != 0))) & 0xC3 | 4;
          if ( !(unsigned __int8)KiIsPrcbThread(v72) )
            *(_DWORD *)(v72 + 536) = v104->Number;
        }
        else
        {
          IdleThread = v104->IdleThread;
          if ( v106 && v106 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v106) )
          {
            if ( (v105[49] & 1) != 0 )
              *(_DWORD *)(v202 + 116) |= 2u;
            *(_BYTE *)(v202 + 565) = 1;
            KiInsertDeferredReadyList(&v238, v202);
          }
          v105[48] |= 1u;
          v108 = v105[48];
          *((_QWORD *)v105 + 4) = IdleThread;
          v105[48] = (v108 & 0xFD ^ (2 * ((*((_DWORD *)&IdleThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
          v105[49] &= ~1u;
          *((_QWORD *)v105 + 5) = IdleThread;
          if ( !(unsigned __int8)KiIsPrcbThread(IdleThread) )
            *(_DWORD *)(v109 + 536) = v104->Number;
          v72 = BugCheckParameter1;
        }
      }
      StaticRescheduleContext->MaximumThreadIsolationWidth = v101;
      v110 = v68 & 0xFFFFFF7F | 0x80;
      KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v238);
    }
    v182 = 0;
    v183 = 0;
    if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
      v182 = 2;
    for ( mm = 0; mm < StaticRescheduleContext->ProcessorCount; ++mm )
      v183 |= KiCommitRescheduleContextEntry(
                (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                      + 32 * mm
                                                      + 8 * mm),
                a1,
                v182,
                &v238);
    if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
    {
      v185 = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
      if ( ++v185->ScanStartIndex >= v185->ProcessorCount )
        v185->ScanStartIndex = 0;
    }
    v186 = v183 << 8;
    v125 = 0;
    v250 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL;
    v187 = v110 ^ ((unsigned __int16)v110 ^ v186) & 0x100;
    v188 = *(_BYTE **)(((unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
    GroupSetMember = (unsigned __int8)*v188;
    if ( *v188 )
    {
      do
      {
        GroupSetMember = (unsigned int)(GroupSetMember - 1);
        _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)&v188[8 * GroupSetMember + 8] + 48LL), 0LL);
      }
      while ( (_DWORD)GroupSetMember );
    }
    v72 = BugCheckParameter1;
    v68 = v187 | 0x50;
    v46 = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    if ( (v68 & 0x100) != 0 )
    {
      WORD1(v250) = (unsigned __int8)v253;
      LOWORD(v250) = (2 * (v68 & 1 | (2 * ((v68 >> 2) & 1 | (2 * ((v68 >> 3) & 1)))))) | 1;
      v242 = &v250;
      v243 = 0x100000004LL;
      if ( StaticRescheduleContext->ProcessorCount )
      {
        while ( 1 )
        {
          v132 = StaticRescheduleContext->ProcessorEntries[v125].___u6[0];
          v133 = StaticRescheduleContext->ProcessorEntries[v125].Prcb;
          if ( (v132 & 0x10) != 0 )
          {
            TargetType = a1->DeferredDispatchInterrupts.TargetType;
            if ( !TargetType )
              goto LABEL_182;
            if ( TargetType == 1 )
            {
              SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
              if ( SingleTargetIndex == v133->Number )
                goto LABEL_183;
              a1->DeferredDispatchInterrupts.TargetType = 2;
              v136 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) & 0x3F;
              v137 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                                   + SingleTargetIndex) >> 6;
              if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v137 )
              {
                if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v137 )
                {
                  a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v137 + 1;
                  goto LABEL_222;
                }
              }
              else
              {
LABEL_222:
                v138 = v137;
                v139 = a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v137];
                _bittestandset64((__int64 *)&v139, v136);
                a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v138] = v139;
              }
            }
            v140 = v133->Group;
            GroupSetMember = v133->GroupSetMember;
            if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v140 )
              goto LABEL_231;
            goto LABEL_224;
          }
          if ( (v132 & 8) == 0 || !v133->IdleHalt )
            goto LABEL_183;
          v124 = a1->DeferredDispatchInterrupts.TargetType;
          if ( !v124 )
          {
LABEL_182:
            a1->DeferredDispatchInterrupts.TargetType = 1;
            a1->DeferredDispatchInterrupts.SingleTargetIndex = v133->Number;
            goto LABEL_183;
          }
          if ( v124 == 1 )
          {
            v142 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
            if ( v142 == v133->Number )
              goto LABEL_183;
            a1->DeferredDispatchInterrupts.TargetType = 2;
            v143 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v142) & 0x3F;
            v144 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v142) >> 6;
            if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v144 )
              goto LABEL_229;
            if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v144 )
              break;
          }
LABEL_230:
          v140 = v133->Group;
          GroupSetMember = v133->GroupSetMember;
          if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v140 )
            goto LABEL_231;
LABEL_224:
          if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v140 )
          {
            a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v140 + 1;
LABEL_231:
            a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v140] |= GroupSetMember;
          }
LABEL_183:
          if ( (StaticRescheduleContext->ProcessorEntries[v125].___u6[0] & 2) != 0 )
          {
            NewThread = StaticRescheduleContext->ProcessorEntries[v125].NewThread;
            if ( NewThread == (_KTHREAD *)v72 )
              v152 = &v242;
            else
              v152 = 0LL;
            EtwTraceScheduleThread(NewThread, v133, v152);
          }
          if ( (StaticRescheduleContext->ProcessorEntries[v125].___u6[0] & 4) != 0 )
          {
            if ( v133->SchedulerAssist )
            {
              GroupSetMember = (unsigned __int64)&a1->SchedulerAssist;
              if ( a1->SchedulerAssist )
              {
                if ( a1 != v133 )
                {
                  p_SchedulerAssist = &a1->SchedulerAssist;
                  v148 = *(_DWORD *)v133->SchedulerAssist;
                  if ( (v148 & 0x40000) != 0 )
                    p_SchedulerAssist = &a1->SchedulerAssist;
                  if ( (v148 & 0x100000) != 0
                    || (*(_DWORD *)v133->SchedulerAssist & 0x40000) != 0
                    && (GroupSetMember = (unsigned __int64)p_SchedulerAssist,
                        (unsigned __int8)v148 < StaticRescheduleContext->ProcessorEntries[v125].KickPriority) )
                  {
                    v14 = HvlpVirtualProcessorsIdentityMapped == 0;
                    v149 = *(_DWORD **)GroupSetMember;
                    *(_DWORD *)(*(_QWORD *)GroupSetMember + 12LL) = 2;
                    Number = v133->Number;
                    v237 = v133->Number;
                    if ( v14 )
                    {
                      StaticRescheduleContext = v248;
                      LODWORD(Number) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                      v237 = Number;
                    }
                    v149[2] = Number;
                    if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                    {
                      EtwTraceXSchedulerPriorityKickSend(v133->Number, 2LL, v149);
                      LODWORD(Number) = v237;
                    }
                    GroupSetMember = 0LL;
                    __writemsr(0x400000C2u, (unsigned int)Number);
                  }
                }
              }
            }
          }
          if ( (StaticRescheduleContext->ProcessorEntries[v125].___u6[0] & 1) != 0 )
            _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v125].NewThread->KeReferenceCount);
          ++v125;
          v72 = BugCheckParameter1;
          if ( v125 >= StaticRescheduleContext->ProcessorCount )
            goto LABEL_189;
        }
        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v144 + 1;
LABEL_229:
        v145 = v144;
        v146 = a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v144];
        _bittestandset64((__int64 *)&v146, v143);
        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v145] = v146;
        goto LABEL_230;
      }
LABEL_189:
      KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts, GroupSetMember);
      v72 = BugCheckParameter1;
      LOBYTE(v125) = 0;
    }
    v126 = v238.Next;
    if ( v238.Next )
    {
      v238.Next = v238.Next->Next;
      do
      {
        KiDeferredReadySingleThread(a1, (ULONG_PTR)&v126[-27], &v238, 0LL);
        v126 = v238.Next;
        LOBYTE(v125) = v125 + 1;
        if ( v238.Next )
          v238.Next = v238.Next->Next;
        if ( (v125 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts, v127);
      }
      while ( v126 );
      KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts, v127);
      v72 = BugCheckParameter1;
    }
  }
LABEL_198:
  if ( (v68 & 0x40) == 0 )
  {
    v250 = v46 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v46 & 1) == 0 )
    {
      v130 = &v250;
      LODWORD(v129) = 1;
      goto LABEL_201;
    }
    v128 = *(_BYTE **)((v46 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
    LODWORD(v129) = (unsigned __int8)*v128;
    v130 = (unsigned __int64 *)(v128 + 8);
    if ( *v128 )
    {
      do
      {
LABEL_201:
        v129 = (unsigned int)(v129 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(v130[v129] + 48), 0LL);
      }
      while ( (_DWORD)v129 );
    }
    *(_QWORD *)(v72 + 64) = 0LL;
  }
  if ( (v68 & 0x600) != 0 )
  {
    if ( (v68 & 0x200) != 0 )
    {
      v131 = *(_DWORD *)(v72 + 116) >> 3;
      LOBYTE(v131) = (*(_DWORD *)(v72 + 116) & 8) != 0;
      EtwTraceThreadAffinity(v72, *(unsigned __int16 *)(v72 + 584), v131, 0, *(_QWORD *)(v72 + 576), 1334);
    }
    if ( (v68 & 0x400) != 0 && (xmmword_140FC0C10 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(BugCheckParameter1, 1350LL, v245, v244);
    v72 = BugCheckParameter1;
    _InterlockedDecrement16((volatile signed __int16 *)(BugCheckParameter1 + 868));
  }
  if ( (v68 & 0x10) == 0 )
  {
    WORD1(v250) = (unsigned __int8)v253;
    LOWORD(v250) = 2 * (v68 & 1 | (2 * ((v68 >> 2) & 1 | (2 * ((v68 >> 3) & 1)))));
    v242 = &v250;
    v243 = 0x100000004LL;
    if ( (unsigned __int8)KiCanThreadBeReadiedImmediately(v72) )
      KiDeferredReadyThread(a1);
    else
      KiInswapAndReadyThread(a1, v161, &v242);
  }
  KiAbProcessPostContextSwitch(v246);
  return a1->DeferredReadyListHead.Next == 0LL;
}
