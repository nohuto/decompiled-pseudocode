/*
 * XREFs of RtlInvertRangeListEx @ 0x140B12270
 * Callers:
 *     ArbInitializeRangeList @ 0x14078B8F0 (ArbInitializeRangeList.c)
 *     RtlInvertRangeList @ 0x140B12240 (RtlInvertRangeList.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x140AE2D28 (RtlpFreeRangeListEntry.c)
 *     RtlAddRange @ 0x140B123A0 (RtlAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x140B1244C (RtlpCreateRangeListEntry.c)
 *     RtlpAddRange @ 0x140B124BC (RtlpAddRange.c)
 */

__int64 __fastcall RtlInvertRangeListEx(__int64 a1, unsigned __int64 *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned __int64 v10; // rdx
  __int64 RangeListEntry; // rax
  void *v12; // rbp
  int v13; // esi
  __int64 result; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 *v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rdx

  v6 = 0;
  v7 = a4;
  v10 = 0LL;
  if ( *((_DWORD *)a2 + 5) )
  {
    v15 = *a2;
    while ( 1 )
    {
      v16 = (unsigned __int64 *)(v15 - 40);
      if ( a2 == v16 + 5 )
        break;
      if ( *v16 > v10 )
      {
        LOBYTE(a4) = a3;
        result = RtlAddRange(a1, v10, (unsigned int)*v16 - 1, a4, 0, v7, a5);
        if ( (int)result < 0 )
          return result;
      }
      v18 = v16[1];
      v15 = v16[5];
      v10 = v18 + 1;
    }
    if ( v10 )
    {
      LOBYTE(a4) = a3;
      v17 = RtlAddRange(a1, v10, -1, a4, 0, v7, a5);
      if ( v17 < 0 )
        return (unsigned int)v17;
      return v6;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    RangeListEntry = RtlpCreateRangeListEntry(0, -1, a3, a4, a5);
    v12 = (void *)RangeListEntry;
    if ( RangeListEntry )
    {
      v13 = RtlpAddRange(a1, RangeListEntry, 0LL);
      if ( v13 < 0 )
      {
        RtlpFreeRangeListEntry(v12);
      }
      else
      {
        ++*(_DWORD *)(a1 + 20);
        ++*(_DWORD *)(a1 + 24);
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return (unsigned int)v13;
  }
}
