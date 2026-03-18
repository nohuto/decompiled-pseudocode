/*
 * XREFs of std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x1802658C8
 * Callers:
 *     std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x18026599C (std--_Sort_unchecked_CPolygon______CBspNode--BuildPolygonList_--_5_--_lambda_1___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____CBspNode::BuildPolygonList_::_5_::_lambda_1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 i; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 result; // rax

  v5 = (a3 - 1) >> 1;
  v6 = a2;
  for ( i = a2; i < v5; v6 = i )
  {
    i = 2 * i
      + 2LL
      - (*(_DWORD *)(*(_QWORD *)(a1 + 16 * i + 16) + 264LL) < *(_DWORD *)(*(_QWORD *)(a1 + 16 * i + 8) + 264LL));
    *(_QWORD *)(a1 + 8 * v6) = *(_QWORD *)(a1 + 8 * i);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 8 * v6) = *(_QWORD *)(a1 + 8 * a3 - 8);
    v6 = a3 - 1;
  }
  v9 = (v6 - 1) >> 1;
  if ( a2 < v6 )
  {
    v10 = *a4;
    do
    {
      v11 = *(_QWORD *)(a1 + 8 * v9);
      if ( *(_DWORD *)(v11 + 264) >= *(_DWORD *)(v10 + 264) )
        break;
      *(_QWORD *)(a1 + 8 * v6) = v11;
      v6 = v9;
      v9 = (v9 - 1) >> 1;
    }
    while ( a2 < v6 );
  }
  result = *a4;
  *(_QWORD *)(a1 + 8 * v6) = *a4;
  return result;
}
