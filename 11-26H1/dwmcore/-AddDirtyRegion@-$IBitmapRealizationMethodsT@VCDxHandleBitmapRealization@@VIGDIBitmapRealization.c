/*
 * XREFs of ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXAEBVCRegion@@@Z @ 0x1800ED8D0
 * Callers:
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAXAEBVCRegion@@@Z @ 0x1802AA800 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802AAD50 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAXAEBVCRegion@@@Z @ 0x1802AB6A0 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA.c)
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AB6C0 (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AE900 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAXAEBVCRegion@@@Z @ 0x1802AF630 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitm_ea_1802AF630.c)
 * Callees:
 *     <none>
 */

void __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion(
        __int64 a1,
        const struct CRegion *a2)
{
  __int64 v2; // rax
  CD2DBitmapCache *v3; // rcx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 208);
  v3 = (CD2DBitmapCache *)(a1 - 80);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 136) = 0;
    v4 = *(_QWORD *)(v2 + 144);
    if ( v4 )
      *(_BYTE *)(v4 + 32) = 0;
  }
  CD2DBitmapCache::AddInvalidRegion(v3, a2);
}
