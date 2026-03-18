/*
 * XREFs of GsDriverEntry @ 0x1402F0460
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1402F0494 (__security_init_cookie.c)
 *     DriverEntry @ 0x1402F04C8 (DriverEntry.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
