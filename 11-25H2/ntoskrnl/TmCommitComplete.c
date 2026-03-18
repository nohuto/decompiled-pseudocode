/*
 * XREFs of TmCommitComplete @ 0x1404F9BD0
 * Callers:
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmCommitComplete(Enlistment, TmVirtualClock);
}
