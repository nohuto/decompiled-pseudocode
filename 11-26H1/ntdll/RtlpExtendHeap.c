/*
 * XREFs of RtlpExtendHeap @ 0x180022EF0
 * Callers:
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpCoalesceFreeBlocks @ 0x180024F50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpInsertFreeBlock @ 0x180026CC0 (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180027970 (RtlpFindAndCommitPages.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapCommit @ 0x1800721FC (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180072298 (RtlpLogHeapExtendEvent.c)
 *     RtlpInitializeHeapSegment @ 0x18007BEF8 (RtlpInitializeHeapSegment.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x18007F750 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800CC620 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCoalesceHeap @ 0x180104954 (RtlpCoalesceHeap.c)
 *     RtlpHeapLogRangeReserve @ 0x180114314 (RtlpHeapLogRangeReserve.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  int HeapProtection; // r15d
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD v34[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp+38h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v37; // [rsp+A8h] [rbp+48h] BYREF

  v37 = 0LL;
  v34[0] = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v35 = 0LL;
  v36 = 0LL;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, v34);
  if ( v5 )
  {
    v34[0] >>= 4;
    v6 = RtlpCoalesceFreeBlocks(a1, v5, v34, 0LL);
    RtlpInsertFreeBlock(a1, v6);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*(_DWORD *)(v6 + 8)) != ((unsigned __int8)*(_DWORD *)(v6 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v6 + 8)) ^ HIWORD(*(_DWORD *)(v6 + 8)))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_7;
  v8 = a2 + 0x2000;
  v9 = a2 + 0x2000;
  if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
    v9 = *(_QWORD *)(a1 + 160);
  if ( (*(_BYTE *)(a1 + 418) != 2 || !*(_QWORD *)(a1 + 408)) && v9 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v35 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v35 >= 0xFD0000 )
    v35 = 16580608LL;
  HeapProtection = RtlpGetHeapProtection(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v36, 0LL, &v35, 0x2000, HeapProtection) < 0 )
  {
    while ( v35 != v8 )
    {
      v35 >>= 1;
      if ( v35 < v8 )
        v35 = a2 + 0x2000;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v36, 0LL, &v35, 0x2000, HeapProtection) >= 0 )
        goto LABEL_19;
    }
    ++*(_DWORD *)(a1 + 632);
    goto LABEL_7;
  }
LABEL_19:
  v11 = a2 + 4096;
  *(_QWORD *)(a1 + 160) += v35;
  if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
    v11 = *(_QWORD *)(a1 + 168);
  v12 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v37 = (v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( !(unsigned int)RtlpHpHeapCheckCommitLimit(v37, v12, a1, a1 + 376)
    || (int)ZwAllocateVirtualMemory(-1LL, &v36, 0LL, &v37, 4096, HeapProtection) < 0
    || !(unsigned __int8)RtlpInitializeHeapSegment(a1, v36, 112, v14, 2, v36, v36 + v37, v36 + v35 - 4096) )
  {
    RtlpSecMemFreeVirtualMemory(v13, &v36, &v35, 0x8000LL);
LABEL_7:
    if ( *(char *)(a1 + 112) >= 0
      || (result = RtlpCoalesceHeap(a1), (v4 = (_BYTE *)result) == 0LL)
      || *(unsigned __int16 *)(result + 8) < a2 )
    {
      result = 0LL;
      if ( v4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v4[11] = v4[8] ^ v4[9] ^ v4[10];
          *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
        }
      }
    }
    return result;
  }
  v21 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v15, v16, v17) )
    v22 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v22 = 2147353472LL;
  if ( *(_BYTE *)v22 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapCommit(a1, v36, v37, 4LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v31, v30, v32, v33) )
      v21 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v36 + 64), v37, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v21);
  }
  v26 = 2147353482LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v22, v18, v19, v20) )
    v27 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v27 = 2147353482LL;
  if ( *(_BYTE *)v27 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v23, v24, v25) )
      v26 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v36 + 64), v37, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v26);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v23, v24, v25) )
    v28 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v28 = 2147353480LL;
  if ( *(_BYTE *)v28 )
    RtlpHeapLogRangeReserve(a1, v36, v35);
  v29 = *(_QWORD *)(v36 + 64);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v29 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( HIBYTE(*(_DWORD *)(v29 + 8)) != ((unsigned __int8)*(_DWORD *)(v29 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v29 + 8)) ^ HIWORD(*(_DWORD *)(v29 + 8)))) )
      RtlpAnalyzeHeapFailure(a1, v29);
  }
  return *(_QWORD *)(v36 + 64);
}
