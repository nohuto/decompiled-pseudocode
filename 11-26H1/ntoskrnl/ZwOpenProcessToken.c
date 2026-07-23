/*
 * XREFs of ZwOpenProcessToken @ 0x14072A640
 * Callers:
 *     DifZwOpenProcessTokenWrapper @ 0x1406B0A40 (DifZwOpenProcessTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
