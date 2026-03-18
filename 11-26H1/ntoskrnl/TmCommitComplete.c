/*
 * XREFs of TmCommitComplete @ 0x140534470
 * Callers:
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmCommitComplete(Enlistment, TmVirtualClock);
}
