/*
 * XREFs of IopSearchAndAddPageRangeToPageMaps @ 0x1404E2408
 * Callers:
 *     IopAddPageToPageMap @ 0x1404E236C (IopAddPageToPageMap.c)
 *     IopFilterAndAddPageRangeToPageMaps @ 0x1405D7DD0 (IopFilterAndAddPageRangeToPageMaps.c)
 * Callees:
 *     IopAddPageRangeToPageMaps @ 0x1404E25A0 (IopAddPageRangeToPageMaps.c)
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
  int v8; // esi
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r11
  _QWORD *v13; // r8
  __int64 v14; // r9
  _QWORD *i; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  __int64 result; // rax
  unsigned __int64 j; // rax
  unsigned __int64 *v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rbp

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
      v12 = v10 + 8 * ((v11 - 1) >> 6);
      v13 = (_QWORD *)(v10 + 8 * (v6 >> 6));
      v14 = *v13 | ((1LL << v6) - 1);
      for ( i = v13 + 1; ; ++i )
      {
        v16 = ~v14;
        if ( v16 )
          break;
        if ( (unsigned __int64)i > v12 )
          return 0LL;
        v14 = *++v13;
      }
      _BitScanForward64((unsigned __int64 *)&v17, v16);
      v18 = (unsigned int)v17 + (((__int64)v13 - v10) >> 3 << 6);
      if ( v18 > v11 )
        break;
      for ( j = ~(v16 | ((1LL << v17) - 1)); !j; j = *v21 )
      {
        v21 = v13 + 1;
        if ( (unsigned __int64)(v13 + 1) > v12 )
        {
          LODWORD(j) = 64;
          goto LABEL_16;
        }
        ++v13;
      }
      _BitScanForward64(&j, j);
LABEL_16:
      v6 = v11;
      v22 = ((__int64)v13 - v10) >> 3 << 6;
      if ( v22 + (unsigned __int64)(unsigned int)j <= v11 )
        v6 = v22 + (unsigned int)j;
      v23 = v6 - v18;
      if ( v6 == v18 )
        break;
      if ( v23 > *a3 )
      {
        IopAddPageRangeToPageMaps(a1, v8, v18, *a3, a6);
        result = 3221225507LL;
        *a3 = 0LL;
        return result;
      }
      IopAddPageRangeToPageMaps(a1, v8, v18, v6 - v18, a6);
      *a3 -= v23;
    }
    while ( v6 < v11 );
  }
  else
  {
    IopAddPageRangeToPageMaps(a1, a2, a4, a5, a6);
  }
  return 0LL;
}
