/*
 * XREFs of AdtpBuildSockAddrString @ 0x140AA9814
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     AdtpBuildMacStrings @ 0x140896214 (AdtpBuildMacStrings.c)
 *     AdtpBuildIPv4Strings @ 0x140AA98AC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140AA9A04 (AdtpBuildIPv6Strings.c)
 */

__int64 __fastcall AdtpBuildSockAddrString(__int16 *a1, UNICODE_STRING *a2, _BYTE *a3, UNICODE_STRING *a4, _BYTE *a5)
{
  unsigned int v5; // ebx
  __int16 v9; // cx

  v5 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = *a1;
  switch ( v9 )
  {
    case 2:
      return (unsigned int)AdtpBuildIPv4Strings((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (__int64)a5);
    case 23:
      return (unsigned int)AdtpBuildIPv6Strings((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (__int64)a5);
    case 33:
      return (unsigned int)AdtpBuildMacStrings((__int64)a1, (__int64)a2, a3);
  }
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(a2, L"-");
    *a3 = 0;
  }
  if ( a4 && a5 )
  {
    RtlInitUnicodeString(a4, L"-");
    *a5 = 0;
  }
  return v5;
}
