/*
 * XREFs of std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FD64
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290438 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState--Sort.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18029022C (std--_Pop_heap_hole_by_index_std--shared_ptr_CCursorState--ShapeData____std--shared_ptr_CCursorS.c)
 */

void __fastcall std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // r14d
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-10h]

  v4 = a1;
  v5 = (a2 - a1) >> 4;
  v6 = (a2 - a1) >> 5;
  if ( v6 > 0 )
  {
    v7 = (__int64 *)(a1 + 16 * v6);
    do
    {
      v7 -= 2;
      v8 = *v7;
      --v6;
      v9 = (std::_Ref_count_base *)v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
        v4,
        v6,
        v5,
        (unsigned int)&v8,
        a3);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
    }
    while ( v6 > 0 );
  }
}
