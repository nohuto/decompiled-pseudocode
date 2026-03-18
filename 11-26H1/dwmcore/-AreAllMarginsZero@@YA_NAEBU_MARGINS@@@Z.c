/*
 * XREFs of ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1801853C0
 * Callers:
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180185338 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINT.c)
 *     ?GetAlphaMarginsRect@CWindowNode@@AEAA_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEAV2@@Z @ 0x180268354 (-GetAlphaMarginsRect@CWindowNode@@AEAA_NAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreAllMarginsZero(const struct _MARGINS *a1)
{
  return !a1->cxLeftWidth && !a1->cyTopHeight && !a1->cxRightWidth && !a1->cyBottomHeight;
}
