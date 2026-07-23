/*
 * XREFs of ZwFreezeTransactions @ 0x140729EC0
 * Callers:
 *     DifZwFreezeTransactionsWrapper @ 0x1406AAA20 (DifZwFreezeTransactionsWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreezeTransactions(PLARGE_INTEGER FreezeTimeout, PLARGE_INTEGER ThawTimeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FreezeTimeout);
}
