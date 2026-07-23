/*
 * XREFs of KiCheckWaitNext @ 0x140221A60
 * Callers:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 *     KiRcuReportQuiescentState @ 0x1404D3098 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v12; // rax
  LARGE_INTEGER InterruptTimePrecise; // rcx
  LONGLONG v14; // rcx
  _DWORD *v15; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *v17; // rcx
  char v18; // r8
  _LIST_ENTRY *AwaitingCompletion; // rax
  struct _LIST_ENTRY **p_Blink; // r13
  _LIST_ENTRY *Flink; // rcx
  signed __int32 *v22; // r8
  char v23; // r8
  signed __int32 *v24; // r8
  struct _LIST_ENTRY *v25; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  signed __int32 v34[18]; // [rsp+0h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 2u) )
  {
    v5 = (2 * _bittestandreset((signed __int32 *)(a1 + 116), 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( CurrentPrcb->RcuData.AwaitingCompletion )
    {
      v18 = KeDisableInterrupts();
      AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
      if ( AwaitingCompletion )
      {
        p_Blink = &AwaitingCompletion[-1].Blink;
        Flink = AwaitingCompletion->Flink;
        if ( AwaitingCompletion[-1].Blink )
        {
          if ( AwaitingCompletion != Flink )
            CurrentPrcb->RcuData.AwaitingCompletion = Flink;
        }
        else
        {
          if ( Flink == AwaitingCompletion )
          {
            CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
          }
          else
          {
            CurrentPrcb->RcuData.AwaitingCompletion = Flink;
            v25 = AwaitingCompletion->Flink;
            Blink = AwaitingCompletion->Blink;
            if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
              __fastfail(3u);
            Blink->Flink = v25;
            v25->Blink = Blink;
          }
          AwaitingCompletion->Flink = 0LL;
          p_Blink[3] = p_Blink[7][3].Blink;
        }
        if ( v18 )
        {
          SchedulerAssist = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v28 = *SchedulerAssist;
            do
            {
              v29 = v28;
              v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
            }
            while ( v29 != v28 );
            if ( (v28 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick();
          }
          _enable();
        }
        if ( (unsigned int)KiSrcuReportQuiescent(p_Blink, CurrentPrcb) )
          KiSrcuFlushCompleted(p_Blink[7], 0LL);
      }
      else if ( v18 )
      {
        v22 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( v22 )
        {
          _m_prefetchw(v22);
          v30 = *v22;
          do
          {
            v31 = v30;
            v30 = _InterlockedCompareExchange(v22, v30 & 0xFFDFFFFF, v30);
          }
          while ( v31 != v30 );
          if ( (v30 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick();
        }
        _enable();
      }
    }
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      v23 = KeDisableInterrupts();
      if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v34, 0);
        CurrentPrcb->RcuData.GraceSequenceQuiescent = (unsigned __int64)KiDpcCorralLock.WaitBlock[2].Thread;
      }
      if ( v23 )
      {
        v24 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( v24 )
        {
          _m_prefetchw(v24);
          v32 = *v24;
          do
          {
            v33 = v32;
            v32 = _InterlockedCompareExchange(v24, v32 & 0xFFDFFFFF, v32);
          }
          while ( v33 != v32 );
          if ( (v32 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick();
        }
        _enable();
      }
    }
    if ( CurrentPrcb->RcuData.GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
    {
      v17 = &KiDpcCorralLock.NpxState + 4 * CurrentPrcb->Number;
      if ( (*v17 & *(_QWORD *)(v17[1] + 48)) == 0 )
      {
        if ( (unsigned int)KiRcuReportQuiescentState(v17, CurrentPrcb->RcuData.GraceSequenceQuiescent, 0LL) )
          KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
      }
    }
  }
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) < 0 )
    {
      if ( a3 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        v12 = MEMORY[0xFFFFF780000003B0];
      }
      else
      {
        v12 = MEMORY[0xFFFFF780000003B0];
        InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
      }
      v14 = InterruptTimePrecise.QuadPart - v12;
      v15 = a5;
      *a4 = v14 - *(_QWORD *)(a1 + 248) - *(_QWORD *)a2;
      *v15 = 2;
    }
    else
    {
      *a4 = *(_QWORD *)a2;
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v5;
}
