/*
 * XREFs of ZwGetNextThread @ 0x140729FE0
 * Callers:
 *     DifZwGetNextThreadWrapper @ 0x1406AB850 (DifZwGetNextThreadWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetNextThread(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewThreadHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
