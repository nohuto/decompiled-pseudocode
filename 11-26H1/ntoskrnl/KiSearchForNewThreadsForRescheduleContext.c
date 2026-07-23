/*
 * XREFs of KiSearchForNewThreadsForRescheduleContext @ 0x14022E570
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x14022C654 (KiSoftParkElectionUnparkProcessor.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404CCC84 (KiAdjustCoreIsolationReasonThread.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405FB3A0 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     EtwTraceReadyQueueInsertion @ 0x1402260FC (EtwTraceReadyQueueInsertion.c)
 *     KiEnterDeferredReadyState @ 0x140230060 (KiEnterDeferredReadyState.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140231210 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     KiIsThreadExemptFromForcePark @ 0x14023137C (KiIsThreadExemptFromForcePark.c)
 *     KiShouldPreemptionBeDeferred @ 0x140231EA0 (KiShouldPreemptionBeDeferred.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140232008 (KiRemoveThreadFromReadyQueue.c)
 *     ?KiAcquireSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z @ 0x1402FBA60 (-KiAcquireSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z.c)
 *     ?KiReleaseSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z @ 0x140305080 (-KiReleaseSharedReadyQueueLocksForRescheduleContext@@YAXPEAU_KI_RESCHEDULE_CONTEXT@@@Z.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiStartReadyQueueEnumeratorForRescheduleContext @ 0x140306BF0 (KiStartReadyQueueEnumeratorForRescheduleContext.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403070D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x140307490 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x1403075C0 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromScbQueue @ 0x140307964 (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x140338300 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     ?KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1403AB2B0 (-KiAdvanceReadyQueueEnumeratorToNextScb@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 *     KiAddThreadToScbQueue @ 0x1404A57FC (KiAddThreadToScbQueue.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiSearchForNewThreadsForRescheduleContext(unsigned __int8 *a1, _QWORD *a2)
{
  unsigned __int8 *v2; // r14
  unsigned __int64 *v3; // r12
  char v4; // si
  unsigned __int8 v5; // r11
  char v6; // bl
  unsigned int v7; // r8d
  int v8; // eax
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // eax
  int ready; // eax
  unsigned __int8 v14; // dl
  _DWORD *v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int8 v20; // di
  unsigned __int8 v21; // dl
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned __int64 *v24; // rdx
  unsigned __int8 v25; // r14
  __int64 v26; // rdi
  __int64 v27; // r8
  char v28; // r13
  struct _KPRCB *v29; // r10
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  struct _KSCB *v34; // rbx
  unsigned __int8 *v35; // rdx
  int v36; // ecx
  unsigned int i; // r14d
  struct _KPRCB *v38; // r15
  unsigned __int8 *v39; // r13
  struct _KSHARED_READY_QUEUE *v40; // rax
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rbx
  int v42; // eax
  __int64 v43; // r9
  unsigned int v44; // edx
  unsigned __int64 AvailableMask; // rcx
  unsigned __int64 NonParkedSet; // rdx
  __int64 v47; // r15
  __int64 v48; // rax
  unsigned __int64 *v49; // rdx
  unsigned __int8 v50; // r14
  struct _KPRCB *v51; // rbx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rbx
  unsigned __int64 ReadySummary; // rcx
  unsigned __int64 *v54; // rax
  bool v55; // zf
  unsigned int v56; // esi
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 m; // rdx
  unsigned int j; // ebx
  unsigned __int8 *v61; // rax
  unsigned int v62; // r9d
  unsigned int v63; // r11d
  __int64 v64; // rbx
  unsigned __int8 *v65; // r10
  unsigned __int64 v66; // rcx
  __int64 v67; // rsi
  unsigned __int8 v68; // al
  int v69; // r9d
  int v70; // r11d
  int v71; // edi
  unsigned __int8 v72; // r9
  int v73; // r10d
  _DWORD *v74; // rdx
  unsigned __int8 v75; // cl
  __int64 v76; // r14
  __int64 v77; // r9
  int v78; // eax
  int v79; // eax
  _OWORD *v80; // rcx
  __int64 v81; // rdx
  int v82; // eax
  unsigned int v83; // eax
  unsigned __int8 v84; // r10
  int v85; // r9d
  _DWORD *v86; // rdx
  unsigned __int8 v87; // cl
  int v88; // eax
  __int64 v89; // r12
  unsigned int v90; // r14d
  _KSHARED_READY_QUEUE *v91; // rbx
  unsigned __int64 v92; // rcx
  unsigned __int64 *v93; // rax
  unsigned int v94; // r14d
  __int64 v95; // rcx
  char v96; // al
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rcx
  unsigned __int64 **v100; // rcx
  unsigned __int64 **v101; // rax
  unsigned int v102; // ecx
  unsigned int v103; // eax
  unsigned __int8 v104; // al
  __int64 v105; // rcx
  char v106; // dl
  unsigned int k; // ebx
  unsigned __int8 *v108; // r15
  unsigned __int64 v109; // rcx
  __int64 v110; // r10
  char v111; // al
  int v112; // ecx
  _QWORD *v113; // rcx
  unsigned int n; // r11d
  __int64 v115; // rbx
  unsigned __int8 *v116; // r10
  unsigned __int64 v117; // rcx
  unsigned __int8 v118; // al
  int v119; // ecx
  int v120; // r11d
  __int64 v121; // rsi
  char v122; // al
  char v123; // al
  unsigned __int8 v124; // cl
  unsigned __int8 v125; // al
  unsigned __int8 v126; // al
  int v127; // ecx
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rcx
  unsigned __int8 v132; // cl
  __int64 v133; // rdx
  char v134; // al
  struct _KSCB *v135; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v136; // [rsp+30h] [rbp-D0h]
  struct _KSHARED_READY_QUEUE *v137; // [rsp+38h] [rbp-C8h]
  struct _KPRCB *v139; // [rsp+48h] [rbp-B8h]
  _QWORD v141[3]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v142; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v143; // [rsp+74h] [rbp-8Ch]
  unsigned __int8 v144; // [rsp+78h] [rbp-88h]
  unsigned __int8 v145; // [rsp+79h] [rbp-87h]
  unsigned __int8 v146; // [rsp+7Ah] [rbp-86h]
  unsigned __int8 v147; // [rsp+7Bh] [rbp-85h]
  char v148; // [rsp+7Ch] [rbp-84h]
  char v149; // [rsp+7Dh] [rbp-83h]
  __int64 v150; // [rsp+80h] [rbp-80h]
  __int64 v151; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v152; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v153; // [rsp+98h] [rbp-68h]
  _DWORD v154[11]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v155[37]; // [rsp+CCh] [rbp-34h] BYREF

  v2 = a1;
  KiAcquireSharedReadyQueueLocksForRescheduleContext((struct _KI_RESCHEDULE_CONTEXT *)a1);
LABEL_2:
  memset_0(&v142, 0, 0xF0uLL);
  KiStartReadyQueueEnumeratorForRescheduleContext(&v142, v2);
  v3 = v152;
  v4 = v149;
  v136 = v152;
  while ( 1 )
  {
LABEL_3:
    if ( v4 == 4 )
      break;
    if ( v4 )
      goto LABEL_33;
    v5 = v145;
    v6 = 1;
    v7 = v142;
    do
    {
      if ( v6 != 2 )
      {
        if ( v6 == 1 )
        {
          v8 = 0;
          v143 = 0;
          if ( v7 )
          {
            v9 = v155;
            v10 = v7;
            do
            {
              v11 = *((_DWORD *)v9 - 1) | v8;
              v9 += 3;
              v143 = v11;
              v8 = *((_DWORD *)v9 - 12) | v11;
              v143 = v8;
              --v10;
            }
            while ( v10 );
          }
          v12 = v8 & 0xFFFFFFFE;
          v143 = v12;
          if ( !v12 )
          {
            ready = -2147483622;
            goto LABEL_30;
          }
          _BitScanReverse((unsigned int *)&v71, v12);
          v146 = v5;
          v144 = v71;
          v72 = v5;
          v73 = 1 << v71;
          while ( ((v155[12 * v72] | v154[12 * v72 + 10]) & v73) == 0 )
          {
            v146 = ++v72;
            if ( v72 >= v7 )
            {
              v72 = 0;
              v146 = 0;
            }
          }
          v74 = &v154[12 * v72];
          v75 = 0;
          v76 = *(_QWORD *)v74;
          v77 = *((_QWORD *)v74 + 1);
          v147 = 0;
          if ( (v73 & v74[10]) != 0 )
          {
            v75 = 1;
            v147 = 1;
          }
          if ( (v73 & v74[11]) != 0 )
          {
            v75 |= 2u;
            v147 = v75;
          }
          if ( ((unsigned __int8)(v75 - 1) & v75) != 0 )
            LOBYTE(v78) = !_bittest((const signed __int32 *)(v76 + 33756), (unsigned __int8)v71);
          else
            _BitScanForward((unsigned int *)&v78, v75);
          v148 = v78;
          if ( (_BYTE)v78 )
          {
            if ( (unsigned __int8)v78 != 1 )
            {
LABEL_125:
              v153 = v3;
              ready = 0;
              goto LABEL_30;
            }
            v3 = (unsigned __int64 *)(v77 + 16 * ((unsigned __int8)v71 + 4LL));
LABEL_124:
            v152 = v3;
            goto LABEL_125;
          }
LABEL_214:
          ready = 0;
          v3 = (unsigned __int64 *)(v76 + 16 * ((unsigned __int8)v71 + 2116LL));
          v152 = v3;
          v153 = v3;
          goto LABEL_30;
        }
        if ( v6 != 3 )
          goto LABEL_31;
        v79 = 0;
        v143 = 0;
        if ( v7 )
        {
          v80 = v155;
          v81 = v7;
          do
          {
            v82 = *((_DWORD *)v80 - 1) | v79;
            v80 += 3;
            v143 = v82;
            v79 = *((_DWORD *)v80 - 12) | v82;
            v143 = v79;
            --v81;
          }
          while ( v81 );
        }
        v83 = v79 & 1;
        v143 = v83;
        if ( !v83 )
        {
          ready = -2147483622;
          goto LABEL_30;
        }
        _BitScanReverse((unsigned int *)&v71, v83);
        v146 = v5;
        v144 = v71;
        v84 = v5;
        v85 = 1 << v71;
        while ( ((v155[12 * v84] | v154[12 * v84 + 10]) & v85) == 0 )
        {
          v146 = ++v84;
          if ( v84 >= v7 )
          {
            v84 = 0;
            v146 = 0;
          }
        }
        v86 = &v154[12 * v84];
        v87 = 0;
        v76 = *(_QWORD *)v86;
        v22 = *((_QWORD *)v86 + 1);
        v147 = 0;
        if ( (v85 & v86[10]) != 0 )
        {
          v87 = 1;
          v147 = 1;
        }
        if ( (v85 & v86[11]) != 0 )
        {
          v87 |= 2u;
          v147 = v87;
        }
        if ( ((unsigned __int8)(v87 - 1) & v87) != 0 )
          LOBYTE(v88) = !_bittest((const signed __int32 *)(v76 + 33756), (unsigned __int8)v71);
        else
          _BitScanForward((unsigned int *)&v88, v87);
        v148 = v88;
        if ( !(_BYTE)v88 )
          goto LABEL_214;
        if ( (unsigned __int8)v88 != 1 )
          goto LABEL_125;
        v89 = (unsigned __int8)v71 + 4LL;
LABEL_152:
        v3 = (unsigned __int64 *)(v22 + 16 * v89);
        goto LABEL_124;
      }
      v14 = 0;
      if ( v7 )
      {
        while ( 1 )
        {
          v15 = &v154[12 * v14];
          v16 = v15[8];
          if ( v16 )
            break;
LABEL_21:
          if ( ++v14 >= v7 )
          {
            v3 = v152;
            v5 = v145;
            goto LABEL_23;
          }
        }
        v17 = *(_QWORD *)(*(_QWORD *)v15 + 33848LL);
        if ( (v17 & 1) != 0 )
        {
          if ( v17 == 1 )
            goto LABEL_19;
          v18 = v17 ^ ((*(_QWORD *)v15 + 33840LL) | 1);
LABEL_18:
          if ( !v18 || (v19 = v18 - 104, *(_DWORD *)(v19 + 140) > v16) )
LABEL_19:
            v19 = 0LL;
          *((_QWORD *)v15 + 2) = v19;
          v7 = v142;
          goto LABEL_21;
        }
        v18 = *(_QWORD *)(*(_QWORD *)v15 + 33848LL);
        goto LABEL_18;
      }
LABEL_23:
      v20 = 0;
      v21 = v5;
      v22 = 0LL;
      do
      {
        v23 = *(_QWORD *)&v154[12 * v21 + 4];
        if ( v23 && (!v22 || *(_DWORD *)(v22 + 140) < *(_DWORD *)(v23 + 140)) )
        {
          v20 = v21;
          v22 = *(_QWORD *)&v154[12 * v21 + 4];
        }
        if ( ++v21 >= v7 )
          v21 = 0;
      }
      while ( v21 != v5 );
      if ( !v22 )
      {
        ready = -2147483622;
        goto LABEL_30;
      }
      v102 = *(unsigned __int16 *)(v22 + 136);
      v146 = v20;
      v151 = v22;
      v150 = v22;
      v143 = v102;
      if ( *(_DWORD *)(v22 + 140) == v154[12 * v20 + 8] )
      {
        v102 &= v154[12 * v20 + 9];
        v143 = v102;
      }
      if ( v102 )
        goto LABEL_237;
      ready = KiAdvanceReadyQueueEnumeratorToNextScb((struct _KI_READY_QUEUE_ENUMERATOR *)&v142);
      v5 = v145;
      v7 = v142;
      if ( ready >= 0 )
      {
        v22 = v150;
        v102 = v143;
LABEL_237:
        _BitScanReverse(&v103, v102);
        v89 = (unsigned __int8)v103 + 10LL;
        v144 = v103;
        goto LABEL_152;
      }
      v3 = v152;
LABEL_30:
      if ( ready >= 0 )
        break;
LABEL_31:
      ++v6;
    }
    while ( (unsigned __int8)v6 < 4u );
    v136 = v3;
    v149 = v6;
    if ( v6 == 4 )
      break;
LABEL_33:
    while ( 1 )
    {
      v24 = (unsigned __int64 *)*v153;
      v153 = v24;
      if ( v24 != v3 )
        break;
      if ( (int)KiAdvanceReadyQueueEnumeratorToNextList((struct _KI_READY_QUEUE_ENUMERATOR *)&v142) < 0 )
        goto LABEL_320;
      v3 = v152;
      v136 = v152;
    }
    v25 = v146;
    v4 = v149;
    v26 = (__int64)(v24 - 27);
    v27 = 0LL;
    v28 = v148;
    v141[1] = v150;
    v29 = *(struct _KPRCB **)&v154[12 * v146];
    v139 = v29;
    if ( v149 == 2 )
    {
      v137 = 0LL;
      v30 = v150;
    }
    else
    {
      if ( v148 == 1 )
        v137 = *(struct _KSHARED_READY_QUEUE **)&v154[12 * v146 + 2];
      else
        v137 = 0LL;
      v30 = 0LL;
    }
    if ( *(_QWORD *)(v26 + 568) == KiCpuSetSequence || (*(_DWORD *)(v26 + 116) & 8) != 0 )
    {
      if ( v30 )
        goto LABEL_53;
      v31 = *(_QWORD *)(v26 + 104);
      if ( !v31 )
        goto LABEL_53;
      v32 = v31 + v29->ScbOffset;
      if ( !v32 )
        goto LABEL_53;
      if ( *(char *)(v26 + 195) >= 16
        || (*(_DWORD *)(v26 + 120) & 0x200) != 0
        || *(_DWORD *)(v26 + 484)
        || *(_BYTE *)(v26 + 390) == 1 )
      {
        goto LABEL_52;
      }
      v33 = v31 + v29->ScbOffset;
      v34 = (struct _KSCB *)v33;
      do
      {
        if ( (*(_BYTE *)(v33 + 128) & 2) != 0 )
          goto LABEL_216;
        v33 = *(_QWORD *)(v33 + 440);
      }
      while ( v33 );
      do
      {
        v27 = (unsigned int)(*(_DWORD *)(v32 + 140) + v27);
        if ( (_DWORD)v27 )
          break;
        v32 = *(_QWORD *)(v32 + 440);
      }
      while ( v32 );
      if ( !(_DWORD)v27 )
      {
LABEL_52:
        v27 = 0LL;
LABEL_53:
        v35 = a1;
        v36 = (*(_DWORD *)(v26 + 120) >> 1) & 1;
        if ( v36 <= *((_DWORD *)a1 + 2) )
        {
          if ( v36 < *((_DWORD *)a1 + 1) )
            v36 = *((_DWORD *)a1 + 1);
          if ( !v36 )
          {
            for ( i = 0; ; ++i )
            {
              v3 = v136;
              if ( i >= *v35 )
                goto LABEL_3;
              v38 = *(struct _KPRCB **)&v35[40 * i + 16];
              v39 = &v35[40 * i];
              if ( KiForceParkingConfiguration && (v38->IdleState & 0x20) != 0 )
              {
                if ( !(unsigned __int8)KiIsThreadExemptFromForcePark(v26) )
                  goto LABEL_138;
                v27 = 0LL;
              }
              if ( !v137 && v38 == v29 )
                goto LABEL_68;
              v40 = (struct _KSHARED_READY_QUEUE *)*((_QWORD *)v39 + 3);
              if ( v40 && v40 == v137 )
              {
                SchedulerSubNode = v38->SchedulerSubNode;
                v42 = KiComputeThreadQos(v26);
                v44 = *(_DWORD *)(v26 + 80);
                if ( v44 <= *(_DWORD *)(v26 + 84) )
                  v44 = *(_DWORD *)(v26 + 84);
                v27 = 0LL;
                AvailableMask = SchedulerSubNode->HeteroSets[*(unsigned __int8 *)(v26 + 517)
                                                           + SchedulerSubNode->WorkloadClasses
                                                           * ((unsigned int)(v44 >= KiDynamicHeteroCpuPolicyExpectedCycles)
                                                            + 2 * v42)].AvailableMask;
                NonParkedSet = SchedulerSubNode->NonParkedSet;
                if ( (AvailableMask & v38->GroupSetMember) != 0 || (NonParkedSet & v137->Affinity & AvailableMask) == 0 )
                {
                  if ( v38 == v139 )
                    goto LABEL_68;
                  v98 = *(_QWORD *)(v26 + 104);
                  if ( !v98 )
                    goto LABEL_68;
                  v99 = v98 + v38->ScbOffset;
                  if ( !v99 || *(char *)(v26 + 195) >= 16 || (*(_DWORD *)(v26 + 120) & 0x200) != 0 )
                    goto LABEL_68;
                  while ( (*(_BYTE *)(v99 + 128) & 2) == 0 )
                  {
                    v99 = *(_QWORD *)(v99 + 440);
                    if ( !v99 )
                      goto LABEL_68;
                  }
                  if ( (unsigned __int8)KiShouldPreemptionBeDeferred(v26, NonParkedSet, 0LL, v43) )
                  {
LABEL_68:
                    v141[0] = v27;
                    if ( KiGroupSchedulingEnabled )
                    {
                      if ( (unsigned __int8)KiEvaluateGroupSchedulingPreemption(v39 + 16, v26, 0LL, v141) )
                        goto LABEL_70;
                    }
                    else
                    {
                      v104 = v39[48];
                      v105 = *((_QWORD *)v39 + 4);
                      if ( (v104 & 1) != 0
                        || (v106 = *(_BYTE *)(v26 + 195), v106 > *(char *)(v105 + 195))
                        || v106 == *(_BYTE *)(v105 + 195) && (v104 & 0x18) != 0
                        || (v104 & 0x10) != 0 && v106 )
                      {
LABEL_70:
                        v47 = *((_QWORD *)v39 + 2);
                        v28 = v148;
                        v3 = v136;
                        v25 = v146;
                        goto LABEL_71;
                      }
                    }
                  }
                }
              }
LABEL_138:
              v29 = v139;
              v35 = a1;
              v27 = 0LL;
            }
          }
          for ( j = 0; j < *v35; ++j )
          {
            v141[0] = 0LL;
            v61 = &v35[40 * j];
            if ( KiGroupSchedulingEnabled )
            {
              if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v61 + 16, v26, 0LL, v141) )
                goto LABEL_3;
            }
            else
            {
              v132 = v61[48];
              v133 = *((_QWORD *)v61 + 4);
              if ( (v132 & 1) == 0 )
              {
                v134 = *(_BYTE *)(v26 + 195);
                if ( v134 <= *(char *)(v133 + 195)
                  && (v134 != *(_BYTE *)(v133 + 195) || (v132 & 0x18) == 0)
                  && ((v132 & 0x10) == 0 || !v134) )
                {
                  goto LABEL_3;
                }
              }
            }
            v35 = a1;
          }
          for ( k = 0; ; ++k )
          {
            if ( k >= *v35 )
              goto LABEL_3;
            v108 = &v35[40 * k];
            if ( KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(
                   (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)(v108 + 16),
                   (struct _KTHREAD *)v26,
                   v139,
                   v137,
                   v135) )
            {
              break;
            }
            v35 = a1;
          }
          v47 = *((_QWORD *)v108 + 2);
LABEL_71:
          if ( v47 )
          {
            v48 = v25;
            v49 = (unsigned __int64 *)(v26 + 216);
            v50 = v144;
            v51 = *(struct _KPRCB **)&v154[12 * v48];
            if ( v4 == 2 )
            {
              if ( (unsigned __int64 *)*v49 == v3 && *(unsigned __int64 **)(v26 + 224) == v3 )
                KiAdvanceReadyQueueEnumeratorToNextList((struct _KI_READY_QUEUE_ENUMERATOR *)&v142);
              else
                v153 = (unsigned __int64 *)v153[1];
              KiRemoveThreadFromScbQueue(v51);
            }
            else
            {
              v153 = (unsigned __int64 *)v153[1];
              if ( v28 )
              {
                if ( v28 == 1 )
                {
                  if ( ((unsigned __int8)(v147 - 1) & v147) != 0 )
                    _bittestandset(&v51->AffinitizedSelectionMask, v144);
                  SharedReadyQueue = v51->SharedReadyQueue;
                  if ( (*(_DWORD *)(v26 + 120) & 0x400000) != 0 )
                    _InterlockedAnd(*(volatile signed __int32 **)(v26 + 968), 0xFFFBFFFF);
                  ReadySummary = *v49;
                  v54 = *(unsigned __int64 **)(v26 + 224);
                  if ( *(unsigned __int64 **)(*v49 + 8) != v49 || (unsigned __int64 *)*v54 != v49 )
                    goto LABEL_153;
                  *v54 = ReadySummary;
                  *(_QWORD *)(ReadySummary + 8) = v54;
                  if ( v54 == (unsigned __int64 *)ReadySummary )
                  {
                    ReadySummary = SharedReadyQueue->ReadySummary;
                    LODWORD(ReadySummary) = ReadySummary & ~(1 << v50);
                    SharedReadyQueue->ReadySummary = ReadySummary;
                  }
                  v55 = SharedReadyQueue->ReadyThreadCount-- == 1;
                  if ( v55 )
                  {
                    ReadySummary = ~SharedReadyQueue->Affinity;
                    _InterlockedAnd64(
                      (volatile signed __int64 *)&SharedReadyQueue->SubNode->StealableSharedReadyQueues,
                      ReadySummary);
                  }
                  SharedReadyQueue->ReadyQueueExpectedRunTime -= *(unsigned int *)(v26 + 1784);
                  if ( *(_QWORD *)(v26 + 1792) == SharedReadyQueue->SoftParkElectionGeneration )
                  {
                    v56 = 0;
                    while ( _interlockedbittestandset64(
                              (volatile signed __int32 *)&SharedReadyQueue->SoftParkElectionLock,
                              0LL) )
                    {
                      do
                      {
                        if ( (++v56 & HvlLongSpinCountMask) == 0
                          && (HvlEnlightenments & 0x40) != 0
                          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(ReadySummary, v49, v27) )
                        {
                          HvlNotifyLongSpinWait(v56);
                        }
                        else
                        {
                          _mm_pause();
                        }
                      }
                      while ( SharedReadyQueue->SoftParkElectionLock );
                    }
                    if ( *(_QWORD *)(v26 + 1792) == SharedReadyQueue->SoftParkElectionGeneration )
                    {
                      --SharedReadyQueue->SoftParkElectionThreadCount;
                      SharedReadyQueue->SoftParkElectionRunTime -= *(unsigned int *)(v26 + 1788);
                      if ( !SharedReadyQueue->SoftParkElectionThreadCount )
                        SharedReadyQueue->SoftParkElectionAffinityStats.AffinitySummary = 0LL;
                      v57 = *(unsigned __int8 *)(v26 + 1829)
                          + 8 * (*(unsigned __int8 *)(v26 + 1830) + 2LL * *(unsigned __int8 *)(v26 + 1828));
                      SharedReadyQueue->SoftParkElectionHeteroStats.ExpectedRuntimeByClass[0][0][v57] -= *(unsigned int *)(v26 + 1788);
                    }
                    _InterlockedAnd64((volatile signed __int64 *)&SharedReadyQueue->SoftParkElectionLock, 0LL);
                  }
                }
              }
              else
              {
                if ( ((unsigned __int8)(v147 - 1) & v147) != 0 )
                  _bittestandreset(&v51->AffinitizedSelectionMask, v144);
                if ( (*(_DWORD *)(v26 + 120) & 0x400000) != 0 )
                  _InterlockedAnd(*(volatile signed __int32 **)(v26 + 968), 0xFFFBFFFF);
                v100 = (unsigned __int64 **)*v49;
                v101 = *(unsigned __int64 ***)(v26 + 224);
                if ( *(unsigned __int64 **)(*v49 + 8) != v49 || *v101 != v49 )
                  goto LABEL_153;
                *v101 = (unsigned __int64 *)v100;
                v100[1] = (unsigned __int64 *)v101;
                if ( v101 == v100 )
                  v51->ReadySummary &= ~(1 << v50);
                KiUpdateLocalReadyQueueStatisticsOnRemoval(v51, v26);
              }
            }
            v2 = a1;
            v58 = 0LL;
            for ( m = 0LL; (unsigned int)m < *a1; m = (unsigned int)(m + 1) )
            {
              if ( *(_QWORD *)&a1[40 * (unsigned int)m + 16] == v47 )
              {
                v58 = (__int64)&a1[40 * (unsigned int)m + 16];
                break;
              }
            }
            v62 = (*(_DWORD *)(v26 + 120) >> 1) & 1;
            if ( v62 >= ((*(unsigned __int8 *)(v58 + 32) >> 1) & 1u) )
            {
              if ( v62 )
              {
                for ( n = 0; n < *a1; n = v120 + 1 )
                {
                  v115 = *(_QWORD *)&a1[40 * n + 16];
                  v116 = &a1[40 * n];
                  v117 = *((_QWORD *)v116 + 5);
                  if ( v115 == v47 )
                  {
                    if ( v117 && v117 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v117) )
                    {
                      if ( (v116[49] & 1) != 0 )
                        *(_DWORD *)(v129 + 116) |= 2u;
                      *(_BYTE *)(v129 + 565) = 1;
                      KiInsertDeferredReadyList(a2, v129);
                    }
                    v116[48] &= ~1u;
                    v118 = v116[48];
                    *((_QWORD *)v116 + 4) = v26;
                    v119 = *(_DWORD *)(v26 + 120);
                    v116[49] &= ~1u;
                    *((_QWORD *)v116 + 5) = v26;
                    v116[48] = (v118 & 0xFD ^ (2 * ((v119 & 2) != 0))) & 0xC3 | 4;
                    if ( !(unsigned __int8)KiIsPrcbThread(v26) )
                      *(_DWORD *)(v26 + 536) = *(_DWORD *)(v115 + 36);
                  }
                  else
                  {
                    v121 = *(_QWORD *)(v115 + 36544);
                    if ( v117 && v117 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v117) )
                    {
                      if ( (v116[49] & 1) != 0 )
                        *(_DWORD *)(v130 + 116) |= 2u;
                      *(_BYTE *)(v130 + 565) = 1;
                      KiInsertDeferredReadyList(a2, v130);
                    }
                    v116[48] &= ~1u;
                    v122 = v116[48] & 0xFD;
                    *((_QWORD *)v116 + 4) = v26;
                    v123 = (v122 ^ (2 * ((*(_DWORD *)(v26 + 120) & 2) != 0))) & 0xE3 | 4;
                    v124 = v123 | 0x20;
                    v125 = v123 & 0xDF;
                    if ( v26 == v121 )
                      v124 = v125;
                    v116[48] = v124;
                    v116[49] &= ~1u;
                    *((_QWORD *)v116 + 5) = v121;
                    if ( !(unsigned __int8)KiIsPrcbThread(v121) )
                      *(_DWORD *)(v121 + 536) = *(_DWORD *)(v115 + 36);
                  }
                }
              }
              else
              {
                v109 = *(_QWORD *)(v58 + 24);
                v110 = *(_QWORD *)v58;
                if ( v109 && v109 <= 0xFFFFFFFFFFFFFFFDuLL && *(_UNKNOWN **)(v109 + 544) != &unk_140FC9F40 )
                {
                  if ( (*(_BYTE *)(v58 + 33) & 1) != 0 )
                    *(_DWORD *)(v109 + 116) |= 2u;
                  *(_BYTE *)(v109 + 565) = 1;
                  KiEnterDeferredReadyState(v109, m, v58);
                  v113 += 27;
                  *v113 = *a2;
                  *a2 = v113;
                }
                v111 = *(_BYTE *)(v58 + 32) & 0xFE;
                *(_QWORD *)(v58 + 16) = v26;
                *(_BYTE *)(v58 + 32) = v111;
                v112 = *(_DWORD *)(v26 + 120);
                *(_BYTE *)(v58 + 33) &= ~1u;
                *(_QWORD *)(v58 + 24) = v26;
                *(_BYTE *)(v58 + 32) = (v111 & 0xFD ^ (2 * ((v112 & 2) != 0))) & 0xC3 | 4;
                if ( *(_UNKNOWN **)(v26 + 544) != &unk_140FC9F40 )
                  *(_DWORD *)(v26 + 536) = *(_DWORD *)(v110 + 36);
              }
LABEL_257:
              *((_DWORD *)a1 + 1) = v62;
            }
            else
            {
              v63 = 0;
              if ( !*a1 )
                goto LABEL_257;
              do
              {
                v64 = *(_QWORD *)&a1[40 * v63 + 16];
                v65 = &a1[40 * v63];
                v66 = *((_QWORD *)v65 + 5);
                if ( v64 == v47 )
                {
                  if ( v66 && v66 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v66) )
                  {
                    if ( (v65[49] & 1) != 0 )
                      *(_DWORD *)(v131 + 116) |= 2u;
                    *(_BYTE *)(v131 + 565) = 1;
                    KiInsertDeferredReadyList(a2, v131);
                  }
                  v65[48] &= ~1u;
                  v126 = v65[48];
                  *((_QWORD *)v65 + 4) = v26;
                  v127 = *(_DWORD *)(v26 + 120);
                  v65[49] &= ~1u;
                  *((_QWORD *)v65 + 5) = v26;
                  v65[48] = (v126 & 0xFD ^ (2 * ((v127 & 2) != 0))) & 0xC3 | 4;
                  if ( !(unsigned __int8)KiIsPrcbThread(v26) )
                    *(_DWORD *)(v26 + 536) = *(_DWORD *)(v64 + 36);
                }
                else
                {
                  v67 = *(_QWORD *)(v64 + 24);
                  if ( v66 && v66 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v66) )
                  {
                    if ( (v65[49] & 1) != 0 )
                      *(_DWORD *)(v128 + 116) |= 2u;
                    *(_BYTE *)(v128 + 565) = 1;
                    KiInsertDeferredReadyList(a2, v128);
                  }
                  v65[48] |= 1u;
                  v68 = v65[48];
                  *((_QWORD *)v65 + 4) = v67;
                  v65[48] = (v68 & 0xFD ^ (2 * ((*(_DWORD *)(v67 + 120) & 2) != 0))) & 0xC3 | 4;
                  v65[49] &= ~1u;
                  *((_QWORD *)v65 + 5) = v67;
                  if ( !(unsigned __int8)KiIsPrcbThread(v67) )
                    *(_DWORD *)(v67 + 536) = *(_DWORD *)(v64 + 36);
                }
                v63 = v70 + 1;
              }
              while ( v63 < *a1 );
              *((_DWORD *)a1 + 1) = v69;
            }
            goto LABEL_2;
          }
        }
      }
      else
      {
LABEL_216:
        KiRemoveCurrentlyEnumeratedThreadFromReadyQueue(&v142, v26, v27);
        *(_DWORD *)(v26 + 536) = v139->Number;
        KiAddThreadToScbQueue(v139, v34);
        if ( (WORD2(xmmword_140FC0C10) & 0x800) != 0 )
          EtwTraceReadyQueueInsertion(v26, v139->Number, 2, 0LL);
        v3 = v152;
        v4 = v149;
        v136 = v152;
      }
    }
    else
    {
      v90 = v144;
      if ( v149 == 2 )
      {
        if ( (unsigned __int64 *)*v24 == v3 && (unsigned __int64 *)v24[1] == v3 )
        {
          KiAdvanceReadyQueueEnumeratorToNextList((struct _KI_READY_QUEUE_ENUMERATOR *)&v142);
          v3 = v152;
          v4 = v149;
          v29 = v139;
          v136 = v152;
        }
        else
        {
          v153 = (unsigned __int64 *)v153[1];
        }
        KiRemoveThreadFromScbQueue(v29);
        goto LABEL_186;
      }
      v153 = (unsigned __int64 *)v153[1];
      if ( v148 )
      {
        if ( v148 != 1 )
          goto LABEL_186;
        if ( ((unsigned __int8)(v147 - 1) & v147) != 0 )
          _bittestandset(&v29->AffinitizedSelectionMask, v144);
        v91 = v29->SharedReadyQueue;
        if ( (*(_DWORD *)(v26 + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(v26 + 968), 0xFFFBFFFF);
        v92 = *v24;
        v93 = *(unsigned __int64 **)(v26 + 224);
        if ( *(unsigned __int64 **)(*v24 + 8) == v24 && (unsigned __int64 *)*v93 == v24 )
        {
          *v93 = v92;
          *(_QWORD *)(v92 + 8) = v93;
          if ( v93 == (unsigned __int64 *)v92 )
          {
            v92 = v91->ReadySummary;
            LODWORD(v92) = v92 & ~(1 << v90);
            v91->ReadySummary = v92;
          }
          v55 = v91->ReadyThreadCount-- == 1;
          if ( v55 )
          {
            v92 = ~v91->Affinity;
            _InterlockedAnd64((volatile signed __int64 *)&v91->SubNode->StealableSharedReadyQueues, v92);
          }
          v91->ReadyQueueExpectedRunTime -= *(unsigned int *)(v26 + 1784);
          if ( *(_QWORD *)(v26 + 1792) == v91->SoftParkElectionGeneration )
          {
            v94 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&v91->SoftParkElectionLock, 0LL) )
            {
              do
              {
                if ( (++v94 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v92, v24, v27) )
                {
                  HvlNotifyLongSpinWait(v94);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( v91->SoftParkElectionLock );
            }
            if ( *(_QWORD *)(v26 + 1792) == v91->SoftParkElectionGeneration )
            {
              --v91->SoftParkElectionThreadCount;
              v91->SoftParkElectionRunTime -= *(unsigned int *)(v26 + 1788);
              if ( !v91->SoftParkElectionThreadCount )
                v91->SoftParkElectionAffinityStats.AffinitySummary = 0LL;
              v95 = *(unsigned __int8 *)(v26 + 1829)
                  + 8 * (*(unsigned __int8 *)(v26 + 1830) + 2LL * *(unsigned __int8 *)(v26 + 1828));
              v91->SoftParkElectionHeteroStats.ExpectedRuntimeByClass[0][0][v95] -= *(unsigned int *)(v26 + 1788);
            }
            _InterlockedAnd64((volatile signed __int64 *)&v91->SoftParkElectionLock, 0LL);
          }
          goto LABEL_186;
        }
LABEL_153:
        __fastfail(3u);
      }
      if ( ((v147 - 1) & v147) != 0 )
        _bittestandreset(&v29->AffinitizedSelectionMask, v144);
      KiRemoveThreadFromReadyQueue(v29, v24, v90);
LABEL_186:
      v96 = *(_BYTE *)(v26 + 388);
      if ( v96 == 1 )
      {
        *(_DWORD *)(v26 + 116) |= 2u;
      }
      else if ( v96 == 5 )
      {
        v97 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v26 + 436));
        if ( *(_BYTE *)(v26 + 391) )
          *(_QWORD *)(v26 + 1000) += v97;
        else
          *(_QWORD *)(v26 + 992) += v97;
      }
      *(_BYTE *)(v26 + 388) = 7;
      *(_QWORD *)(v26 + 216) = *a2;
      *a2 = v26 + 216;
    }
  }
LABEL_320:
  KiReleaseSharedReadyQueueLocksForRescheduleContext((struct _KI_RESCHEDULE_CONTEXT *)a1);
}
