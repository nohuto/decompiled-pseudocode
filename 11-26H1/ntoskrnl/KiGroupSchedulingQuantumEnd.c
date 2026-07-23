/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x140334880
 * Callers:
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x14020A138 (KiInsertDeferredPreemptionApc.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiShouldPreemptionBeDeferred @ 0x140231EA0 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140231EC0 (KiCheckForMaxOverQuotaScb.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1403364D0 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x140337FA0 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1403387BC (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiProcessScbTracingList @ 0x1404555D0 (KiProcessScbTracingList.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1404607C0 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(struct _KPRCB *a1, unsigned __int64 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  struct _SINGLE_LIST_ENTRY *p_TracingListEntry; // rbx
  __int64 v6; // r9
  unsigned __int64 v8; // r12
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  _KPRCB **Prcbs; // r14
  __int64 ProcessorCount; // r15
  _KPRCB *v12; // rdi
  unsigned int v13; // esi
  struct _KSCHEDULING_GROUP *v14; // rsi
  struct _KSCB *v15; // rdi
  unsigned int i; // ecx
  __int64 v17; // rdx
  __int64 v18; // r9
  _KTHREAD *NextThread; // r15
  struct _KSCB *v20; // r12
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char v22; // r15
  unsigned __int16 PrcbLockFlags; // ax
  union _KISOLATION_UNIT_LOCK_HANDLE *Rank; // r8
  __int16 v25; // r14
  char v26; // si
  unsigned __int16 v27; // dx
  __int64 v28; // rax
  __int64 v29; // rdi
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  char v31; // si
  char v32; // r15
  unsigned int m; // edi
  _KCORE_CONTROL_BLOCK *v34; // rcx
  __int64 v35; // rdi
  bool v36; // r12
  __int16 v37; // dx
  unsigned __int64 *v38; // r15
  char v39; // al
  __int64 v40; // rsi
  char *v41; // rdi
  unsigned __int8 TargetType; // al
  unsigned __int8 v43; // al
  unsigned int v44; // eax
  unsigned int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned int SingleTargetIndex; // eax
  unsigned int v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  void **p_SchedulerAssist; // rdx
  void **v57; // r9
  __int64 v58; // r8
  bool v59; // zf
  _DWORD *v60; // rcx
  __int64 v61; // r15
  __int64 v62; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r8
  unsigned __int8 AllCompareThreadStateFlags; // dl
  unsigned int j; // edx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v66; // r9
  unsigned __int8 v67; // r8
  _KPRCB *Prcb; // rdx
  _KTHREAD *IdleThread; // rcx
  unsigned int k; // r8d
  char *v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  char v74; // [rsp+20h] [rbp-68h]
  struct _SINGLE_LIST_ENTRY *v75; // [rsp+28h] [rbp-60h] BYREF
  struct _SINGLE_LIST_ENTRY v76; // [rsp+30h] [rbp-58h] BYREF
  _KTHREAD *v77; // [rsp+38h] [rbp-50h]
  char v78; // [rsp+90h] [rbp+8h]
  _KI_RESCHEDULE_CONTEXT *v79; // [rsp+90h] [rbp+8h]

  v4 = 0;
  p_TracingListEntry = 0LL;
  v76.Next = 0LL;
  v6 = a3;
  v78 = 0;
  v74 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  v75 = 0LL;
  *a2 = (unsigned __int64)a1 | 1;
  CoreControlBlock = a1->CoreControlBlock;
  Prcbs = CoreControlBlock->Prcbs;
  if ( CoreControlBlock->ProcessorCount )
  {
    ProcessorCount = CoreControlBlock->ProcessorCount;
    while ( 1 )
    {
      v12 = *Prcbs;
      v13 = 0;
LABEL_4:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&v12->PrcbLock, 0LL) )
        break;
      ++Prcbs;
      if ( !--ProcessorCount )
      {
        v6 = a3;
        goto LABEL_7;
      }
    }
    while ( 1 )
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_24:
          HvlNotifyLongSpinWait(v13);
          goto LABEL_13;
        }
        for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
        {
          v17 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v17 + 35) & 1) != 0 )
          {
            v18 = *(_QWORD *)(v17 + 36600);
            if ( !v18 || !*(_BYTE *)(v18 + 65) || !*(_BYTE *)(v18 + 64) )
              goto LABEL_24;
          }
        }
      }
      _mm_pause();
