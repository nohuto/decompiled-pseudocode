/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x140804F78
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140804D4C (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCatW @ 0x1404308C4 (RtlStringCbCatW.c)
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __fastcall RtlpGetDynamicTimeZoneInfoHandle(NTSTRSAFE_PCWSTR pszSrc, __int64 a2)
{
  NTSTATUS result; // eax
  wchar_t pszDest[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*pszSrc )
    return -1073741811;
  result = RtlStringCbCopyW(pszDest, 0x200uLL, L"Time Zones\\");
  if ( result >= 0 )
  {
    result = RtlStringCbCatW(pszDest, 0x200uLL, pszSrc);
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(pszDest, 0x200uLL, L"\\Dynamic DST");
      if ( result >= 0 )
        return RtlpGetRegistryHandle(3LL, pszDest, 0LL, a2);
    }
  }
  return result;
}
