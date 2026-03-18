/*
 * XREFs of std::_Partition_by_median_guess_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x180265710
 * Callers:
 *     std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x18026599C (std--_Sort_unchecked_CPolygon______CBspNode--BuildPolygonList_--_5_--_lambda_1___.c)
 * Callees:
 *     std::_Guess_median_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x180265554 (std--_Guess_median_unchecked_CPolygon______CBspNode--BuildPolygonList_--_5_--_lambda_1___.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // rax
  _QWORD *v16; // r10
  bool v17; // zf
  _QWORD *v18; // rcx
  unsigned int v19; // r11d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 *result; // rax

  v6 = a2 + 8 * ((__int64)(a3 - a2) >> 4);
  std::_Guess_median_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___(a2, v6, a3 - 8);
  v7 = v6 + 8;
  if ( a2 < v6 )
  {
    v8 = *(_QWORD *)v6;
    do
    {
      v9 = *(_DWORD *)(v8 + 264);
      v10 = v6 - 8;
      v8 = *(_QWORD *)(v6 - 8);
      if ( *(_DWORD *)(v8 + 264) < v9 )
        break;
      if ( *(_DWORD *)(v8 + 264) > v9 )
        break;
      v6 -= 8LL;
    }
    while ( a2 < v10 );
  }
  if ( v7 < a3 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)v6 + 264LL);
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)v7 + 264LL) < v11 )
        break;
      if ( *(_DWORD *)(*(_QWORD *)v7 + 264LL) > v11 )
        break;
      v7 += 8LL;
    }
    while ( v7 < a3 );
  }
  v12 = v7;
  v13 = (_QWORD *)v6;
  while ( 1 )
  {
    while ( v12 < a3 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)v12 + 264LL);
      if ( *(_DWORD *)(*(_QWORD *)v6 + 264LL) < v14 )
        goto LABEL_17;
      if ( *(_DWORD *)(*(_QWORD *)v6 + 264LL) > v14 )
        break;
      if ( v7 != v12 )
      {
        v15 = *(_QWORD *)v7;
        *(_QWORD *)v7 = *(_QWORD *)v12;
        *(_QWORD *)v12 = v15;
      }
      v7 += 8LL;
LABEL_17:
      v12 += 8LL;
    }
    v16 = v13;
    v17 = v13 == (_QWORD *)a2;
    if ( (unsigned __int64)v13 > a2 )
    {
      v18 = v13 - 1;
      do
      {
        v19 = *(_DWORD *)(*(_QWORD *)v6 + 264LL);
        if ( *(_DWORD *)(*v18 + 264LL) >= v19 )
        {
          if ( *(_DWORD *)(*v18 + 264LL) > v19 )
            break;
          v6 -= 8LL;
          if ( (_QWORD *)v6 != v18 )
          {
            v20 = *(_QWORD *)v6;
            *(_QWORD *)v6 = *v18;
            *v18 = v20;
          }
        }
        --v13;
        --v18;
        v16 = v13;
      }
      while ( a2 < (unsigned __int64)v13 );
      v17 = v13 == (_QWORD *)a2;
    }
    if ( v17 )
      break;
    --v13;
    if ( v12 != a3 )
    {
      v25 = *(_QWORD *)v12;
      *(_QWORD *)v12 = *(v16 - 1);
      *(v16 - 1) = v25;
      goto LABEL_17;
    }
    v6 -= 8LL;
    if ( v16 - 1 != (_QWORD *)v6 )
    {
      v23 = *v13;
      *v13 = *(_QWORD *)v6;
      *(_QWORD *)v6 = v23;
    }
    v24 = *(_QWORD *)v6;
    v7 -= 8LL;
    *(_QWORD *)v6 = *(_QWORD *)v7;
    *(_QWORD *)v7 = v24;
  }
  if ( v12 != a3 )
  {
    if ( v7 != v12 )
    {
      v21 = *(_QWORD *)v6;
      *(_QWORD *)v6 = *(_QWORD *)v7;
      *(_QWORD *)v7 = v21;
    }
    v22 = *(_QWORD *)v6;
    v7 += 8LL;
    *(_QWORD *)v6 = *(_QWORD *)v12;
    v6 += 8LL;
    *(_QWORD *)v12 = v22;
    goto LABEL_17;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
