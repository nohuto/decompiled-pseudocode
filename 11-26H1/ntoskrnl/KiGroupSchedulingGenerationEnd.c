/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x140335240
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     EtwTraceReadyQueueInsertion @ 0x1402260FC (EtwTraceReadyQueueInsertion.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1403076F0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140335C00 (KiTransitionSchedulingGroupGeneration.c)
 *     KiStartThreadCycleAccumulation @ 0x140336EE0 (KiStartThreadCycleAccumulation.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiProcessScbTracingList @ 0x1404555D0 (KiProcessScbTracingList.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(struct _KPRCB *a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  _KTHREAD *CurrentThread; // r13
  unsigned int v5; // esi
  __int64 *v6; // r12
  _KTHREAD *NextThread; // rax
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  _KTHREAD *v10; // rbx
  char v11; // di
  char v12; // bp
  unsigned int m; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 v17; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  _KTHREAD *v20; // rbp
  char v21; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v22; // rdi
  _KPRCB *v23; // rax
  _KTHREAD *v24; // rcx
  unsigned __int8 v25; // dl
  unsigned int v26; // r10d
  char *v27; // r9
  int v28; // eax
  __int64 v29; // r11
  unsigned __int64 v30; // rcx
  __int64 v31; // r13
  char v32; // al
  char v33; // cl
  __int64 v34; // r11
  char v35; // al
  __int64 v36; // rbp
  unsigned __int8 v37; // al
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r12
  __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // r8d
  __int64 v45; // rcx
  char *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  void **p_SchedulerAssist; // r9
  __int64 v51; // r8
  bool v52; // zf
  _DWORD *v53; // rcx
  __int64 v54; // r12
  __int64 v55; // rdx
  int v56; // ett
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v57; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v58; // r8
  unsigned __int8 v59; // cl
  _KPRCB *v60; // r9
  _KTHREAD *v61; // rax
  _KTHREAD *v62; // rax
  char v63; // al
  char v64; // al
  char v65; // al
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v67; // r8
  unsigned __int8 AllCompareThreadStateFlags; // cl
  _KPRCB *Prcb; // r9
  _KTHREAD *IdleThread; // rax
  _KTHREAD *v71; // rax
  unsigned int i; // r9d
  _KI_RESCHEDULE_CONTEXT_ENTRY *v73; // rax
  unsigned __int8 v74; // dl
  _KPRCB *v75; // r10
  _BYTE *u5; // rax
  _KTHREAD *v77; // rax
  _KTHREAD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned int k; // r9d
  _KI_RESCHEDULE_CONTEXT_ENTRY *v82; // rax
  unsigned __int8 v83; // dl
  _KPRCB *v84; // r10
  _BYTE *v85; // rax
  _KTHREAD *v86; // rax
  _KTHREAD *v87; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v88; // rcx
  unsigned int j; // r12d
  struct _SINGLE_LIST_ENTRY v90; // [rsp+30h] [rbp-58h] BYREF
  __int64 v91; // [rsp+38h] [rbp-50h] BYREF
  __int64 v92; // [rsp+40h] [rbp-48h] BYREF
  _KTHREAD *v93; // [rsp+48h] [rbp-40h]
  unsigned __int8 v94; // [rsp+90h] [rbp+8h]
  int v96; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = a1->CurrentThread;
  v5 = 0;
  v6 = a2;
  v96 = 0;
  v91 = 0LL;
  v93 = CurrentThread;
  if ( CurrentThread == a1->IdleThread )
  {
    v94 = 1;
    KiCaptureTotalCyclesCurrentThread((__int64)a1, (__int64)CurrentThread, a3, a4);
    NextThread = a1->NextThread;
    if ( NextThread && NextThread != a1->IdleThread )
    {
      if ( (a1->IdleState & 1) != 0 )
        goto LABEL_7;
LABEL_4:
      __fastfail(0x1Eu);
    }
    if ( (a1->IdleState & 1) != 0 )
      goto LABEL_4;
    v94 = 1;
  }
  else
  {
    KiCaptureTotalCyclesCurrentThread((__int64)a1, (__int64)CurrentThread, a3, a4);
    v94 = 0;
  }
LABEL_7:
  KiTransitionSchedulingGroupGeneration(a1, (__int64)&v91);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v90.Next = 0LL;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, v6, 0LL);
  v10 = a1->NextThread;
  if ( v10 && !KiIsPrcbThread((__int64)a1->NextThread) )
  {
    v20 = a1->CurrentThread;
    if ( (*((_DWORD *)&v20->0 + 1) & 0x1000) != 0 || v20 == a1->SmtIsolationThread )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
      v67 = RescheduleContextEntryForPrcb;
      AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
      Prcb = RescheduleContextEntryForPrcb->Prcb;
      if ( (AllCompareThreadStateFlags & 0x20) == 0 )
        RescheduleContextEntryForPrcb->___u5[0] |= 1u;
      RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
      IdleThread = Prcb->IdleThread;
      v67->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
      v67->CompareThread = IdleThread;
      v71 = Prcb->IdleThread;
      *((_BYTE *)&v67->0 + 1) &= ~1u;
      v67->NewThread = v71;
      if ( ((AllCompareThreadStateFlags >> 1) & 1) != 0 )
      {
        for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
        {
          v73 = &StaticRescheduleContext->ProcessorEntries[i];
          if ( v73 != v67 )
          {
            v74 = StaticRescheduleContext->ProcessorEntries[i].AllCompareThreadStateFlags;
            v75 = v73->Prcb;
            if ( (v74 & 0x20) != 0 )
            {
              u5 = v73->___u5;
            }
            else
            {
              StaticRescheduleContext->ProcessorEntries[i].___u5[0] |= 1u;
              u5 = StaticRescheduleContext->ProcessorEntries[i].___u5;
            }
            *u5 &= ~2u;
            v77 = v75->IdleThread;
            StaticRescheduleContext->ProcessorEntries[i].AllCompareThreadStateFlags = v74 & 0xC0 | 5;
            StaticRescheduleContext->ProcessorEntries[i].CompareThread = v77;
            v78 = v75->IdleThread;
            *((_BYTE *)&StaticRescheduleContext->ProcessorEntries[i].0 + 1) &= ~1u;
            StaticRescheduleContext->ProcessorEntries[i].NewThread = v78;
          }
        }
LABEL_127:
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
    else
    {
      v22 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
      if ( (unsigned __int8)(v21 & 2) > (unsigned __int8)(*(_BYTE *)(&v10->MiscFlags + 1) & 2) )
      {
        for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
        {
          v88 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * j + 8 * j);
          if ( v22 != v88 && !KiDoesThreadDominateRescheduleContextEntry(v88, v20, 2, 0LL) )
          {
            v57 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
            v58 = v57;
            v59 = v57->AllCompareThreadStateFlags;
            v60 = v57->Prcb;
            if ( (v59 & 0x20) == 0 )
              v57->___u5[0] |= 1u;
            v57->___u5[0] &= ~2u;
            v61 = v60->IdleThread;
            v58->AllCompareThreadStateFlags = v59 & 0xC0 | 5;
            v58->CompareThread = v61;
            v62 = v60->IdleThread;
            *((_BYTE *)&v58->0 + 1) &= ~1u;
            v58->NewThread = v62;
            if ( ((v59 >> 1) & 1) != 0 )
            {
              for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
              {
                v82 = &StaticRescheduleContext->ProcessorEntries[k];
                if ( v82 != v58 )
                {
                  v83 = StaticRescheduleContext->ProcessorEntries[k].AllCompareThreadStateFlags;
                  v84 = v82->Prcb;
                  if ( (v83 & 0x20) != 0 )
                  {
                    v85 = v82->___u5;
                  }
                  else
                  {
                    StaticRescheduleContext->ProcessorEntries[k].___u5[0] |= 1u;
                    v85 = StaticRescheduleContext->ProcessorEntries[k].___u5;
                  }
                  *v85 &= ~2u;
                  v86 = v84->IdleThread;
                  StaticRescheduleContext->ProcessorEntries[k].AllCompareThreadStateFlags = v83 & 0xC0 | 5;
                  StaticRescheduleContext->ProcessorEntries[k].CompareThread = v86;
                  v87 = v84->IdleThread;
                  *((_BYTE *)&StaticRescheduleContext->ProcessorEntries[k].0 + 1) &= ~1u;
                  StaticRescheduleContext->ProcessorEntries[k].NewThread = v87;
                }
              }
              goto LABEL_127;
            }
            goto LABEL_94;
          }
        }
      }
      v23 = v22->Prcb;
      v24 = v22->Prcb->CurrentThread;
      v22->CompareThread = v24;
      v25 = v22->AllCompareThreadStateFlags & 0xFE | (v24 == v23->IdleThread);
      v22->AllCompareThreadStateFlags = v25;
      LODWORD(v23) = *((_DWORD *)&v24->0 + 1);
      *((_BYTE *)&v22->0 + 1) &= ~1u;
      v22->___u5[0] |= 1u;
      v22->NewThread = 0LL;
      v22->AllCompareThreadStateFlags = (v25 & 0xFD ^ (2 * (((unsigned __int8)v23 & 2) != 0))) & 0xC3 | 4;
      if ( ((*((_BYTE *)&v10->MiscFlags + 4) | *((_BYTE *)&v20->MiscFlags + 4)) & 2) != 0 )
      {
        v26 = 0;
        if ( StaticRescheduleContext->ProcessorCount )
        {
          do
          {
            v27 = (char *)StaticRescheduleContext + 40 * v26;
            if ( v22 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)(v27 + 16) )
            {
              v28 = *(&v20->MiscFlags + 1);
              v29 = *((_QWORD *)v27 + 2);
              v30 = *((_QWORD *)v27 + 5);
              v92 = 0LL;
              if ( (v28 & 2) != 0 )
              {
                v31 = *(_QWORD *)(v29 + 36544);
                if ( v30 && v30 <= 0xFFFFFFFFFFFFFFFDuLL && !KiIsPrcbThread(v30) )
                {
                  if ( (v27[49] & 1) != 0 )
                    *(_DWORD *)(v80 + 116) |= 2u;
                  *(_BYTE *)(v80 + 565) = 1;
                  KiInsertDeferredReadyList(&v92, v80);
                }
                v27[48] &= ~1u;
                v63 = v27[48] & 0xFD;
                *((_QWORD *)v27 + 4) = v20;
                v64 = (v63 ^ (2 * ((*((_DWORD *)&v20->0 + 1) & 2) != 0))) & 0xE3 | 4;
                v33 = v64 | 0x20;
                v65 = v64 & 0xDF;
                if ( v20 == (_KTHREAD *)v31 )
                  v33 = v65;
              }
              else
              {
                v31 = *(_QWORD *)(v29 + 24);
                if ( v30 && v30 <= 0xFFFFFFFFFFFFFFFDuLL && !KiIsPrcbThread(v30) )
                {
                  if ( (v27[49] & 1) != 0 )
                    *(_DWORD *)(v79 + 116) |= 2u;
                  *(_BYTE *)(v79 + 565) = 1;
                  KiInsertDeferredReadyList(&v92, v79);
                }
                v27[48] |= 1u;
                v32 = v27[48] & 0xFD;
                *((_QWORD *)v27 + 4) = v31;
                v33 = (v32 ^ (2 * ((*(_DWORD *)(v31 + 120) & 2) != 0))) & 0xC3 | 4;
              }
              v27[48] = v33;
              v27[49] &= ~1u;
              *((_QWORD *)v27 + 5) = v31;
              if ( !KiIsPrcbThread(v31) )
                *(_DWORD *)(v31 + 536) = *(_DWORD *)(v34 + 36);
            }
            ++v26;
          }
          while ( v26 < StaticRescheduleContext->ProcessorCount );
          CurrentThread = v93;
        }
      }
      StaticRescheduleContext->MaximumThreadIsolationWidth = (*((_DWORD *)&v20->0 + 1) >> 1) & 1;
    }
LABEL_94:
    v10->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v10->WaitBlockFill6[68] = 1;
    KiAddThreadToPrcbQueue((__int64)a1, (__int64)v10, (unsigned int)v10->Priority, 1, 0, &v96);
    if ( (WORD2(xmmword_140FC0C10) & 0x800) != 0 )
      EtwTraceReadyQueueInsertion((__int64)v10, a1->Number, v96, 0LL);
    v6 = a2;
  }
  KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v90);
  v11 = 0;
  v12 = 0;
  if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
    v12 = 2;
  for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
    v11 |= KiCommitRescheduleContextEntry(
             (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * m + 8 * m),
             a1,
             v12,
             &v90);
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  if ( v11 || v90.Next )
  {
    v15 = v91;
  }
  else
  {
    v15 = v91;
    if ( !v91 )
      goto LABEL_17;
  }
  KiReleasePrcbLocksForIsolationUnit(v6);
  if ( !v11 )
    goto LABEL_53;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_52;
  do
  {
    v35 = StaticRescheduleContext->ProcessorEntries[v5].___u6[0];
    v36 = (__int64)StaticRescheduleContext->ProcessorEntries[v5].Prcb;
    if ( (v35 & 0x10) != 0 )
    {
      TargetType = a1->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
LABEL_43:
        a1->DeferredDispatchInterrupts.TargetType = 1;
        a1->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(v36 + 36);
        goto LABEL_44;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == *(_DWORD *)(v36 + 36) )
          goto LABEL_44;
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, SingleTargetIndex);
      }
      else
      {
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      v41 = *(unsigned __int8 *)(v36 + 208);
      v42 = *(_QWORD *)(v36 + 200);
      if ( p_MultipleTargetAffinity->Count > (unsigned __int16)v41 )
        goto LABEL_63;
      if ( p_MultipleTargetAffinity->Size > (unsigned __int16)v41 )
      {
        p_MultipleTargetAffinity->Count = v41 + 1;
LABEL_63:
        p_MultipleTargetAffinity->Bitmap[v41] |= v42;
        goto LABEL_44;
      }
      goto LABEL_44;
    }
    if ( (v35 & 8) == 0 || !*(_BYTE *)(v36 + 7) )
      goto LABEL_44;
    v37 = a1->DeferredDispatchInterrupts.TargetType;
    if ( !v37 )
      goto LABEL_43;
    if ( v37 == 1 )
    {
      v43 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( v43 == *(_DWORD *)(v36 + 36) )
        goto LABEL_44;
      a1->DeferredDispatchInterrupts.TargetType = 2;
      v44 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v43) & 0x3F;
      v45 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v43) >> 6;
      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v45 )
        goto LABEL_67;
      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v45 )
      {
        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v45 + 1;
LABEL_67:
        v46 = (char *)a1 + 8 * v45;
        v47 = *((_QWORD *)v46 + 1725);
        _bittestandset64(&v47, v44);
        *((_QWORD *)v46 + 1725) = v47;
      }
    }
    v48 = *(unsigned __int8 *)(v36 + 208);
    v49 = *(_QWORD *)(v36 + 200);
    if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v48 )
      goto LABEL_69;
    if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v48 )
    {
      a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v48 + 1;
LABEL_69:
      a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v48] |= v49;
    }
