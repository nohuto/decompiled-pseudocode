/*
 * XREFs of ?GetPixelFormatInfo@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUPixelFormatInfo@@XZ @ 0x1802AF720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetPixelFormatInfo(
        __int64 a1,
        _DWORD *a2)
{
  return IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetPixelFormatInfo(a1 - 320, a2);
}
