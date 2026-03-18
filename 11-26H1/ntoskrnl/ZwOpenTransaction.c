/*
 * XREFs of ZwOpenTransaction @ 0x140725B70
 * Callers:
 *     DifZwOpenTransactionWrapper @ 0x1406AE290 (DifZwOpenTransactionWrapper.c)
 *     CmpRmUnDoPhase @ 0x14085E718 (CmpRmUnDoPhase.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle, *(_QWORD *)&DesiredAccess);
}
