/*
 * XREFs of RtlDeleteOwnersRanges @ 0x140B11B70
 * Callers:
 *     ArbDeleteOwnerRanges @ 0x14078B220 (ArbDeleteOwnerRanges.c)
 *     ArbQueryConflict @ 0x14078BCA0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14078C1C0 (ArbRetestAllocation.c)
 * Callees:
 *     RtlpDeleteFromMergedRange @ 0x140806600 (RtlpDeleteFromMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x140AE2D28 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlDeleteOwnersRanges(__int64 **a1, __int64 a2)
{
  int v4; // r8d
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  char *v12; // r9
  __int64 v13; // r8
  _QWORD *v14; // rax
  char *v15; // rcx

  v4 = 0;
LABEL_2:
  v5 = **a1;
  v6 = (__int64)(*a1 - 5);
  while ( 1 )
  {
    v7 = v5 - 40;
    v8 = v6 + 40;
    if ( a1 == (__int64 **)(v6 + 40) )
      return (unsigned int)v4;
    if ( (*(_BYTE *)(v6 + 34) & 1) != 0 )
    {
      v10 = *(__int64 **)(v6 + 16);
      v11 = *v10;
      v12 = (char *)(v10 - 5);
      while ( 1 )
      {
        v15 = (char *)(v11 - 40);
        if ( (char *)v6 == v12 + 24 )
          break;
        if ( *((_QWORD *)v12 + 3) == a2 )
        {
          v4 = RtlpDeleteFromMergedRange(v12, (__int64 *)v6);
          if ( v4 < 0 )
            return (unsigned int)v4;
          --*((_DWORD *)a1 + 5);
          ++*((_DWORD *)a1 + 6);
          goto LABEL_2;
        }
        v12 = v15;
        v11 = *((_QWORD *)v15 + 5);
      }
    }
    else if ( *(_QWORD *)(v6 + 24) == a2 )
    {
      v13 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v14 = *(_QWORD **)(v6 + 48), *v14 != v8) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      RtlpFreeRangeListEntry((PVOID)v6);
      --*((_DWORD *)a1 + 5);
      ++*((_DWORD *)a1 + 6);
      v4 = 0;
    }
    v6 = v7;
    v5 = *(_QWORD *)(v7 + 40);
  }
}
