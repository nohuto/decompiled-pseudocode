/*
 * XREFs of ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18012EF44
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x18004A9AC (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?SetDirtyFromAccumulation@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@Z @ 0x18024AEF0 (-SetDirtyFromAccumulation@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z @ 0x1800E98E8 (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  CRedirectedGDISurface *v2; // rcx
  FastRegion::CRegion *v3; // [rsp+20h] [rbp-68h] BYREF
  int v4; // [rsp+28h] [rbp-60h] BYREF

  v4 = 0;
  v2 = (CRedirectedGDISurface *)*((_QWORD *)this + 16);
  v3 = (FastRegion::CRegion *)&v4;
  if ( (int)CRedirectedGDISurface::GetDirtyRegionFromAccum(v2, (struct CRegion *)&v3) >= 0 )
  {
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v3, *((_BYTE *)this + 153));
    *((_BYTE *)this + 153) = 0;
  }
  FastRegion::CRegion::FreeMemory(&v3);
}
