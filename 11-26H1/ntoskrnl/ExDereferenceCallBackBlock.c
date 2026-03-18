/*
 * XREFs of ExDereferenceCallBackBlock @ 0x140435D80
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
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExDereferenceCallBackBlock(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  while ( ((unsigned __int64)a2 ^ v2) < 0xF )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
    if ( v3 == v2 )
      return;
  }
  ExReleaseRundownProtection_0(a2);
}
