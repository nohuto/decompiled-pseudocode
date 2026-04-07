/*
 * XREFs of ??$emplace_back@UTrailPoint@CTouchDragVisual@@@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAAEAUTrailPoint@CTouchDragVisual@@$$QEAU23@@Z @ 0x1800CC56C
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800CCBC0 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_back_internal@UTrailPoint@CTouchDragVisual@@@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAX$$QEAUTrailPoint@CTouchDragVisual@@@Z @ 0x1800CC398 (--$_Emplace_back_internal@UTrailPoint@CTouchDragVisual@@@-$deque@UTrailPoint@CTouchDragVisual@@V.c)
 */

__int64 __fastcall std::deque<CTouchDragVisual::TrailPoint>::emplace_back<CTouchDragVisual::TrailPoint>(
        _QWORD *a1,
        __int64 *a2)
{
  std::deque<CTouchDragVisual::TrailPoint>::_Emplace_back_internal<CTouchDragVisual::TrailPoint>(a1, a2);
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[4] - 1LL + a1[3])));
}
