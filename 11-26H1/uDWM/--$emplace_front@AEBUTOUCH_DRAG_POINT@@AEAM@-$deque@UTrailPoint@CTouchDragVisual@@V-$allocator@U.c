/*
 * XREFs of ??$emplace_front@AEBUTOUCH_DRAG_POINT@@AEAM@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAAEAUTrailPoint@CTouchDragVisual@@AEBUTOUCH_DRAG_POINT@@AEAM@Z @ 0x1800CC5A8
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??$_Emplace_front_internal@AEAUTOUCH_DRAG_POINT@@AEAM@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAXAEAUTOUCH_DRAG_POINT@@AEAM@Z @ 0x1800CC45C (--$_Emplace_front_internal@AEAUTOUCH_DRAG_POINT@@AEAM@-$deque@UTrailPoint@CTouchDragVisual@@V-$a.c)
 */

__int64 __fastcall std::deque<CTouchDragVisual::TrailPoint>::emplace_front<TOUCH_DRAG_POINT const &,float &>(
        _QWORD *a1,
        unsigned int *a2,
        int *a3)
{
  std::deque<CTouchDragVisual::TrailPoint>::_Emplace_front_internal<TOUCH_DRAG_POINT &,float &>(a1, a2, a3);
  return *(_QWORD *)(a1[1] + 8 * (a1[3] & (a1[2] - 1LL)));
}
