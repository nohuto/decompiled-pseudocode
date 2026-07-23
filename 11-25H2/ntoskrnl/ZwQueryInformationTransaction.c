/*
 * XREFs of ZwQueryInformationTransaction @ 0x14069DC60
 * Callers:
 *     DifZwQueryInformationTransactionWrapper @ 0x140639BE0 (DifZwQueryInformationTransactionWrapper.c)
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