LABEL_44:
    if ( (StaticRescheduleContext->ProcessorEntries[v5].___u6[0] & 2) != 0 )
      EtwTraceScheduleThread((__int64)StaticRescheduleContext->ProcessorEntries[v5].NewThread, v36, 0LL);
    if ( (StaticRescheduleContext->ProcessorEntries[v5].___u6[0] & 4) != 0
      && *(_QWORD *)(v36 + 36600)
      && a1->SchedulerAssist
      && a1 != (struct _KPRCB *)v36 )
    {
      p_SchedulerAssist = &a1->SchedulerAssist;
      v51 = **(unsigned int **)(v36 + 36600);
      if ( (**(_DWORD **)(v36 + 36600) & 0x40000) != 0 )
        p_SchedulerAssist = &a1->SchedulerAssist;
      if ( (v51 & 0x100000) != 0
        || (p_SchedulerAssist = &a1->SchedulerAssist, (**(_DWORD **)(v36 + 36600) & 0x40000) != 0)
        && (unsigned __int8)v51 < StaticRescheduleContext->ProcessorEntries[v5].KickPriority )
      {
        v52 = HvlpVirtualProcessorsIdentityMapped == 0;
        v53 = *p_SchedulerAssist;
        *((_DWORD *)*p_SchedulerAssist + 3) = 2;
        v54 = *(unsigned int *)(v36 + 36);
        if ( v52 )
          LODWORD(v54) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v54 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v54] << 6);
        v53[2] = v54;
        if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
          EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v36 + 36), 2LL, v51);
        __writemsr(0x400000C2u, (unsigned int)v54);
      }
    }
    if ( (StaticRescheduleContext->ProcessorEntries[v5].___u6[0] & 1) != 0 )
      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v5].NewThread->KeReferenceCount);
    ++v5;
  }
  while ( v5 < StaticRescheduleContext->ProcessorCount );
  CurrentThread = v93;
  v6 = a2;
LABEL_52:
  KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
LABEL_53:
  if ( v15 )
    KiProcessScbTracingList(a1, &v91);
  if ( v90.Next )
    KiReadyDeferredReadyList(a1, &v90);
  KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1, (unsigned __int64 *)v6);
LABEL_17:
  _disable();
  result = KiStartThreadCycleAccumulation(a1, CurrentThread, v94);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v55 = (unsigned int)result;
      LODWORD(v55) = result & 0xFFDFFFFF;
      v56 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v56 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v55, SchedulerAssist, v17);
  }
  _enable();
  return result;
}
