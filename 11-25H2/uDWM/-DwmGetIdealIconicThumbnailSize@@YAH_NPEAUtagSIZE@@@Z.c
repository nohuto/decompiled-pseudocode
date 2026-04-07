/*
 * XREFs of ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x1800543FC
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001BAFC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180058610 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmGetIdealIconicThumbnailSize(char a1, struct tagSIZE *a2)
{
  unsigned int v4; // edi
  int DpiForSystem; // eax
  int v6; // esi
  LONG v7; // eax
  int v9; // ecx
  int v10; // r10d
  LONG cy; // edx
  LONG v12; // eax
  LONG v13; // ecx
  __int128 pvParam; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  DpiForSystem = GetDpiForSystem();
  a2->cy = 200;
  a2->cx = 200;
  v6 = DpiForSystem;
  v7 = MulDiv(200, DpiForSystem, 96);
  a2->cx = v7;
  a2->cy = v7;
  pvParam = 0LL;
  if ( SystemParametersInfoW(0x30u, 0, &pvParam, 0) )
  {
    v9 = 0;
    v10 = 0;
    cy = a2->cy;
    if ( DWORD2(pvParam) - (int)pvParam >= 0 )
      v9 = DWORD2(pvParam) - pvParam;
    if ( HIDWORD(pvParam) - DWORD1(pvParam) >= 0 )
      v10 = HIDWORD(pvParam) - DWORD1(pvParam);
    if ( a2->cx * v10 >= cy * v9 )
      a2->cx = MulDiv(v9, cy, v10);
    else
      a2->cy = MulDiv(v10, a2->cx, v9);
    if ( !a1 )
    {
      v12 = MulDiv(a2->cx, 96, v6);
      v13 = a2->cy;
      a2->cx = v12;
      a2->cy = MulDiv(v13, 96, v6);
    }
    return 1;
  }
  return v4;
}