LABEL_13:
      if ( !v12->PrcbLock )
        goto LABEL_4;
    }
  }
LABEL_7:
  if ( v8 > a1->GenerationTarget )
  {
    KiGroupSchedulingGenerationEnd(a1);
    return;
  }
  v14 = *(struct _KSCHEDULING_GROUP **)(v6 + 104);
  if ( v14 )
  {
    v15 = (struct _KSCB *)((char *)v14 + a1->ScbOffset);
    if ( v15 )
    {
      NextThread = a1->NextThread;
      v20 = 0LL;
      v77 = NextThread;
      if ( NextThread )
      {
        SchedulingGroup = NextThread->SchedulingGroup;
        if ( SchedulingGroup )
          v20 = (struct _KSCB *)((char *)SchedulingGroup + a1->ScbOffset);
      }
      v22 = 0;
      while ( 1 )
      {
        PrcbLockFlags = v15->PrcbLockFlags;
        Rank = (union _KISOLATION_UNIT_LOCK_HANDLE *)v15->Rank;
        v25 = PrcbLockFlags & 2;
        LODWORD(v75) = v15->Rank;
        if ( (PrcbLockFlags & 4) != 0 )
        {
          if ( (PrcbLockFlags & 2) != 0 )
          {
            v22 = 1;
            v26 = 1;
            v78 = 1;
          }
          else
          {
            if ( KiCheckMaxOverQuotaTransition(v15, v14) )
            {
              if ( (*(_BYTE *)&v15->0 & 1) != 0 )
                KiRemoveSchedulingGroupQueue(a1, v15, 1u);
              goto LABEL_139;
            }
            if ( v15->GenerationCycles >= v15->RankCycleTarget )
            {
              KiRecomputeGroupSchedulingRank(v14, v15, a1);
              if ( v20 == v15 )
                v74 = 1;
LABEL_139:
              LODWORD(Rank) = (_DWORD)v75;
              v22 = 1;
              v26 = 1;
              v78 = 1;
              goto LABEL_34;
            }
            LODWORD(Rank) = (_DWORD)v75;
            v26 = v78;
            if ( a4 )
              v22 = 1;
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v14, a1, Rank, v15);
          LODWORD(Rank) = (_DWORD)v75;
          if ( (*(_BYTE *)&v15->0 & 4) != 0 )
          {
            v22 = 1;
            v78 = 1;
            v26 = 1;
            if ( v20 == v15 )
              v74 = 1;
          }
          else
          {
            v26 = v78;
          }
        }
LABEL_34:
        if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0 )
        {
          v27 = v15->PrcbLockFlags;
          if ( ((v27 >> 1) & 1) != (v25 != 0) || v15->Rank != (_DWORD)Rank )
          {
            v15->PrcbLockFlags = v27 | 0x100;
            v15->TracingListEntry.Next = p_TracingListEntry;
            p_TracingListEntry = &v15->TracingListEntry;
          }
        }
        v15 = v15->Parent;
        if ( !v15 )
        {
          v75 = p_TracingListEntry;
          v28 = *(_QWORD *)(a3 + 104);
          if ( v28 )
            v29 = v28 + a1->ScbOffset;
          else
            v29 = 0LL;
          StaticRescheduleContext = a1->StaticRescheduleContext;
          v79 = StaticRescheduleContext;
          memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
          KiStartRescheduleContext((__int64)StaticRescheduleContext, a2, 0LL);
          if ( !v22 || v77 )
          {
            if ( v26 && v77 && v20 )
            {
              if ( v20 == (struct _KSCB *)v29 )
                goto LABEL_130;
              while ( v20 )
              {
                v20 = v20->Parent;
                if ( v20 == (struct _KSCB *)v29 )
                  goto LABEL_130;
              }
              if ( !v29 || v74 )
LABEL_130:
                KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v76);
            }
          }
          else
          {
            if ( !KiIsThreadConstrainedBySchedulingGroup(a3)
              || KiShouldPreemptionBeDeferred(v62)
              || !KiCheckForMaxOverQuotaScb(v29) )
            {
              RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
              AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
              RescheduleContextEntryForPrcb->___u5[0] |= 2u;
              RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags | 8;
              if ( (AllCompareThreadStateFlags & 2) != 0 )
              {
                for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
                {
                  if ( &StaticRescheduleContext->ProcessorEntries[j] != RescheduleContextEntryForPrcb )
                  {
                    StaticRescheduleContext->ProcessorEntries[j].AllCompareThreadStateFlags |= 8u;
                    StaticRescheduleContext->ProcessorEntries[j].___u5[0] |= 2u;
                  }
                }
              }
              goto LABEL_130;
            }
            v66 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
            v66->___u5[0] &= ~2u;
            v67 = v66->AllCompareThreadStateFlags;
            Prcb = v66->Prcb;
            v66->CompareThread = v66->Prcb->IdleThread;
            v66->AllCompareThreadStateFlags = v67 & 0xC0 | 5;
            IdleThread = Prcb->IdleThread;
            *((_BYTE *)&v66->0 + 1) &= ~1u;
            v66->NewThread = IdleThread;
            if ( (v67 & 2) == 0 )
              goto LABEL_130;
            for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
            {
              v71 = (char *)StaticRescheduleContext + 40 * k;
              if ( v71 + 16 != (char *)v66 )
              {
                v71[50] &= ~2u;
                v72 = *((_QWORD *)v71 + 2);
                *((_QWORD *)v71 + 4) = *(_QWORD *)(v72 + 24);
                v71[48] = v71[48] & 0xC0 | 5;
                v73 = *(_QWORD *)(v72 + 24);
                v71[49] &= ~1u;
                *((_QWORD *)v71 + 5) = v73;
              }
            }
            StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
            KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v76);
          }
          v31 = 0;
          v32 = 0;
          if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
            v32 = 2;
          for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
            v31 |= KiCommitRescheduleContextEntry(
                     (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                           + 32 * m
                                                           + 8 * m),
                     a1,
                     v32,
                     &v76);
          if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
          {
            v34 = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
            if ( ++v34->ScanStartIndex >= v34->ProcessorCount )
              v34->ScanStartIndex = 0;
          }
          v35 = a3;
          v36 = 0;
          if ( *(char *)(a3 + 195) < 16 && (*(_DWORD *)(a3 + 120) & 0x200) == 0 && KiShouldPreemptionBeDeferred(a3) )
            v36 = (v37 & 0xC00) == 0;
          if ( !v31 && !v76.Next && !v36 && !p_TracingListEntry )
            return;
          v38 = a2;
          KiReleasePrcbLocksForIsolationUnit((__int64 *)a2);
          if ( !v31 )
            goto LABEL_72;
          if ( !StaticRescheduleContext->ProcessorCount )
            goto LABEL_71;
          while ( 2 )
          {
            v39 = StaticRescheduleContext->ProcessorEntries[v4].___u6[0];
            v40 = (__int64)StaticRescheduleContext->ProcessorEntries[v4].Prcb;
            v41 = (char *)StaticRescheduleContext + 40 * v4;
            if ( (v39 & 0x10) == 0 )
            {
              if ( (v39 & 8) != 0 && *(_BYTE *)(v40 + 7) )
              {
                TargetType = a1->DeferredDispatchInterrupts.TargetType;
                if ( !TargetType )
                  goto LABEL_62;
                if ( TargetType != 1 )
                  goto LABEL_94;
                SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                if ( SingleTargetIndex != *(_DWORD *)(v40 + 36) )
                {
                  a1->DeferredDispatchInterrupts.TargetType = 2;
                  v52 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) & 0x3F;
                  v53 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV
                                      + SingleTargetIndex) >> 6;
                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v53 )
                    goto LABEL_93;
                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v53 )
                  {
                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v53 + 1;
LABEL_93:
                    v54 = v53;
                    v55 = a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v53];
                    _bittestandset64((__int64 *)&v55, v52);
                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v54] = v55;
                  }
