/*
 * XREFs of std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x1802389A8
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x1802389A8 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--ComputeOverlayC.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180237EF4 (std--_Insertion_sort_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--Compu.c)
 *     std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180238250 (std--_Partition_by_median_guess_unchecked_detail--basic_iterator_COverlayContext_____COverlayCon.c)
 *     std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x180238778 (std--_Pop_heap_hole_by_index_detail--basic_iterator_COverlayContext____COverlayContext____COverl.c)
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___ @ 0x1802389A8 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____COverlayContext--ComputeOverlayC.c)
 */

signed __int64 __fastcall std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        __int64 **a1,
        __int64 **a2,
        __int64 a3,
        char a4)
{
  __int64 *v4; // rbx
  __int64 *i; // rsi
  __int64 *v10; // rsi
  __int64 v11; // r9
  __int64 *v12; // rbx
  signed __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 *v16; // rbx
  __int64 **v17; // rsi
  __int64 *v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-8h]
  __int64 *v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v21; // [rsp+78h] [rbp+38h] BYREF

  v4 = *a2;
  for ( i = *a1; ; i = *a1 )
  {
    if ( (__int64)(((char *)v4 - (char *)i) & 0xFFFFFFFFFFFFFFF8uLL) <= 256 )
    {
      v20 = v4;
      v21 = i;
      return (signed __int64)std::_Insertion_sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
                               &v18,
                               &v21,
                               &v20);
    }
    if ( a3 <= 0 )
      break;
    v20 = v4;
    v21 = i;
    std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
      (unsigned __int64 *)&v18,
      (__int64 *)&v21,
      (unsigned __int64 *)&v20);
    v10 = v18;
    LOBYTE(v11) = a4;
    v12 = v19;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(((char *)v18 - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)(((char *)*a2 - (char *)v19) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      v20 = *a2;
      v21 = v19;
      std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        &v21,
        &v20,
        a3,
        v11);
      *a2 = v10;
    }
    else
    {
      v21 = *a1;
      v20 = v18;
      std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        &v21,
        &v20,
        a3,
        v11);
      *a1 = v12;
    }
    v4 = *a2;
  }
  v14 = v4 - i;
  v15 = v14 >> 1;
  if ( v14 >> 1 > 0 )
  {
    v21 = i;
    do
    {
      v20 = (__int64 *)i[--v15];
      std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        (__int64 *)&v21,
        v15,
        v14,
        (__int64)&v20);
    }
    while ( v15 > 0 );
  }
  result = (signed __int64)*a2;
  v16 = *a1;
  if ( (__int64)(((char *)*a2 - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL) >= 16 )
  {
    v17 = (__int64 **)(result - 8);
    do
    {
      v20 = *v17;
      *v17 = (__int64 *)*v16;
      v21 = v16;
      std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____COverlayContext::ComputeOverlayConfiguration_::_11_::_lambda_1___(
        (__int64 *)&v21,
        0LL,
        ((char *)v17-- - (char *)v16) >> 3,
        (__int64)&v20);
      result = ((unsigned __int64)v17 + 8LL - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL;
    }
    while ( result >= 16 );
  }
  return result;
}
