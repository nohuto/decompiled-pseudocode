/*
 * XREFs of TmRollbackComplete @ 0x1404F9F10
 * Callers:
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackComplete(Enlistment, TmVirtualClock);
}
