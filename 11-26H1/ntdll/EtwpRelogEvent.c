/*
 * XREFs of EtwpRelogEvent @ 0x18005C550
 * Callers:
 *     EtwpTraceUmEvent @ 0x18005C200 (EtwpTraceUmEvent.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     EtwpSwitchBuffer @ 0x18005CAB0 (EtwpSwitchBuffer.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall EtwpRelogEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // r12d
  int v6; // ecx
  size_t v7; // r15
  char v8; // al
  __int64 v9; // r14
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  __int64 *i; // rax
  __int64 v14; // rcx
  unsigned __int32 v15; // edx
  void *v16; // rax
  __int64 result; // rax
  PVOID v18; // rax
  PVOID Heap_0; // rax

  v4 = 0LL;
  v5 = 0;
  if ( *(_WORD *)a2 < 0x58u )
    return 87LL;
  v6 = *(_DWORD *)(a1 + 308) & 0x1000;
  if ( v6 )
    v5 = *(unsigned __int16 *)(a2 + 86);
  v7 = *(unsigned int *)(a2 + 80);
  if ( !(_DWORD)v7 )
  {
    ++*(_DWORD *)(a1 + 368);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 496) + 12LL * v5 + 4);
    return 87LL;
  }
  v8 = *(_BYTE *)(a2 + 4);
  if ( v8 != 80 || *(_QWORD *)(a1 + 504) || (unsigned int)v7 < 0x30 )
  {
    if ( v8 != 82 || v6 || *(_QWORD *)(a1 + 520) || (unsigned int)v7 < 8 || *(_BYTE *)(*(_QWORD *)(a2 + 72) + 7LL) )
      goto LABEL_7;
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, *(unsigned int *)(a2 + 80));
    *(_QWORD *)(a1 + 520) = Heap_0;
    if ( Heap_0 )
    {
      memmove(Heap_0, *(const void **)(a2 + 72), v7);
      *(_DWORD *)(a1 + 528) = v7;
      goto LABEL_7;
    }
    return 1450LL;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 72) + 7LL) )
  {
    v18 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, *(unsigned int *)(a2 + 80));
    *(_QWORD *)(a1 + 504) = v18;
    if ( v18 )
    {
      memmove(v18, *(const void **)(a2 + 72), v7);
      *(_DWORD *)(a1 + 512) = v7;
      goto LABEL_7;
    }
    return 1450LL;
  }
LABEL_7:
  v9 = *(_WORD *)(a2 + 84) & 0x7FF;
  if ( (*(_DWORD *)(a1 + 308) & 0x1000) != 0 )
    LODWORD(v9) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 488) + 8LL * v5) + 2 * v9);
  if ( (unsigned int)v7 <= *(_DWORD *)(a1 + 196) )
  {
    v10 = (v7 + 7) & 0xFFFFFFF8;
    v11 = *(_DWORD *)(a1 + 192);
    v12 = *(_DWORD *)(a1 + 188);
    if ( (unsigned int)v9 >= v12 )
      LODWORD(v9) = (unsigned int)v9 % v12;
    for ( i = (__int64 *)(a1 + 8 * ((unsigned int)v9 + 70LL)); ; i = (__int64 *)(a1 + 8 * ((unsigned int)v9 + 70LL)) )
    {
      v14 = *i;
      if ( *i )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
        if ( *(_DWORD *)(v14 + 44) == 1 && *(_DWORD *)(v14 + 8) <= v11 )
        {
          v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), v10);
          if ( v15 + v10 <= v11 )
          {
            v4 = v14;
            v16 = (void *)(v14 + v15);
            goto LABEL_18;
          }
          if ( v15 <= v11 )
            *(_DWORD *)(v14 + 4) = v15;
        }
      }
      if ( (unsigned __int8)EtwpSwitchBuffer(a1, v14, (unsigned int)v9) != 1 )
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 368));
  if ( (*(_DWORD *)(a1 + 308) & 0x10000) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 496)
                                                    + 12LL
                                                    * *(unsigned __int16 *)(*(_QWORD *)(a1 + 536)
                                                                          + 4LL * (unsigned int)v9)
                                                    + 4));
  v16 = 0LL;
LABEL_18:
  if ( v16 )
  {
    memmove(v16, *(const void **)(a2 + 72), v7);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
    return 0LL;
  }
  else if ( (unsigned int)v7 > 0xFFF8 )
  {
    return 534LL;
  }
  else
  {
    result = 8LL;
    if ( (unsigned int)v7 > *(_DWORD *)(a1 + 196) )
      return 234LL;
  }
  return result;
}
