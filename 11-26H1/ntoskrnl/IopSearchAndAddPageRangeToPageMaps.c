/*
 * XREFs of IopSearchAndAddPageRangeToPageMaps @ 0x1404E8FD8
 * Callers:
 *     IopAddPageToPageMap @ 0x1404E8F3C (IopAddPageToPageMap.c)
 *     IopFilterAndAddPageRangeToPageMaps @ 0x1405D55E0 (IopFilterAndAddPageRangeToPageMaps.c)
 * Callees:
 *     IopAddPageRangeToPageMaps @ 0x1404E9188 (IopAddPageRangeToPageMaps.c)
 */

__int64 __fastcall IopSearchAndAddPageRangeToPageMaps(
        int a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned __int64 v6; // rbx
  int v8; // ebp
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // r11
  unsigned __int64 v13; // rsi
  _QWORD *v14; // r8
  __int64 v15; // r9
  _QWORD *i; // rax
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // r10
  __int64 result; // rax
  unsigned __int64 j; // rax
  unsigned __int64 *v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rsi

  v6 = a4;
  v8 = a2;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v11 = a4 + a5;
    do
    {
      if ( v11 <= v6 )
        break;
      v12 = 0LL;
      v13 = v10 + 8 * ((v11 - 1) >> 6);
      v14 = (_QWORD *)(v10 + 8 * (v6 >> 6));
      v15 = *v14 | ((1LL << v6) - 1);
      for ( i = v14 + 1; ; ++i )
      {
        v17 = ~v15;
        if ( v17 )
          break;
        if ( (unsigned __int64)i > v13 )
          return 0LL;
        v15 = *++v14;
      }
      _BitScanForward64((unsigned __int64 *)&v18, v17);
      v19 = (unsigned int)v18 + (((__int64)v14 - v10) >> 3 << 6);
      if ( v19 > v11 )
        break;
      for ( j = ~(v17 | ((1LL << v18) - 1)); !j; j = *v22 )
      {
        v12 += 64LL;
        v22 = v14 + 1;
        if ( (unsigned __int64)(v14 + 1) > v13 )
        {
          LODWORD(j) = 64;
          goto LABEL_16;
        }
        ++v14;
      }
      _BitScanForward64(&j, j);
LABEL_16:
      v6 = v11;
      v23 = ((__int64)v14 - v10) >> 3 << 6;
      if ( v23 + (unsigned __int64)(unsigned int)j <= v11 )
        v6 = v23 + (unsigned int)j;
      v24 = v6 - v19;
      if ( v6 == v19 )
        break;
      if ( v24 > *a3 )
      {
        IopAddPageRangeToPageMaps(a1, v8, v19, *a3, a6);
        result = 3221225507LL;
        *a3 = 0LL;
        return result;
      }
      IopAddPageRangeToPageMaps(a1, v8, v19, v6 - v19, a6);
      *a3 -= v24;
    }
    while ( v6 < v11 );
  }
  else
  {
    IopAddPageRangeToPageMaps(a1, a2, a4, a5, a6);
  }
  return 0LL;
}
