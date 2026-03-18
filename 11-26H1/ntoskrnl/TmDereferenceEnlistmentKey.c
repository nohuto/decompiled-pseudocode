/*
 * XREFs of TmDereferenceEnlistmentKey @ 0x140534510
 * Callers:
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmDereferenceEnlistmentKey(PKENLISTMENT Enlistment, PBOOLEAN LastReference)
{
  return __imp_TmDereferenceEnlistmentKey(Enlistment, LastReference);
}
