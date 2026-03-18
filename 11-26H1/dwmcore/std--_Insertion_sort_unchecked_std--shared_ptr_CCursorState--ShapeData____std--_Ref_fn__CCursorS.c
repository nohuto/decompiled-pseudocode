/*
 * XREFs of std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FC50
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290438 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState--Sort.c)
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180125C94 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x18028F7A4 (std--_Ref_fn__CCursorState--SortShapeCache_--_2_--_lambda_1___--operator()_std--shared_ptr_CCurs.c)
 */

__int64 *__fastcall std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // r14
  __int64 *v7; // rsi
  __int64 *v8; // rcx
  __int64 *v9; // r15
  __int64 *i; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 2;
    if ( a1 + 2 != a2 )
    {
      v6 = a1;
      do
      {
        v12 = *v5;
        v13 = (std::_Ref_count_base *)v6[3];
        v7 = v5;
        *v5 = 0LL;
        v6[3] = 0LL;
        if ( (unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                (__int64)&v14,
                                (__int64)&v12,
                                a1) )
        {
          if ( v5 != a1 )
          {
            do
            {
              v8 = v7;
              v7 -= 2;
              std::shared_ptr<CRegion>::operator=(v8, v7);
            }
            while ( v7 != a1 );
          }
          v7 = a1;
        }
        else
        {
          v9 = v6;
          for ( i = v6;
                (unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                   (__int64)&v14,
                                   (__int64)&v12,
                                   i);
                i = v9 )
          {
            std::shared_ptr<CRegion>::operator=(v7, v9);
            v7 = v9;
            v9 -= 2;
          }
        }
        std::shared_ptr<CRegion>::operator=(v7, &v12);
        if ( v13 )
          std::_Ref_count_base::_Decref(v13);
        v5 += 2;
        v6 += 2;
      }
      while ( v5 != a2 );
    }
  }
  return a2;
}
