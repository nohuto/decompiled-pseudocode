/*
 * XREFs of KiExecuteAllDpcs @ 0x14032FD30
 * Callers:
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x1405FD860 (KiExecuteDpc.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1403076F0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireMultiplePrcbLocks @ 0x140331520 (KiAcquireMultiplePrcbLocks.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiInsertNewDpcRuntime @ 0x140411DBC (KiInsertNewDpcRuntime.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x140445D90 (EtwTraceLongDpcDetectionEvent.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall KiExecuteAllDpcs(struct _KPRCB *a1, unsigned __int64 a2, _DWORD *a3, __int64 a4)
{
  _KTHREAD *v5; // r8
  struct _KPRCB *v6; // rdi
  struct _KPRCB *v7; // r13
  _KDPC_DATA *v8; // rsi
  int *p_DpcQueueDepth; // r14
  __int16 v10; // ax
  struct _SINGLE_LIST_ENTRY *v11; // r15
  _KDPC_DATA *v12; // r12
  __int64 DpcQueueDepth; // rcx
  unsigned int LongDpcPresent; // eax
  bool v15; // bl
  struct _SINGLE_LIST_ENTRY *Next; // r14
  struct _SINGLE_LIST_ENTRY *v17; // rax
  unsigned __int64 v18; // r14
  _QWORD *v19; // rbx
  struct _KPRCB *v20; // rcx
  unsigned __int32 *v21; // r8
  int v22; // edi
  __int64 v23; // r8
  bool n; // zf
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned int CombinedApcDisable; // r12d
  _DWORD *v28; // rdx
  int v29; // ecx
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r15
  unsigned int v32; // r8d
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdi
  struct _KPRCB *v35; // r14
  _QWORD *DpcLog; // r8
  unsigned __int64 v37; // r9
  _RTL_HASH_TABLE *DpcRuntimeHistoryHashTable; // r10
  unsigned int BucketAndMaskBitCounts; // r11d
  __int64 v40; // r14
  ULONG_PTR v41; // rcx
  ULONG_PTR v42; // r8
  unsigned int v43; // r11d
  unsigned __int64 *v44; // rcx
  unsigned __int64 v45; // rdi
  unsigned __int64 *v46; // r12
  __int64 v47; // rdx
  unsigned __int32 v49; // eax
  unsigned __int32 v50; // ett
  volatile signed __int32 *v51; // rax
  unsigned int Next_high; // edi
  unsigned __int16 v53; // r14
  unsigned int v54; // ebx
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v60; // rbx
  _KTHREAD *DpcDelegateThread; // rax
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r15
  _KTHREAD *v63; // r14
  _KTHREAD *CurrentThread; // rsi
  int v65; // r9d
  unsigned __int8 *v66; // rdi
  unsigned int j; // edx
  unsigned __int8 *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  unsigned __int8 v71; // dl
  unsigned int m; // r11d
  unsigned __int8 *v73; // r9
  __int64 v74; // r14
  unsigned __int64 v75; // rcx
  __int64 v76; // r10
  unsigned __int8 v77; // cl
  __int64 v78; // r10
  unsigned __int8 v79; // al
  int v80; // esi
  struct _KPRCB *v81; // rdi
  unsigned __int8 *v82; // rax
  __int64 v83; // r14
  unsigned __int8 v84; // al
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // eax
  __int64 v87; // rcx
  __int64 v88; // rdx
  unsigned __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  unsigned int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  int v96; // edx
  _DWORD *v97; // rcx
  __int64 v98; // r12
  unsigned __int64 *p_IsrDpcStats; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v100; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v101; // r8
  unsigned __int8 v102; // cl
  _KPRCB *v103; // rdx
  char v104; // si
  char v105; // r14
  unsigned int v106; // edi
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 *v108; // rax
  __int64 v109; // rdx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v110; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v112; // r8
  unsigned __int8 AllCompareThreadStateFlags; // cl
  _KPRCB *Prcb; // rdx
  unsigned int i; // r10d
  unsigned __int8 *v116; // rax
  __int64 v117; // r11
  unsigned __int8 v118; // dl
  unsigned __int8 *u5; // rax
  __int64 v120; // rcx
  unsigned __int32 v121; // eax
  __int64 v122; // rdx
  unsigned __int32 v123; // ett
  __int64 v124; // rcx
  unsigned int k; // r10d
  unsigned __int8 *v126; // rax
  __int64 v127; // r11
  unsigned __int8 v128; // dl
  unsigned __int8 *v129; // rax
  char PreviousMode; // [rsp+30h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-198h] BYREF
  unsigned int v133; // [rsp+48h] [rbp-190h]
  struct _SINGLE_LIST_ENTRY v134; // [rsp+50h] [rbp-188h] BYREF
  unsigned __int64 IsrDpcStats; // [rsp+58h] [rbp-180h] BYREF
  unsigned int v136; // [rsp+60h] [rbp-178h]
  unsigned int v137; // [rsp+64h] [rbp-174h]
  _KTHREAD *v138; // [rsp+70h] [rbp-168h]
  __int64 v139[2]; // [rsp+78h] [rbp-160h] BYREF
  int v140; // [rsp+88h] [rbp-150h]
  struct _SINGLE_LIST_ENTRY *v141; // [rsp+90h] [rbp-148h]
  struct _KPRCB *v142; // [rsp+98h] [rbp-140h]
  ULONG_PTR v143; // [rsp+A0h] [rbp-138h]
  ULONG_PTR v144; // [rsp+A8h] [rbp-130h]
  ULONG_PTR v145; // [rsp+B0h] [rbp-128h]
  struct _KPRCB *v146; // [rsp+B8h] [rbp-120h]
  _DWORD *v147; // [rsp+C0h] [rbp-118h]
  int *v148; // [rsp+C8h] [rbp-110h]
  struct _KPRCB *v149; // [rsp+D0h] [rbp-108h]
  ULONG_PTR v150; // [rsp+D8h] [rbp-100h]
  ULONG_PTR v151; // [rsp+E8h] [rbp-F0h]
  unsigned __int64 v152; // [rsp+F0h] [rbp-E8h]
  _DWORD *v153; // [rsp+100h] [rbp-D8h]
  _QWORD *v154; // [rsp+110h] [rbp-C8h]
  LONG *p_SpareLong; // [rsp+118h] [rbp-C0h]
  char *p_PreviousMode; // [rsp+120h] [rbp-B8h]
  _KDPC_DATA *v157; // [rsp+128h] [rbp-B0h]
  __int64 v158; // [rsp+130h] [rbp-A8h]
  __int128 v159; // [rsp+138h] [rbp-A0h] BYREF
  __int128 v160; // [rsp+148h] [rbp-90h]
  __int128 v161; // [rsp+158h] [rbp-80h]
  _QWORD v162[2]; // [rsp+168h] [rbp-70h] BYREF
  _QWORD v163[4]; // [rsp+178h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+1D8h] [rbp+0h]

  v133 = a4;
  v147 = a3;
  v5 = (_KTHREAD *)a2;
  v138 = (_KTHREAD *)a2;
  v146 = a1;
  v6 = a1;
  v7 = a1;
  v142 = a1;
  v152 = a2;
  v153 = a3;
  v140 = a4;
  BugCheckParameter2 = 0LL;
  v159 = 0LL;
  v134.Next = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v158 = (unsigned int)a4;
  v8 = &a1->DpcData[(unsigned int)a4];
  v157 = v8;
  p_DpcQueueDepth = (int *)&v8->DpcQueueDepth;
  v148 = (int *)&v8->DpcQueueDepth;
  if ( !v8->DpcQueueDepth )
    return 1;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v11 = 0LL;
  }
  else
  {
    if ( (_DWORD)a4 )
    {
      v10 = 3906;
      HIDWORD(v134.Next) = 5249026;
    }
    else
    {
      v10 = 3908;
      HIDWORD(v134.Next) = 5245442;
    }
    LOWORD(v134.Next) = v10;
    v11 = &v134;
  }
  v141 = v11;
  v139[0] = (__int64)&a1->IsrDpcStats;
  IsrDpcStats = (unsigned __int64)a1->IsrDpcStats;
  v12 = &a1->DpcData[(unsigned int)a4];
  v149 = (struct _KPRCB *)v12;
  while ( 1 )
  {
    DpcQueueDepth = (unsigned int)v8->DpcQueueDepth;
    LongDpcPresent = v8->LongDpcPresent;
    LOBYTE(a2) = LongDpcPresent != 0;
    v15 = !(_DWORD)a4 && (LongDpcPresent || (unsigned int)DpcQueueDepth >= KiLongDpcQueueThreshold);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      if ( !v15 )
        goto LABEL_14;
      EtwTraceLongDpcDetectionEvent(DpcQueueDepth, a2, v5);
      v5 = v138;
    }
    if ( v15 && KiEnterLongDpcProcessing(v6, v5, (__int64)v5, a4) )
      return 0;
LABEL_14:
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&v8->DpcLock, 0LL) )
        KxWaitForSpinLockAndAcquire(&v8->DpcLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented(&v8->DpcLock);
    }
    if ( *p_DpcQueueDepth <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)&v146->14524 + v158, 0xFFEDu);
      a2 = 0LL;
      v8->LongDpcPresent = 0;
      if ( !*p_DpcQueueDepth )
      {
        KxReleaseSpinLock(&v8->DpcLock);
        v6 = a1;
LABEL_97:
        *(_QWORD *)v139[0] = IsrDpcStats;
        if ( (v6->PrcbFlagsReserved & 0x800) != 0 )
        {
          v57 = 0;
          v134.Next = 0LL;
          if ( v138 != v6->DpcDelegateThread )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v121 = *SchedulerAssist;
              do
              {
                v122 = v121;
                LODWORD(v122) = v121 & 0xFFDFFFFF;
                v123 = v121;
                v121 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v121 & 0xFFDFFFFF, v121);
              }
              while ( v123 != v121 );
              if ( (v121 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb, v122, SchedulerAssist, a4);
            }
            _enable();
            v149 = v6;
            v60 = (unsigned __int64)v6 | 1;
            IsrDpcStats = (unsigned __int64)v6 | 1;
            KiAcquireMultiplePrcbLocks(v6->CoreControlBlock->Prcbs, v6->CoreControlBlock->ProcessorCount);
            v6->PrcbFlagsReserved &= ~0x800u;
            DpcDelegateThread = v6->DpcDelegateThread;
            if ( DpcDelegateThread && v6->NextThread == DpcDelegateThread )
            {
              StaticRescheduleContext = v6->StaticRescheduleContext;
              memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
              KiStartRescheduleContext(StaticRescheduleContext, &IsrDpcStats, 0LL);
              v63 = v6->DpcDelegateThread;
              CurrentThread = v6->CurrentThread;
              v65 = *(&CurrentThread->MiscFlags + 1);
              if ( (v65 & 0x1000) != 0 || CurrentThread == v6->SmtIsolationThread )
              {
                RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v6);
                v112 = RescheduleContextEntryForPrcb;
                AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
                Prcb = RescheduleContextEntryForPrcb->Prcb;
                if ( (AllCompareThreadStateFlags & 0x20) == 0 )
                  RescheduleContextEntryForPrcb->___u5[0] |= 1u;
                RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
                RescheduleContextEntryForPrcb->CompareThread = Prcb->IdleThread;
                RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
                RescheduleContextEntryForPrcb->NewThread = Prcb->IdleThread;
                *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
                if ( ((AllCompareThreadStateFlags >> 1) & 1) != 0 )
                {
                  for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
                  {
                    v116 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[i];
                    if ( v116 != (unsigned __int8 *)v112 )
                    {
                      v117 = *(_QWORD *)v116;
                      v118 = StaticRescheduleContext->ProcessorEntries[i].AllCompareThreadStateFlags;
                      if ( (v118 & 0x20) != 0 )
                      {
                        u5 = v116 + 34;
                      }
                      else
                      {
                        u5 = StaticRescheduleContext->ProcessorEntries[i].___u5;
                        *u5 |= 1u;
                      }
                      *u5 &= ~2u;
                      StaticRescheduleContext->ProcessorEntries[i].CompareThread = *(_KTHREAD **)(v117 + 24);
                      StaticRescheduleContext->ProcessorEntries[i].AllCompareThreadStateFlags = v118 & 0xC0 | 5;
                      StaticRescheduleContext->ProcessorEntries[i].NewThread = *(_KTHREAD **)(v117 + 24);
                      *((_BYTE *)&StaticRescheduleContext->ProcessorEntries[i].0 + 1) &= ~1u;
                    }
                  }
LABEL_234:
                  StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
                }
              }
              else
              {
                v66 = 0LL;
                for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
                {
                  v68 = &StaticRescheduleContext->ProcessorCount + 40 * j;
                  if ( *((struct _KPRCB **)v68 + 2) == a1 )
                  {
                    v66 = v68 + 16;
                    break;
                  }
                }
                if ( (unsigned __int8)(v65 & 2) > (unsigned __int8)(*(_BYTE *)(&v63->MiscFlags + 1) & 2) )
                {
                  while ( v57 < StaticRescheduleContext->ProcessorCount )
                  {
                    v110 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                          + 32 * v57
                                                          + 8 * v57);
                    if ( v66 != (unsigned __int8 *)v110
                      && !KiDoesThreadDominateRescheduleContextEntry(v110, CurrentThread, 2, 0LL) )
                    {
                      v100 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
                      v101 = v100;
                      v102 = v100->AllCompareThreadStateFlags;
                      v103 = v100->Prcb;
                      if ( (v102 & 0x20) == 0 )
                        v100->___u5[0] |= 1u;
                      v100->___u5[0] &= ~2u;
                      v100->CompareThread = v103->IdleThread;
                      v100->AllCompareThreadStateFlags = v102 & 0xC0 | 5;
                      v100->NewThread = v103->IdleThread;
                      *((_BYTE *)&v100->0 + 1) &= ~1u;
                      if ( ((v102 >> 1) & 1) != 0 )
                      {
                        for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
                        {
                          v126 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[k];
                          if ( v126 != (unsigned __int8 *)v101 )
                          {
                            v127 = *(_QWORD *)v126;
                            v128 = StaticRescheduleContext->ProcessorEntries[k].AllCompareThreadStateFlags;
                            if ( (v128 & 0x20) != 0 )
                            {
                              v129 = v126 + 34;
                            }
                            else
                            {
                              v129 = StaticRescheduleContext->ProcessorEntries[k].___u5;
                              *v129 |= 1u;
                            }
                            *v129 &= ~2u;
                            StaticRescheduleContext->ProcessorEntries[k].CompareThread = *(_KTHREAD **)(v127 + 24);
                            StaticRescheduleContext->ProcessorEntries[k].AllCompareThreadStateFlags = v128 & 0xC0 | 5;
                            StaticRescheduleContext->ProcessorEntries[k].NewThread = *(_KTHREAD **)(v127 + 24);
                            *((_BYTE *)&StaticRescheduleContext->ProcessorEntries[k].0 + 1) &= ~1u;
                          }
                        }
                        goto LABEL_234;
                      }
                      goto LABEL_173;
                    }
                    ++v57;
                  }
                }
                v69 = *(_QWORD *)v66;
                v70 = *(_QWORD *)(*(_QWORD *)v66 + 8LL);
                *((_QWORD *)v66 + 2) = v70;
                v71 = v66[32] & 0xFE | (v70 == *(_QWORD *)(v69 + 24));
                v66[32] = v71;
                v66[32] = (v71 & 0xFD ^ (2 * ((*(_DWORD *)(v70 + 120) & 2) != 0))) & 0xC3 | 4;
                *((_QWORD *)v66 + 3) = 0LL;
                v66[33] &= ~1u;
                v66[34] |= 1u;
                if ( ((*((_BYTE *)&v63->MiscFlags + 4) | *((_BYTE *)&CurrentThread->MiscFlags + 4)) & 2) != 0 )
                {
                  for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
                  {
                    v73 = &StaticRescheduleContext->ProcessorCount + 40 * m;
                    if ( v66 != v73 + 16 )
                    {
                      v139[0] = 0LL;
                      v74 = *((_QWORD *)v73 + 2);
                      v75 = *((_QWORD *)v73 + 5);
                      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0 )
                      {
                        v76 = *(_QWORD *)(v74 + 36544);
                        if ( v75 && v75 <= 0xFFFFFFFFFFFFFFFDuLL && !KiIsPrcbThread(v75) )
                        {
                          if ( (v73[49] & 1) != 0 )
                            *(_DWORD *)(v124 + 116) |= 2u;
                          *(_BYTE *)(v124 + 565) = 1;
                          KiInsertDeferredReadyList(v139, v124);
                        }
                        *((_QWORD *)v73 + 4) = CurrentThread;
                        v73[48] &= ~1u;
                        v77 = (v73[48] & 0xFD ^ (2 * ((*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0))) & 0xC3 | 0x24;
                        if ( CurrentThread == (_KTHREAD *)v76 )
                          v77 = (v73[48] & 0xFD ^ (2 * ((*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
                      }
                      else
                      {
                        v76 = *(_QWORD *)(v74 + 24);
                        if ( v75 && v75 <= 0xFFFFFFFFFFFFFFFDuLL && !KiIsPrcbThread(v75) )
                        {
                          if ( (v73[49] & 1) != 0 )
                            *(_DWORD *)(v120 + 116) |= 2u;
                          *(_BYTE *)(v120 + 565) = 1;
                          KiInsertDeferredReadyList(v139, v120);
                        }
                        *((_QWORD *)v73 + 4) = v76;
                        v73[48] |= 1u;
                        v77 = (v73[48] & 0xFD ^ (2 * ((*(_DWORD *)(v76 + 120) & 2) != 0))) & 0xC3 | 4;
                      }
                      v73[48] = v77;
                      *((_QWORD *)v73 + 5) = v76;
                      v73[49] &= ~1u;
                      if ( !KiIsPrcbThread(v76) )
                        *(_DWORD *)(v78 + 536) = *(_DWORD *)(v74 + 36);
                    }
                  }
                }
                StaticRescheduleContext->MaximumThreadIsolationWidth = (*((_DWORD *)&CurrentThread->0 + 1) >> 1) & 1;
              }
LABEL_173:
              KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v134);
              v104 = 0;
              v105 = 0;
              if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
                v104 = 2;
              v106 = 0;
              if ( StaticRescheduleContext->ProcessorCount )
              {
                v7 = a1;
                do
                {
                  v105 |= KiCommitRescheduleContextEntry(
                            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                                  + 32 * v106
                                                                  + 8 * v106),
                            a1,
                            v104,
                            &v134);
                  ++v106;
                }
                while ( v106 < StaticRescheduleContext->ProcessorCount );
              }
              if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
              {
                CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
                if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
                  CoreControlBlock->ScanStartIndex = 0;
              }
              IsrDpcStats = v60 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v60 & 1) != 0 )
              {
                v108 = *(unsigned __int8 **)((v60 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                p_IsrDpcStats = (unsigned __int64 *)(v108 + 8);
                LODWORD(v109) = *v108;
              }
              else
              {
                p_IsrDpcStats = &IsrDpcStats;
                LODWORD(v109) = 1;
              }
              while ( (_DWORD)v109 )
              {
                v109 = (unsigned int)(v109 - 1);
                _InterlockedAnd64((volatile signed __int64 *)(p_IsrDpcStats[v109] + 48), 0LL);
              }
              v60 = 0LL;
              IsrDpcStats = 0LL;
              if ( v105 )
              {
                v80 = 0;
                if ( StaticRescheduleContext->ProcessorCount )
                {
                  while ( 1 )
                  {
                    v83 = (__int64)StaticRescheduleContext->ProcessorEntries[v80].Prcb;
                    v84 = StaticRescheduleContext->ProcessorEntries[v80].___u6[0];
                    if ( (v84 & 0x10) != 0 )
                    {
                      TargetType = v7->DeferredDispatchInterrupts.TargetType;
                      if ( !TargetType )
                        goto LABEL_121;
                      if ( TargetType == 1 )
                      {
                        SingleTargetIndex = v7->DeferredDispatchInterrupts.SingleTargetIndex;
                        if ( SingleTargetIndex == *(_DWORD *)(v83 + 36) )
                          goto LABEL_122;
                        v7->DeferredDispatchInterrupts.TargetType = 2;
                        v87 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                                            + SingleTargetIndex) >> 6;
                        p_IsrDpcStats = (unsigned __int64 *)(*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                                                             + SingleTargetIndex) & 0x3F);
                        if ( v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v87 )
                        {
                          if ( v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v87 )
                          {
                            v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v87 + 1;
                            goto LABEL_146;
                          }
                        }
                        else
                        {
LABEL_146:
                          v88 = v87;
                          v89 = v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v87];
                          _bittestandset64((__int64 *)&v89, (unsigned int)p_IsrDpcStats);
                          v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v88] = v89;
                        }
                      }
                      v90 = *(_QWORD *)(v83 + 200);
                      v91 = *(unsigned __int8 *)(v83 + 208);
                      if ( v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v91 )
                        goto LABEL_155;
                      goto LABEL_148;
                    }
                    if ( (v84 & 8) == 0 || !*(_BYTE *)(v83 + 7) )
                      goto LABEL_122;
                    v79 = v7->DeferredDispatchInterrupts.TargetType;
                    if ( !v79 )
                    {
LABEL_121:
                      v7->DeferredDispatchInterrupts.TargetType = 1;
                      v7->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(v83 + 36);
                      goto LABEL_122;
                    }
                    if ( v79 == 1 )
                    {
                      v92 = v7->DeferredDispatchInterrupts.SingleTargetIndex;
                      if ( v92 == *(_DWORD *)(v83 + 36) )
                        goto LABEL_122;
                      v7->DeferredDispatchInterrupts.TargetType = 2;
                      v93 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v92) >> 6;
                      p_IsrDpcStats = (unsigned __int64 *)(*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                                                           + v92) & 0x3F);
                      if ( v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v93 )
                        goto LABEL_153;
                      if ( v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v93 )
                        break;
                    }
LABEL_154:
                    v90 = *(_QWORD *)(v83 + 200);
                    v91 = *(unsigned __int8 *)(v83 + 208);
                    if ( v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v91 )
                      goto LABEL_155;
LABEL_148:
                    if ( v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v91 )
                    {
                      v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v91 + 1;
LABEL_155:
                      v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v91] |= v90;
                    }
LABEL_122:
                    if ( (StaticRescheduleContext->ProcessorEntries[v80].___u6[0] & 2) != 0 )
                      EtwTraceScheduleThread(
                        (__int64)StaticRescheduleContext->ProcessorEntries[v80].NewThread,
                        v83,
                        0LL);
                    if ( (StaticRescheduleContext->ProcessorEntries[v80].___u6[0] & 4) != 0 )
                    {
                      if ( *(_QWORD *)(v83 + 36600) )
                      {
                        if ( a1->SchedulerAssist )
                        {
                          if ( a1 != (struct _KPRCB *)v83 )
                          {
                            v96 = **(_DWORD **)(v83 + 36600);
                            if ( (v96 & 0x100000) != 0
                              || (**(_DWORD **)(v83 + 36600) & 0x40000) != 0
                              && (unsigned __int8)v96 < StaticRescheduleContext->ProcessorEntries[v80].KickPriority )
                            {
                              v97 = a1->SchedulerAssist;
                              v97[3] = 2;
                              v98 = *(unsigned int *)(v83 + 36);
                              if ( !HvlpVirtualProcessorsIdentityMapped )
                              {
                                LODWORD(v98) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v98 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v98] << 6);
                                v7 = a1;
                              }
                              v97[2] = v98;
                              if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                                EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v83 + 36), 2LL, p_IsrDpcStats);
                              __writemsr(0x400000C2u, (unsigned int)v98);
                            }
                          }
                        }
                      }
                    }
                    if ( (StaticRescheduleContext->ProcessorEntries[v80].___u6[0] & 1) != 0 )
                      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v80].NewThread->KeReferenceCount);
                    if ( ++v80 >= (unsigned int)StaticRescheduleContext->ProcessorCount )
                    {
                      v60 = IsrDpcStats;
                      goto LABEL_130;
                    }
                  }
                  v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v93 + 1;
LABEL_153:
                  v94 = v93;
                  v95 = v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v93];
                  _bittestandset64((__int64 *)&v95, (unsigned int)p_IsrDpcStats);
                  v7->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v94] = v95;
                  goto LABEL_154;
                }
LABEL_130:
                v81 = a1;
                KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
              }
              else
              {
                v81 = a1;
              }
              if ( v134.Next )
                KiReadyDeferredReadyList(v81, &v134);
            }
            if ( v60 )
            {
              IsrDpcStats = v60 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v60 & 1) != 0 )
              {
                v82 = *(unsigned __int8 **)((v60 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
                v46 = (unsigned __int64 *)(v82 + 8);
                LODWORD(v47) = *v82;
              }
              else
              {
                v46 = &IsrDpcStats;
                LODWORD(v47) = 1;
              }
              while ( (_DWORD)v47 )
              {
                v47 = (unsigned int)(v47 - 1);
                _InterlockedAnd64((volatile signed __int64 *)(v46[v47] + 48), 0LL);
              }
            }
            _disable();
          }
        }
        return 1;
      }
    }
    Next = v12->DpcList.ListHead.Next;
    v17 = v12->DpcList.ListHead.Next->Next;
    v12->DpcList.ListHead.Next = v17;
    if ( !v17 )
      v12->DpcList.LastEntry = &v12->DpcList.ListHead;
    v18 = (unsigned __int64)&Next[-1];
    BugCheckParameter2 = *(_QWORD *)(v18 + 24);
    v143 = *(_QWORD *)(v18 + 32);
    v150 = *(_QWORD *)(v18 + 40);
    v151 = *(_QWORD *)(v18 + 48);
    v19 = *(_QWORD **)(v18 + 56);
    v145 = (ULONG_PTR)v19;
    *(_QWORD *)(v18 + 56) = 0LL;
    v8->DpcQueueDepth = *v148 - 1;
    v8->ActiveDpc = (_KDPC *volatile)v18;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&v8->DpcLock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&v8->DpcLock, retaddr);
    v20 = KeGetCurrentPrcb();
    v21 = (unsigned __int32 *)v20->SchedulerAssist;
    if ( v21 )
    {
      _m_prefetchw(v21);
      v49 = *v21;
      do
      {
        a2 = v49;
        LODWORD(a2) = v49 & 0xFFDFFFFF;
        v50 = v49;
        v49 = _InterlockedCompareExchange((volatile signed __int32 *)v21, v49 & 0xFFDFFFFF, v49);
      }
      while ( v50 != v49 );
      if ( (v49 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v20, a2, v21, a4);
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      *(_QWORD *)&v159 = BugCheckParameter2;
      *((_QWORD *)&v159 + 1) = 0x7E35C6C7F3DD7277LL
                             * (KiWaitNever ^ __ROR8__(
                                                BugCheckParameter2 ^ _byteswap_uint64((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ v18),
                                                KiWaitNever));
      v162[0] = &v159;
      v162[1] = 16LL;
      EtwTraceKernelEvent((int)v162, 1, 0x20040000u, 3941, 5245442);
    }
    if ( v11 )
    {
      v137 = 0;
      v22 = 0;
      v23 = qword_140FC9C80;
      if ( qword_140FC9C80 )
      {
        a2 = *(unsigned int *)(qword_140FC9C80 + 4520);
        for ( n = !_BitScanForward((unsigned int *)&v20, a2); !n; n = !_BitScanForward((unsigned int *)&v20, a2) )
        {
          a2 = ((_DWORD)a2 - 1) & (unsigned int)a2;
          v25 = qword_140FC9C80 + 32LL * (_QWORD)v20 + 4556;
          if ( v25 && (*(_DWORD *)(v25 + 4) & 0x80u) != 0 )
            v22 |= 1 << *(_BYTE *)(qword_140FC9C80 + 2LL * (_QWORD)v20 + 4505);
        }
      }
      else
      {
        LOBYTE(v22) = 30;
      }
      if ( (v22 & 2) != 0 )
        *(_QWORD *)&v160 = EtwpGetPerfCounter();
      else
        *(_QWORD *)&v160 = 0LL;
      if ( (v22 & 4) != 0 )
        *((LARGE_INTEGER *)&v160 + 1) = RtlGetSystemTimePrecise();
      else
        *((_QWORD *)&v160 + 1) = 0LL;
      if ( (v22 & 8) != 0 )
      {
        v26 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v26) << 32;
        *(_QWORD *)&v161 = v26;
      }
      else
      {
        *(_QWORD *)&v161 = 0LL;
      }
      if ( (v22 & 0x10) != 0 )
        *((_QWORD *)&v161 + 1) = EtwpGetHostPerfCounter(v20, a2, v23);
      else
        *((_QWORD *)&v161 + 1) = 0LL;
    }
    p_SpareLong = &v138->WaitBlock[3].SpareLong;
    CombinedApcDisable = v138->CombinedApcDisable;
    v136 = CombinedApcDisable;
    v137 = CombinedApcDisable;
    p_PreviousMode = &v138->PreviousMode;
    PreviousMode = v138->PreviousMode;
    v28 = v147;
    v29 = (*v147)++;
    v30 = &v28[6 * (v29 & 0xF)];
    v30[2] = BugCheckParameter2;
    v30[3] = MEMORY[0xFFFFF78000000320];
    v154 = v30 + 4;
    v30[4] = 0LL;
    a1->DpcTimeCount = 0;
    v31 = __rdtsc();
    v144 = v31;
    *(_QWORD *)v139[0] = v19;
    if ( v19 != (_QWORD *)1 )
      v19[4] = v31;
    if ( !v133 )
    {
      a1->CurrentDpcRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))BugCheckParameter2;
      a1->CurrentDpcStartTime = v31;
      a1->DpcRoutineActive = 1;
    }
    guard_dispatch_icall_no_overrides(v18, v143, v150);
    v32 = v133;
    v33 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v33) << 32;
    v34 = v33;
    if ( !v32 )
    {
      v35 = a1;
      a1->DpcRoutineActive = 0;
      DpcLog = a1->DpcLog;
      if ( DpcLog )
      {
        a2 = 3LL * a1->DpcLogIndex;
        DpcLog[a2] = BugCheckParameter2;
        DpcLog[a2 + 1] = v31;
        DpcLog[a2 + 2] = v33;
        if ( ++a1->DpcLogIndex >= 0x20 )
          a1->DpcLogIndex = 0;
      }
      v37 = v33 - v31;
      DpcRuntimeHistoryHashTable = a1->DpcRuntimeHistoryHashTable;
      if ( DpcRuntimeHistoryHashTable )
      {
        BucketAndMaskBitCounts = DpcRuntimeHistoryHashTable->BucketAndMaskBitCounts;
        v40 = -1LL << (BucketAndMaskBitCounts & 0x1F);
        v41 = BugCheckParameter2;
        v42 = BugCheckParameter2 & v40;
        v143 = (BugCheckParameter2 & v40) >> 40;
        v144 = (BugCheckParameter2 & v40) >> 32;
        v145 = (BugCheckParameter2 & v40) >> 24;
        v43 = BucketAndMaskBitCounts >> 5;
        if ( v43 )
        {
          v150 = BugCheckParameter2 & v40;
          v44 = (unsigned __int64 *)&DpcRuntimeHistoryHashTable->Buckets[(v43 - 1) & (442596621 * (unsigned __int8)v42
                                                                                    - 877075889
                                                                                    + ((BugCheckParameter2 & v40) >> 56)
                                                                                    + 37
                                                                                    * ((unsigned __int8)((BugCheckParameter2 & v40) >> 48)
                                                                                     + 37
                                                                                     * ((unsigned __int8)v143
                                                                                      + 37
                                                                                      * ((unsigned __int8)v144
                                                                                       + 37
                                                                                       * ((unsigned __int8)v145
                                                                                        + 37
                                                                                        * ((unsigned __int8)(((unsigned int)BugCheckParameter2 & (unsigned int)v40) >> 16)
                                                                                         + 37
                                                                                         * (unsigned int)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 & v40) >> 8)))))))];
          while ( 1 )
          {
            a2 = *v44;
            v44 = (unsigned __int64 *)a2;
            if ( (a2 & 1) != 0 )
              break;
            if ( v42 == (v40 & *(_QWORD *)(a2 + 8)) )
            {
              v41 = BugCheckParameter2;
              goto LABEL_52;
            }
          }
          v41 = BugCheckParameter2;
        }
        a2 = 0LL;
LABEL_52:
        if ( a2 )
        {
          *(_QWORD *)(a2 + 16) = (*(_QWORD *)(a2 + 16) >> 2) + ((3 * v37) >> 2);
          *(_BYTE *)(a2 + 24) = 1;
        }
        else
        {
          KiInsertNewDpcRuntime(DpcRuntimeHistoryHashTable, v41, v37);
        }
        v35 = a1;
        CombinedApcDisable = v136;
      }
      v35->CurrentDpcRoutine = 0LL;
      v35->CurrentDpcRuntimeHistoryCached = -1LL;
      v35->CurrentDpcStartTime = 0LL;
      v32 = v133;
    }
    if ( v19 != (_QWORD *)1 )
    {
      v45 = v34 - v19[4];
      v19[3] += v45;
      ++v19[5];
      v19[10] += v45;
      ++v19[11];
    }
    *v154 = MEMORY[0xFFFFF78000000320];
    if ( CombinedApcDisable != *p_SpareLong )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, CombinedApcDisable, (unsigned int)*p_SpareLong);
    if ( PreviousMode != *p_PreviousMode )
      KeBugCheckEx(0x1F9u, BugCheckParameter2, *p_PreviousMode, 4uLL, 0LL);
    v6 = a1;
    v51 = (volatile signed __int32 *)a1->SchedulerAssist;
    if ( v51 && !v32 )
      _InterlockedDecrement(v51 + 7);
    v11 = v141;
    if ( v141 )
    {
      Next_high = HIDWORD(v141->Next);
      v53 = (unsigned __int16)v141->Next;
      v137 = 0;
      v163[2] = &BugCheckParameter2;
      v163[3] = 8LL;
      v54 = *(_DWORD *)(EtwpHostSiloState + 4520);
      for ( n = !_BitScanForward((unsigned int *)&v55, v54); !n; n = !_BitScanForward((unsigned int *)&v55, v54) )
      {
        v54 &= v54 - 1;
        a2 = EtwpHostSiloState;
        v56 = EtwpHostSiloState + 32LL * (unsigned int)v55 + 4556;
        if ( v56 && (*(_DWORD *)(v56 + 4) & 0x80u) != 0 )
        {
          v163[0] = (char *)&v159 + 8 * *(unsigned __int8 *)(EtwpHostSiloState + 2 * v55 + 4505) + 8;
          v163[1] = 8LL;
          EtwpLogKernelEvent(
            (__int64)v163,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v55 + 4504),
            2u,
            v53,
            Next_high);
        }
      }
      v6 = a1;
    }
    _disable();
    a4 = v133;
    v12 = (_KDPC_DATA *)v149;
    p_DpcQueueDepth = v148;
    if ( !v8->DpcQueueDepth )
      goto LABEL_97;
    v5 = v138;
  }
}
