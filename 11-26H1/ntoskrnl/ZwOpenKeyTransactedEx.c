/*
 * XREFs of ZwOpenKeyTransactedEx @ 0x14072A580
 * Callers:
 *     DifZwOpenKeyTransactedExWrapper @ 0x1406AFBC0 (DifZwOpenKeyTransactedExWrapper.c)
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
