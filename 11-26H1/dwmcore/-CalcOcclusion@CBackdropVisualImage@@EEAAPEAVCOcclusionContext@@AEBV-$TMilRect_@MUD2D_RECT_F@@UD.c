/*
 * XREFs of ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18019BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x1800906F0 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18019BD30 (-CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 */

__int64 __fastcall CBackdropVisualImage::CalcOcclusion(CBackdropVisualImage *a1, __int64 a2)
{
  if ( !*((_BYTE *)a1 + 1786) )
    return 0LL;
  CBackdropVisualImage::EnsureAncestorList(a1);
  return CCachedVisualImage::CalcOcclusion(a1, a2);
}
