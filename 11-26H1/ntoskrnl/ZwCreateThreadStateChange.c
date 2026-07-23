/*
 * XREFs of ZwCreateThreadStateChange @ 0x140729900
 * Callers:
 *     DifZwCreateThreadStateChangeWrapper @ 0x1406A5E60 (DifZwCreateThreadStateChangeWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateThreadStateChange(
        PHANDLE ThreadStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ThreadHandle,
        ULONG64 Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadStateChangeHandle);
}
