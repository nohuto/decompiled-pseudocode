/*
 * XREFs of NtOpenProcessToken @ 0x140A87760
 * Callers:
 *     DifNtOpenProcessTokenWrapper @ 0x140682240 (DifNtOpenProcessTokenWrapper.c)
 * Callees:
 *     NtOpenProcessTokenEx @ 0x140A87780 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
