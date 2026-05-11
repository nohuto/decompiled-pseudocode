/*
 * XREFs of GsDriverEntry @ 0x140043010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x14002F13C (DriverEntry.c)
 *     __security_init_cookie @ 0x140043044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
