/*
 * XREFs of ??1?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAA@XZ @ 0x1800878C4
 * Callers:
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008782C (--1CTouchDragVisual@@MEAA@XZ.c)
 *     _CTouchDragVisual::CTouchDragVisual_::_1_::dtor$4 @ 0x1800E8341 (_CTouchDragVisual--CTouchDragVisual_--_1_--dtor$4.c)
 * Callees:
 *     ?pop_back@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAXXZ @ 0x18008790C (-pop_back@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@std@.c)
 *     ?_Reset_map@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAXXZ @ 0x1800CCEC0 (-_Reset_map@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@st.c)
 */

void __fastcall std::deque<CTouchDragVisual::TrailPoint>::~deque<CTouchDragVisual::TrailPoint>(__int64 a1)
{
  void *v2; // rcx

  while ( *(_QWORD *)(a1 + 32) )
    std::deque<CTouchDragVisual::TrailPoint>::pop_back(a1);
  if ( *(_QWORD *)(a1 + 8) )
    std::deque<CTouchDragVisual::TrailPoint>::_Reset_map(a1);
  v2 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  std::_Deallocate<16>(v2, 0x10uLL);
}
