/*
 * XREFs of TmReferenceEnlistmentKey @ 0x140536BD0
 * Callers:
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReferenceEnlistmentKey(PKENLISTMENT Enlistment, PVOID *Key)
{
  return __imp_TmReferenceEnlistmentKey(Enlistment, Key);
}
