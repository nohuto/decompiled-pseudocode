/*
 * XREFs of ?IsProtected@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA_NXZ @ 0x1802AF7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::IsProtected(__int64 a1)
{
  return IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::IsProtected(a1 - 320);
}
