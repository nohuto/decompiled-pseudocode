/*
 * XREFs of LoadWallpaperFilenameFromRegistry @ 0x14012FB54
 * Callers:
 *     xxxSetDeskWallpaper @ 0x14012F684 (xxxSetDeskWallpaper.c)
 *     ?GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z @ 0x14012F85C (-GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1402B75AC (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall LoadWallpaperFilenameFromRegistry(__int64 a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned __int16 v7[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+50h] [rbp-98h]
  __int64 v9; // [rsp+60h] [rbp-88h]
  wchar_t Str2[40]; // [rsp+70h] [rbp-78h] BYREF

  v9 = 0LL;
  *(_OWORD *)v7 = 0LL;
  v8 = 0LL;
  memset_0(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82LL, v7, 20LL);
  if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 67LL, v7, a2, a3, 8) )
    RtlStringCchCopyW(a2, a3, v7);
  RtlLoadStringOrError(71LL, Str2, 40LL);
  if ( !_wcsicmp(a2, Str2) )
    GetDefaultWallpaperName(a2, a3);
  return 1LL;
}
