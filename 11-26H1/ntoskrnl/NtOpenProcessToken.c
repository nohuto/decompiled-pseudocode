/*
 * XREFs of NtOpenProcessToken @ 0x140A818F0
 * Callers:
 *     DifNtOpenProcessTokenWrapper @ 0x14067E660 (DifNtOpenProcessTokenWrapper.c)
 * Callees:
 *     NtOpenProcessTokenEx @ 0x140A81910 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
