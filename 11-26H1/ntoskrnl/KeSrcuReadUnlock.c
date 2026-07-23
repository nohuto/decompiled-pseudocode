/*
 * XREFs of KeSrcuReadUnlock @ 0x1405F7B80
 * Callers:
 *     KiSrcuReadUnlockIpi @ 0x1405F83C0 (KiSrcuReadUnlockIpi.c)
 *     KiSrcuReadUnlockRemote @ 0x1405F83DC (KiSrcuReadUnlockRemote.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSrcuReadUnlockRemote @ 0x1405F83DC (KiSrcuReadUnlockRemote.c)
 */

void __fastcall KeSrcuReadUnlock(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  int v5; // ebp
  bool v6; // si
  struct _KPRCB *CurrentPrcb; // r13
  __int64 Number; // rdx
  struct _KPRCB *v9; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  _QWORD *v13; // rbx
  int v14; // r14d
  unsigned __int8 CurrentIrql; // di
  __int64 v16; // rax
  _LIST_ENTRY *v17; // rax
  _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY **v20; // rcx
  unsigned __int8 v21; // cl
  struct _KPRCB *v22; // rcx
  signed __int32 *v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  int v26; // ebx

  v2 = 1LL;
  if ( (*(_BYTE *)(a1 + 172) & 1) != 0 )
  {
    v5 = 0;
    v6 = 0;
  }
  else
  {
    v5 = 1;
    v6 = KeDisableInterrupts();
  }
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( Number != (unsigned __int16)*a2 )
  {
    if ( v6 )
    {
      v9 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v9->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v11 = *SchedulerAssist;
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
        }
        while ( v12 != v11 );
        if ( (v11 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
      _enable();
    }
    KiSrcuReadUnlockRemote(a1, a2);
    return;
  }
  v13 = (_QWORD *)((Number << 6) + *(_QWORD *)(a1 + 32));
  if ( !*v13 )
    __fastfail(0xEu);
  v14 = 0;
  CurrentIrql = 0;
  v16 = *v13 - v2;
  *v13 = v16;
  if ( v16 )
    goto LABEL_31;
  if ( !CurrentPrcb->RcuData.IdleState )
    goto LABEL_31;
  v17 = (_LIST_ENTRY *)(v13 + 1);
  v18 = (_LIST_ENTRY *)v13[1];
  if ( !v18 )
    goto LABEL_31;
  if ( v18 == v17 )
  {
    CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
  }
  else
  {
    CurrentPrcb->RcuData.AwaitingCompletion = v18;
    Flink = v17->Flink;
    v20 = (_LIST_ENTRY **)v13[2];
    if ( v17->Flink->Blink != v17 || *v20 != v17 )
      __fastfail(3u);
    *v20 = Flink;
    Flink->Blink = (struct _LIST_ENTRY *)v20;
  }
  v17->Flink = 0LL;
  v13[3] = *(_QWORD *)(v13[7] + 56LL);
  if ( v13[3] == v13[4] )
  {
LABEL_31:
    if ( !v5 )
      goto LABEL_39;
    goto LABEL_32;
  }
  v14 = v2;
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v21, 2);
    }
LABEL_32:
    if ( v6 )
    {
      v22 = KeGetCurrentPrcb();
      v23 = (signed __int32 *)v22->SchedulerAssist;
      if ( v23 )
      {
        _m_prefetchw(v23);
        v24 = *v23;
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange(v23, v24 & 0xFFDFFFFF, v24);
        }
        while ( v25 != v24 );
        if ( (v24 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v22);
      }
      _enable();
    }
LABEL_39:
    if ( !v14 )
      return;
  }
  v26 = KiSrcuReportQuiescent((__int64)v13, (__int64)CurrentPrcb);
  if ( v5 && CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v26 )
    KiSrcuFlushCompleted(a1, 1u);
}
