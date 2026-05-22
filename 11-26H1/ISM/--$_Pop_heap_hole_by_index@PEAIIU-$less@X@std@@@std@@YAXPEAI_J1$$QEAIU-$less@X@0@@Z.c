/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAIIU?$less@X@std@@@std@@YAXPEAI_J1$$QEAIU?$less@X@0@@Z @ 0x1800F9FC4
 * Callers:
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800FA04C (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<unsigned int *,unsigned int,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 result; // rax

  v4 = a2;
  v5 = (a3 - 1) >> 1;
  while ( 1 )
  {
    v6 = a2;
    if ( a2 >= v5 )
      break;
    a2 = 2LL - (*(_DWORD *)(a1 + 8 * a2 + 8) < *(_DWORD *)(a1 + 8 * a2 + 4)) + 2 * a2;
    *(_DWORD *)(a1 + 4 * v6) = *(_DWORD *)(a1 + 4 * a2);
  }
  if ( a2 == v5 && (a3 & 1) == 0 )
  {
    v6 = a3 - 1;
    *(_DWORD *)(a1 + 4 * a2) = *(_DWORD *)(a1 + 4 * a3 - 4);
  }
  if ( v4 < v6 )
  {
    do
    {
      v7 = (v6 - 1) >> 1;
      v8 = *(_DWORD *)(a1 + 4 * v7);
      if ( v8 >= *a4 )
        break;
      *(_DWORD *)(a1 + 4 * v6) = v8;
      v6 = (v6 - 1) >> 1;
    }
    while ( v4 < v7 );
  }
  result = *a4;
  *(_DWORD *)(a1 + 4 * v6) = result;
  return result;
}
