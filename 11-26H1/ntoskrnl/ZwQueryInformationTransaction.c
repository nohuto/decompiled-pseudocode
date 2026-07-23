/*
 * XREFs of ZwQueryInformationTransaction @ 0x14072AB00
 * Callers:
 *     DifZwQueryInformationTransactionWrapper @ 0x1406B5B60 (DifZwQueryInformationTransactionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
