/*
 * XREFs of ?GetDisplayId@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EBA?AVDisplayId@@XZ @ 0x1802ABC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetDisplayId(
        __int64 a1,
        _DWORD *a2)
{
  return IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>::GetDisplayId(a1 - 256, a2);
}
