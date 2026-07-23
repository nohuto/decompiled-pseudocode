/*
 * XREFs of ZwRollforwardTransactionManager @ 0x14072B1E0
 * Callers:
 *     DifZwRollforwardTransactionManagerWrapper @ 0x1406BC2A0 (DifZwRollforwardTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollforwardTransactionManager(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
