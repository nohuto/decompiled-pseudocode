/*
 * XREFs of ?GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z @ 0x14013D70C
 * Callers:
 *     xxxSetDeskWallpaper @ 0x14013D534 (xxxSetDeskWallpaper.c)
 * Callees:
 *     LoadWallpaperFilenameFromRegistry @ 0x14013DA04 (LoadWallpaperFilenameFromRegistry.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall GetCurrentWallpaperSettings(struct _UNICODE_STRING *a1, struct tagWALLPAPERSETTINGS *a2)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax

  *(_DWORD *)a2 = 1;
  v3 = (unsigned __int16 *)((char *)a2 + 4);
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 62784) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    RtlStringCchCopyW(v3, 0x100uLL, (const unsigned __int16 *)(*(_QWORD *)(UserSessionState + 62784) + 4LL));
  }
  else
  {
    LoadWallpaperFilenameFromRegistry(a1, v3, 256LL);
  }
}
