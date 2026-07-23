/*
 * XREFs of TmRollbackComplete @ 0x140536C30
 * Callers:
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackComplete(Enlistment, TmVirtualClock);
}
