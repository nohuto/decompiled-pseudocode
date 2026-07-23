/*
 * XREFs of TmCommitComplete @ 0x1405368F0
 * Callers:
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmCommitComplete(Enlistment, TmVirtualClock);
}
