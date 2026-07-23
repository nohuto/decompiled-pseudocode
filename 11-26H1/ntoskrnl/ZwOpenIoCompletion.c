/*
 * XREFs of ZwOpenIoCompletion @ 0x14072A500
 * Callers:
 *     DifZwOpenIoCompletionWrapper @ 0x1406AF730 (DifZwOpenIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
