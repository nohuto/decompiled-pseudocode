/*
 * XREFs of ExDereferenceCallBackBlock @ 0x140424890
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
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
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
