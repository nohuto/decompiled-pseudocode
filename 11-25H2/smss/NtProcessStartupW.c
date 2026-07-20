/*
 * XREFs of NtProcessStartupW @ 0x140001190
 * Callers:
 *     <none>
 * Callees:
 *     NtProcessStartupW_AfterSecurityCookieInitialized @ 0x1400011B0 (NtProcessStartupW_AfterSecurityCookieInitialized.c)
 *     __security_init_cookie @ 0x14000EE9C (__security_init_cookie.c)
 */

NTSTATUS __stdcall __noreturn NtProcessStartupW(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  NtProcessStartupW_AfterSecurityCookieInitialized(DriverObject);
  JUMPOUT(0x1400011A6LL);
}
