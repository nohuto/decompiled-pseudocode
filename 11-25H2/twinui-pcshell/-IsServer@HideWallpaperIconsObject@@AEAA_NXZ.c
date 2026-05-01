/*
 * XREFs of ?IsServer@HideWallpaperIconsObject@@AEAA_NXZ @ 0x18065D6A4
 * Callers:
 *     ?RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ @ 0x18065D74C (-RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     GetVersionExW_0 @ 0x1802D48B7 (GetVersionExW_0.c)
 */

char __fastcall HideWallpaperIconsObject::IsServer(HideWallpaperIconsObject *this)
{
  char v1; // bl
  unsigned int v3[4]; // [rsp+20h] [rbp-148h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-138h] BYREF
  char v5; // [rsp+14Ah] [rbp-1Eh]

  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( !GetVersionExW_0(&VersionInformation) )
    return 0;
  v1 = 1;
  if ( (unsigned __int8)(v5 - 2) > 1u )
    return 0;
  v3[0] = 0;
  if ( SHRegGetDWORD(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Server",
         L"ClientExperienceEnabled",
         v3) >= 0 )
  {
    if ( v3[0] )
      return 0;
  }
  return v1;
}
