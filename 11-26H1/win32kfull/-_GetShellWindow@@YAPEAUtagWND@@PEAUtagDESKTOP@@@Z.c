/*
 * XREFs of ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14013D9E8
 * Callers:
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x14013D4C4 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     xxxSetDeskWallpaper @ 0x14013D534 (xxxSetDeskWallpaper.c)
 *     xxxDesktopPaintCallback @ 0x14025A350 (xxxDesktopPaintCallback.c)
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140279114 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 *     ?AltF4Callback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x14029B000 (-AltF4Callback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
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
