/*
 * XREFs of SiLogMessage @ 0x140771464
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x1407713C4 (SyspartGetFirmwarePartition.c)
 *     SiGetFirmwareSystemPartition @ 0x1408943B0 (SiGetFirmwareSystemPartition.c)
 *     SyspartGetSystemPartition @ 0x140894628 (SyspartGetSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x140894F48 (SiGetEfiSystemDevice.c)
 *     SyspartResolveEfiEspCallback @ 0x140895530 (SyspartResolveEfiEspCallback.c)
 * Callees:
 *     RtlStringCchVPrintfW @ 0x140715980 (RtlStringCchVPrintfW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 SiLogMessage(int a1, const wchar_t *a2, ...)
{
  wchar_t pszDest[256]; // [rsp+30h] [rbp-228h] BYREF
  va_list va; // [rsp+270h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( stru_140E3E928.WaitBlockFill7[147] && a1 >= *(int *)&stru_140E3E928.Spare26 && a1 < 5 )
  {
    RtlStringCchVPrintfW(pszDest, (size_t)a2, a2, va);
    pszDest[255] = 0;
    guard_dispatch_icall_no_overrides((unsigned int)a1, (__int64)pszDest);
  }
  return 0LL;
}
