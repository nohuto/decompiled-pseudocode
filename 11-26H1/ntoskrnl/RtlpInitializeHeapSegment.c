/*
 * XREFs of RtlpInitializeHeapSegment @ 0x14061FCFC
 * Callers:
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     RtlpExtendHeap @ 0x14061F278 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x140479020 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpCreateUCREntry @ 0x14061EB90 (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x14061FFC8 (RtlpInsertFreeBlock.c)
 *     ZwAllocateVirtualMemory @ 0x1407282C0 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v12; // r14
  char *v13; // r8
  signed __int64 v14; // r14
  int v15; // r9d
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // rax
  _BYTE *v20; // rdi
  _BYTE *v21; // r15
  __int64 v22; // r12
  __int64 v23; // rcx
  ULONG_PTR v24; // rdx
  unsigned __int64 v25; // r14
  __int64 v27; // r8
  __int64 *v28; // rsi
  __int64 *v29; // rax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-38h] BYREF

  v8 = a8;
  RegionSize[0] = 0LL;
  v10 = a8 - a6;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v12 = a3 + 15;
  v13 = BaseAddress;
  v14 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  a8 = v10 / 4096;
  v15 = v10 / 4096;
  v16 = v14 + a2;
  v17 = v14 + a2 + 80;
  if ( v17 >= (unsigned __int64)BaseAddress )
  {
    if ( v17 < v8 )
    {
      v18 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      RegionSize[0] = (v16 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(RegionSize[0], v18, a1, (unsigned __int8 *)(a1 + 376))
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&BaseAddress, 0LL, RegionSize, 0x1000u, 4u) >= 0 )
      {
        v13 = &BaseAddress[RegionSize[0]];
        v15 = a8;
        BaseAddress += RegionSize[0];
        goto LABEL_7;
      }
      ++*(_DWORD *)(a1 + 632);
    }
    return 0;
  }
LABEL_7:
  *(_BYTE *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v19 = (__int64)(v8 - (_QWORD)v13);
  v20 = (_BYTE *)(a2 + 8);
  *(_WORD *)(a2 + 8) = v14 >> 4;
  v21 = (_BYTE *)(a2 + 11);
  *(_BYTE *)(a2 + 11) = 0;
  v22 = v19 / 4096;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v16;
  *(_DWORD *)(a2 + 56) = v15;
  *(_DWORD *)(a2 + 80) = 0;
  v23 = (unsigned int)(v15 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v23;
  *(_QWORD *)(a1 + 576) += v23;
  *(_QWORD *)(a1 + 568) += v23;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v16 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 8);
  v24 = *(_QWORD *)(a2 + 40);
  if ( v24 == a2 )
  {
    LOBYTE(v25) = 0;
  }
  else
  {
    v25 = ((unsigned __int64)v14 >> 16) + 1;
    if ( v25 >= 0xFE )
    {
      RtlpLogHeapFailure(3u, v24, v16, (struct _KLOCK_ENTRIES *)a2, 0LL, 0LL);
      v13 = BaseAddress;
      v20 = (_BYTE *)(a2 + 8);
      v21 = (_BYTE *)(a2 + 11);
    }
  }
  *(_BYTE *)(v16 + 14) = v25;
  RtlpCreateUCREntry(a1, a2, (__int64)(v13 - 48), (unsigned int)((_DWORD)v22 << 12), v16, (__int64 *)RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *v21 = *v20 ^ v20[1] ^ v20[2];
    *(_DWORD *)v20 ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize[0] )
    RtlpInsertFreeBlock(a1, v16, RegionSize[0]);
  v27 = a1 + 288;
  v28 = (__int64 *)(a2 + 24);
  v29 = *(__int64 **)(a1 + 296);
  if ( *v29 == a1 + 288 )
  {
    *v28 = v27;
    v28[1] = (__int64)v29;
    *v29 = (__int64)v28;
    *(_QWORD *)(a1 + 296) = v28;
  }
  else
  {
    RtlpLogHeapFailure(0xDu, 0LL, v27, 0LL, *v29, 0LL);
  }
  ++*(_DWORD *)(a1 + 600);
  return 1;
}
