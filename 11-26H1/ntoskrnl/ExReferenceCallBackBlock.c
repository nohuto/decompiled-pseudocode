/*
 * XREFs of ExReferenceCallBackBlock @ 0x14029AFF0
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     PoIssueCoalescingNotification @ 0x1404247C8 (PoIssueCoalescingNotification.c)
 *     KiEnumerateCallback @ 0x1404F6DD0 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405CDDA0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405E7190 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1405E7AB0 (KiHandleBound.c)
 *     DbgkLkmdRegisterCallback @ 0x14078E000 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x14078E0F0 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14078E198 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x1407D2290 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140802610 (PsRemoveLoadImageNotifyRoutine.c)
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 *     PsCallImageNotifyRoutines @ 0x1409E6750 (PsCallImageNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1409E7E7C (PspCallThreadNotifyRoutines.c)
 *     ExCallCallBack @ 0x1409FCA28 (ExCallCallBack.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     PspCallProcessNotifyRoutines @ 0x1409FE474 (PspCallProcessNotifyRoutines.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140B2DB60 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140B2F01C (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAcquireRundownProtectionEx @ 0x140376EB0 (ExAcquireRundownProtectionEx.c)
 *     ExpReleaseRundownProtection @ 0x14045CF10 (ExpReleaseRundownProtection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExReferenceCallBackBlock(signed __int64 *a1, signed __int64 a2)
{
  signed __int64 v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rax
  unsigned __int8 CurrentIrql; // di
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  struct _EX_RUNDOWN_REF *v9; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  void *retaddr; // [rsp+28h] [rbp+0h]

  _m_prefetchw(a1);
  v3 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      a2 = v3 - 1;
      v4 = _InterlockedCompareExchange64(a1, v3 - 1, v3);
      if ( v3 == v4 )
        break;
      v3 = v4;
    }
    while ( (v4 & 0xF) != 0 );
  }
  if ( !v3 )
    return 0LL;
  v5 = v3 & 0xF;
  if ( (v3 & 0xF) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(dword_140EFF2B8);
      v7 = dword_140EFF2B8[0] & 0x7FFFFFFF;
      while ( 1 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(dword_140EFF2B8, v7 + 1, v7);
        if ( v8 == v7 )
          break;
        if ( v7 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(dword_140EFF2B8, CurrentIrql);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(dword_140EFF2B8, CurrentIrql);
    }
    v9 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v9 && !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v9 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(dword_140EFF2B8, 0xBFFFFFFF);
      _InterlockedDecrement(dword_140EFF2B8);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(dword_140EFF2B8, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( !v9 )
      return 0LL;
    return v9;
  }
  v9 = (struct _EX_RUNDOWN_REF *)(v3 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v5 != 1 || !ExAcquireRundownProtectionEx(v9, 0xFu) )
    return v9;
  _m_prefetchw(a1);
  v11 = *a1;
  while ( (v11 & 0xF) == 0 && v9 == (struct _EX_RUNDOWN_REF *)(v11 & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange64(a1, v11 + 15, v11);
    if ( v12 == v11 )
      return v9;
  }
  ExpReleaseRundownProtection(v9, 0xFu);
  return v9;
}
