/*
 * XREFs of TmPrepareComplete @ 0x1404F9DB0
 * Callers:
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmPrepareComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmPrepareComplete(Enlistment, TmVirtualClock);
}
