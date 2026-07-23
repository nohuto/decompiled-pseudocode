/*
 * XREFs of ZwSetInformationTransaction @ 0x14072B5A0
 * Callers:
 *     DifZwSetInformationTransactionWrapper @ 0x1406BEB40 (DifZwSetInformationTransactionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
