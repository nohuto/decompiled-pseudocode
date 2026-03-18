/*
 * XREFs of GsDriverEntry @ 0x14044C010
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x14044C044 (__security_init_cookie.c)
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
