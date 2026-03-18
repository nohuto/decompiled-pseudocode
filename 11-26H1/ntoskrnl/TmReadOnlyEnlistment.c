/*
 * XREFs of TmReadOnlyEnlistment @ 0x1405346D0
 * Callers:
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReadOnlyEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmReadOnlyEnlistment(Enlistment, TmVirtualClock);
}
