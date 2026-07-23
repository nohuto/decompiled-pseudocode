/*
 * XREFs of ZwOpenProcessToken @ 0x14069D7A0
 * Callers:
 *     DifZwOpenProcessTokenWrapper @ 0x1406363C0 (DifZwOpenProcessTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
