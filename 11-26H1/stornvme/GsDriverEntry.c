/*
 * XREFs of GsDriverEntry @ 0x14004B010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x140012008 (DriverEntry.c)
 *     __security_init_cookie @ 0x14004B044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
