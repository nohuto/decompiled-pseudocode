/*
 * XREFs of ZwRollforwardTransactionManager @ 0x140726610
 * Callers:
 *     DifZwRollforwardTransactionManagerWrapper @ 0x1406B86C0 (DifZwRollforwardTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollforwardTransactionManager(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle, TmVirtualClock);
}