LABEL_94:
                  v49 = *(unsigned __int8 *)(v40 + 208);
                  v50 = *(_QWORD *)(v40 + 200);
                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v49 )
                  {
LABEL_95:
                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v49] |= v50;
                    goto LABEL_63;
                  }
LABEL_88:
                  if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v49 )
                  {
                    a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v49 + 1;
                    goto LABEL_95;
                  }
                }
              }
LABEL_63:
              if ( (v41[51] & 2) != 0 )
                EtwTraceScheduleThread(*((_QWORD *)v41 + 5), v40, 0LL);
              if ( (v41[51] & 4) != 0 )
              {
                if ( *(_QWORD *)(v40 + 36600) )
                {
                  p_SchedulerAssist = &a1->SchedulerAssist;
                  if ( a1->SchedulerAssist )
                  {
                    if ( a1 != (struct _KPRCB *)v40 )
                    {
                      v57 = &a1->SchedulerAssist;
                      v58 = **(unsigned int **)(v40 + 36600);
                      if ( (**(_DWORD **)(v40 + 36600) & 0x40000) != 0 )
                        v57 = &a1->SchedulerAssist;
                      if ( (v58 & 0x100000) != 0
                        || (**(_DWORD **)(v40 + 36600) & 0x40000) != 0
                        && (p_SchedulerAssist = v57, (unsigned __int8)v58 < v41[52]) )
                      {
                        v59 = HvlpVirtualProcessorsIdentityMapped == 0;
                        v60 = *p_SchedulerAssist;
                        *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                        v61 = *(unsigned int *)(v40 + 36);
                        if ( v59 )
                        {
                          StaticRescheduleContext = v79;
                          LODWORD(v61) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)v61] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v61] << 6);
                        }
                        v60[2] = v61;
                        if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                          EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v40 + 36), 2LL, v58);
                        __writemsr(0x400000C2u, (unsigned int)v61);
                      }
                    }
                  }
                }
              }
              if ( (v41[51] & 1) != 0 )
                _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v41 + 5) + 868LL));
              if ( ++v4 >= StaticRescheduleContext->ProcessorCount )
              {
                v35 = a3;
                v38 = a2;
LABEL_71:
                KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
LABEL_72:
                if ( p_TracingListEntry )
                  KiProcessScbTracingList(a1, &v75);
                if ( v76.Next )
                  KiReadyDeferredReadyList(a1, &v76);
                if ( v36 )
                  KiInsertDeferredPreemptionApc((__int64)a1, v35, 0);
                KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1, v38);
                return;
              }
              continue;
            }
            break;
          }
          v43 = a1->DeferredDispatchInterrupts.TargetType;
          if ( !v43 )
          {
LABEL_62:
            a1->DeferredDispatchInterrupts.TargetType = 1;
            a1->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(v40 + 36);
            goto LABEL_63;
          }
          if ( v43 == 1 )
          {
            v44 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
            if ( v44 == *(_DWORD *)(v40 + 36) )
              goto LABEL_63;
            a1->DeferredDispatchInterrupts.TargetType = 2;
            v45 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v44) & 0x3F;
            v46 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v44) >> 6;
            if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v46 )
            {
              if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v46 )
              {
                a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v46 + 1;
                goto LABEL_86;
              }
            }
            else
            {
LABEL_86:
              v47 = v46;
              v48 = a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v46];
              _bittestandset64((__int64 *)&v48, v45);
              a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v47] = v48;
            }
          }
          v49 = *(unsigned __int8 *)(v40 + 208);
          v50 = *(_QWORD *)(v40 + 200);
          if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v49 )
            goto LABEL_95;
          goto LABEL_88;
        }
        v14 = (struct _KSCHEDULING_GROUP *)((char *)v15 - a1->ScbOffset);
      }
    }
  }
}
