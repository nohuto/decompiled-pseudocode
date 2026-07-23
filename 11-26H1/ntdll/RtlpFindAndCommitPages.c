/*
 * XREFs of RtlpFindAndCommitPages @ 0x180012A40
 * Callers:
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180012590 (RtlpHeapHandleError.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFindUCREntry @ 0x180014740 (RtlpFindUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180014E80 (RtlpInsertUCRBlock.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18009574C (RtlpLogHeapExtendEvent.c)
 *     RtlpUpdateUCRIndexRemove @ 0x1800D6E14 (RtlpUpdateUCRIndexRemove.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlpFindAndCommitPages(unsigned __int64 a1, PSIZE_T RegionSize)
{
  __int64 UCREntry; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  ULONG Protect; // r15d
  bool v11; // zf
  __int64 *v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  ULONG_PTR v28; // r8
  ULONG_PTR v29; // rdx
  ULONG_PTR v30; // rcx
  ULONG_PTR v31; // r15
  ULONG_PTR v32; // rdi
  __int64 v33; // rdx
  unsigned __int64 v34; // r12
  bool v35; // cc
  bool v36; // zf
  unsigned int v37; // eax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdi
  __int64 v40; // rdx
  unsigned __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v46; // rax
  _OWORD MemoryInformation[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v48; // [rsp+50h] [rbp-38h]
  PVOID BaseAddress; // [rsp+90h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *RegionSize);
  v5 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError();
  }
  v6 = *(unsigned __int8 *)(v5 - 2);
  v7 = v5 - 16;
  if ( (_BYTE)v6 )
    v8 = (v7 & 0xFFFFFFFFFFFF0000uLL) - (v6 << 16) + 0x10000;
  else
    v8 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    v15 = ((__int64 (__fastcall *)(unsigned __int64, PVOID *, PSIZE_T))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
            a1,
            &BaseAddress,
            RegionSize);
  }
  else
  {
    v9 = *RegionSize;
    if ( *(_QWORD *)(v5 + 40) - *RegionSize <= 16LL * *(_QWORD *)(a1 + 176)
      && *(_QWORD *)(v5 + 40) < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
    {
      v9 = *(_QWORD *)(v5 + 40);
    }
    Protect = 64;
    *RegionSize = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v11 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
    MemoryInformation[0] = 0LL;
    if ( v11 )
      Protect = 4;
    MemoryInformation[1] = 0LL;
    v48 = 0LL;
    if ( !v11
      && (ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID)a1,
            MemoryBasicInformation,
            MemoryInformation,
            0x30uLL,
            0LL) < 0
       || (BYTE4(v48) & 0x60) == 0
       || *(_QWORD *)&MemoryInformation[0] != a1) )
    {
      RtlpLogHeapFailure(0, a1, 1, DWORD1(v48), 0LL, 0LL);
      Protect = 4;
    }
    v12 = (__int64 *)(a1 + 376);
    v13 = *RegionSize;
    if ( !dword_1801C4588
      && ((v14 = *v12) != 0 || (v14 = qword_1801C5ED8, v12 = &qword_1801C5ED8, qword_1801C5ED8))
      && *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664) + v13 > v14 )
    {
      v46 = v12[1];
      if ( v46 )
        RtlpLogHeapFailure(21, a1, 0, v46, v13, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664));
      v15 = -1073741523;
    }
    else
    {
      v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, Protect);
    }
    ++*(_DWORD *)(a1 + 624);
  }
  if ( v15 < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  v16 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v17 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v17 = 2147353472LL;
  if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(a1, BaseAddress, *RegionSize, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( HIBYTE(*(_DWORD *)(v7 + 8)) != ((unsigned __int8)*(_DWORD *)(v7 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v7 + 8)) ^ HIWORD(*(_DWORD *)(v7 + 8)))) )
      RtlpAnalyzeHeapFailure(a1, v5 - 16);
  }
  *(_BYTE *)(v7 + 10) = 0;
  v18 = v5 + 16;
  *(_BYTE *)(v7 + 15) = 0;
  v19 = *(_QWORD *)(v5 + 16);
  v20 = *(__int64 **)(v5 + 24);
  v21 = *(_QWORD *)(v19 + 8);
  v22 = *v20;
  if ( *v20 == v21 && v22 == v18 )
  {
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v18, v21, v22, 0LL);
  }
  if ( *(_QWORD *)(v5 + 40) )
  {
    RtlpUpdateUCRIndexRemove(a1, v5);
    v23 = *(_QWORD *)v5;
    v24 = *(__int64 **)(v5 + 8);
    v25 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
    v26 = *v24;
    if ( *v24 == v25 && v26 == v5 )
    {
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, v5, v25, v26, 0LL);
    }
  }
  --*(_DWORD *)(v8 + 84);
  *(_DWORD *)(v8 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 576) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v27 = *(_QWORD *)(v5 + 40);
  if ( v27 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v27;
  v28 = *RegionSize;
  v29 = *(_QWORD *)(v5 + 40);
  if ( v29 > *RegionSize || v29 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v8 + 72) )
  {
    v30 = v28 + *(_QWORD *)(v5 + 32);
    v31 = v30 - 48;
    *(_QWORD *)(v31 + 40) = v29 - v28;
    v32 = v30 - 64;
    *(_QWORD *)(v31 + 32) = v30;
    *(_DWORD *)(v32 + 8) = 65540;
    *(_BYTE *)(v32 + 15) = 3;
    v33 = *(_QWORD *)(v8 + 40);
    if ( v33 == v8 )
    {
      LOBYTE(v34) = 0;
    }
    else
    {
      v34 = ((v32 - v8) >> 16) + 1;
      if ( v34 >= 0xFE )
        RtlpLogHeapFailure(3, v33, v30 - 64, v8, 0LL, 0LL);
    }
    v35 = RtlpHeapErrorHandlerThreshold < 1;
    *(_BYTE *)(v32 + 14) = v34;
    if ( v35 )
    {
      v36 = v7 == v32;
    }
    else
    {
      v36 = v7 == v32;
      if ( v7 > v32 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
        RtlpHeapHandleError();
        goto LABEL_38;
      }
    }
    if ( v36 )
    {
LABEL_39:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v32 + 11) = *(_BYTE *)(v32 + 8) ^ *(_BYTE *)(v32 + 9) ^ *(_BYTE *)(v32 + 10);
        *(_DWORD *)(v32 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      RtlpInsertUCRBlock(a1, v31);
      ++*(_DWORD *)(v8 + 84);
      *(_DWORD *)(v8 + 80) += *(_QWORD *)(v31 + 40) >> 12;
      *(_QWORD *)(a1 + 576) -= *(_QWORD *)(v31 + 40);
      v37 = *(_DWORD *)(a1 + 604) + 1;
      *(_DWORD *)(a1 + 604) = v37;
      if ( v37 > 0xA
        && !*(_QWORD *)(a1 + 320)
        && (*(_DWORD *)(a1 + 112) & 3) == 2
        && (RtlpDisableHeapLookaside & 1) == 0 )
      {
        *(_DWORD *)(a1 + 120) |= 0x10000000u;
      }
      v38 = *(_QWORD *)(v31 + 40);
      if ( v38 >= 0xFF000 )
        *(_QWORD *)(a1 + 584) += v38;
      v39 = (v32 - v7) & 0xFFFFFFFFFFFFFFF0uLL;
      goto LABEL_45;
    }
LABEL_38:
    *(_WORD *)(v32 + 12) = *(_WORD *)(a1 + 140);
    goto LABEL_39;
  }
  v39 = v28 + 16LL * *(unsigned __int16 *)(v7 + 8);
LABEL_45:
  *RegionSize = v39;
  *(_BYTE *)(v7 + 11) = 0;
  v40 = *(_QWORD *)(v8 + 40);
  if ( v40 == v8 )
  {
    LOBYTE(v41) = 0;
  }
  else
  {
    v41 = ((v7 - v8) >> 16) + 1;
    if ( v41 >= 0xFE )
      RtlpLogHeapFailure(3, v40, v7, v8, 0LL, 0LL);
  }
  *(_BYTE *)(v7 + 14) = v41;
  if ( RtlGetCurrentServiceSessionId() )
    v42 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v42 = 2147353472LL;
  if ( *(_BYTE *)v42 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v16 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v7, *RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v16);
  }
  v43 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v44 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v44 = 2147353482LL;
  if ( *(_BYTE *)v44 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v43 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(a1, v7, *RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v43);
  }
  return v7;
}
