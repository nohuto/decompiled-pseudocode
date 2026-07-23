/*
 * XREFs of ZwSetInformationTransaction @ 0x14069E700
 * Callers:
 *     DifZwSetInformationTransactionWrapper @ 0x14063CC90 (DifZwSetInformationTransactionWrapper.c)
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
