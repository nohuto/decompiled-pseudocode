/*
 * XREFs of RtlpCommitBlock @ 0x1800274E0
 * Callers:
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180024F50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180028190 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180028890 (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapSegment @ 0x1800DD034 (RtlpValidateHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x180104954 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1801465B0 (RtlZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapCommit @ 0x1800721FC (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180072298 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
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
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rcx
  char *v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v34; // r9
  _OWORD v35[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v36; // [rsp+50h] [rbp-28h]
  unsigned __int64 v37; // [rsp+80h] [rbp+8h] BYREF
  char *v38; // [rsp+88h] [rbp+10h] BYREF

  v3 = (char *)((a2 + 4159) & 0xFFFFFFFFFFFFF000uLL);
  v37 = 0LL;
  v38 = v3;
  if ( v3 == (char *)(a2 + 80) )
  {
    v3 += 4096;
    v38 = v3;
  }
  v5 = *(unsigned __int16 *)(a2 + 8);
  v6 = 0LL;
  v7 = (a2 + 16 * (v5 - 2)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 > (unsigned __int64)v3 )
  {
    v6 = v7 - (_QWORD)v3;
    v37 = v7 - (_QWORD)v3;
  }
  v8 = (__int64 *)(a1 + 376);
  if ( dword_1801C5588
    || (v9 = *v8) == 0 && (v9 = qword_1801C6ED8, v8 = &qword_1801C6ED8, !qword_1801C6ED8)
    || v6 + *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664) <= v9 )
  {
    v10 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
    v11 = 64;
    if ( (*(_DWORD *)(a1 + 112) & 0x40000) == 0 )
      v11 = 4;
    memset(v35, 0, sizeof(v35));
    v36 = 0LL;
    if ( !v10
      && ((int)ZwQueryVirtualMemory(-1LL, a1, 0LL, v35, 48LL, 0LL) < 0
       || (BYTE4(v36) & 0x60) == 0
       || *(_QWORD *)&v35[0] != a1) )
    {
      RtlpLogHeapFailure(0, a1, 1, DWORD1(v36), 0LL, 0LL);
      v11 = 4;
    }
    v14 = ZwAllocateVirtualMemory(-1LL, &v38, 0LL, &v37, 4096, v11);
    if ( v14 < 0 )
      goto LABEL_33;
    v20 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v12, v15, v16) )
      v21 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v21 = 2147353472LL;
    if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(a1, v38, v37, 8LL);
    *(_QWORD *)(a1 + 664) -= v37;
    --*(_DWORD *)(a1 + 660);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v17, v18, v19) )
      v25 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v25 = 2147353472LL;
    if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v22, v23, v24) )
        v20 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapExtendEvent(a1, (_DWORD)v38, v37, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v20);
    }
    v29 = 2147353482LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v22, v23, v24) )
      v30 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v30 = 2147353482LL;
    if ( *(_BYTE *)v30 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v30, v26, v27, v28) )
        v29 = (__int64)NtCurrentPeb()->SharedData + 560;
      RtlpLogHeapExtendEvent(a1, (_DWORD)v38, v37, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v29);
    }
    ++*(_DWORD *)(a1 + 624);
    if ( (*(_BYTE *)(a2 + 10) & 4) != 0 )
    {
      v31 = v38;
      v32 = v37 >> 2;
      if ( v37 >> 2 )
      {
        if ( ((unsigned __int8)v38 & 4) == 0 )
          goto LABEL_26;
        *(_DWORD *)v38 = -17891602;
        if ( --v32 )
        {
          v31 += 4;
LABEL_26:
          memset64(v31, 0xFEEEFEEEFEEEFEEEuLL, v32 >> 1);
          if ( (v32 & 1) != 0 )
            *(_DWORD *)&v31[4 * v32 - 4] = -17891602;
        }
      }
    }
    *(_BYTE *)(a2 + 10) &= 0x17u;
    return 1;
  }
  v34 = v8[1];
  if ( v34 )
    RtlpLogHeapFailure(21, a1, 0, v34, v6, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664));
  v14 = -1073741523;
LABEL_33:
  ++*(_DWORD *)(a1 + 636);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v14, (const void *)a1, v38, v37);
  return 0;
}
