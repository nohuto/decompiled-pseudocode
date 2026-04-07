/*
 * XREFs of ?_Reset_map@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAXXZ @ 0x1800CCEC0
 * Callers:
 *     ??1?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAA@XZ @ 0x1800878C4 (--1-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<CTouchDragVisual::TrailPoint>::_Reset_map(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdi
  void **v4; // rbx
  void *v5; // rcx
  _QWORD *v6; // rdi

  v1 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (void **)(a1 + 8);
  if ( v3 <= 0 )
  {
    v6 = (_QWORD *)(a1 + 16);
  }
  else
  {
    do
    {
      --v3;
      v5 = (void *)*((_QWORD *)*v4 + v3);
      if ( v5 )
        std::_Deallocate<16>(v5, 0x20uLL);
    }
    while ( v3 > 0 );
    v6 = (_QWORD *)(a1 + 16);
  }
  std::_Deallocate<16>(*v4, 8LL * *v1);
  *v4 = 0LL;
  *v6 = 0LL;
}
