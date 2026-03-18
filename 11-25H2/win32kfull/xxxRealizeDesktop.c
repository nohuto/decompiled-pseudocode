/*
 * XREFs of xxxRealizeDesktop @ 0x1402891C4
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x140243864 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxBroadcastPaletteChanged @ 0x1402BE754 (xxxBroadcastPaletteChanged.c)
 * Callees:
 *     xxxInternalPaintDesktop @ 0x14020D100 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxRealizeDesktop(__int64 a1)
{
  HDC DC; // rbx

  DC = (HDC)_GetDC(a1);
  xxxInternalPaintDesktop(a1, DC, 0);
  return _ReleaseDC(DC);
}
