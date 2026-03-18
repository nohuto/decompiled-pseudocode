/*
 * XREFs of ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXXZ @ 0x1800F51A0
 * Callers:
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXXZ @ 0x1800F54B0 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@.c)
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x180126B00 (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1801C7FA0 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAXXZ @ 0x1802AAA90 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmap_ea_1802AAA90.c)
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAXXZ @ 0x1802ABE10 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802AED00 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::MarkFullDirty(__int64 a1)
{
  __int64 v1; // rax
  CD2DBitmapCache *v2; // rcx
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 208);
  v2 = (CD2DBitmapCache *)(a1 - 80);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 144);
    *(_BYTE *)(v1 + 136) = 0;
    if ( v3 )
      *(_BYTE *)(v3 + 32) = 0;
  }
  CD2DBitmapCache::MarkFullInvalid(v2);
}
