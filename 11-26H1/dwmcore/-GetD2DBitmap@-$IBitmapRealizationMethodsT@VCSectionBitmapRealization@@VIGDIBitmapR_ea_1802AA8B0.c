/*
 * XREFs of ?GetD2DBitmap@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AA8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetD2DBitmap(
        __int64 a1,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  return IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetD2DBitmap(
           (CSectionBitmapRealization *)(a1 - 312),
           a2,
           a3,
           a4);
}
