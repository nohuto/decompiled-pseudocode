/*
 * XREFs of GsDriverEntry @ 0x1400104D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x140010504 (__security_init_cookie.c)
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
