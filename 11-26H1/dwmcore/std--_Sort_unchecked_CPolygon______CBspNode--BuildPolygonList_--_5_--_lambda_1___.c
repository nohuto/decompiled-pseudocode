/*
 * XREFs of std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x18026599C
 * Callers:
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x1801C7590 (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 *     std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x18026599C (std--_Sort_unchecked_CPolygon______CBspNode--BuildPolygonList_--_5_--_lambda_1___.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x180265600 (std--_Insertion_sort_unchecked_CPolygon______CBspNode--BuildPolygonList_--_5_--_lambda_1___.c)
 *     std::_Partition_by_median_guess_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x180265710 (std--_Partition_by_median_guess_unchecked_CPolygon______CBspNode--BuildPolygonList_--_5_--_lambd.c)
 *     std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x1802658C8 (std--_Pop_heap_hole_by_index_CPolygon_____CPolygon____CBspNode--BuildPolygonList_--_5_--_lambda_.c)
 *     std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x18026599C (std--_Sort_unchecked_CPolygon______CBspNode--BuildPolygonList_--_5_--_lambda_1___.c)
 */

signed __int64 __fastcall std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___(
        char *a1,
        char *a2,
        __int64 a3,
        char a4)
{
  char *v8; // rbp
  __int64 v9; // r9
  __int64 i; // rsi
  __int64 *v11; // r14
  signed __int64 result; // rax
  char *v13; // [rsp+30h] [rbp-28h] BYREF
  char *v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    if ( (a2 - a1) >> 3 <= 32 )
      return (signed __int64)std::_Insertion_sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___(
                               a1,
                               a2);
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___(
      (unsigned __int64 *)&v13,
      (unsigned __int64)a1,
      (unsigned __int64)a2);
    v8 = v14;
    LOBYTE(v9) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v13 - a1) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((a2 - v14) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___(v14, a2, a3, v9);
      a2 = v13;
    }
    else
    {
      std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___(a1, v13, a3, v9);
      a1 = v8;
    }
  }
  for ( i = (a2 - a1) >> 4;
        i > 0;
        std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____CBspNode::BuildPolygonList_::_5_::_lambda_1___(
          (__int64)a1,
          i,
          (a2 - a1) >> 3,
          &v15) )
  {
    --i;
    v15 = *(_QWORD *)&a1[8 * i];
  }
  v11 = (__int64 *)(a2 - 8);
  do
  {
    v15 = *v11;
    *v11 = *(_QWORD *)a1;
    std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____CBspNode::BuildPolygonList_::_5_::_lambda_1___(
      (__int64)a1,
      0LL,
      ((char *)v11-- - a1) >> 3,
      &v15);
    result = ((unsigned __int64)v11 + 8LL - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  while ( result >= 16 );
  return result;
}
