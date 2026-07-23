/*
 * XREFs of ZwCreateTransaction @ 0x14069CB20
 * Callers:
 *     DifZwCreateTransactionWrapper @ 0x1406328D0 (DifZwCreateTransactionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle,
        ULONG CreateOptions,
        ULONG IsolationLevel,
        ULONG IsolationFlags,
        PLARGE_INTEGER Timeout,
        PUNICODE_STRING Description)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
