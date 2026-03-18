/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x14069DC80
 * Callers:
 *     DifZwQueryInformationTransactionManagerWrapper @ 0x140639A30 (DifZwQueryInformationTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, *(_QWORD *)&TransactionManagerInformationClass);
}
