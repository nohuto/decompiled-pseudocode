/*
 * XREFs of ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802AAD50
 * Callers:
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@GBDI@EAAXAEBVCRegion@@@Z @ 0x1802AAE20 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@GBDI@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXAEBVCRegion@@@Z @ 0x1800ED8D0 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18012DEA8 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18012F7D8 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18012F968 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z @ 0x180228AC0 (-Offset@CRgnData@Internal@FastRegion@@QEAA_NHH@Z.c)
 */

void __fastcall CGDISubSectionBitmapRealization::AddDirtyRegion(
        CGDISubSectionBitmapRealization *this,
        FastRegion::CRegion **a2)
{
  FastRegion::Internal::CRgnData *v3; // [rsp+20h] [rbp-59h] BYREF
  int v4; // [rsp+28h] [rbp-51h] BYREF
  FastRegion::CRegion *v5[10]; // [rsp+70h] [rbp-9h] BYREF

  v4 = 0;
  v3 = (FastRegion::Internal::CRgnData *)&v4;
  CRegion::Copy(&v3, a2);
  CRegion::CRegion((CRegion *)v5, (CGDISubSectionBitmapRealization *)((char *)this + 336));
  CRegion::Intersect((CRegion *)&v3, (const struct CRegion *)v5);
  if ( *(_DWORD *)v3 )
  {
    FastRegion::Internal::CRgnData::Offset(v3, -*((_DWORD *)this + 84), -*((_DWORD *)this + 85));
    if ( *(_DWORD *)v3 )
      IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion(
        (__int64)this,
        (const struct CRegion *)&v3);
  }
  FastRegion::CRegion::FreeMemory(v5);
  FastRegion::CRegion::FreeMemory(&v3);
}
