/*
 * XREFs of ??$_Uninitialized_move@PEAUtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@YAPEAUtagRECT@@QEAU1@0PEAU1@AEAV?$allocator@UtagRECT@@@0@@Z @ 0x1800B1F08
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1DF4 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfac.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@00@Z @ 0x18008D528 (--$_Copy_memmove@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchD.c)
 */

char *__fastcall std::_Uninitialized_move<tagRECT *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<CTouchDragVisual::TrailPoint * *,CTouchDragVisual::TrailPoint * *>(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL];
}
