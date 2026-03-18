/*
 * XREFs of ZwRollbackTransaction @ 0x14069E320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle, Wait);
}
