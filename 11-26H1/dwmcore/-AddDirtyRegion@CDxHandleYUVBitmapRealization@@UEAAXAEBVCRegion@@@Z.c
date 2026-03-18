/*
 * XREFs of ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1801C7F90
 * Callers:
 *     ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z @ 0x1802AEF20 (-AddDirtyRegion@CDxHandleYUVBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDxHandleYUVBitmapRealization::AddDirtyRegion(
        CDxHandleYUVBitmapRealization *this,
        const struct CRegion *a2)
{
  CDxHandleYUVBitmapRealization::MarkFullDirty(this);
}
