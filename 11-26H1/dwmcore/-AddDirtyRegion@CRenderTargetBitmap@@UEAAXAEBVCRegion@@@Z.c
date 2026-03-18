/*
 * XREFs of ?AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z @ 0x1801D5DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::AddDirtyRegion(
        CRenderTargetBitmap *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  CD2DBitmapCache::AddInvalidRegion((CRenderTargetBitmap *)((char *)this - 88), a2);
}
