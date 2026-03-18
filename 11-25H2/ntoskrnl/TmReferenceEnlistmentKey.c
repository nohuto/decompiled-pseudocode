/*
 * XREFs of TmReferenceEnlistmentKey @ 0x1404F9EB0
 * Callers:
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReferenceEnlistmentKey(PKENLISTMENT Enlistment, PVOID *Key)
{
  return __imp_TmReferenceEnlistmentKey(Enlistment, Key);
}
