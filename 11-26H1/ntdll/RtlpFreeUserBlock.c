/*
 * XREFs of RtlpFreeUserBlock @ 0x180003280
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180002680 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180001DD4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x180002E1C (RtlpLogHeapSubSegmentFree.c)
 *     RtlpFreeUserBlockToHeap @ 0x180002F80 (RtlpFreeUserBlockToHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x1801139F8 (RtlpLogHeapSubSegmentFreeCached.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 */

__int16 __fastcall RtlpFreeUserBlock(__int64 a1, unsigned __int8 *a2, ULONG a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r13
  volatile signed __int32 *v8; // rbx
  unsigned int v9; // edi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r8
  _DWORD *SharedData; // rcx
  __int64 v13; // r15
  PSLIST_ENTRY v14; // rax
  unsigned __int64 v15; // rax
  _DWORD *v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  ULONG v19; // ecx
  bool v20; // zf
  __int64 v21; // r15
  _SLIST_ENTRY *Next; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v28; // [rsp+30h] [rbp-88h]
  _OWORD MemoryInformation[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v30; // [rsp+58h] [rbp-60h]
  ULONG OldProtect; // [rsp+C0h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+10h] BYREF
  ULONG v33; // [rsp+D0h] [rbp+18h]
  PVOID BaseAddress; // [rsp+D8h] [rbp+20h] BYREF

  v33 = a3;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)a2;
  v8 = (volatile signed __int32 *)(a1 + 48 * (a2[16] - 5LL));
  if ( *(_WORD *)(v5 + 416) && (*(_BYTE *)(v5 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v5 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v5 + 352));
  }
  v9 = *(unsigned __int16 *)v8;
  if ( v9 <= *((_DWORD *)v8 + 5) || v9 <= *((_DWORD *)v8 + 4) >> *((_DWORD *)v8 + 6) )
  {
    v10 = 1LL << a2[16];
    if ( v10 > 0xF0000 )
      v10 = 983040LL;
    v11 = v10 + *((unsigned __int16 *)a2 + 9);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), v11);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v11, 16LL * *(unsigned __int16 *)(v6 + 36));
    RtlpInterlockedPushEntrySList(v8, a2, v11, a4);
    LOWORD(v14) = *((_WORD *)v8 + 15) + 1;
    *((_WORD *)v8 + 15) = (_WORD)v14;
  }
  else
  {
    v15 = 1LL << a2[16];
    if ( v15 > 0xF0000 )
      v15 = 983040LL;
    v16 = *(_DWORD **)(a1 + 24);
    v28 = v15 + *((unsigned __int16 *)a2 + 9);
    BaseAddress = 0LL;
    OldProtect = 0;
    RegionSize = 0LL;
    if ( a2[17] )
    {
      v17 = *((unsigned __int16 *)a2 + 9);
      v18 = 1LL << a2[16];
      v19 = 64;
      RegionSize = 4096LL;
      MemoryInformation[0] = 0LL;
      if ( v18 > 0xF0000 )
        v18 = 983040LL;
      v20 = (v16[28] & 0x40000) == 0;
      BaseAddress = &a2[v18 + v17];
      if ( v20 )
        v19 = 4;
      v33 = v19;
      MemoryInformation[1] = 0LL;
      v30 = 0LL;
      if ( !v20 )
      {
        if ( ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               v16,
               MemoryBasicInformation,
               MemoryInformation,
               0x30uLL,
               0LL) >= 0
          && (BYTE4(v30) & 0x60) != 0
          && *(_DWORD **)&MemoryInformation[0] == v16 )
        {
          v19 = v33;
        }
        else
        {
          RtlpLogHeapFailure(0, (_DWORD)v16, 1, DWORD1(v30), 0LL, 0LL);
          v19 = 4;
        }
      }
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v19, &OldProtect);
    }
    RtlFreeHeap_0(v16, 0x800000u, a2);
    v14 = (PSLIST_ENTRY)NtCurrentPeb();
    v21 = 2147353472LL;
    Next = v14[9].Next;
    if ( Next && LODWORD(Next->Next) )
    {
      v14 = (PSLIST_ENTRY)NtCurrentPeb();
      v23 = (__int64)&v14[9].Next[34].Next + 6;
    }
    else
    {
      v23 = 2147353472LL;
    }
    if ( *(_BYTE *)v23 )
    {
      v14 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v14[55].Next + 1) & 1) != 0 )
        LOWORD(v14) = RtlpLogHeapSubSegmentFree(
                        *(_QWORD *)(a1 + 24),
                        (__int64)a2,
                        v28,
                        16LL * *(unsigned __int16 *)(v6 + 36),
                        1);
    }
    _InterlockedDecrement(v8 + 4);
    if ( (_WORD)v9 )
    {
      v14 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v8);
      v24 = (__int64)v14;
      if ( v14 )
      {
        v25 = 1LL << LOBYTE(v14[1].Next);
        if ( v25 > 0xF0000 )
          v25 = 983040LL;
        v26 = v25 + WORD1(v14[1].Next);
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 72), -v26);
        RtlpFreeUserBlockToHeap(*(_DWORD **)(a1 + 24), v14);
        LODWORD(v14) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v14 )
        {
          v14 = (PSLIST_ENTRY)NtCurrentPeb();
          v21 = (__int64)&v14[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v21 )
        {
          v14 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v14[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v24, v26, 0LL);
            LOWORD(v14) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v24, v26, 0LL, 1);
          }
        }
        _InterlockedDecrement(v8 + 4);
      }
    }
  }
  return (__int16)v14;
}
