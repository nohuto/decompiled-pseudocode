/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1402313F0
 * Callers:
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x14020A138 (KiInsertDeferredPreemptionApc.c)
 *     EtwTraceReadyQueueInsertion @ 0x1402260FC (EtwTraceReadyQueueInsertion.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiShouldPreemptionBeDeferred @ 0x140231EA0 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140231EC0 (KiCheckForMaxOverQuotaScb.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
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
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiAddThreadToScbQueue @ 0x1404A57FC (KiAddThreadToScbQueue.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  char v7; // r15
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // r13
  _WORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  struct _KSCB *v15; // rsi
  unsigned __int64 *v16; // r9
  __int64 v17; // rdx
  unsigned __int8 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // r9
  struct _KI_RESCHEDULE_CONTEXT *v26; // rbx
  struct _KTHREAD *v27; // r15
  char v28; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v29; // r12
  _KPRCB *v30; // rax
  _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v32; // dl
  __int64 v33; // rdx
  __int64 v34; // r9
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v35; // rcx
  int v36; // eax
  _KPRCB *v37; // r11
  unsigned __int64 NewThread; // rcx
  _KTHREAD *SmtIsolationThread; // r10
  char v40; // al
  unsigned __int8 v41; // cl
  __int64 v42; // r10
  __int64 v43; // r11
  unsigned int ProcessorCount; // eax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v45; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v46; // r8
  unsigned __int8 v47; // cl
  _KPRCB *v48; // r9
  _KTHREAD *v49; // rax
  _KTHREAD *v50; // rax
  char v51; // r8
  struct _KTHREAD *v52; // rsi
  unsigned __int64 GroupSetMember; // rdx
  char v54; // r11
  unsigned int v55; // r13d
  unsigned __int8 v56; // al
  _KPRCB *v57; // rsi
  char v58; // al
  char v59; // al
  _WORD *v60; // r14
  __int64 Group; // rcx
  unsigned int v62; // eax
  unsigned int v63; // r8d
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // r8
  bool v70; // zf
  __int64 v71; // rdx
  __int64 Number; // r14
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  int v78; // r8d
  __int64 v79; // r9
  char v80; // r11
  char v81; // al
  char v82; // al
  unsigned __int8 v83; // al
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v85; // r8
  unsigned __int8 AllCompareThreadStateFlags; // cl
  _KPRCB *Prcb; // r9
  _KTHREAD *IdleThread; // rax
  _KTHREAD *v89; // rax
  unsigned int i; // r9d
  unsigned __int8 *v91; // rax
  unsigned __int8 v92; // dl
  __int64 v93; // r10
  unsigned __int8 *u5; // rax
  _KTHREAD *v95; // rax
  _KTHREAD *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rcx
  unsigned int k; // r9d
  unsigned __int8 *v100; // rax
  unsigned __int8 v101; // dl
  __int64 v102; // r10
  unsigned __int8 *v103; // rax
  _KTHREAD *v104; // rax
  _KTHREAD *v105; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v106; // rcx
  __int64 j; // r15
  int v108; // [rsp+30h] [rbp-28h] BYREF
  __int64 v109; // [rsp+38h] [rbp-20h] BYREF
  __int64 v110; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v111[2]; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int64 v112; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v113; // [rsp+A8h] [rbp+50h]
  char v114; // [rsp+B0h] [rbp+58h]
  struct _KTHREAD *v115; // [rsp+B8h] [rbp+60h]

  v113 = a2;
  v112 = a1;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 104);
  v6 = a1;
  v109 = 0LL;
  v108 = 0;
  v110 = 0LL;
  if ( !v5 || !(v5 + *(unsigned int *)(v4 + 216)) || !(unsigned __int8)KiShouldPreemptionBeDeferred(a1, v5, a3, a4) )
    return 0;
  while ( 2 )
  {
    v114 = 0;
    v9 = 0;
    KiAcquirePrcbLocksForIsolationUnit(v4, 1LL, &v110);
    v10 = *(_QWORD *)(v6 + 104);
    v11 = *(_QWORD *)(v4 + 16);
    if ( !v10
      || !(v10 + *(unsigned int *)(v4 + 216))
      || v11 == *(_QWORD *)(v4 + 24)
      || (v12 = *(_WORD **)(v6 + 576), v13 = *(unsigned __int8 *)(v4 + 208), (unsigned __int16)v13 >= *v12)
      || ((*(_QWORD *)&v12[4 * v13 + 4] >> *(_BYTE *)(v4 + 209)) & 1) == 0 )
    {
LABEL_15:
      v7 = 0;
      goto LABEL_16;
    }
    v14 = *(_QWORD *)(v11 + 104);
    if ( !v14 )
    {
      v15 = 0LL;
      goto LABEL_14;
    }
    v15 = (struct _KSCB *)(v14 + *(unsigned int *)(v4 + 216));
    if ( v15 )
    {
      if ( KiIsThreadConstrainedBySchedulingGroup(*(_QWORD *)(v4 + 16))
        && !(unsigned __int8)KiShouldPreemptionBeDeferred(v20, v19, v21, v22) )
      {
        if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v15) )
        {
          v9 = -1;
        }
        else
        {
          do
          {
            v9 += *(_DWORD *)(v23 + 140);
            if ( v25 )
            {
              v24 += **(_DWORD **)(v23 + 144);
            }
            else if ( v9 )
            {
              break;
            }
            v23 = *(_QWORD *)(v23 + 440);
          }
          while ( v23 );
          v114 = 1;
          if ( v24 )
          {
LABEL_32:
            if ( v9 )
              goto LABEL_33;
            goto LABEL_14;
          }
        }
      }
      v114 = 0;
      goto LABEL_32;
    }
LABEL_14:
    if ( *(_BYTE *)(v11 + 195) > *(_BYTE *)(v6 + 195) )
      goto LABEL_15;
LABEL_33:
    v26 = *(struct _KI_RESCHEDULE_CONTEXT **)(v4 + 14312);
    v109 = 0LL;
    memset_0(v26, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext(v26, &v110, 0LL);
    v27 = *(struct _KTHREAD **)(v4 + 8);
    v115 = v27;
    if ( (*((_DWORD *)&v27->0 + 1) & 0x1000) != 0 || v27 == *(struct _KTHREAD **)(v4 + 36544) )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v26, (struct _KPRCB *)v4);
      v85 = RescheduleContextEntryForPrcb;
      AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
      Prcb = RescheduleContextEntryForPrcb->Prcb;
      if ( (AllCompareThreadStateFlags & 0x20) == 0 )
        RescheduleContextEntryForPrcb->___u5[0] |= 1u;
      RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
      IdleThread = Prcb->IdleThread;
      v85->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
      v85->CompareThread = IdleThread;
      v89 = Prcb->IdleThread;
      *((_BYTE *)&v85->0 + 1) &= ~1u;
      v85->NewThread = v89;
      if ( ((AllCompareThreadStateFlags >> 1) & 1) == 0 )
        goto LABEL_51;
      for ( i = 0; i < v26->ProcessorCount; ++i )
      {
        v91 = (unsigned __int8 *)&v26->ProcessorEntries[i];
        if ( v91 != (unsigned __int8 *)v85 )
        {
          v92 = v26->ProcessorEntries[i].AllCompareThreadStateFlags;
          v93 = *(_QWORD *)v91;
          if ( (v92 & 0x20) != 0 )
          {
            u5 = v91 + 34;
          }
          else
          {
            u5 = v26->ProcessorEntries[i].___u5;
            *u5 |= 1u;
          }
          *u5 &= ~2u;
          v95 = *(_KTHREAD **)(v93 + 24);
          v26->ProcessorEntries[i].AllCompareThreadStateFlags = v92 & 0xC0 | 5;
          v26->ProcessorEntries[i].CompareThread = v95;
          v96 = *(_KTHREAD **)(v93 + 24);
          *((_BYTE *)&v26->ProcessorEntries[i].0 + 1) &= ~1u;
          v26->ProcessorEntries[i].NewThread = v96;
        }
      }
LABEL_148:
      v26->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      goto LABEL_51;
    }
    v29 = KiFindRescheduleContextEntryForPrcb(v26, (struct _KPRCB *)v4);
    if ( (unsigned __int8)(v28 & 2) <= (unsigned __int8)(*(_BYTE *)(v11 + 120) & 2) )
    {
LABEL_36:
      v30 = v29->Prcb;
      CurrentThread = v29->Prcb->CurrentThread;
      v29->CompareThread = CurrentThread;
      v32 = v29->AllCompareThreadStateFlags & 0xFE | (CurrentThread == v30->IdleThread);
      v29->AllCompareThreadStateFlags = v32;
      LODWORD(v30) = *((_DWORD *)&CurrentThread->0 + 1);
      *((_BYTE *)&v29->0 + 1) &= ~1u;
      v29->___u5[0] |= 1u;
      v29->NewThread = 0LL;
      v29->AllCompareThreadStateFlags = (v32 & 0xFD ^ (2 * (((unsigned __int8)v30 & 2) != 0))) & 0xC3 | 4;
      if ( ((*(_BYTE *)(v11 + 120) | *((_BYTE *)&v27->MiscFlags + 4)) & 2) != 0 )
      {
        v33 = 0LL;
        LODWORD(v115) = 0;
        if ( v26->ProcessorCount )
        {
          do
          {
            v34 = v33;
            v35 = &v26->ProcessorEntries[v33];
            if ( v29 != v35 )
            {
              v36 = *(&v27->MiscFlags + 1);
              v37 = v35->Prcb;
              NewThread = (unsigned __int64)v35->NewThread;
              v111[0] = 0LL;
              if ( (v36 & 2) != 0 )
              {
                SmtIsolationThread = v37->SmtIsolationThread;
                if ( NewThread && NewThread <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(NewThread) )
                {
                  if ( (*((_BYTE *)&v26->ProcessorEntries[v34].0 + 1) & 1) != 0 )
                    *(_DWORD *)(v98 + 116) |= 2u;
                  *(_BYTE *)(v98 + 565) = 1;
                  KiInsertDeferredReadyList(v111, v98);
                }
                v26->ProcessorEntries[v34].AllCompareThreadStateFlags &= ~1u;
                v81 = v26->ProcessorEntries[v34].AllCompareThreadStateFlags & 0xFD;
                v26->ProcessorEntries[v34].CompareThread = v27;
                v82 = (v81 ^ (2 * ((*((_DWORD *)&v27->0 + 1) & 2) != 0))) & 0xE3 | 4;
                v41 = v82 | 0x20;
                v83 = v82 & 0xDF;
                if ( v27 == SmtIsolationThread )
                  v41 = v83;
              }
              else
              {
                SmtIsolationThread = v37->IdleThread;
                if ( NewThread && NewThread <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(NewThread) )
                {
                  if ( (*((_BYTE *)&v26->ProcessorEntries[v34].0 + 1) & 1) != 0 )
                    *(_DWORD *)(v97 + 116) |= 2u;
                  *(_BYTE *)(v97 + 565) = 1;
                  KiInsertDeferredReadyList(v111, v97);
                }
                v26->ProcessorEntries[v34].AllCompareThreadStateFlags |= 1u;
                v40 = v26->ProcessorEntries[v34].AllCompareThreadStateFlags & 0xFD;
                v26->ProcessorEntries[v34].CompareThread = SmtIsolationThread;
                v41 = (v40 ^ (2 * ((*((_DWORD *)&SmtIsolationThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
              }
              v26->ProcessorEntries[v34].AllCompareThreadStateFlags = v41;
              *((_BYTE *)&v26->ProcessorEntries[v34].0 + 1) &= ~1u;
              v26->ProcessorEntries[v34].NewThread = SmtIsolationThread;
              if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
                *(_DWORD *)(v42 + 536) = *(_DWORD *)(v43 + 36);
            }
            ProcessorCount = v26->ProcessorCount;
            v33 = (unsigned int)(v33 + 1);
            LODWORD(v115) = v33;
          }
          while ( (unsigned int)v33 < ProcessorCount );
          v4 = v113;
        }
      }
      v26->MaximumThreadIsolationWidth = (*((_DWORD *)&v27->0 + 1) >> 1) & 1;
      goto LABEL_51;
    }
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      if ( (unsigned int)j >= v26->ProcessorCount )
      {
        v27 = v115;
        goto LABEL_36;
      }
      v106 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v26->ProcessorEntries + 32 * j + 8 * (unsigned int)j);
      if ( v29 != v106 && !KiDoesThreadDominateRescheduleContextEntry(v106, v115, 2u, 0LL) )
        break;
    }
    v45 = KiFindRescheduleContextEntryForPrcb(v26, (struct _KPRCB *)v4);
    v46 = v45;
    v47 = v45->AllCompareThreadStateFlags;
    v48 = v45->Prcb;
    if ( (v47 & 0x20) == 0 )
      v45->___u5[0] |= 1u;
    v45->___u5[0] &= ~2u;
    v49 = v48->IdleThread;
    v46->AllCompareThreadStateFlags = v47 & 0xC0 | 5;
    v46->CompareThread = v49;
    v50 = v48->IdleThread;
    *((_BYTE *)&v46->0 + 1) &= ~1u;
    v46->NewThread = v50;
    if ( ((v47 >> 1) & 1) != 0 )
    {
      for ( k = 0; k < v26->ProcessorCount; ++k )
      {
        v100 = (unsigned __int8 *)&v26->ProcessorEntries[k];
        if ( v100 != (unsigned __int8 *)v46 )
        {
          v101 = v26->ProcessorEntries[k].AllCompareThreadStateFlags;
          v102 = *(_QWORD *)v100;
          if ( (v101 & 0x20) != 0 )
          {
            v103 = v100 + 34;
          }
          else
          {
            v103 = v26->ProcessorEntries[k].___u5;
            *v103 |= 1u;
          }
          *v103 &= ~2u;
          v104 = *(_KTHREAD **)(v102 + 24);
          v26->ProcessorEntries[k].AllCompareThreadStateFlags = v101 & 0xC0 | 5;
          v26->ProcessorEntries[k].CompareThread = v104;
          v105 = *(_KTHREAD **)(v102 + 24);
          *((_BYTE *)&v26->ProcessorEntries[k].0 + 1) &= ~1u;
          v26->ProcessorEntries[k].NewThread = v105;
        }
      }
      goto LABEL_148;
    }
LABEL_51:
    *(_DWORD *)(v11 + 436) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v11 + 388) = 1;
    if ( v15 )
    {
      v9 = 0;
      if ( KiIsThreadConstrainedBySchedulingGroup(v11)
        && !(unsigned __int8)KiShouldPreemptionBeDeferred(v74, v73, v75, v76) )
      {
        if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v15) )
        {
          v9 = -1;
        }
        else
        {
          do
          {
            v9 += *(_DWORD *)(v77 + 140);
            if ( v79 )
            {
              v78 += **(_DWORD **)(v77 + 144);
            }
            else if ( v9 )
            {
              break;
            }
            v77 = *(_QWORD *)(v77 + 440);
          }
          while ( v77 );
          v114 = v80;
          if ( v78 )
            goto LABEL_52;
        }
      }
      v114 = 0;
    }
