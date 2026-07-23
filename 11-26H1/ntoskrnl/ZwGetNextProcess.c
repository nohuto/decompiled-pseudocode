/*
 * XREFs of ZwGetNextProcess @ 0x140729FC0
 * Callers:
 *     DifZwGetNextProcessWrapper @ 0x1406AB6B0 (DifZwGetNextProcessWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
