/*
 * XREFs of ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AE900
 * Callers:
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z @ 0x1802AE940 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@WBAA@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXAEBVCRegion@@@Z @ 0x1800ED8D0 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x1800ED904 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::AddDirtyRegion(CD2DBitmapCache **this, const struct CRegion *a2)
{
  IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion((__int64)this, a2);
  if ( this[40] )
    CD2DBitmapCache::AddInvalidRegion(this[41], (const struct FastRegion::Internal::CRgnData **)a2);
}
