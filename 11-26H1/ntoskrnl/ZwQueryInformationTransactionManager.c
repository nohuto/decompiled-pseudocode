/*
 * XREFs of ZwQueryInformationTransactionManager @ 0x14072AB20
 * Callers:
 *     DifZwQueryInformationTransactionManagerWrapper @ 0x1406B59B0 (DifZwQueryInformationTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationTransactionManager(
        HANDLE TransactionManagerHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
