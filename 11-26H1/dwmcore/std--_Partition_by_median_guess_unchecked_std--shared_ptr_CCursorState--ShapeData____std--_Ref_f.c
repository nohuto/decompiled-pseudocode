/*
 * XREFs of std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FFB4
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290438 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState--Sort.c)
 * Callees:
 *     std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x18028F7A4 (std--_Ref_fn__CCursorState--SortShapeCache_--_2_--_lambda_1___--operator()_std--shared_ptr_CCurs.c)
 *     std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FB94 (std--_Guess_median_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorSta.c)
 */

_QWORD *std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        ...)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  _QWORD *v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // r13
  bool v13; // zf
  _QWORD *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *result; // rax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  v5 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____(
    a2,
    (__int64)v5,
    (__int64)(a3 - 2));
  v6 = v5 + 2;
  if ( a2 < (unsigned __int64)v5 )
  {
    do
    {
      v7 = v5 - 2;
      if ( (unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)(v5 - 2),
                              v5) )
        break;
      if ( (unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v5,
                              v5 - 2) )
        break;
      v5 -= 2;
    }
    while ( a2 < (unsigned __int64)v7 );
  }
  while ( v6 < a3
       && !(unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v6,
                              v5)
       && !(unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v5,
                              v6) )
    v6 += 2;
  v8 = v6;
  v9 = v5;
  while ( 1 )
  {
    while ( v8 < a3 )
    {
      if ( (unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v5,
                              v8) )
        goto LABEL_16;
      if ( (unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v8,
                              v5) )
        break;
      if ( v6 != v8 )
      {
        v10 = *v6;
        *v6 = *v8;
        *v8 = v10;
        v11 = v6[1];
        v6[1] = v8[1];
        v8[1] = v11;
      }
      v6 += 2;
LABEL_16:
      v8 += 2;
    }
    v12 = v9;
    v13 = v9 == (_QWORD *)a2;
    if ( (unsigned __int64)v9 > a2 )
    {
      v14 = v9 - 2;
      do
      {
        if ( !(unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                 (__int64)va,
                                 (__int64)v14,
                                 v5) )
        {
          if ( (unsigned __int8)std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                  (__int64)va,
                                  (__int64)v5,
                                  v14) )
            break;
          v5 -= 2;
          if ( v5 != v14 )
          {
            v15 = *v5;
            *v5 = *v14;
            *v14 = v15;
            v16 = v5[1];
            v5[1] = v14[1];
            v14[1] = v16;
          }
        }
        v9 -= 2;
        v14 -= 2;
        v12 = v9;
      }
      while ( a2 < (unsigned __int64)v9 );
      v13 = v9 == (_QWORD *)a2;
    }
    if ( v13 )
      break;
    v9 -= 2;
    if ( v8 != a3 )
    {
      v26 = *v8;
      *v8 = *(v12 - 2);
      *(v12 - 2) = v26;
      v27 = v8[1];
      v8[1] = *(v12 - 1);
      *(v12 - 1) = v27;
      goto LABEL_16;
    }
    v5 -= 2;
    v21 = v5 + 1;
    if ( v12 - 2 != v5 )
    {
      v22 = *v9;
      *v9 = *v5;
      *v5 = v22;
      v23 = v9[1];
      v9[1] = *v21;
      *v21 = v23;
    }
    v24 = *v5;
    v6 -= 2;
    *v5 = *v6;
    *v6 = v24;
    v25 = *v21;
    *v21 = v6[1];
    v6[1] = v25;
  }
  if ( v8 != a3 )
  {
    if ( v6 != v8 )
    {
      v17 = *v5;
      *v5 = *v6;
      *v6 = v17;
      v18 = v5[1];
      v5[1] = v6[1];
      v6[1] = v18;
    }
    v19 = *v5;
    v6 += 2;
    *v5 = *v8;
    *v8 = v19;
    v20 = v5[1];
    v5[1] = v8[1];
    v5 += 2;
    v8[1] = v20;
    goto LABEL_16;
  }
  result = a1;
  *a1 = v5;
  a1[1] = v6;
  return result;
}
