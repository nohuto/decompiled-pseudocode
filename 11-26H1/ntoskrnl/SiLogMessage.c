/*
 * XREFs of SiLogMessage @ 0x140774464
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x1407743C4 (SyspartGetFirmwarePartition.c)
 *     SiGetFirmwareSystemPartition @ 0x14089A7B0 (SiGetFirmwareSystemPartition.c)
 *     SyspartGetSystemPartition @ 0x14089AA28 (SyspartGetSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x14089B348 (SiGetEfiSystemDevice.c)
 *     SyspartResolveEfiEspCallback @ 0x14089B930 (SyspartResolveEfiEspCallback.c)
 * Callees:
 *     RtlStringCchVPrintfW @ 0x14071A670 (RtlStringCchVPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 SiLogMessage(int a1, const wchar_t *a2, ...)
{
  wchar_t pszDest[256]; // [rsp+30h] [rbp-228h] BYREF
  va_list va; // [rsp+270h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( stru_140E3EAA8.WaitBlockFill7[147] && a1 >= SLODWORD(stru_140E3EAA8.TracingPrivate[0]) && a1 < 5 )
  {
    RtlStringCchVPrintfW(pszDest, (size_t)a2, a2, va);
    pszDest[255] = 0;
    guard_dispatch_icall_no_overrides((unsigned int)a1, (__int64)pszDest);
  }
  return 0LL;
}
