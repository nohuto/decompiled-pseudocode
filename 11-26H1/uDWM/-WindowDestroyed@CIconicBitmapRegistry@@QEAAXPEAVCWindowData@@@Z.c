/*
 * XREFs of ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001AA84
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::WindowDestroyed(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  *((_BYTE *)a2 + 738) &= 0xE3u;
  CIconicBitmapRegistry::RequestBitmap(this, (HWND *)a2, 0);
  CIconicBitmapRegistry::ClearBitmap(this, a2);
}
