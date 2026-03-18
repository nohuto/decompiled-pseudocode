/*
 * XREFs of ZwSetInformationTransactionManager @ 0x1407269F0
 * Callers:
 *     DifZwSetInformationTransactionManagerWrapper @ 0x1406BADD0 (DifZwSetInformationTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationTransactionManager(
        HANDLE TmHandle,
        TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
        PVOID TransactionManagerInformation,
        ULONG TransactionManagerInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle, *(_QWORD *)&TransactionManagerInformationClass);
}
