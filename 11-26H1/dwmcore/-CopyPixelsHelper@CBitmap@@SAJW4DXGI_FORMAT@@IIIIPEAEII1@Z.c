/*
 * XREFs of ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800E6E4C
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1800E34C0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B1000 (-CopyPixels@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B2A40 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rect.c)
 *     ?CopyPixels@CSysmemTexture@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802B9090 (-CopyPixels@CSysmemTexture@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x1800E79E8 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CBitmap::CopyPixelsHelper(
        enum DXGI_FORMAT a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int8 *a9)
{
  unsigned __int64 v10; // rbp
  __int64 v12; // rsi
  int v13; // eax
  unsigned int v14; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v16; // ecx
  unsigned __int8 *v18; // rbx
  unsigned __int8 *v19; // rdi
  size_t v20; // r14
  unsigned int v21; // [rsp+20h] [rbp-38h]

  v10 = a4;
  v12 = a3;
  v13 = HrCheckBufferSize(a1, a4, a2, a3, a5);
  v14 = v13;
  if ( v13 < 0 )
  {
    v21 = 62;
    goto LABEL_13;
  }
  v13 = HrCheckBufferSize(a1, a7, a2, v12, a8);
  v14 = v13;
  if ( v13 < 0 )
  {
    v21 = 69;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v21, 0LL);
    return v14;
  }
  PixelFormatSize = GetPixelFormatSize(a1);
  if ( !PixelFormatSize || a2 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v14 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x47u, 0LL);
    return v14;
  }
  v16 = (a2 * PixelFormatSize + 7) >> 3;
  if ( v16 > a7 )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x4Cu, 0LL);
    return v14;
  }
  if ( (_DWORD)v10 == a7 && a7 - v16 < PixelFormatSize >> 3 )
  {
    if ( !is_mul_ok(v10, (unsigned int)v12) )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x59u, 0LL);
      return v14;
    }
    memcpy_0(a9, Src, v10 * (unsigned int)v12);
  }
  else if ( (_DWORD)v12 )
  {
    v18 = a9;
    v19 = Src;
    v20 = v16;
    do
    {
      memcpy_0(v18, v19, v20);
      v18 += a7;
      v19 += v10;
      --v12;
    }
    while ( v12 );
  }
  return 0;
}
