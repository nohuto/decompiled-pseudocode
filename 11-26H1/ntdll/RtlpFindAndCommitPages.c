/*
 * XREFs of RtlpFindAndCommitPages @ 0x180027970
 * Callers:
 *     RtlpExtendHeap @ 0x180022EF0 (RtlpExtendHeap.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800274C0 (RtlpHeapHandleError.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFindUCREntry @ 0x180029670 (RtlpFindUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180029DB0 (RtlpInsertUCRBlock.c)
 *     RtlpLogHeapCommit @ 0x1800721FC (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180072298 (RtlpLogHeapExtendEvent.c)
 *     RtlpUpdateUCRIndexRemove @ 0x1800D9E54 (RtlpUpdateUCRIndexRemove.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall RtlpFindAndCommitPages(unsigned __int64 a1, __int64 *a2)
{
  __int64 UCREntry; // rax
  __int64 *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // r15d
  bool v11; // zf
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r13
  __int64 v18; // rcx
  _QWORD *v19; // r8
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r15
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  unsigned __int64 v34; // r12
  bool v35; // cc
  bool v36; // zf
  unsigned __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  unsigned __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v53; // rax
  _OWORD v54[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v55; // [rsp+50h] [rbp-38h]
  __int64 v56; // [rsp+90h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *a2);
  v5 = (__int64 *)UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < (unsigned __int64)*a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError();
  }
  v6 = *((unsigned __int8 *)v5 - 2);
  v7 = (unsigned __int64)(v5 - 2);
  if ( (_BYTE)v6 )
    v8 = (v7 & 0xFFFFFFFFFFFF0000uLL) - (v6 << 16) + 0x10000;
  else
    v8 = a1;
  v56 = v5[4];
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    v16 = ((__int64 (__fastcall *)(unsigned __int64, __int64 *, __int64 *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
            a1,
            &v56,
            a2);
  }
  else
  {
    v9 = *a2;
    if ( v5[5] - *a2 <= (unsigned __int64)(16LL * *(_QWORD *)(a1 + 176))
      && v5[5] < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
    {
      v9 = v5[5];
    }
    v10 = 64;
    *a2 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v11 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
    v54[0] = 0LL;
    if ( v11 )
      v10 = 4;
    v54[1] = 0LL;
    v55 = 0LL;
    if ( !v11
      && ((int)ZwQueryVirtualMemory(-1LL, a1, 0LL, v54, 48LL, 0LL) < 0
       || (BYTE4(v55) & 0x60) == 0
       || *(_QWORD *)&v54[0] != a1) )
    {
      RtlpLogHeapFailure(0, a1, 1, DWORD1(v55), 0LL, 0LL);
      v10 = 4;
    }
    v12 = (__int64 *)(a1 + 376);
    v13 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    v14 = *a2;
    if ( !dword_1801C5588
      && ((v15 = *v12) != 0 || (v15 = qword_1801C6ED8, v12 = &qword_1801C6ED8, qword_1801C6ED8))
      && v13 + v14 > v15 )
    {
      v53 = v12[1];
      if ( v53 )
        RtlpLogHeapFailure(21, a1, 0, v53, v14, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664));
      v16 = -1073741523;
    }
    else
    {
      v16 = ZwAllocateVirtualMemory(-1LL, &v56, 0LL, a2, 4096, v10);
    }
    ++*(_DWORD *)(a1 + 624);
  }
  if ( v16 < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  v17 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v12, v13, v14) )
    v18 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v18 = 2147353472LL;
  if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(a1, v56, *a2, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( HIBYTE(*(_DWORD *)(v7 + 8)) != ((unsigned __int8)*(_DWORD *)(v7 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v7 + 8)) ^ HIWORD(*(_DWORD *)(v7 + 8)))) )
      RtlpAnalyzeHeapFailure(a1, (unsigned __int64)(v5 - 2));
  }
  *(_BYTE *)(v7 + 10) = 0;
  v19 = v5 + 2;
  *(_BYTE *)(v7 + 15) = 0;
  v20 = v5[2];
  v21 = (__int64 *)v5[3];
  v22 = *(_QWORD *)(v20 + 8);
  v23 = *v21;
  if ( *v21 == v22 && (_QWORD *)v23 == v19 )
  {
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v19, v22, v23, 0LL);
  }
  if ( v5[5] )
  {
    RtlpUpdateUCRIndexRemove(a1, v5);
    v24 = *v5;
    v25 = (__int64 *)v5[1];
    v22 = *(_QWORD *)(*v5 + 8);
    v26 = *v25;
    if ( *v25 == v22 && (__int64 *)v26 == v5 )
    {
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)v5, v22, v26, 0LL);
    }
  }
  --*(_DWORD *)(v8 + 84);
  *(_DWORD *)(v8 + 80) -= (unsigned __int64)v5[5] >> 12;
  *(_QWORD *)(a1 + 576) += v5[5];
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v27 = v5[5];
  if ( v27 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v27;
  v28 = *a2;
  v29 = v5[5];
  if ( v29 > *a2 || (v37 = v29 + v5[4], v37 == *(_QWORD *)(v8 + 72)) )
  {
    v30 = v28 + v5[4];
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
      v38 = *(_DWORD *)(a1 + 604) + 1;
      *(_DWORD *)(a1 + 604) = v38;
      if ( v38 > 0xA && !*(_QWORD *)(a1 + 320) )
      {
        LOBYTE(v37) = (*(_DWORD *)(a1 + 112) & 3) == 2;
        if ( ((unsigned __int8)v37 & ((RtlpDisableHeapLookaside & 1) == 0)) != 0 )
          *(_DWORD *)(a1 + 120) |= 0x10000000u;
      }
      v39 = *(_QWORD *)(v31 + 40);
      if ( v39 >= 0xFF000 )
        *(_QWORD *)(a1 + 584) += v39;
      v40 = (v32 - v7) & 0xFFFFFFFFFFFFFFF0uLL;
      goto LABEL_45;
    }
LABEL_38:
    *(_WORD *)(v32 + 12) = *(_WORD *)(a1 + 140);
    goto LABEL_39;
  }
  v40 = v28 + 16LL * *(unsigned __int16 *)(v7 + 8);
LABEL_45:
  *a2 = v40;
  *(_BYTE *)(v7 + 11) = 0;
  v41 = *(_QWORD *)(v8 + 40);
  if ( v41 == v8 )
  {
    LOBYTE(v42) = 0;
  }
  else
  {
    v42 = ((v7 - v8) >> 16) + 1;
    if ( v42 >= 0xFE )
      RtlpLogHeapFailure(3, v41, v7, v8, 0LL, 0LL);
  }
  *(_BYTE *)(v7 + 14) = v42;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v37, v41, v28, v22) )
    v46 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v46 = 2147353472LL;
  if ( *(_BYTE *)v46 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v46, v43, v44, v45) )
      v17 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v7, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v17);
  }
  v50 = 2147353482LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v46, v43, v44, v45) )
    v51 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v51 = 2147353482LL;
  if ( *(_BYTE *)v51 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v51, v47, v48, v49) )
      v50 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(a1, v7, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v50);
  }
  return v7;
}
