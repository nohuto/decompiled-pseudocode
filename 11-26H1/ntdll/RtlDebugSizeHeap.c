/*
 * XREFs of RtlDebugSizeHeap @ 0x180014CCC
 * Callers:
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180014E10 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapEntry @ 0x180015970 (RtlpValidateHeapEntry.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugSizeHeap(__int64 a1, int a2, __int64 a3)
{
  char v6; // r14
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rdx

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(__int64))qword_1801C5620)(a1);
  v7 = -1LL;
  if ( (unsigned __int8)RtlpCheckHeapSignature(a1, "RtlSizeHeap") )
  {
    v8 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v8 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap(a1, 0LL);
    v9 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    if ( (unsigned __int8)RtlpValidateHeapEntry(a1, v9, "RtlSizeHeap") )
      v7 = RtlSizeHeap(a1, v8, a3);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v7;
}
