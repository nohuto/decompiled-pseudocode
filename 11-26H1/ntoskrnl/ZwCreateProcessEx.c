/*
 * XREFs of ZwCreateProcessEx @ 0x140728960
 * Callers:
 *     DifZwCreateProcessExWrapper @ 0x1406A4910 (DifZwCreateProcessExWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProcessEx(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        ULONG Flags,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE TokenHandle,
        ULONG Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
