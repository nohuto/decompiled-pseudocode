/*
 * XREFs of ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14012FB38
 * Callers:
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x14012F610 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     xxxSetDeskWallpaper @ 0x14012F684 (xxxSetDeskWallpaper.c)
 *     xxxDesktopPaintCallback @ 0x140200ED0 (xxxDesktopPaintCallback.c)
 *     ?AltF4Callback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140275700 (-AltF4Callback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14028B1B8 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall _GetShellWindow(struct tagDESKTOP *a1)
{
  if ( a1 )
    return *(struct tagWND **)(*((_QWORD *)a1 + 1) + 168LL);
  else
    return 0LL;
}
