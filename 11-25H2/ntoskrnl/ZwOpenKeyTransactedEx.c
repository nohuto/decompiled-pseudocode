/*
 * XREFs of ZwOpenKeyTransactedEx @ 0x14069D6E0
 * Callers:
 *     DifZwOpenKeyTransactedExWrapper @ 0x140635D70 (DifZwOpenKeyTransactedExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
