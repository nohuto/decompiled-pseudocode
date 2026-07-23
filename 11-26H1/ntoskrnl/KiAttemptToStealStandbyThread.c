/*
 * XREFs of KiAttemptToStealStandbyThread @ 0x14022D190
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x14022F870 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiIsThreadStateControlledByProcessor @ 0x14023944C (KiIsThreadStateControlledByProcessor.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KeIsForceParkingEnabled @ 0x1404366F0 (KeIsForceParkingEnabled.c)
 *     Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline @ 0x1405FDBFC (Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiAttemptToStealStandbyThread(struct _KPRCB *a1, _KPRCB *a2, _KPRCB *a3)
{
  _KPRCB *v3; // r14
  __int64 v4; // r8
  __int64 v5; // rbx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rdx
  _KCORE_CONTROL_BLOCK *v7; // rax
  struct _KPRCB *Prcbs; // r12
  __int64 ProcessorCount; // rax
  unsigned __int64 *v10; // r13
  __int64 v11; // rdi
  struct _KPRCB *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned int v16; // r15d
  unsigned __int64 v17; // r13
  __int64 *v18; // rdx
  _KISOLATION_WIDTH v19; // r15d
  __int64 QpcToTscIncrementShift; // rcx
  unsigned int v21; // r14d
  _KTHREAD *NextThread; // r9
  unsigned __int8 v23; // r9
  _BYTE *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 *v26; // r8
  unsigned __int64 *v27; // rsi
  unsigned __int64 v28; // rcx
  _PPM_IDLE_STATES *IdleStates; // r10
  unsigned __int64 QpcToTscIncrement; // rax
  __int64 TargetIdleState; // r8
  unsigned __int64 Latency; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  _KPRCB *v35; // r9
  unsigned __int64 AllFields; // rdx
  int v37; // r8d
  _KHETRO_HWFEEDBACK_TYPE *HwFeedbackClassList; // rcx
  __int64 v39; // rcx
  volatile unsigned __int8 EfficiencySchedulingClass; // cl
  _KPRCB *v41; // r10
  _KHETRO_HWFEEDBACK_TYPE *v42; // rax
  __int64 v43; // r9
  unsigned __int8 PerformanceSchedulingClass; // al
  _KTHREAD *v45; // r12
  unsigned int v46; // ecx
  _KAFFINITY_EX *Affinity; // rdx
  __int64 Group; // rax
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  struct _KPRCB **v50; // r8
  unsigned int v51; // r9d
  unsigned __int8 *v52; // rax
  int v53; // r14d
  _KI_RESCHEDULE_CONTEXT *v54; // r10
  _KI_RESCHEDULE_CONTEXT *v55; // rcx
  unsigned __int8 v56; // al
  _KI_RESCHEDULE_CONTEXT *v57; // r12
  unsigned __int64 v58; // r13
  int v59; // r14d
  struct _KPRCB **v60; // r8
  unsigned int v61; // r9d
  unsigned __int8 *v62; // rax
  int v63; // r15d
  __int64 v64; // r8
  unsigned int v65; // edx
  unsigned __int8 *v66; // rax
  __int64 v67; // r8
  __int64 v68; // rax
  unsigned __int8 v69; // dl
  __int64 v70; // rcx
  __int64 v71; // rax
  _KI_RESCHEDULE_CONTEXT *v72; // r12
  _KI_RESCHEDULE_CONTEXT *v73; // r13
  unsigned int v74; // r15d
  unsigned int v75; // r14d
  _KCORE_CONTROL_BLOCK *v76; // rcx
  _BYTE *v77; // rax
  __int64 v78; // rdx
  unsigned __int64 *v79; // r8
  char v80; // r11
  __int64 v81; // r9
  unsigned __int64 n; // rdx
  _KPRCB *v83; // r15
  unsigned int v84; // r10d
  unsigned int jj; // r11d
  _KPRCB *v86; // rbx
  unsigned __int8 *v87; // r9
  unsigned __int64 v88; // rcx
  _KTHREAD *IdleThread; // r14
  unsigned __int8 v90; // al
  int v91; // r11d
  _KTHREAD *v92; // r15
  $8EBF9F2B27741A17C5BF2EE4B27176E1 *v93; // r12
  struct _KPRCB *v94; // r11
  _KSHARED_READY_QUEUE *v95; // rcx
  _KTHREAD *v96; // r10
  unsigned __int8 v97; // cl
  unsigned __int8 v98; // cl
  unsigned __int8 v99; // dl
  unsigned __int8 v100; // cl
  _KTHREAD *v101; // r14
  unsigned __int8 *v102; // r12
  struct _KPRCB *v103; // r11
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  _KTHREAD *CurrentThread; // r10
  unsigned __int8 v106; // cl
  unsigned __int8 v107; // cl
  unsigned __int8 v108; // dl
  unsigned __int8 v109; // cl
  struct _KPRCB *v110; // rsi
  char v111; // r12
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rbx
  char v119; // al
  int v120; // ecx
  char v121; // r15
  unsigned int v122; // r14d
  unsigned int v123; // ebx
  struct _KPRCB *kk; // r13
  _KCORE_CONTROL_BLOCK *v125; // rcx
  _BYTE *v126; // rax
  unsigned __int64 *v127; // r8
  char v128; // r14
  __int64 v129; // rdx
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned int ii; // ebx
  _KPRCB *v132; // r14
  unsigned __int8 *v133; // r9
  unsigned __int64 v134; // rcx
  unsigned __int8 v135; // al
  int v136; // ecx
  _KTHREAD *SmtIsolationThread; // r15
  char v138; // al
  char v139; // al
  unsigned __int8 v140; // cl
  unsigned __int8 v141; // al
  unsigned __int8 v142; // al
  int v143; // ecx
  __int64 v144; // r8
  unsigned int j; // edx
  _KPRCB *Prcb; // rax
  __int64 v147; // r10
  unsigned __int8 *v148; // rcx
  __int64 v149; // rdx
  _QWORD *v150; // r8
  unsigned int k; // edx
  _BYTE *v152; // rcx
  __int64 v153; // rdx
  unsigned int m; // r10d
  unsigned __int8 *v155; // rax
  unsigned __int8 AllCompareThreadStateFlags; // r9
  __int64 v157; // r11
  unsigned __int8 *u5; // rax
  _KTHREAD *v159; // rax
  _KTHREAD *v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rcx
  __int64 v163; // rcx
  __int64 v164; // rcx
  _KI_RESCHEDULE_CONTEXT *v165; // r14
  unsigned int mm; // ebx
  unsigned int nn; // ebx
  __int16 v168; // [rsp+28h] [rbp-E0h]
  _KTHREAD *v169; // [rsp+30h] [rbp-D8h]
  _KTHREAD *v170; // [rsp+30h] [rbp-D8h]
  _KTHREAD *v171; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v172; // [rsp+38h] [rbp-D0h] BYREF
  struct _SINGLE_LIST_ENTRY v173; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v174; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v175; // [rsp+50h] [rbp-B8h] BYREF
  _KPRCB *v176; // [rsp+58h] [rbp-B0h]
  _KPRCB *v177; // [rsp+60h] [rbp-A8h]
  __int64 v178; // [rsp+68h] [rbp-A0h]
  _KI_RESCHEDULE_CONTEXT *v179; // [rsp+70h] [rbp-98h]
  unsigned __int64 i; // [rsp+78h] [rbp-90h]
  _KI_RESCHEDULE_CONTEXT *v181; // [rsp+80h] [rbp-88h]
  struct _KPRCB *v182; // [rsp+88h] [rbp-80h]
  struct _KPRCB *v183; // [rsp+90h] [rbp-78h]
  unsigned __int64 v184; // [rsp+98h] [rbp-70h]
  unsigned __int64 v185; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v186[2]; // [rsp+A8h] [rbp-60h] BYREF
  char v187; // [rsp+B8h] [rbp-50h] BYREF
  char v188; // [rsp+B9h] [rbp-4Fh]
  int v189; // [rsp+BCh] [rbp-4Ch]
  int v190; // [rsp+C0h] [rbp-48h]
  _QWORD v191[4]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v192[192]; // [rsp+E8h] [rbp-20h] BYREF

  v3 = a3;
  v177 = a3;
  v176 = a2;
  v183 = a1;
  memset_0(&v187, 0, 0xF0uLL);
  v173.Next = 0LL;
  v5 = 0LL;
  v172 = 0LL;
  CoreControlBlock = v3->CoreControlBlock;
  v7 = v176->CoreControlBlock;
  if ( v7 == CoreControlBlock )
  {
    KiAcquirePrcbLocksForIsolationUnit(v3, 1LL, &v172);
    v11 = (__int64)v172;
    goto LABEL_24;
  }
  Prcbs = (struct _KPRCB *)v7->Prcbs;
  ProcessorCount = v7->ProcessorCount;
  v10 = (unsigned __int64 *)CoreControlBlock->Prcbs;
  v5 = (unsigned __int64)v176 | 1;
  v11 = (unsigned __int64)v3 | 1;
  v172 = (unsigned __int64 *)((unsigned __int64)v3 | 1);
  v12 = (struct _KPRCB *)((char *)Prcbs + 8 * ProcessorCount);
  v13 = CoreControlBlock->ProcessorCount;
  v182 = v12;
  v14 = (unsigned __int64)&CoreControlBlock->Prcbs[v13];
  for ( i = v14; ; v14 = i )
  {
    if ( Prcbs < v12 )
      goto LABEL_4;
    if ( (unsigned __int64)v10 >= v14 )
      break;
    if ( Prcbs >= v12 )
    {
      v15 = *v10;
LABEL_10:
      ++v10;
      goto LABEL_11;
    }
LABEL_4:
    v15 = *(_QWORD *)&Prcbs->MxCsr;
    if ( (unsigned __int64)v10 >= v14 )
    {
      Prcbs = (struct _KPRCB *)((char *)Prcbs + 8);
      goto LABEL_11;
    }
    if ( v15 >= *v10 )
    {
      v15 = *v10;
      goto LABEL_10;
    }
    Prcbs = (struct _KPRCB *)((char *)Prcbs + 8);
LABEL_11:
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
    {
      do
      {
        if ( (++v16 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12, CoreControlBlock, v4) )
        {
          HvlNotifyLongSpinWait(v16);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v15 + 48) );
    }
    v12 = v182;
  }
  v3 = v177;
LABEL_24:
  if ( (v3->IdleState & 1) != 0 )
    goto LABEL_28;
  v17 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  v18 = 0LL;
  v19 = v11 & 1;
  v184 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  LODWORD(v178) = v19;
  QpcToTscIncrementShift = 0LL;
  if ( (v11 & 1) != 0 )
  {
    if ( v19 == KiIsolationWidthCore )
    {
      v66 = *(unsigned __int8 **)(v17 + 36504);
      QpcToTscIncrementShift = *v66;
      v18 = (__int64 *)(v66 + 8);
    }
    v21 = 1;
    if ( (_DWORD)QpcToTscIncrementShift )
    {
      v67 = (unsigned int)QpcToTscIncrementShift;
      do
      {
        v68 = *v18++;
        QpcToTscIncrementShift = (*(_BYTE *)(v68 + 35) & 1) == 0;
        v21 &= QpcToTscIncrementShift;
        --v67;
      }
      while ( v67 );
    }
  }
  else
  {
    v21 = (*(_BYTE *)(v17 + 35) & 1) == 0;
  }
  NextThread = v176->NextThread;
  if ( !NextThread
    || NextThread == v176->IdleThread
    || NextThread == v176->DpcDelegateThread
    || NextThread == v176->SmtIsolationThread )
  {
    goto LABEL_28;
  }
  if ( (*(_BYTE *)&v176->PriorityState->0 & 0x7Fu) < 0x10 )
  {
    if ( (KiVelocityFlags & 0x1000000) == 0 )
      goto LABEL_28;
    if ( !v176->IdleHalt )
      goto LABEL_28;
    IdleStates = v176->PowerState.IdleStates;
    if ( !IdleStates || !IdleStates->ProcessorIdleCount )
      goto LABEL_28;
    QpcToTscIncrementShift = v176->QpcToTscIncrementShift;
    QpcToTscIncrement = v176->QpcToTscIncrement;
    TargetIdleState = v176->PowerState.TargetIdleState;
    v175 = 0LL;
    Latency = IdleStates->State[TargetIdleState].Latency;
    if ( (_BYTE)QpcToTscIncrementShift )
      Latency <<= QpcToTscIncrementShift;
    v18 = (__int64 *)(4 * ((Latency * (unsigned __int128)QpcToTscIncrement) >> 64));
    if ( (unsigned __int64)v18 <= NextThread->ExpectedRunTime )
      goto LABEL_28;
  }
  IsEnabledDeviceUsageNoInline = Feature_CrossProcessorClassThreadStealing__private_IsEnabledDeviceUsageNoInline(
                                   QpcToTscIncrementShift,
                                   v18);
  v35 = v176;
  if ( !IsEnabledDeviceUsageNoInline )
  {
    v41 = v177;
    if ( v176->PowerState.PerformanceSchedulingClass != v177->PowerState.PerformanceSchedulingClass )
      goto LABEL_28;
LABEL_60:
    v45 = v35->NextThread;
    v169 = v45;
    v46 = (*((_DWORD *)&v45->0 + 1) >> 1) & 1;
    if ( (v46 != 1 || v41->CoreControlBlock != v35->CoreControlBlock) && v46 > v21 )
      goto LABEL_28;
    if ( v45->AffinityVersion != KiCpuSetSequence && (v45->MiscFlags & 8) == 0 )
      goto LABEL_28;
    Affinity = v45->Affinity;
    Group = v41->Group;
    if ( (unsigned __int16)Group >= Affinity->Count )
      goto LABEL_28;
    if ( ((Affinity->Bitmap[Group] >> v41->GroupIndex) & 1) == 0 )
      goto LABEL_28;
    v45->NextProcessor = v41->Number;
    if ( !v45 )
      goto LABEL_28;
    StaticRescheduleContext = v183->StaticRescheduleContext;
    v181 = StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
    if ( !v5 )
    {
      KiStartRescheduleContext(StaticRescheduleContext, &v172, 0LL);
      v169 = v45;
      v57 = StaticRescheduleContext;
      v179 = StaticRescheduleContext;
      goto LABEL_82;
    }
    v172 = 0LL;
    v50 = 0LL;
    v185 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
    v51 = 0;
    if ( (v11 & 1) != 0 )
    {
      if ( v19 == KiIsolationWidthCore )
      {
        v52 = *(unsigned __int8 **)(v17 + 36504);
        v51 = *v52;
        v50 = (struct _KPRCB **)(v52 + 8);
        v172 = (unsigned __int64 *)(v52 + 8);
      }
      v53 = 0;
      if ( !v51 )
      {
LABEL_72:
        v54 = v181;
        v55 = v181;
        v181->MaximumThreadIsolationWidth = v53;
        v55->IsolationWidth = v19;
        v55->ProcessorCount = v51;
        if ( v19 )
          v56 = *(_BYTE *)(*(_QWORD *)(v17 + 36504) + 1LL);
        else
          v56 = 0;
        v55->ScanStart = v56;
        if ( v53 )
        {
          v144 = 0LL;
          for ( j = 0; j < v51; ++j )
          {
            Prcb = v54->ProcessorEntries[j].Prcb;
            v147 = (__int64)v54 + 40 * j;
            if ( *(_KTHREAD **)(v147 + 32) != Prcb->SmtIsolationThread )
            {
              v144 = v147 + 16;
              v54 = v181;
              break;
            }
            v54 = v181;
          }
          if ( v51 )
          {
            v148 = (unsigned __int8 *)&v54->ProcessorEntries[0].32;
            v149 = v51;
            do
            {
              if ( v148 - 32 != (unsigned __int8 *)v144 )
              {
                *((_QWORD *)v148 - 2) = *(_QWORD *)(v144 + 16);
                *v148 = *(_BYTE *)(v144 + 32) | 0x20;
              }
              v148 += 40;
              --v149;
            }
            while ( v149 );
          }
        }
        v57 = (_KI_RESCHEDULE_CONTEXT *)&v187;
        v179 = (_KI_RESCHEDULE_CONTEXT *)&v187;
        memset_0(&v187, 0, 0xF0uLL);
        v172 = 0LL;
        v58 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        v59 = v5 & 1;
        v186[0] = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        LODWORD(v178) = v59;
        v60 = 0LL;
        v61 = 0;
        if ( (v5 & 1) != 0 )
        {
          if ( v59 == 1 )
          {
            v62 = *(unsigned __int8 **)(v58 + 36504);
            v61 = *v62;
            v60 = (struct _KPRCB **)(v62 + 8);
            v172 = (unsigned __int64 *)(v62 + 8);
          }
          v63 = 0;
          if ( !v61 )
          {
LABEL_79:
            v189 = v63;
            v190 = v59;
            v187 = v61;
            if ( v59 )
              v188 = *(_BYTE *)(*(_QWORD *)(v58 + 36504) + 1LL);
            else
              v188 = 0;
            if ( v63 )
            {
              v150 = 0LL;
              for ( k = 0; k < v61; ++k )
              {
                if ( v191[5 * k + 2] != *(_QWORD *)(v191[5 * k] + 36544LL) )
                {
                  v150 = &v191[5 * k];
                  break;
                }
              }
              if ( v61 )
              {
                v152 = v192;
                v153 = v61;
                do
                {
                  if ( v152 - 32 != (_BYTE *)v150 )
                  {
                    *((_QWORD *)v152 - 2) = v150[2];
                    *v152 = *((_BYTE *)v150 + 32) | 0x20;
                  }
                  v152 += 40;
                  --v153;
                }
                while ( v153 );
              }
            }
LABEL_82:
            v64 = 0LL;
            v65 = 0;
            v168 = 0;
            while ( v65 < v57->ProcessorCount )
            {
              if ( v57->ProcessorEntries[v65].Prcb == v176 )
              {
                v64 = (__int64)&v57->ProcessorEntries[v65];
                break;
              }
              ++v65;
            }
            v69 = *(_BYTE *)(v64 + 32);
            v70 = *(_QWORD *)v64;
            if ( (v69 & 0x20) == 0 )
              *(_BYTE *)(v64 + 34) |= 1u;
            *(_BYTE *)(v64 + 34) |= 2u;
            *(_QWORD *)(v64 + 16) = *(_QWORD *)(v70 + 24);
            *(_BYTE *)(v64 + 32) = v69 & 0xC0 | 5;
            v71 = *(_QWORD *)(v70 + 24);
            *(_BYTE *)(v64 + 33) &= ~1u;
            *(_QWORD *)(v64 + 24) = v71;
            if ( ((v69 >> 1) & 1) != 0 )
            {
              for ( m = 0; m < v57->ProcessorCount; ++m )
              {
                v155 = (unsigned __int8 *)&v57->ProcessorEntries[m];
                if ( v155 != (unsigned __int8 *)v64 )
                {
                  AllCompareThreadStateFlags = v57->ProcessorEntries[m].AllCompareThreadStateFlags;
                  v157 = *(_QWORD *)v155;
                  if ( (AllCompareThreadStateFlags & 0x20) != 0 )
                  {
                    u5 = v155 + 34;
                  }
                  else
                  {
                    u5 = v57->ProcessorEntries[m].___u5;
                    *u5 |= 1u;
                  }
                  *u5 |= 2u;
                  v159 = *(_KTHREAD **)(v157 + 24);
                  v57->ProcessorEntries[m].AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
                  v57->ProcessorEntries[m].CompareThread = v159;
                  v160 = *(_KTHREAD **)(v157 + 24);
                  *((_BYTE *)&v57->ProcessorEntries[m].0 + 1) &= ~1u;
                  v57->ProcessorEntries[m].NewThread = v160;
                }
              }
              if ( (v69 & 2) != 0 )
                v57->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
            }
            v72 = v181;
            v73 = v179;
            if ( v179 == v181 )
            {
              HIBYTE(v168) = 1;
            }
            else
            {
              KiSearchForNewThreadsForRescheduleContext(v179, &v173);
              v74 = 0;
              LOBYTE(v168) = 0;
              if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
                v74 = 2;
              v75 = 0;
              if ( v73->ProcessorCount )
              {
                v110 = v183;
                v111 = 0;
                do
                {
                  v111 |= KiCommitRescheduleContextEntry(
                            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v73->ProcessorEntries + 32 * v75 + 8 * v75),
                            v110,
                            v74,
                            &v173);
                  ++v75;
                }
                while ( v75 < v73->ProcessorCount );
                LOBYTE(v168) = v111;
                v72 = v181;
              }
              if ( v73->IsolationWidth == KiIsolationWidthCore )
              {
                v76 = v73->ProcessorEntries[0].Prcb->CoreControlBlock;
                if ( ++v76->ScanStartIndex >= v76->ProcessorCount )
                  v76->ScanStartIndex = 0;
              }
            }
            if ( v5 )
            {
              v175 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v5 & 1) == 0 )
              {
                v79 = &v175;
                LODWORD(v78) = 1;
                do
                {
LABEL_109:
                  v78 = (unsigned int)(v78 - 1);
                  _InterlockedAnd64((volatile signed __int64 *)(v79[v78] + 48), 0LL);
                }
                while ( (_DWORD)v78 );
                goto LABEL_110;
              }
              v77 = *(_BYTE **)((v5 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
              LODWORD(v78) = (unsigned __int8)*v77;
              v79 = (unsigned __int64 *)(v77 + 8);
              if ( *v77 )
                goto LABEL_109;
            }
LABEL_110:
            v80 = 0;
            v81 = 0LL;
            for ( n = 0LL; ; n = (unsigned int)(n + 1) )
            {
              v83 = v177;
              if ( (unsigned int)n >= v72->ProcessorCount )
                break;
              if ( v72->ProcessorEntries[(unsigned int)n].Prcb == v177 )
              {
                v81 = (__int64)&v72->ProcessorEntries[(unsigned int)n];
                break;
              }
            }
            v84 = (*((_DWORD *)&v169->0 + 1) >> 1) & 1;
            if ( v84 >= ((*(unsigned __int8 *)(v81 + 32) >> 1) & 1u) )
            {
              if ( v84 )
              {
                for ( ii = 0; ii < v72->ProcessorCount; ++ii )
                {
                  v132 = v72->ProcessorEntries[ii].Prcb;
                  v133 = &v72->ProcessorCount + 40 * ii;
                  v134 = *((_QWORD *)v133 + 5);
                  if ( v132 == v83 )
                  {
                    if ( v134 && v134 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v134) )
                    {
                      if ( (v133[49] & 1) != 0 )
                        *(_DWORD *)(v162 + 116) |= 2u;
                      *(_BYTE *)(v162 + 565) = 1;
                      KiInsertDeferredReadyList(&v173, v162);
                    }
                    v133[48] &= ~1u;
                    v135 = v133[48];
                    *((_QWORD *)v133 + 4) = v169;
                    v136 = *(&v169->MiscFlags + 1);
                    v133[49] &= ~1u;
                    *((_QWORD *)v133 + 5) = v169;
                    v133[48] = (v135 & 0xFD ^ (2 * ((v136 & 2) != 0))) & 0xC3 | 4;
                    if ( !(unsigned __int8)KiIsPrcbThread(v169) )
                      v169->NextProcessor = v132->Number;
                  }
                  else
                  {
                    SmtIsolationThread = v132->SmtIsolationThread;
                    if ( v134
                      && v134 <= 0xFFFFFFFFFFFFFFFDuLL
                      && !(unsigned __int8)((__int64 (*)(void))KiIsPrcbThread)() )
                    {
                      if ( (v133[49] & 1) != 0 )
                        *(_DWORD *)(v163 + 116) |= 2u;
                      *(_BYTE *)(v163 + 565) = 1;
                      KiInsertDeferredReadyList(&v173, v163);
                    }
                    v133[48] &= ~1u;
                    v138 = v133[48] & 0xFD;
                    *((_QWORD *)v133 + 4) = v169;
                    v139 = (v138 ^ (2 * ((*((_DWORD *)&v169->0 + 1) & 2) != 0))) & 0xE3 | 4;
                    v140 = v139 | 0x20;
                    v141 = v139 & 0xDF;
                    if ( v169 == SmtIsolationThread )
                      v140 = v141;
                    v133[48] = v140;
                    v133[49] &= ~1u;
                    *((_QWORD *)v133 + 5) = SmtIsolationThread;
                    if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
                      SmtIsolationThread->NextProcessor = v132->Number;
                    v83 = v177;
                  }
                }
              }
              else
              {
                n = *(_QWORD *)(v81 + 24);
                v118 = *(_QWORD *)v81;
                if ( n && n <= 0xFFFFFFFFFFFFFFFDuLL && *(_UNKNOWN **)(n + 544) != &unk_140FC9F40 )
                {
                  if ( (*(_BYTE *)(v81 + 33) & 1) != 0 )
                    *(_DWORD *)(n + 116) |= 2u;
                  *(_BYTE *)(n + 565) = 1;
                  KiInsertDeferredReadyList(&v173, n);
                }
                v119 = *(_BYTE *)(v81 + 32) & 0xFE;
                *(_QWORD *)(v81 + 16) = v169;
                *(_BYTE *)(v81 + 32) = v119;
                v120 = *(&v169->MiscFlags + 1);
                *(_BYTE *)(v81 + 33) &= ~1u;
                *(_QWORD *)(v81 + 24) = v169;
                *(_BYTE *)(v81 + 32) = (v119 & 0xFD ^ (2 * ((v120 & 2) != 0))) & 0xC3 | 4;
                if ( v169->Process != (_KPROCESS *)&unk_140FC9F40 )
                  v169->NextProcessor = *(_DWORD *)(v118 + 36);
              }
            }
            else
            {
              for ( jj = 0; jj < v72->ProcessorCount; jj = v91 + 1 )
              {
                v86 = v72->ProcessorEntries[jj].Prcb;
                v87 = &v72->ProcessorCount + 40 * jj;
                v88 = *((_QWORD *)v87 + 5);
                if ( v86 == v83 )
                {
                  if ( v88 && v88 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v88) )
                  {
                    if ( (v87[49] & 1) != 0 )
                      *(_DWORD *)(v164 + 116) |= 2u;
                    *(_BYTE *)(v164 + 565) = 1;
                    KiInsertDeferredReadyList(&v173, v164);
                  }
                  v87[48] &= ~1u;
                  v142 = v87[48];
                  *((_QWORD *)v87 + 4) = v169;
                  v143 = *(&v169->MiscFlags + 1);
                  v87[49] &= ~1u;
                  *((_QWORD *)v87 + 5) = v169;
                  v87[48] = (v142 & 0xFD ^ (2 * ((v143 & 2) != 0))) & 0xC3 | 4;
                  if ( !(unsigned __int8)KiIsPrcbThread(v169) )
                    v169->NextProcessor = v86->Number;
                }
                else
                {
                  IdleThread = v86->IdleThread;
                  if ( v88 && v88 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v88) )
                  {
                    if ( (v87[49] & 1) != 0 )
                      *(_DWORD *)(v161 + 116) |= 2u;
                    *(_BYTE *)(v161 + 565) = 1;
                    KiInsertDeferredReadyList(&v173, v161);
                  }
                  v87[48] |= 1u;
                  v90 = v87[48];
                  *((_QWORD *)v87 + 4) = IdleThread;
                  v87[48] = (v90 & 0xFD ^ (2 * ((*((_DWORD *)&IdleThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
                  v87[49] &= ~1u;
                  *((_QWORD *)v87 + 5) = IdleThread;
                  if ( !(unsigned __int8)KiIsPrcbThread(IdleThread) )
                    IdleThread->NextProcessor = v86->Number;
                }
              }
              v80 = 1;
            }
            v72->MaximumThreadIsolationWidth = v84;
            if ( HIBYTE(v168) | (unsigned __int8)v80 )
              KiSearchForNewThreadsForRescheduleContext(v72, &v173);
            v121 = 0;
            v122 = 0;
            if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
              v122 = 2;
            v123 = 0;
            for ( kk = v183; v123 < v72->ProcessorCount; ++v123 )
              v121 |= KiCommitRescheduleContextEntry(
                        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v72->ProcessorEntries + 32 * v123 + 8 * v123),
                        kk,
                        v122,
                        &v173);
            if ( v72->IsolationWidth == KiIsolationWidthCore )
            {
              v125 = v72->ProcessorEntries[0].Prcb->CoreControlBlock;
              if ( ++v125->ScanStartIndex >= v125->ProcessorCount )
                v125->ScanStartIndex = 0;
            }
            if ( !v11 )
            {
LABEL_205:
              if ( (_BYTE)v168 )
              {
                v165 = v179;
                for ( mm = 0; mm < v165->ProcessorCount; ++mm )
                  KiCompleteRescheduleContextEntry(
                    (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v165->ProcessorEntries + 32 * mm + 8 * mm),
                    kk,
                    0LL,
                    0LL);
                if ( !v121 )
                  goto LABEL_297;
              }
              else if ( !v121 )
              {
LABEL_207:
                if ( v173.Next )
                {
                  v128 = 0;
                  v173.Next = v173.Next->Next;
                  do
                  {
                    KiDeferredReadySingleThread(kk);
                    Next = v173.Next;
                    ++v128;
                    if ( v173.Next )
                      v173.Next = v173.Next->Next;
                    if ( (v128 & 0xF) == 0 )
                      KiFlushSoftwareInterruptBatch(&kk->DeferredDispatchInterrupts, v129);
                  }
                  while ( Next );
                  KiFlushSoftwareInterruptBatch(&kk->DeferredDispatchInterrupts, v129);
                }
                v23 = 1;
                goto LABEL_32;
              }
              for ( nn = 0; nn < v72->ProcessorCount; ++nn )
                KiCompleteRescheduleContextEntry(
                  (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v72->ProcessorEntries + 32 * nn + 8 * nn),
                  kk,
                  0LL,
                  0LL);
LABEL_297:
              KiFlushSoftwareInterruptBatch(&kk->DeferredDispatchInterrupts, n);
              goto LABEL_207;
            }
            v175 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v11 & 1) != 0 )
            {
              v126 = *(_BYTE **)((v11 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
              n = (unsigned __int8)*v126;
              v127 = (unsigned __int64 *)(v126 + 8);
              if ( !*v126 )
              {
LABEL_204:
                v11 = 0LL;
                goto LABEL_205;
              }
            }
            else
            {
              v127 = &v175;
              LODWORD(n) = 1;
            }
            do
            {
              n = (unsigned int)(n - 1);
              _InterlockedAnd64((volatile signed __int64 *)(v127[n] + 48), 0LL);
            }
            while ( (_DWORD)n );
            goto LABEL_204;
          }
        }
        else
        {
          v60 = (struct _KPRCB **)v186;
          v61 = 1;
          v172 = v186;
          v63 = 0;
        }
        v101 = v169;
        v102 = v192;
        v182 = (struct _KPRCB *)v61;
        do
        {
          LODWORD(v174) = v61;
          *((_OWORD *)v102 - 2) = 0LL;
          *((_OWORD *)v102 - 1) = 0LL;
          *(_QWORD *)v102 = 0LL;
          *((_QWORD *)v102 - 1) = -1LL;
          v102[4] = 63;
          v103 = *v60;
          *((_QWORD *)v102 - 4) = *v60;
          *((_QWORD *)v102 - 3) = 0LL;
          v175 = (unsigned __int64)v103;
          SharedReadyQueue = v103->SharedReadyQueue;
          if ( SharedReadyQueue )
          {
            if ( (v103->IdleState & 0x10) == 0
              || ((unsigned __int8)KeIsForceParkingEnabled(SharedReadyQueue) && (v103->IdleState & 0x20) != 0
                ? (v117 = ~*(_QWORD *)(v115 + 104))
                : (v117 = *(_QWORD *)(v115 + 80)),
                  (v117 & *(_QWORD *)(v116 + 712)) == 0) )
            {
              *((_QWORD *)v102 - 3) = v103->SharedReadyQueue;
            }
          }
          CurrentThread = v103->NextThread;
          v171 = CurrentThread;
          *((_QWORD *)v102 - 2) = CurrentThread;
          if ( !CurrentThread )
          {
            CurrentThread = v103->CurrentThread;
            v171 = CurrentThread;
            *((_QWORD *)v102 - 2) = CurrentThread;
          }
          if ( v103->NextThread == CurrentThread )
          {
            *v102 |= 4u;
          }
          else
          {
            v106 = *v102;
            if ( v103 == KeGetCurrentPrcb() )
              v107 = v106 | 4;
            else
              v107 = v106 & 0xFB;
            *v102 = v107;
          }
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0
            && !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0 )
            {
              if ( (unsigned __int8)KiIsThreadStateControlledByProcessor(CurrentThread, v103) )
              {
                KiUpdateVPBackingThreadPriority(CurrentThread);
                v61 = v174;
                CurrentThread = v171;
                v103 = (struct _KPRCB *)v175;
              }
              v60 = (struct _KPRCB **)v172;
            }
            CurrentThread->ThreadLock = 0LL;
          }
          v108 = *v102 & 0xFE | ((v103->IdleState & 1) == 0);
          *v102 = v108;
          v109 = v108 ^ (v108 ^ (v103->PriorityState->AllFields >> 6)) & 2;
          *v102 = v109;
          if ( ((v109 >> 1) & 1) > v63 )
            v63 = (v109 >> 1) & 1;
          ++v60;
          v102 += 40;
          v172 = (unsigned __int64 *)v60;
          v182 = (struct _KPRCB *)((char *)v182 - 1);
        }
        while ( v182 );
        v169 = v101;
        v57 = (_KI_RESCHEDULE_CONTEXT *)&v187;
        v59 = v178;
        goto LABEL_79;
      }
    }
    else
    {
      v50 = (struct _KPRCB **)&v185;
      v51 = 1;
      v172 = &v185;
      v53 = 0;
    }
    v92 = v45;
    v93 = &v181->ProcessorEntries[0].32;
    i = v51;
    do
    {
      LODWORD(v174) = v51;
      *(_OWORD *)&v93[-16].0 = 0LL;
      *(_OWORD *)&v93[-8].0 = 0LL;
      *(_QWORD *)&v93->0 = 0LL;
      *(_QWORD *)&v93[-4].0 = -1LL;
      v93[2].AllCompareThreadStateFlags = 63;
      v94 = *v50;
      *(_QWORD *)&v93[-16].0 = *v50;
      *(_QWORD *)&v93[-12].0 = 0LL;
      v182 = v94;
      v95 = v94->SharedReadyQueue;
      if ( v95 )
      {
        if ( (v94->IdleState & 0x10) == 0
          || ((unsigned __int8)KeIsForceParkingEnabled(v95) && (v94->IdleState & 0x20) != 0
            ? (v114 = ~*(_QWORD *)(v112 + 104))
            : (v114 = *(_QWORD *)(v112 + 80)),
              (v114 & *(_QWORD *)(v113 + 712)) == 0) )
        {
          *(_QWORD *)&v93[-12].0 = v94->SharedReadyQueue;
        }
      }
      v96 = v94->NextThread;
      v170 = v96;
      *(_QWORD *)&v93[-8].0 = v96;
      if ( !v96 )
      {
        v96 = v94->CurrentThread;
        v170 = v96;
        *(_QWORD *)&v93[-8].0 = v96;
      }
      if ( v94->NextThread == v96 )
      {
        v93->AllCompareThreadStateFlags |= 4u;
      }
      else
      {
        v97 = v93->AllCompareThreadStateFlags;
        if ( v94 == KeGetCurrentPrcb() )
          v98 = v97 | 4;
        else
          v98 = v97 & 0xFB;
        v93->AllCompareThreadStateFlags = v98;
      }
      if ( (*((_DWORD *)&v96->0 + 1) & 0x400000) != 0
        && !_interlockedbittestandset64((volatile signed __int32 *)&v96->ThreadLock, 0LL) )
      {
        if ( (*((_DWORD *)&v96->0 + 1) & 0x400000) != 0 )
        {
          if ( (unsigned __int8)KiIsThreadStateControlledByProcessor(v96, v94) )
          {
            KiUpdateVPBackingThreadPriority(v96);
            v51 = v174;
            v96 = v170;
            v94 = v182;
          }
          v50 = (struct _KPRCB **)v172;
        }
        v96->ThreadLock = 0LL;
      }
      v99 = v93->AllCompareThreadStateFlags & 0xFE | ((v94->IdleState & 1) == 0);
      v93->AllCompareThreadStateFlags = v99;
      v100 = v99 ^ (v99 ^ (v94->PriorityState->AllFields >> 6)) & 2;
      v93->AllCompareThreadStateFlags = v100;
      if ( ((v100 >> 1) & 1) > v53 )
        v53 = (v100 >> 1) & 1;
      ++v50;
      v93 += 20;
      v172 = (unsigned __int64 *)v50;
      --i;
    }
    while ( i );
    v169 = v92;
    v19 = (int)v178;
    goto LABEL_72;
  }
  if ( !KeHeteroSystem )
  {
    v41 = v177;
    goto LABEL_60;
  }
  AllFields = v176->PriorityState[64].AllFields;
  v37 = KiDynamicHeteroCpuPolicy[2 * (AllFields & 7) + ((AllFields >> 6) & 1)];
  HwFeedbackClassList = v176->PowerState.HwFeedbackClassList;
  if ( HwFeedbackClassList )
  {
    v39 = (__int64)HwFeedbackClassList + 4 * (((unsigned int)AllFields >> 3) & 7);
    if ( (unsigned int)(v37 - 3) > 1 )
      EfficiencySchedulingClass = *(_BYTE *)(v39 + 4);
    else
      EfficiencySchedulingClass = *(_BYTE *)(v39 + 5);
  }
  else if ( (unsigned int)(v37 - 3) <= 1 )
  {
    EfficiencySchedulingClass = v176->PowerState.EfficiencySchedulingClass;
  }
  else
  {
    EfficiencySchedulingClass = v176->PowerState.PerformanceSchedulingClass;
  }
  v41 = v177;
  v42 = v177->PowerState.HwFeedbackClassList;
  if ( v42 )
  {
    v43 = (__int64)v42 + 4 * ((AllFields >> 3) & 7);
    if ( (unsigned int)(v37 - 3) > 1 )
      PerformanceSchedulingClass = *(_BYTE *)(v43 + 4);
    else
      PerformanceSchedulingClass = *(_BYTE *)(v43 + 5);
    v35 = v176;
  }
  else if ( (unsigned int)(v37 - 3) <= 1 )
  {
    PerformanceSchedulingClass = v177->PowerState.EfficiencySchedulingClass;
  }
  else
  {
    PerformanceSchedulingClass = v177->PowerState.PerformanceSchedulingClass;
  }
  if ( EfficiencySchedulingClass <= PerformanceSchedulingClass )
    goto LABEL_60;
LABEL_28:
  v23 = 0;
  if ( v5 )
  {
    v175 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v5 & 1) == 0 )
    {
      v26 = &v175;
      LODWORD(v25) = 1;
      goto LABEL_31;
    }
    v24 = *(_BYTE **)((v5 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
    LODWORD(v25) = (unsigned __int8)*v24;
    v26 = (unsigned __int64 *)(v24 + 8);
    if ( *v24 )
    {
      do
      {
LABEL_31:
        v25 = (unsigned int)(v25 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(v26[v25] + 48), 0LL);
      }
      while ( (_DWORD)v25 );
    }
  }
LABEL_32:
  if ( v11 )
  {
    v175 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v11 & 1) == 0 )
    {
      v27 = &v175;
      LODWORD(v28) = 1;
      goto LABEL_35;
    }
    v28 = *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
    v27 = (unsigned __int64 *)(v28 + 8);
    LODWORD(v28) = *(unsigned __int8 *)v28;
    while ( (_DWORD)v28 )
    {
LABEL_35:
      v28 = (unsigned int)(v28 - 1);
      _InterlockedAnd64((volatile signed __int64 *)(v27[v28] + 48), 0LL);
    }
  }
  return v23;
}
