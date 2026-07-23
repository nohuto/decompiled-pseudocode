/*
 * XREFs of ZwSetInformationTransactionManager @ 0x14072B5C0
 * Callers:
 *     DifZwSetInformationTransactionManagerWrapper @ 0x1406BE9B0 (DifZwSetInformationTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationTransactionManager(
        HANDLE TmHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle);
}
