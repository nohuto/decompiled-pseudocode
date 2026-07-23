/*
 * XREFs of ZwCreateIoCompletion @ 0x140729600
 * Callers:
 *     DifZwCreateIoCompletionWrapper @ 0x1406A2FF0 (DifZwCreateIoCompletionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
