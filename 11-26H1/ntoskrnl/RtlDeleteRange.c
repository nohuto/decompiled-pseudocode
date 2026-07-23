/*
 * XREFs of RtlDeleteRange @ 0x140B4C0E0
 * Callers:
 *     ArbBacktrackAllocation @ 0x14078AAC0 (ArbBacktrackAllocation.c)
 *     IopPortBacktrackAllocation @ 0x1407A97C0 (IopPortBacktrackAllocation.c)
 * Callees:
 *     RtlpDeleteFromMergedRange @ 0x140806600 (RtlpDeleteFromMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x140AE2D28 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlDeleteRange(__int64 **a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v7; // r11d
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  char *v15; // r8
  char *v16; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rax

  v7 = -1073741172;
  v8 = **a1;
  v9 = (__int64)(*a1 - 5);
  while ( 1 )
  {
    v10 = v8 - 40;
    v11 = v9 + 40;
    if ( a1 == (__int64 **)(v9 + 40) )
      return v7;
    v12 = *(_QWORD *)v9;
    if ( a3 < *(_QWORD *)v9 )
      return v7;
    if ( (*(_BYTE *)(v9 + 34) & 1) != 0 )
    {
      if ( a2 >= v12 && a3 <= *(_QWORD *)(v9 + 8) )
      {
        v13 = *(__int64 **)(v9 + 16);
        v14 = *v13;
        v15 = (char *)(v13 - 5);
        while ( 1 )
        {
          v16 = (char *)(v14 - 40);
          if ( (char *)v9 == v15 + 24 )
            break;
          if ( *(_QWORD *)v15 == a2 && *((_QWORD *)v15 + 1) == a3 && *((_QWORD *)v15 + 3) == a4 )
          {
            v7 = RtlpDeleteFromMergedRange(v15, (__int64 *)v9);
            if ( (v7 & 0x80000000) == 0 )
              goto LABEL_22;
            return v7;
          }
          v15 = v16;
          v14 = *((_QWORD *)v16 + 5);
        }
      }
    }
    else if ( v12 == a2 && *(_QWORD *)(v9 + 8) == a3 && *(_QWORD *)(v9 + 24) == a4 )
    {
      v18 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v19 = *(_QWORD **)(v9 + 48), *v19 != v11) )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      RtlpFreeRangeListEntry((PVOID)v9);
      v7 = 0;
LABEL_22:
      --*((_DWORD *)a1 + 5);
      ++*((_DWORD *)a1 + 6);
      return v7;
    }
    v9 = v10;
    v8 = *(_QWORD *)(v10 + 40);
  }
}
