/*
 * XREFs of ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001A9D4
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001BAFC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::WindowDestroyed(CIconicBitmapRegistry *this, struct CWindowData *a2)
{
  *((_BYTE *)a2 + 674) &= 0xE3u;
  CIconicBitmapRegistry::RequestBitmap(this, a2, 0);
  CIconicBitmapRegistry::ClearBitmap(this, a2);
}
