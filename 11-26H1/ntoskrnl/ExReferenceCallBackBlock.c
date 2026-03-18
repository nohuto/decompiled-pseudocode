/*
 * XREFs of ExReferenceCallBackBlock @ 0x14029BA90
 * Callers:
 *     IoBoostThreadIoPriority @ 0x140205ACC (IoBoostThreadIoPriority.c)
 *     PoIssueCoalescingNotification @ 0x140435CBC (PoIssueCoalescingNotification.c)
 *     KiEnumerateCallback @ 0x1404FD890 (KiEnumerateCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1405CB4D0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1405E4820 (KeDeregisterBoundCallback.c)
 *     KiHandleBound @ 0x1405E5140 (KiHandleBound.c)
 *     DbgkLkmdRegisterCallback @ 0x14078B4D0 (DbgkLkmdRegisterCallback.c)
 *     DbgkLkmdUnregisterCallback @ 0x14078B5C0 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x14078B668 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x1407CF1F0 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1407FCBE0 (PsRemoveLoadImageNotifyRoutine.c)
 *     PspCallThreadNotifyRoutines @ 0x1409EB6AC (PspCallThreadNotifyRoutines.c)
 *     ExCallCallBack @ 0x140A41008 (ExCallCallBack.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     PspCallProcessNotifyRoutines @ 0x140A43714 (PspCallProcessNotifyRoutines.c)
 *     KeUserModeCallback @ 0x140A59280 (KeUserModeCallback.c)
 *     PsCallImageNotifyRoutines @ 0x140A791A4 (PsCallImageNotifyRoutines.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140B2BAE0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140B2CF9C (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAcquireRundownProtectionEx @ 0x140375100 (ExAcquireRundownProtectionEx.c)
 *     ExpReleaseRundownProtection @ 0x140463F50 (ExpReleaseRundownProtection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw(&stru_140EFEF90.Header.WaitListHead);
      v7 = (__int64)stru_140EFEF90.Header.WaitListHead.Flink & 0x7FFFFFFF;
      while ( 1 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)&stru_140EFEF90.Header.WaitListHead, v7 + 1, v7);
        if ( v8 == v7 )
          break;
        if ( v7 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&stru_140EFEF90.Header.WaitListHead, CurrentIrql);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&stru_140EFEF90.Header.WaitListHead, CurrentIrql);
    }
    v9 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v9 && !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*a1 & 0xFFFFFFFFFFFFFFF0uLL)) )
      v9 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd((volatile signed __int32 *)&stru_140EFEF90.Header.WaitListHead, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)&stru_140EFEF90.Header.WaitListHead);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&stru_140EFEF90.Header.WaitListHead, retaddr);
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
