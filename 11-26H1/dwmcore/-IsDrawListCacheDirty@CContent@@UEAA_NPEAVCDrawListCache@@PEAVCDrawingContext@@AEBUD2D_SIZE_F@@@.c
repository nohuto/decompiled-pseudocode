/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180261E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        __m128 *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4)
{
  return CDrawListCache::IsDirty(a2, a3);
}
