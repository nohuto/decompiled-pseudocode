/*
 * XREFs of ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x14022C654 (KiSoftParkElectionUnparkProcessor.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiEnterLongDpcProcessing @ 0x140230404 (KiEnterLongDpcProcessing.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 * Callees:
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x140380B40 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiQueryEffectivePriorityThread @ 0x140380E90 (KiQueryEffectivePriorityThread.c)
 *     KiSetProcessorIdle @ 0x14041CED0 (KiSetProcessorIdle.c)
 *     KiSetSchedulerAssistPriority @ 0x1404A9DBC (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiCommitRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KPRCB *a2,
        char a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  _KTHREAD *NewThread; // rdi
  struct _KPRCB *v5; // r10
  _KTHREAD *CompareThread; // rdx
  char v7; // r12
  _KPRCB *Prcb; // rbx
  _KTHREAD *NextThread; // rcx
  BOOL v12; // esi
  int v13; // r15d
  _KTHREAD *CurrentThread; // rcx
  _KTHREAD *SmtIsolationThread; // r11
  char v16; // r9
  unsigned __int8 v17; // cl
  char v18; // al
  unsigned __int8 v19; // cl
  volatile signed __int32 *v20; // rdx
  unsigned int ExpectedRunTime; // edx
  _KPRIORITY_STATE *v22; // r8
  char v23; // cl
  char v24; // al
  char v25; // cl
  _BYTE *v26; // rcx
  _BOOL8 v27; // r8
  __int64 v28; // rdx
  _KTHREAD *v29; // r9
  char v30; // al
  unsigned __int8 v31; // cl
  volatile signed __int32 *v32; // rdx
  int v33; // ecx
  unsigned __int32 v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  _KPRIORITY_STATE *v37; // r8
  char v38; // cl
  char v39; // al
  char v40; // cl
  char v42; // cl
  char v43; // cl
  char Priority; // al
  char v45; // al
  _KTHREAD *v46; // rcx
  __int64 v47; // r9
  char v48; // al
  char v49; // al
  unsigned __int8 v50; // r9
  void *SchedulerAssist; // rcx
  _KPRIORITY_STATE *v52; // r8
  char v53; // cl
  unsigned __int8 HardwareFeedbackClass; // al
  unsigned int CurrentRunTime; // edx
  char v56; // al
  char v57; // cl
  _BYTE *v58; // rcx
  int v59; // ecx
  unsigned __int32 v60; // eax
  unsigned int v61; // ecx
  unsigned __int8 *v62; // rsi
  unsigned __int8 v63; // di
  char v64; // al
  unsigned __int8 v65; // r9
  void *v66; // rcx
  _KPRIORITY_STATE *v67; // r8
  char v68; // cl
  unsigned __int8 v69; // al
  unsigned int v70; // edx
  char v71; // al
  char v72; // cl
  char EffectivePriorityThread; // al
  char v74; // al
  unsigned int v75; // r9d
  unsigned int v76; // r9d
  char v77; // [rsp+20h] [rbp-58h]
  _KTHREAD *v78; // [rsp+28h] [rbp-50h]
  unsigned __int8 *v79; // [rsp+28h] [rbp-50h]
  unsigned __int8 *PriorityState; // [rsp+30h] [rbp-48h]
  _KTHREAD *v81; // [rsp+30h] [rbp-48h]
  _KTHREAD *v82; // [rsp+38h] [rbp-40h]
  unsigned __int8 v83; // [rsp+80h] [rbp+8h]
  unsigned __int8 v84; // [rsp+80h] [rbp+8h]

  NewThread = a1->NewThread;
  v5 = a2;
  CompareThread = a1->CompareThread;
  v7 = 0;
  Prcb = a1->Prcb;
  v78 = CompareThread;
  if ( NewThread == (_KTHREAD *)-1LL )
    return 0;
  if ( NewThread != (_KTHREAD *)-2LL )
  {
    NextThread = Prcb->NextThread;
    v12 = 0;
    v13 = 0;
    if ( NextThread )
    {
      if ( (unsigned __int8)KiIsPrcbThread(NextThread) )
      {
        v12 = v46 == Prcb->IdleThread;
      }
      else
      {
        if ( (a1->___u5[0] & 2) == 0 )
          v46->Preempted = 1;
        if ( (a1->___u5[0] & 1) == 0 )
        {
          KiInsertDeferredReadyList(v47, v46);
          CompareThread = v78;
        }
      }
    }
    else
    {
      CurrentThread = Prcb->CurrentThread;
      if ( (!CurrentThread || CurrentThread->Process != (_KPROCESS *)&unk_140FC9F40)
        && CurrentThread->WaitBlockFill6[68] == 2
        && (a1->___u5[0] & 2) == 0 )
      {
        CurrentThread->Preempted = 1;
      }
      v13 = 1;
      LOBYTE(v12) = CurrentThread == Prcb->IdleThread;
    }
    if ( v12 != ((Prcb->IdleState & 1) == 0) )
      __fastfail(0x21u);
    if ( NewThread )
    {
      SmtIsolationThread = Prcb->SmtIsolationThread;
      v82 = SmtIsolationThread;
      v16 = 2 * (*((_BYTE *)&a1->0 + 1) & 1) - 4;
      v77 = v16;
      PriorityState = (unsigned __int8 *)Prcb->PriorityState;
      v17 = *PriorityState;
      v83 = *PriorityState;
      if ( NewThread == SmtIsolationThread )
      {
        if ( (CompareThread->Header.Size & 4) != 0 )
        {
          EffectivePriorityThread = KiQueryEffectivePriorityThread(v78, Prcb);
          v5 = a2;
          SmtIsolationThread = v82;
          CompareThread = v78;
          v49 = v83 ^ (EffectivePriorityThread ^ v83) & 0x7F;
        }
        else
        {
          v49 = v17 ^ (CompareThread->Priority ^ v17) & 0x7F;
        }
        v50 = v49 & 0x7F | ((unsigned __int8)(*((_DWORD *)&CompareThread->0 + 1) >> 1) << 7);
        *PriorityState = v50;
        SchedulerAssist = Prcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          v76 = v50 & 0x7F;
          if ( CompareThread == Prcb->IdleThread )
            v76 = KiVpThreadSystemWorkPriority;
          KiSetSchedulerAssistPriority(SchedulerAssist, v76, 0LL);
          CompareThread = v78;
        }
        v52 = Prcb->PriorityState;
        v53 = v52[64].AllFields ^ (CompareThread->BamQosLevel ^ v52[64].AllFields) & 7;
        HardwareFeedbackClass = CompareThread->HardwareFeedbackClass;
        CurrentRunTime = CompareThread->CurrentRunTime;
        v56 = v53 ^ (v53 ^ (8 * HardwareFeedbackClass)) & 0x38;
        if ( CurrentRunTime <= v78->ExpectedRunTime )
          CurrentRunTime = v78->ExpectedRunTime;
        v57 = 64;
        if ( CurrentRunTime < KiDynamicHeteroCpuPolicyExpectedCycles )
          v57 = 0;
        v52[64].AllFields = v57 | v56 & 0xBF;
        Prcb->NextThread = SmtIsolationThread;
        v58 = Prcb->SchedulerAssist;
        if ( v58 )
          v58[16] = SmtIsolationThread == Prcb->IdleThread;
        if ( SmtIsolationThread->WaitBlockFill6[68] == 1 || (v77 & 2) != 0 )
          SmtIsolationThread->ReadyTime += MEMORY[0xFFFFF78000000320] - SmtIsolationThread->WaitBlock[2].SpareLong;
        SmtIsolationThread->WaitBlockFill6[68] = 3;
      }
      else
      {
        if ( (NewThread->Header.Size & 4) != 0 )
        {
          v45 = KiQueryEffectivePriorityThread(NewThread, Prcb);
          v5 = a2;
          v18 = v83 ^ (v83 ^ v45) & 0x7F;
          v16 = v77;
        }
        else
        {
          v18 = v17 ^ (NewThread->Priority ^ v17) & 0x7F;
        }
        v19 = v18 & 0x7F | ((unsigned __int8)(*((_DWORD *)&NewThread->0 + 1) >> 1) << 7);
        *PriorityState = v19;
        v20 = (volatile signed __int32 *)Prcb->SchedulerAssist;
        if ( v20 )
        {
          v59 = v19 & 0x7F;
          if ( NewThread == Prcb->IdleThread )
            v59 = KiVpThreadSystemWorkPriority;
          v60 = (unsigned __int32)*v20 >> 8;
          if ( v59 != (unsigned __int8)v60 )
          {
            if ( v59 <= (unsigned __int8)v60 )
              v61 = (v59 << 8) - ((unsigned __int8)v60 << 8);
            else
              v61 = (v59 - (unsigned __int8)v60) << 8;
            _InterlockedAdd(v20, v61);
          }
        }
        ExpectedRunTime = NewThread->CurrentRunTime;
        v22 = Prcb->PriorityState;
        v23 = v22[64].AllFields ^ (NewThread->BamQosLevel ^ v22[64].AllFields) & 7;
        v24 = v23 ^ (v23 ^ (8 * NewThread->HardwareFeedbackClass)) & 0x38;
        if ( ExpectedRunTime <= NewThread->ExpectedRunTime )
          ExpectedRunTime = NewThread->ExpectedRunTime;
        v25 = 64;
        if ( ExpectedRunTime < KiDynamicHeteroCpuPolicyExpectedCycles )
          v25 = 0;
        v22[64].AllFields = v25 | v24 & 0xBF;
        Prcb->NextThread = NewThread;
        v26 = Prcb->SchedulerAssist;
        if ( v26 )
          v26[16] = NewThread == Prcb->IdleThread;
        if ( NewThread->WaitBlockFill6[68] == 1 || (v16 & 2) != 0 )
          NewThread->ReadyTime += MEMORY[0xFFFFF78000000320] - NewThread->WaitBlock[2].SpareLong;
        NewThread->WaitBlockFill6[68] = 3;
      }
      if ( NewThread == Prcb->IdleThread )
      {
        v27 = !v12;
        if ( v5 == Prcb )
        {
          v28 = 1LL;
          if ( (a3 & 1) != 0 )
            v27 = 0LL;
          goto LABEL_44;
        }
        goto LABEL_43;
      }
      if ( v12 )
      {
        v27 = 0LL;
        v28 = 0LL;
        goto LABEL_44;
      }
    }
    else
    {
      Prcb->NextThread = 0LL;
      v29 = a1->CompareThread;
      v81 = v29;
      v79 = (unsigned __int8 *)Prcb->PriorityState;
      v84 = *v79;
      if ( (v29->Header.Size & 4) != 0 )
      {
        v48 = KiQueryEffectivePriorityThread(v29, Prcb);
        v5 = a2;
        v29 = v81;
        v30 = v84 ^ (v48 ^ v84) & 0x7F;
      }
      else
      {
        v30 = *v79 ^ (v29->Priority ^ *v79) & 0x7F;
      }
      v31 = v30 & 0x7F | ((unsigned __int8)(*((_DWORD *)&v29->0 + 1) >> 1) << 7);
      *v79 = v31;
      v32 = (volatile signed __int32 *)Prcb->SchedulerAssist;
      if ( v32 )
      {
        v33 = v31 & 0x7F;
        if ( v29 == Prcb->IdleThread )
          v33 = KiVpThreadSystemWorkPriority;
        v34 = (unsigned __int32)*v32 >> 8;
        if ( v33 != (unsigned __int8)v34 )
        {
          if ( v33 <= (unsigned __int8)v34 )
            v35 = (v33 << 8) - ((unsigned __int8)v34 << 8);
          else
            v35 = (v33 - (unsigned __int8)v34) << 8;
          _InterlockedAdd(v32, v35);
        }
      }
      v36 = v29->CurrentRunTime;
      v37 = Prcb->PriorityState;
      v38 = v37[64].AllFields ^ (v29->BamQosLevel ^ v37[64].AllFields) & 7;
      v39 = v38 ^ (v38 ^ (8 * v29->HardwareFeedbackClass)) & 0x38;
      if ( v36 <= v29->ExpectedRunTime )
        v36 = v29->ExpectedRunTime;
      v40 = 64;
      if ( v36 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v40 = 0;
      v37[64].AllFields = v40 | v39 & 0xBF;
      if ( a1->CompareThread == Prcb->IdleThread )
      {
        v27 = !v12;
        if ( v5 == Prcb && (a3 & 1) != 0 )
          v27 = 0LL;
LABEL_43:
        v28 = 1LL;
LABEL_44:
        KiSetProcessorIdle(Prcb, v28, v27);
        goto LABEL_45;
      }
      if ( v12 )
      {
        v27 = 0LL;
        v28 = 0LL;
        goto LABEL_44;
      }
    }
LABEL_45:
    KiUpdateThreadQosGroupingSummaries(Prcb);
    KiUpdateStandbyStealSummaryForStandbyChange(Prcb);
    if ( v13 && a2 != Prcb )
    {
      v42 = a1->___u6[0];
      if ( v12 )
        v43 = v42 | 8;
      else
        v43 = v42 | 0x10;
      a1->___u6[0] = v43;
      v7 = 1;
    }
    if ( NewThread != Prcb->IdleThread && a2 != Prcb && a2->SchedulerAssist )
    {
      Priority = NewThread->Priority;
      v7 = 1;
      a1->___u6[0] |= 4u;
      a1->KickPriority = Priority;
    }
    if ( (a3 & 2) != 0 )
    {
      if ( NewThread )
      {
        _InterlockedIncrement16(&NewThread->KeReferenceCount);
        a1->___u6[0] |= 3u;
        return 1;
      }
    }
    return v7;
  }
  v62 = (unsigned __int8 *)Prcb->PriorityState;
  v63 = *v62;
  if ( (CompareThread->Header.Size & 4) != 0 )
  {
    v74 = KiQueryEffectivePriorityThread(CompareThread, Prcb);
    CompareThread = v78;
    v64 = v74 ^ v63;
  }
  else
  {
    v64 = CompareThread->Priority ^ v63;
  }
  v65 = (v63 ^ v64 & 0x7F) & 0x7F | ((unsigned __int8)(*((_DWORD *)&CompareThread->0 + 1) >> 1) << 7);
  *v62 = v65;
  v66 = Prcb->SchedulerAssist;
  if ( v66 )
  {
    v75 = v65 & 0x7F;
    if ( CompareThread == Prcb->IdleThread )
      v75 = KiVpThreadSystemWorkPriority;
    KiSetSchedulerAssistPriority(v66, v75, 0LL);
    CompareThread = v78;
  }
  v67 = Prcb->PriorityState;
  v68 = v67[64].AllFields ^ (CompareThread->BamQosLevel ^ v67[64].AllFields) & 7;
  v69 = CompareThread->HardwareFeedbackClass;
  v70 = CompareThread->CurrentRunTime;
  v71 = v68 ^ (v68 ^ (8 * v69)) & 0x38;
  if ( v70 <= v78->ExpectedRunTime )
    v70 = v78->ExpectedRunTime;
  v72 = 64;
  if ( v70 < KiDynamicHeteroCpuPolicyExpectedCycles )
    v72 = 0;
  v67[64].AllFields = v72 | v71 & 0xBF;
  KiUpdateThreadQosGroupingSummaries(Prcb);
  KiUpdateStandbyStealSummaryForStandbyChange(Prcb);
  return 0;
}
