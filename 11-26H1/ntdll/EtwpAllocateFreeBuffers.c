/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x18005DEF4
 * Callers:
 *     EtwpGetFreeBuffer @ 0x18005D3F0 (EtwpGetFreeBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800678D4 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int i; // esi
  unsigned __int32 v5; // eax
  _DWORD *v6; // rbx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  _DWORD *v10; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  RegionSize = *(unsigned int *)(a1 + 192);
  for ( i = 0; i < a2; ++i )
  {
    BaseAddress = 0LL;
    v5 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 208));
    if ( v5 > *(_DWORD *)(a1 + 200)
      || (BaseAddress = (PVOID)(*(_QWORD *)(a1 + 408) + RegionSize * (v5 - 1)),
          ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 208));
      return i;
    }
    v6 = BaseAddress;
    memset_thunk_772440563353939046(BaseAddress, 0, 0x48uLL);
    v6[2] = 72;
    *v6 = *(_DWORD *)(a1 + 192);
    *((_WORD *)v6 + 21) = *(_WORD *)(a1 + 20) | 0x8000;
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
    v7 = *(_QWORD **)(a1 + 224);
    v8 = (char *)BaseAddress + 56;
    if ( *v7 != a1 + 216 )
      __fastfail(3u);
    *v8 = a1 + 216;
    v8[1] = v7;
    *v7 = v8;
    v10 = BaseAddress;
    *(_QWORD *)(a1 + 224) = v8;
    v10[11] = 0;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 400));
    **(_QWORD **)(a1 + 240) = v10 + 8;
    *(_QWORD *)(a1 + 240) = v10 + 8;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  }
  return i;
}
