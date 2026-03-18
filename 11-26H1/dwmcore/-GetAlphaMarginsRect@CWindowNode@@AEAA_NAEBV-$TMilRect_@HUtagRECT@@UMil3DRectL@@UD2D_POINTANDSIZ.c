/*
 * XREFs of ?GetAlphaMarginsRect@CWindowNode@@AEAA_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAV2@@Z @ 0x180268354
 * Callers:
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitma.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@@Z @ 0x1802048E8 (-CollectOcclusionHelper@CWindowNode@@AEAAXPEAVIBitmapResource@@V-$TMilRect_@HUtagRECT@@UMil3DRec.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800E50F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800E6948 (-IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTA.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1801853C0 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

bool __fastcall CWindowNode::GetAlphaMarginsRect(const struct _MARGINS *a1, _DWORD *a2)
{
  _OWORD *v3; // rdx
  __m128i *v4; // r8
  int *v5; // r9
  char v6; // bl
  __int64 v7; // r8
  _DWORD *v8; // r9

  v6 = 0;
  if ( !AreAllMarginsZero(a1 + 42) )
  {
    *(_OWORD *)v5 = *v3;
    CWindowNode::IntersectWithAlphaMargins(v4, v5, (__int64)v4, (__int64)v5);
    return TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(v8, a2, v7) == 0;
  }
  return v6;
}
