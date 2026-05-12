/*
 * XREFs of sub_14006E934 @ 0x14006E934
 * Callers:
 *     sub_1400E05A4 @ 0x1400E05A4 (sub_1400E05A4.c)
 * Callees:
 *     sub_14006FF3C @ 0x14006FF3C (sub_14006FF3C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14006E934(__int64 a1)
{
  _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-138h] BYREF

  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  return sub_14006FF3C(a1, 64LL, "%d.%d", VersionInformation.dwMajorVersion, VersionInformation.dwMinorVersion);
}
