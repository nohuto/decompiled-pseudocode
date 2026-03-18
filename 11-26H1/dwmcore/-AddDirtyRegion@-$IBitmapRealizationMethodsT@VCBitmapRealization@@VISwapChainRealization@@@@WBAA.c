/*
 * XREFs of ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAXAEBVCRegion@@@Z @ 0x1802AB6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::AddDirtyRegion(
        __int64 a1,
        const struct CRegion *a2)
{
  IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion(a1 - 256, a2);
}
