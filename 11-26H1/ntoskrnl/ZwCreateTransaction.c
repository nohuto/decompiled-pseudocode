/*
 * XREFs of ZwCreateTransaction @ 0x1407299A0
 * Callers:
 *     DifZwCreateTransactionWrapper @ 0x1406A6BB0 (DifZwCreateTransactionWrapper.c)
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