LABEL_52:
    if ( v9 )
    {
      KiAddThreadToScbQueue((struct _KPRCB *)v4, v15);
      v51 = 2;
      v108 = 2;
    }
    else
    {
      KiAddThreadToPrcbQueue(v4, v11, *(char *)(v11 + 195), 1, v114, (__int64)&v108);
      v51 = v108;
    }
    if ( (WORD2(xmmword_140FC0C10) & 0x800) != 0 )
      EtwTraceReadyQueueInsertion(v11, *(_DWORD *)(v4 + 36), v51, 0LL);
    KiSearchForNewThreadsForRescheduleContext(&v26->ProcessorCount, &v109);
    KiCommitRescheduleContext(v26, v4, 0LL, &v109);
    v115 = *(struct _KTHREAD **)(v4 + 16);
    v52 = v115;
    v7 = v115 == 0LL;
    v114 = v115 == 0LL;
    KiReleasePrcbLocksForIsolationUnit(&v110);
    if ( !v54 )
      goto LABEL_72;
    v55 = 0;
    if ( !v26->ProcessorCount )
      goto LABEL_71;
    do
    {
      v56 = v26->ProcessorEntries[v55].___u6[0];
      v57 = v26->ProcessorEntries[v55].Prcb;
      if ( (v56 & 0x10) != 0 )
      {
        v59 = *(_BYTE *)(v4 + 13785);
        if ( !v59 )
        {
LABEL_62:
          *(_BYTE *)(v4 + 13785) = 1;
          *(_DWORD *)(v4 + 13788) = v57->Number;
          goto LABEL_63;
        }
        if ( v59 == 1 )
        {
          GroupSetMember = *(unsigned int *)(v4 + 13788);
          if ( (_DWORD)GroupSetMember == v57->Number )
            goto LABEL_63;
          v60 = (_WORD *)(v4 + 13792);
          *(_BYTE *)(v4 + 13785) = 2;
          KeAddProcessorAffinityEx(v4 + 13792, GroupSetMember);
        }
        else
        {
          v60 = (_WORD *)(v4 + 13792);
        }
        Group = v57->Group;
        GroupSetMember = v57->GroupSetMember;
        if ( *v60 > (unsigned __int16)Group )
          goto LABEL_81;
        if ( v60[1] > (unsigned __int16)Group )
        {
          *v60 = Group + 1;
LABEL_81:
          *(_QWORD *)&v60[4 * Group + 4] |= GroupSetMember;
          goto LABEL_63;
        }
        goto LABEL_63;
      }
      if ( (v56 & 8) == 0 || !v57->IdleHalt )
        goto LABEL_63;
      v58 = *(_BYTE *)(v4 + 13785);
      if ( !v58 )
        goto LABEL_62;
      if ( v58 == 1 )
      {
        v62 = *(_DWORD *)(v4 + 13788);
        if ( v62 == v57->Number )
          goto LABEL_63;
        *(_BYTE *)(v4 + 13785) = 2;
        v63 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v62) & 0x3F;
        v64 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v62) >> 6;
        if ( *(unsigned __int16 *)(v4 + 13792) > (unsigned int)v64 )
          goto LABEL_85;
        if ( *(unsigned __int16 *)(v4 + 13794) > (unsigned int)v64 )
        {
          *(_WORD *)(v4 + 13792) = v64 + 1;
LABEL_85:
          v65 = (unsigned int)v64;
          v66 = *(_QWORD *)(v4 + 8 * v64 + 13800);
          _bittestandset64(&v66, v63);
          *(_QWORD *)(v4 + 8 * v65 + 13800) = v66;
        }
      }
      v67 = v57->Group;
      GroupSetMember = v57->GroupSetMember;
      if ( *(_WORD *)(v4 + 13792) > (unsigned __int16)v67 )
        goto LABEL_87;
      if ( *(_WORD *)(v4 + 13794) > (unsigned __int16)v67 )
      {
        *(_WORD *)(v4 + 13792) = v67 + 1;
LABEL_87:
        *(_QWORD *)(v4 + 8 * v67 + 13800) |= GroupSetMember;
      }
