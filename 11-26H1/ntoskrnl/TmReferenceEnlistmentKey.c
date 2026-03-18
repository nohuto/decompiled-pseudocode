/*
 * XREFs of TmReferenceEnlistmentKey @ 0x140534750
 * Callers:
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReferenceEnlistmentKey(PKENLISTMENT Enlistment, PVOID *Key)
{
  return __imp_TmReferenceEnlistmentKey(Enlistment, Key);
}
