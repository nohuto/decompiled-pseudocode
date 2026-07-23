/*
 * XREFs of RtlpPopulateListIndex @ 0x18006C8A8
 * Callers:
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlpExtendListLookup @ 0x18006CE74 (RtlpExtendListLookup.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpHeapHandleError @ 0x180012590 (RtlpHeapHandleError.c)
 *     RtlpHeapAddListEntry @ 0x18006CAA0 (RtlpHeapAddListEntry.c)
 */

__int64 __fastcall RtlpPopulateListIndex(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  int v7; // ecx
  unsigned __int64 v8; // r8
  __int64 *i; // rsi
  unsigned __int64 v10; // r15
  __int64 j; // r14
  unsigned __int64 v12; // rcx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // r15d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v5 = *(_DWORD *)(a2 + 8) + ~*(_DWORD *)(a2 + 24);
    v6 = 2 * v5;
    if ( !*(_DWORD *)(a2 + 12) )
      v6 = v5;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v6) = 0LL;
    v7 = *(_DWORD *)(a2 + 8);
    v8 = (unsigned __int64)(unsigned int)(v7 + ~*(_DWORD *)(a2 + 24)) >> 5;
    result = (unsigned int)~(1 << (v7 - *(_BYTE *)(a2 + 24) - 1));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * v8) &= result;
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1, (unsigned __int64)(i - 2));
    }
    v10 = *((unsigned __int16 *)i - 4);
    for ( j = a2; ; j = *(_QWORD *)j )
    {
      v12 = *(unsigned int *)(j + 8);
      if ( v10 < v12 )
        break;
      if ( !*(_QWORD *)j )
      {
        LODWORD(v10) = v12 - 1;
        break;
      }
    }
    if ( *(_QWORD *)a2 )
    {
      v13 = *(_DWORD *)(a2 + 8);
      v14 = v13 - 1;
      if ( *((unsigned __int16 *)i - 4) < v13 )
        v14 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, 1, i, v14, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, j, 1, (_DWORD)i, v10, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      v15 = v10 - *(_DWORD *)(j + 24);
      result = *(unsigned int *)(*(_QWORD *)(j + 40) + 4 * ((unsigned __int64)v15 >> 5));
      if ( !_bittest((const int *)&result, v15 & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        result = RtlpHeapHandleError();
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)i - 5) = *((_BYTE *)i - 8) ^ *((_BYTE *)i - 7) ^ *((_BYTE *)i - 6);
      result = *(unsigned int *)(a1 + 136);
      *((_DWORD *)i - 2) ^= result;
    }
  }
  return result;
}