LABEL_63:
      if ( (v26->ProcessorEntries[v55].___u6[0] & 2) != 0 )
        EtwTraceScheduleThread(v26->ProcessorEntries[v55].NewThread, v57, 0LL);
      if ( (v26->ProcessorEntries[v55].___u6[0] & 4) != 0 )
      {
        if ( v57->SchedulerAssist )
        {
          v68 = v4 + 36600;
          if ( *(_QWORD *)(v4 + 36600) )
          {
            if ( (_KPRCB *)v4 != v57 )
            {
              v69 = v4 + 36600;
              GroupSetMember = *(unsigned int *)v57->SchedulerAssist;
              if ( (*(_DWORD *)v57->SchedulerAssist & 0x40000) != 0 )
                v69 = v4 + 36600;
              if ( (GroupSetMember & 0x100000) != 0
                || (*(_DWORD *)v57->SchedulerAssist & 0x40000) != 0
                && (v68 = v69, (unsigned __int8)GroupSetMember < v26->ProcessorEntries[v55].KickPriority) )
              {
                v70 = HvlpVirtualProcessorsIdentityMapped == 0;
                v71 = *(_QWORD *)v68;
                *(_DWORD *)(*(_QWORD *)v68 + 12LL) = 2;
                Number = v57->Number;
                if ( v70 )
                  LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                *(_DWORD *)(v71 + 8) = Number;
                if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                  EtwTraceXSchedulerPriorityKickSend(v57->Number, 2LL, v69);
                GroupSetMember = 0LL;
                __writemsr(0x400000C2u, (unsigned int)Number);
              }
            }
          }
        }
      }
      if ( (v26->ProcessorEntries[v55].___u6[0] & 1) != 0 )
        _InterlockedDecrement16(&v26->ProcessorEntries[v55].NewThread->KeReferenceCount);
      ++v55;
    }
    while ( v55 < v26->ProcessorCount );
    v7 = v114;
    v52 = v115;
