/*
 * XREFs of RtlpCommitBlock @ 0x1800125B0
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x180103CD4 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18009574C (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

char __fastcall RtlpCommitBlock(__int64 a1, __int64 a2)
{
  char *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 *v8; // r8
  unsigned __int64 v9; // rcx
  bool v10; // zf
  ULONG Protect; // esi
  NTSTATUS v12; // esi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  char *v18; // r8
  ULONG_PTR v19; // rdx
  __int64 v21; // r9
  _OWORD MemoryInformation[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v23; // [rsp+50h] [rbp-28h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v3 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
  RegionSize = 0LL;
  BaseAddress = v3;
  if ( v3 == (char *)(a2 + 80) )
  {
    v3 += 4096;
    BaseAddress = v3;
  }
  v5 = *(unsigned __int16 *)(a2 + 8);
  v6 = 0LL;
  v7 = (a2 + 16 * (v5 - 2)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 > (unsigned __int64)v3 )
  {
    v6 = v7 - (_QWORD)v3;
    RegionSize = v7 - (_QWORD)v3;
  }
  v8 = (__int64 *)(a1 + 376);
  if ( dword_1801C4588
    || (v9 = *v8) == 0 && (v9 = qword_1801C5ED8, v8 = &qword_1801C5ED8, !qword_1801C5ED8)
    || v6 + *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664) <= v9 )
  {
    v10 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
    Protect = 64;
    if ( (*(_DWORD *)(a1 + 112) & 0x40000) == 0 )
      Protect = 4;
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    v23 = 0LL;
    if ( !v10
      && (ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID)a1,
            MemoryBasicInformation,
            MemoryInformation,
            0x30uLL,
            0LL) < 0
       || (BYTE4(v23) & 0x60) == 0
       || *(_QWORD *)&MemoryInformation[0] != a1) )
    {
      RtlpLogHeapFailure(0, a1, 1, DWORD1(v23), 0LL, 0LL);
      Protect = 4;
    }
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, Protect);
    if ( v12 < 0 )
      goto LABEL_33;
    v13 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v14 = 2147353472LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(a1, BaseAddress, RegionSize, 8LL);
    *(_QWORD *)(a1 + 664) -= RegionSize;
    --*(_DWORD *)(a1 + 660);
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v15 = 2147353472LL;
    if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(
        a1,
        (int)BaseAddress,
        RegionSize,
        16 * *(_QWORD *)(a1 + 192),
        (HANDLE)*(unsigned __int8 *)v13);
    }
    v16 = 2147353482LL;
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v17 = 2147353482LL;
    if ( *(_BYTE *)v17 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapExtendEvent(
        a1,
        (int)BaseAddress,
        RegionSize,
        16 * *(_QWORD *)(a1 + 192),
        (HANDLE)*(unsigned __int8 *)v16);
    }
    ++*(_DWORD *)(a1 + 624);
    if ( (*(_BYTE *)(a2 + 10) & 4) != 0 )
    {
      v18 = (char *)BaseAddress;
      v19 = RegionSize >> 2;
      if ( RegionSize >> 2 )
      {
        if ( ((unsigned __int8)BaseAddress & 4) == 0 )
          goto LABEL_26;
        *(_DWORD *)BaseAddress = -17891602;
        if ( --v19 )
        {
          v18 += 4;
LABEL_26:
          memset64(v18, 0xFEEEFEEEFEEEFEEEuLL, v19 >> 1);
          if ( (v19 & 1) != 0 )
            *(_DWORD *)&v18[4 * v19 - 4] = -17891602;
        }
      }
    }
    *(_BYTE *)(a2 + 10) &= 0x17u;
    return 1;
  }
  v21 = v8[1];
  if ( v21 )
    RtlpLogHeapFailure(21, a1, 0, v21, v6, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664));
  v12 = -1073741523;
LABEL_33:
  ++*(_DWORD *)(a1 + 636);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
    v12,
    (const void *)a1,
    BaseAddress,
    RegionSize);
  return 0;
}
