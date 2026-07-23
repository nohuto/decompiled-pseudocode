/*
 * XREFs of ZwOpenTransaction @ 0x14072A740
 * Callers:
 *     DifZwOpenTransactionWrapper @ 0x1406B1E70 (DifZwOpenTransactionWrapper.c)
 *     CmpRmUnDoPhase @ 0x140864A08 (CmpRmUnDoPhase.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
