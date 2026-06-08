/*
 * XREFs of FxDriverEntry @ 0x140007EF0
 * Callers:
 *     <none>
 * Callees:
 *     FxDriverEntryWorker @ 0x140007F24 (FxDriverEntryWorker.c)
 *     __security_init_cookie @ 0x14004A008 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return FxDriverEntryWorker(DriverObject, RegistryPath);
}
