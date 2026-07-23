/*
 * XREFs of RtlpCopyRangeListEntry @ 0x140AE2B30
 * Callers:
 *     RtlMergeRangeLists @ 0x1408061A0 (RtlMergeRangeLists.c)
 *     RtlpAddIntersectingRanges @ 0x1408062AC (RtlpAddIntersectingRanges.c)
 *     RtlCopyRangeList @ 0x140AE2A90 (RtlCopyRangeList.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     RtlpDeleteRangeListEntry @ 0x140AE2CC8 (RtlpDeleteRangeListEntry.c)
 */

char *__fastcall RtlpCopyRangeListEntry(__int64 a1)
{
  char *v2; // rax
  char *v3; // rdi
  char *v4; // rbx
  __int64 i; // rsi
  __int64 v7; // rsi
  _OWORD *v8; // rax
  _OWORD *v9; // rdx
  char **v10; // rax
  char *v11; // rdx

  v2 = (char *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&PspTlsContext.StackBase);
  v3 = v2;
  if ( v2 )
  {
    v4 = v2 + 16;
    *(_OWORD *)v2 = *(_OWORD *)a1;
    *((_OWORD *)v2 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v2 + 2) = *(_OWORD *)(a1 + 32);
    *((_QWORD *)v2 + 6) = *(_QWORD *)(a1 + 48);
    if ( (v2[33] & 0x10) != 0 )
      ++**(_DWORD **)v4;
    if ( (*(_BYTE *)(a1 + 34) & 1) != 0 )
    {
      *((_QWORD *)v2 + 3) = v2 + 16;
      *(_QWORD *)v4 = v4;
      for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v7 + 40) )
      {
        v7 = i - 40;
        if ( a1 == v7 + 24 )
          break;
        v8 = ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&PspTlsContext.StackBase);
        v9 = v8;
        if ( !v8 )
        {
          RtlpDeleteRangeListEntry(v3);
          return 0LL;
        }
        *v8 = *(_OWORD *)v7;
        v8[1] = *(_OWORD *)(v7 + 16);
        v8[2] = *(_OWORD *)(v7 + 32);
        *((_QWORD *)v8 + 6) = *(_QWORD *)(v7 + 48);
        if ( (*((_BYTE *)v8 + 33) & 0x10) != 0 )
          ++**((_DWORD **)v8 + 2);
        v10 = (char **)*((_QWORD *)v4 + 1);
        v11 = (char *)v9 + 40;
        if ( *v10 != v4 )
          __fastfail(3u);
        *(_QWORD *)v11 = v4;
        *((_QWORD *)v11 + 1) = v10;
        *v10 = v11;
        *((_QWORD *)v4 + 1) = v11;
      }
    }
  }
  return v3;
}
