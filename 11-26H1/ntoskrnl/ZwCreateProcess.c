/*
 * XREFs of ZwCreateProcess @ 0x1407297C0
 * Callers:
 *     DifZwCreateProcessWrapper @ 0x1406A4C90 (DifZwCreateProcessWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        BOOLEAN InheritObjectTable,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
