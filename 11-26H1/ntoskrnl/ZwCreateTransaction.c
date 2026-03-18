/*
 * XREFs of ZwCreateTransaction @ 0x140724DD0
 * Callers:
 *     DifZwCreateTransactionWrapper @ 0x1406A2FD0 (DifZwCreateTransactionWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(TransactionHandle, *(_QWORD *)&DesiredAccess);
}
