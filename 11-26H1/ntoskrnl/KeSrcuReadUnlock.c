/*
 * XREFs of KeSrcuReadUnlock @ 0x1405F51C0
 * Callers:
 *     KiSrcuReadUnlockIpi @ 0x1405F5A00 (KiSrcuReadUnlockIpi.c)
 *     KiSrcuReadUnlockRemote @ 0x1405F5A1C (KiSrcuReadUnlockRemote.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiSrcuReportQuiescent @ 0x1404628BC (KiSrcuReportQuiescent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSrcuFlushCompleted @ 0x14052EB44 (KiSrcuFlushCompleted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSrcuReadUnlockRemote @ 0x1405F5A1C (KiSrcuReadUnlockRemote.c)
 */

__int64 __fastcall KeSrcuReadUnlock(__int64 a1, _DWORD *a2)
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
  __int64 result; // rax
  _QWORD *v14; // rbx
  int v15; // r14d
  unsigned __int8 CurrentIrql; // di
  _LIST_ENTRY *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int8 v20; // cl
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // r8
  int v23; // ett
  int v24; // ebx

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
    return KiSrcuReadUnlockRemote(a1, a2);
  }
  v14 = (_QWORD *)((Number << 6) + *(_QWORD *)(a1 + 32));
  if ( !*v14 )
    __fastfail(0xEu);
  v15 = 0;
  CurrentIrql = 0;
  result = *v14 - v2;
  *v14 = result;
  if ( result )
    goto LABEL_31;
  if ( !CurrentPrcb->RcuData.IdleState )
    goto LABEL_31;
  result = (__int64)(v14 + 1);
  v17 = (_LIST_ENTRY *)v14[1];
  if ( !v17 )
    goto LABEL_31;
  if ( v17 == (_LIST_ENTRY *)result )
  {
    CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
  }
  else
  {
    CurrentPrcb->RcuData.AwaitingCompletion = v17;
    v18 = *(_QWORD *)result;
    v19 = (_QWORD *)v14[2];
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v19 != result )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
  }
  *(_QWORD *)result = 0LL;
  v14[3] = *(_QWORD *)(v14[7] + 56LL);
  result = v14[4];
  if ( v14[3] == result )
  {
LABEL_31:
    if ( !v5 )
      goto LABEL_39;
    goto LABEL_32;
  }
  v15 = v2;
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        result = KiRaiseIrqlProcessIrqlFlags(v20, 2);
    }
LABEL_32:
    if ( v6 )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        _m_prefetchw(v22);
        LODWORD(result) = *v22;
        do
        {
          v23 = result;
          result = (unsigned int)_InterlockedCompareExchange(v22, result & 0xFFDFFFFF, result);
        }
        while ( v23 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
      _enable();
    }
LABEL_39:
    if ( !v15 )
      return result;
  }
  result = KiSrcuReportQuiescent((__int64)v14, (__int64)CurrentPrcb);
  v24 = result;
  if ( v5 && CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( v24 )
    return (__int64)KiSrcuFlushCompleted(a1, 1u);
  return result;
}
