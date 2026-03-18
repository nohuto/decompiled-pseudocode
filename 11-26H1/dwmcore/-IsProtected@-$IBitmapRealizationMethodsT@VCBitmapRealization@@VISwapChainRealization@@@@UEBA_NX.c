/*
 * XREFs of ?IsProtected@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@UEBA_NXZ @ 0x1801970D0
 * Callers:
 *     ?IsProtected@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA@EBA_NXZ @ 0x1802ABD60 (-IsProtected@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA.c)
 *     ?IsProtected@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA_NXZ @ 0x1802AF7E0 (-IsProtected@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::IsProtected(__int64 a1)
{
  return (*(_DWORD *)(a1 + 160) & 2) != 0;
}
