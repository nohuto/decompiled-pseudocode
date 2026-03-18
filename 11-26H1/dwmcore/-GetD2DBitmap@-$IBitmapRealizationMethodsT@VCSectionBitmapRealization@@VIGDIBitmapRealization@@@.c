/*
 * XREFs of ?GetD2DBitmap@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AA8A0
 * Callers:
 *     ?GetD2DBitmap@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AA8B0 (-GetD2DBitmap@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapR_ea_1802AA8B0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetD2DBitmap(
        CSectionBitmapRealization *a1,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        bool a4)
{
  return CSectionBitmapRealization::GetD2DBitmap(a1, a2, a3, a4);
}
