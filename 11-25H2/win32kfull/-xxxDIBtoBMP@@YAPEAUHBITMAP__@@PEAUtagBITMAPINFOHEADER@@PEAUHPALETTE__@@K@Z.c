/*
 * XREFs of ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402B3CB4
 * Callers:
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B3E88 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x14007C0C0 (GreCreateCompatibleBitmapEx.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015E270 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreGetBitmapBitsSize @ 0x140164C9C (GreGetBitmapBitsSize.c)
 *     _SelectPalette @ 0x14018BD50 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1401E0060 (xxxRealizePalette.c)
 *     GreSetDIBits @ 0x140313160 (GreSetDIBits.c)
 */

HBITMAP __fastcall xxxDIBtoBMP(struct tagBITMAPINFO *a1, __int64 a2, unsigned int a3)
{
  DWORD biSize; // edi
  unsigned int BitmapBitsSize; // eax
  __int64 v8; // rdx
  __int64 v9; // r11
  __int64 v10; // rcx
  unsigned int biWidth_low; // r15d
  unsigned int biWidth_high; // ebp
  WORD biHeight_high; // r14
  char *v14; // r12
  HBITMAP v15; // rsi
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  HDC CompatibleDC; // rdi
  HBITMAP Bitmap; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r15

  biSize = a1->bmiHeader.biSize;
  if ( !(unsigned int)GreGetBitmapSizeInternal(a1, 0, a1->bmiHeader.biSize) )
    return 0LL;
  BitmapBitsSize = GreGetBitmapBitsSize((__int64)a1);
  if ( !BitmapBitsSize )
    return 0LL;
  v10 = BitmapBitsSize + (unsigned int)v9;
  if ( (unsigned int)v10 < BitmapBitsSize || a3 < (unsigned int)v10 )
    return 0LL;
  if ( biSize != 40 )
  {
    if ( biSize == 12 )
    {
      biWidth_low = LOWORD(a1->bmiHeader.biWidth);
      biWidth_high = HIWORD(a1->bmiHeader.biWidth);
      biHeight_high = HIWORD(a1->bmiHeader.biHeight);
      goto LABEL_9;
    }
    return 0LL;
  }
  biWidth_low = a1->bmiHeader.biWidth;
  biWidth_high = a1->bmiHeader.biHeight;
  biHeight_high = a1->bmiHeader.biBitCount;
LABEL_9:
  v14 = (char *)a1 + v9;
  v15 = 0LL;
  UserSessionState = W32GetUserSessionState(v10, v8);
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
  if ( CompatibleDC )
  {
    if ( biHeight_high == 1 )
    {
      Bitmap = (HBITMAP)GreCreateBitmap(biWidth_low, biWidth_high, 1LL, 1LL);
    }
    else
    {
      v21 = W32GetUserSessionState(v18, v17);
      Bitmap = GreCreateCompatibleBitmapEx(
                 *(HDC *)(*(_QWORD *)(v21 + 56968) + 64LL),
                 biWidth_low,
                 biWidth_high,
                 0,
                 0LL,
                 0LL);
    }
    v15 = Bitmap;
    if ( Bitmap )
    {
      v22 = 0LL;
      v23 = GreSelectBitmap(CompatibleDC, Bitmap);
      if ( a2 )
      {
        v22 = SelectPalette((__int64)CompatibleDC, a2, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSetDIBits(CompatibleDC, (__int64)v14, a1);
      if ( v22 )
      {
        SelectPalette((__int64)CompatibleDC, v22, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSelectBitmap(CompatibleDC, v23);
    }
    GreDeleteDC(CompatibleDC);
  }
  return v15;
}
