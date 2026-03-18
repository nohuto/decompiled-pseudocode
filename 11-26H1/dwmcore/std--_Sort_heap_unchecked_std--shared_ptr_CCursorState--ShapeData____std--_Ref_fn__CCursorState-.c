/*
 * XREFs of std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290354
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290438 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState--Sort.c)
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180125C94 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18029022C (std--_Pop_heap_hole_by_index_std--shared_ptr_CCursorState--ShapeData____std--shared_ptr_CCursorS.c)
 */

signed __int64 __fastcall std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  signed __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v6 = a2 - 16;
    v7 = -8LL - (_QWORD)a1;
    v8 = 16LL - (_QWORD)a1;
    do
    {
      if ( (__int64)((v8 + v6) & 0xFFFFFFFFFFFFFFF0uLL) >= 32 )
      {
        v9 = *(_QWORD *)v6;
        v10 = *(std::_Ref_count_base **)(v6 + 8);
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)(v6 + 8) = 0LL;
        std::shared_ptr<CRegion>::operator=((_QWORD *)v6, a1);
        std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
          (__int64)a1,
          0LL,
          (v6 + v7 + 8) >> 4,
          &v9,
          a3);
        if ( v10 )
          std::_Ref_count_base::_Decref(v10);
      }
      v6 -= 16LL;
      result = (v8 + v6) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    while ( result >= 32 );
  }
  return result;
}
