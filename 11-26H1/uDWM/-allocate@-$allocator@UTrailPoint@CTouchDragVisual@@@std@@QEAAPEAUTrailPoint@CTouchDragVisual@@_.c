/*
 * XREFs of ?allocate@?$allocator@UTrailPoint@CTouchDragVisual@@@std@@QEAAPEAUTrailPoint@CTouchDragVisual@@_K@Z @ 0x1800CCF48
 * Callers:
 *     ??$_Emplace_back_internal@UTrailPoint@CTouchDragVisual@@@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAX$$QEAUTrailPoint@CTouchDragVisual@@@Z @ 0x1800CC398 (--$_Emplace_back_internal@UTrailPoint@CTouchDragVisual@@@-$deque@UTrailPoint@CTouchDragVisual@@V.c)
 *     ??$_Emplace_front_internal@AEAUTOUCH_DRAG_POINT@@AEAM@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAXAEAUTOUCH_DRAG_POINT@@AEAM@Z @ 0x1800CC45C (--$_Emplace_front_internal@AEAUTOUCH_DRAG_POINT@@AEAM@-$deque@UTrailPoint@CTouchDragVisual@@V-$a.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x180087240 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 */

void *std::allocator<CTouchDragVisual::TrailPoint>::allocate()
{
  unsigned __int64 size_of; // rax

  size_of = std::_Get_size_of_n<32>(1uLL);
  return std::_Allocate<16,std::_Default_allocate_traits>(size_of);
}
