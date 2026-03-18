/*
 * XREFs of ?clear@?$vector@V?$shared_ptr@UShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@2@@std@@QEAAXXZ @ 0x1802926D0
 * Callers:
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x18018A118 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UShapeData@CCursorState@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UShapeData@CCursorState@@@std@@@0@@Z @ 0x18028F8C4 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UShapeData@CCursorState@@@std@@@std@@@std@@YAXPEAV-.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<CCursorState::ShapeData>>::clear(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
