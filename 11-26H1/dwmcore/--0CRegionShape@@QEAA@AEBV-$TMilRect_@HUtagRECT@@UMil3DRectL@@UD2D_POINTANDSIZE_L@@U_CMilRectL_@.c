/*
 * XREFs of ??0CRegionShape@@QEAA@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801CEE3C
 * Callers:
 *     ?RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2AEBVCMILMatrix@@AEBVCShapePtr@@@Z @ 0x1802687D8 (-RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV-$TMi.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800E9C24 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@.c)
 */

__int64 __fastcall CRegionShape::CRegionShape(__int64 a1, const struct tagRECT *a2)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = &CRegionShape::`vftable';
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  CRegionShape::BuildFromRects(a1, a2, 1u);
  return a1;
}
