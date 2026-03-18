/*
 * XREFs of std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290438
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290438 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState--Sort.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802923D8 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FC50 (std--_Insertion_sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorS.c)
 *     std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FD64 (std--_Make_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState-.c)
 *     std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FFB4 (std--_Partition_by_median_guess_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_f.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290354 (std--_Sort_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState-.c)
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290438 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState--Sort.c)
 */

__int64 *__fastcall std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
        __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-10h]

  while ( (__int64)((a2 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
  {
    if ( a3 <= 0 )
    {
      std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
        (__int64)a1,
        (__int64)a2,
        a4);
      return (__int64 *)std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
                          a1,
                          (__int64)a2,
                          a4);
    }
    std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
      &v9,
      (unsigned __int64)a1,
      a2,
      a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v9 - (char *)a1) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((a2 - (char *)v10) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
        v10,
        a2,
        a3,
        a4);
      a2 = v9;
    }
    else
    {
      std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
        a1,
        v9,
        a3,
        a4);
      a1 = v10;
    }
  }
  return std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
           a1,
           (__int64 *)a2,
           a4);
}
