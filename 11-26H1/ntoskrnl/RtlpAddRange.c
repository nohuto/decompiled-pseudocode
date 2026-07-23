/*
 * XREFs of RtlpAddRange @ 0x140B124BC
 * Callers:
 *     RtlMergeRangeLists @ 0x1408061A0 (RtlMergeRangeLists.c)
 *     RtlpDeleteFromMergedRange @ 0x140806600 (RtlpDeleteFromMergedRange.c)
 *     RtlInvertRangeListEx @ 0x140B12270 (RtlInvertRangeListEx.c)
 *     RtlAddRange @ 0x140B123A0 (RtlAddRange.c)
 * Callees:
 *     RtlpAddIntersectingRanges @ 0x1408062AC (RtlpAddIntersectingRanges.c)
 */

__int64 __fastcall RtlpAddRange(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r11d
  unsigned __int64 v6; // r9
  unsigned __int64 *i; // rdx
  __int64 **v8; // rdx
  __int64 **v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rax

  *(_BYTE *)(a2 + 33) &= ~2u;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v6 = *(_QWORD *)a2;
  if ( (__int64 *)*a1 != a1 && v6 <= *(_QWORD *)(a1[1] - 32) )
  {
    for ( i = (unsigned __int64 *)(*a1 - 40); a1 != (__int64 *)(i + 5); i = (unsigned __int64 *)(i[5] - 40) )
    {
      if ( v4 < *i )
      {
        v10 = (__int64 *)i[6];
        v11 = *v10;
        *(_QWORD *)(a2 + 40) = *v10;
        *(_QWORD *)(a2 + 48) = v10;
        *(_QWORD *)(v11 + 8) = a2 + 40;
        *v10 = a2 + 40;
        return v5;
      }
      if ( *i >= v6 || i[1] >= v6 )
        return (unsigned int)RtlpAddIntersectingRanges(a1, (__int64)i, (unsigned __int64 *)a2, a3);
    }
  }
  v8 = (__int64 **)a1[1];
  v9 = (__int64 **)(a2 + 40);
  if ( *v8 != a1 )
    __fastfail(3u);
  *v9 = a1;
  *(_QWORD *)(a2 + 48) = v8;
  *v8 = (__int64 *)v9;
  a1[1] = (__int64)v9;
  return v5;
}
