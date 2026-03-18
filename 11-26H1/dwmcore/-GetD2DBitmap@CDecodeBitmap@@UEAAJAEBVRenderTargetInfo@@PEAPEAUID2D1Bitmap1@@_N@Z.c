/*
 * XREFs of ?GetD2DBitmap@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AB9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDecodeBitmap::GetD2DBitmap(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  if ( *((_BYTE *)this + 48) )
    return CRenderTargetBitmap::GetD2DBitmap(this, a2, a3, a4);
  *a3 = 0LL;
  return 2291674884LL;
}
