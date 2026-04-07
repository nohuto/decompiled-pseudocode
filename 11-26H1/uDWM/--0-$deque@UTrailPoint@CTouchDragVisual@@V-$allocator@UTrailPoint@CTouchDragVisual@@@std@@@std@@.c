/*
 * XREFs of ??0?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAA@XZ @ 0x1800876EC
 * Callers:
 *     ??0CTouchDragVisual@@IEAA@_K@Z @ 0x180087620 (--0CTouchDragVisual@@IEAA@_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::deque<CTouchDragVisual::TrailPoint>::deque<CTouchDragVisual::TrailPoint>(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
  v2[1] = 0LL;
  *a1 = v2;
  *v2 = a1;
  return a1;
}
