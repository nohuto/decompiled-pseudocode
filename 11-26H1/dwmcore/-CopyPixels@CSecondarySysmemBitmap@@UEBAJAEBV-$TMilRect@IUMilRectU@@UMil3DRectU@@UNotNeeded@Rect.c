/*
 * XREFs of ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B2A40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800E6E4C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801A7660 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::CopyPixels(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  _DWORD *v9; // rdx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v11; // r9d
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ebx

  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((unsigned int *)(a1 + 24), a2)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v9) )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x64u, 0LL);
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 124));
    v12 = a2[1] * v11 + *a2 * (PixelFormatSize >> 3);
    v13 = CBitmap::CopyPixelsHelper(
            (enum DXGI_FORMAT)*(_DWORD *)(a1 + 124),
            a2[2] - *a2,
            a2[3] - a2[1],
            v11,
            *(_DWORD *)(a1 + 144) - v12,
            (unsigned __int8 *)(*(_QWORD *)(a1 + 136) + v12),
            a3,
            a4,
            a5);
    v14 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x74u, 0LL);
  }
  return v14;
}
