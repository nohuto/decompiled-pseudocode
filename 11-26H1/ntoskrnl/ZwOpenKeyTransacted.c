/*
 * XREFs of ZwOpenKeyTransacted @ 0x14072A560
 * Callers:
 *     DifZwOpenKeyTransactedWrapper @ 0x1406AFD70 (DifZwOpenKeyTransactedWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
