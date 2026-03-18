/*
 * XREFs of ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E4068
 * Callers:
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800E3B78 (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800E3CE0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?Update@CSecondaryCrossAdapterDirectBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802B03E0 (-Update@CSecondaryCrossAdapterDirectBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNee.c)
 *     ?Update@CSecondaryCrossAdapterIndirectBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802B05F0 (-Update@CSecondaryCrossAdapterIndirectBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotN.c)
 * Callees:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CSecondaryBitmap::AddValidRect(__int64 a1, int *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // r9d
  int v5; // r10d
  FastRegion::CRegion *v6; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v7[18]; // [rsp+28h] [rbp-58h] BYREF

  v2 = *a2;
  v3 = a2[2];
  v4 = a2[1];
  v5 = a2[3];
  v6 = (FastRegion::CRegion *)v7;
  if ( v2 >= v3 || v4 >= v5 )
  {
    v7[0] = 0;
  }
  else
  {
    v7[0] = 2;
    v7[4] = 16;
    v7[6] = 16;
    v7[1] = v2;
    v7[2] = v3;
    v7[3] = v4;
    v7[7] = v2;
    v7[8] = v3;
    v7[5] = v5;
  }
  CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)(a1 + 16), &v6);
  FastRegion::CRegion::FreeMemory(&v6);
}
