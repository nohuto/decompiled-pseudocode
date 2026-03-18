/*
 * XREFs of ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AB6C0
 * Callers:
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z @ 0x1802AB700 (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x180126B28 (-ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::AddDirtyRegion(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct CRegion *a2)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetOverdrawRegion((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 80));
  IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion((__int64)this, a2);
}
