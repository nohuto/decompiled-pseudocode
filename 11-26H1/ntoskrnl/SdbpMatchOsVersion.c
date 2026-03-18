/*
 * XREFs of SdbpMatchOsVersion @ 0x140A92A84
 * Callers:
 *     SdbpCheckForMatch @ 0x140A92960 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SdbReadQWORDTag @ 0x140885B50 (SdbReadQWORDTag.c)
 *     SdbpCheckFromVersion @ 0x1408875A0 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x140887710 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x140887758 (SdbpCheckVersion.c)
 *     SdbFindFirstTag @ 0x1409E8510 (SdbFindFirstTag.c)
 *     RtlGetVersion @ 0x140A92BE0 (RtlGetVersion.c)
 */

_BOOL8 __fastcall SdbpMatchOsVersion(__int64 a1, unsigned int a2)
{
  BOOL v4; // ebx
  unsigned __int64 v5; // rsi
  unsigned int FirstTag; // eax
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned __int64 QWORDTag; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-148h] BYREF

  v4 = 1;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  v5 = (VersionInformation.dwBuildNumber | ((VersionInformation.dwMinorVersion | ((unsigned __int64)VersionInformation.dwMajorVersion << 16)) << 16)) << 16;
  FirstTag = SdbFindFirstTag(a1, a2, 20509);
  if ( FirstTag )
  {
    QWORDTag = SdbReadQWORDTag(a1, FirstTag, 0LL, v7);
    v4 = SdbpCheckVersion(QWORDTag, v5) != 0;
  }
  v8 = SdbFindFirstTag(a1, a2, 20511);
  if ( v8 )
  {
    v14 = SdbReadQWORDTag(a1, v8, 0LL, v9);
    v4 = v4 && SdbpCheckFromVersion(v14, v5);
  }
  v10 = SdbFindFirstTag(a1, a2, 20510);
  if ( v10 )
  {
    v15 = SdbReadQWORDTag(a1, v10, 0LL, v11);
    return v4 && SdbpCheckUptoVersion(v15, v5);
  }
  return v4;
}
