/*
 * XREFs of ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x1802373D4
 * Callers:
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall AddToTightDirtyRegion(
        const struct D2D_RECT_F *a1,
        __int64 a2,
        const struct FastRegion::Internal::CRgnData **a3)
{
  double v3; // xmm2_8
  const struct tagRECT *v5; // rax
  struct D2D_RECT_F v6; // [rsp+20h] [rbp-88h] BYREF
  int v7[4]; // [rsp+30h] [rbp-78h] BYREF
  FastRegion::CRegion *v8[10]; // [rsp+40h] [rbp-68h] BYREF

  v6 = 0LL;
  if ( a2 )
    CMILMatrix::Transform2DBoundsHelper<0>(a2, a1, &v6.left);
  else
    v6 = *a1;
  v5 = (const struct tagRECT *)PixelAlign(v7, (unsigned int *)&v6, v3);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v8, v5);
  CRegion::Union(a3, v8);
  FastRegion::CRegion::FreeMemory(v8);
}