LABEL_71:
    KiFlushSoftwareInterruptBatch(v4 + 13784, GroupSetMember);
LABEL_72:
    if ( v109 )
    {
      KiReadyDeferredReadyList(v4, &v109);
      if ( v52 )
        goto LABEL_16;
      if ( !*(_QWORD *)(v4 + 16) )
      {
LABEL_74:
        KiInsertDeferredPreemptionApc(v4, v112, 0);
        goto LABEL_16;
      }
      v6 = v112;
      continue;
    }
    break;
  }
  if ( !v52 )
    goto LABEL_74;
LABEL_16:
  if ( v110 )
  {
    v16 = 0LL;
    LODWORD(v17) = 0;
    v112 = v110 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v110 & 1) == 0 )
    {
      v16 = &v112;
      LODWORD(v17) = 1;
      goto LABEL_21;
    }
    if ( (v110 & 1) == 1 )
    {
      v18 = *(unsigned __int8 **)((v110 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
      LODWORD(v17) = *v18;
      v16 = (unsigned __int64 *)(v18 + 8);
    }
    while ( (_DWORD)v17 )
    {
LABEL_21:
      v17 = (unsigned int)(v17 - 1);
      _InterlockedAnd64((volatile signed __int64 *)(v16[v17] + 48), 0LL);
    }
  }
  return v7;
}
