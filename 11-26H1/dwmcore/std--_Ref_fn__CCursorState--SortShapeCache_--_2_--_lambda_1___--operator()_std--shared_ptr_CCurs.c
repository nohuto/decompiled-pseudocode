/*
 * XREFs of std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x18028F7A4
 * Callers:
 *     std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FC50 (std--_Insertion_sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorS.c)
 *     std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FE18 (std--_Med3_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState--Sort.c)
 *     std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FFB4 (std--_Partition_by_median_guess_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_f.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18029022C (std--_Pop_heap_hole_by_index_std--shared_ptr_CCursorState--ShapeData____std--shared_ptr_CCursorS.c)
 * Callees:
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x1801DBDF0 (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 *     _CCursorState::SortShapeCache_::_2_::_lambda_1_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___ @ 0x18028F7E4 (_CCursorState--SortShapeCache_--_2_--_lambda_1_--operator()_std--shared_ptr_CCursorState--ShapeD.c)
 */

__int64 __fastcall std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // r10
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(&v7, a3);
  v4 = std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v8, v3);
  return CCursorState::SortShapeCache_::_2_::_lambda_1_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___(
           v5,
           v4);
}
