/*
 * XREFs of TmReadOnlyEnlistment @ 0x1404F9E30
 * Callers:
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReadOnlyEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmReadOnlyEnlistment(Enlistment, TmVirtualClock);
}
