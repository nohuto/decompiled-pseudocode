/*
 * XREFs of RtlpPopulateListIndex @ 0x140629228
 * Callers:
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x140528FF8 (RtlpHeapHandleError.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062889C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapAddListEntry @ 0x140629000 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x14062912C (RtlpHeapRemoveListEntry.c)
 */

__int64 __fastcall RtlpPopulateListIndex(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  int v8; // ecx
  unsigned __int64 v9; // r9
  __int64 *i; // rbp
  unsigned __int64 v11; // r15
  __int64 j; // r14
  unsigned __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r15d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v6 = *(_DWORD *)(a2 + 8) + ~*(_DWORD *)(a2 + 24);
    v7 = 2 * v6;
    if ( !*(_DWORD *)(a2 + 12) )
      v7 = v6;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v7) = 0LL;
    v8 = *(_DWORD *)(a2 + 8);
    a3 = *(_QWORD *)(a2 + 40);
    v9 = (unsigned __int64)(unsigned int)(v8 + ~*(_DWORD *)(a2 + 24)) >> 5;
    result = (unsigned int)~(1 << (v8 - *(_BYTE *)(a2 + 24) - 1));
    *(_DWORD *)(a3 + 4 * v9) &= result;
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1, (unsigned __int64)(i - 2));
    }
    v11 = *((unsigned __int16 *)i - 4);
    for ( j = a2; ; j = *(_QWORD *)j )
    {
      v13 = *(unsigned int *)(j + 8);
      if ( v11 < v13 )
        break;
      if ( !*(_QWORD *)j )
      {
        LODWORD(v11) = v13 - 1;
        break;
      }
    }
    if ( *(_QWORD *)a2 )
    {
      v14 = *(_DWORD *)(a2 + 8);
      v15 = v14 - 1;
      if ( *((unsigned __int16 *)i - 4) < v14 )
        v15 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, a3, i, v15, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, j, a3, (__int64)i, v11, *((unsigned __int16 *)i - 4));
    if ( (int)RtlpBootStatHandleLock.CurrentRunTime >= 1 )
    {
      v16 = v11 - *(_DWORD *)(j + 24);
      result = *(unsigned int *)(*(_QWORD *)(j + 40) + 4 * ((unsigned __int64)v16 >> 5));
      if ( !_bittest((const int *)&result, v16 & 0x1F) )
      {
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        RtlpHeapHandleError();
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)i - 5) = *((_BYTE *)i - 8) ^ *((_BYTE *)i - 7) ^ *((_BYTE *)i - 6);
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
    }
  }
  return result;
}
