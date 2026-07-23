/*
 * XREFs of ZwRecoverTransactionManager @ 0x14072AF20
 * Callers:
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
