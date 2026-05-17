/*
 * XREFs of RtlpInitializeHeapSegment @ 0x18007BEF8
 * Callers:
 *     RtlpExtendHeap @ 0x180022EF0 (RtlpExtendHeap.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 * Callees:
 *     RtlpInsertFreeBlock @ 0x180026CC0 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x180029BD0 (RtlpCreateUCREntry.c)
 *     RtlpLogHeapCommit @ 0x1800721FC (RtlpLogHeapCommit.c)
 *     RtlLogStackBackTraceEx @ 0x18007C250 (RtlLogStackBackTraceEx.c)
 *     RtlpGetHeapProtection @ 0x18007F750 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1800CC620 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // r15
  unsigned int NtGlobalFlag; // r13d
  __int64 v13; // rsi
  unsigned __int64 v14; // r8
  signed __int64 v15; // rsi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int16 v19; // ax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r8
  unsigned __int64 *v24; // rbx
  __int64 *v25; // rax
  __int64 v27; // rdx
  int HeapProtection; // eax
  __int64 v29; // rcx
  __int64 v30[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v31; // [rsp+98h] [rbp+58h]

  v8 = a8;
  v30[0] = 0LL;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v13 = a3 + 15;
  v14 = a7;
  v15 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
  v31 = (__int64)(a8 - a6) / 4096;
  a8 = v15 >> 4;
  v16 = v15 + a2;
  v17 = v15 + a2 + 80;
  if ( v17 >= a7 )
  {
    if ( v17 < v8 )
    {
      v27 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      v30[0] = (v16 - a7 + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v30[0], v27, a1, a1 + 376) )
      {
        HeapProtection = RtlpGetHeapProtection(a1, 1LL);
        if ( (int)ZwAllocateVirtualMemory(-1LL, &a7, 0LL, v30, 4096, HeapProtection) >= 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v29 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v29 = 2147353472LL;
          if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapCommit(a1, a7, v30[0], 3);
          v14 = v30[0] + a7;
          a7 += v30[0];
          goto LABEL_3;
        }
      }
      ++*(_DWORD *)(a1 + 632);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v18 = (__int64)(v8 - v14) / 4096;
  *(_WORD *)(a2 + 8) = a8;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v19 = RtlLogStackBackTraceEx(1LL);
    v14 = a7;
    *(_WORD *)(a2 + 88) = v19;
  }
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 56) = v31;
  v20 = (unsigned int)((_DWORD)v31 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v20;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v16;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 576) += v20;
  *(_QWORD *)(a1 + 568) += v20;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v16 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v21 = *(_QWORD *)(a2 + 40);
  if ( v21 == a2 )
  {
    LOBYTE(v22) = 0;
  }
  else
  {
    v22 = ((unsigned __int64)v15 >> 16) + 1;
    if ( v22 >= 0xFE )
    {
      RtlpLogHeapFailure(3, v21, v16, a2, 0LL, 0LL);
      v14 = a7;
    }
  }
  *(_BYTE *)(v16 + 14) = v22;
  RtlpCreateUCREntry(a1, a2, v14 - 48, (unsigned int)((_DWORD)v18 << 12), v16, v30);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v30[0] )
    RtlpInsertFreeBlock(a1, v16, v30[0]);
  v23 = a1 + 288;
  v24 = (unsigned __int64 *)(a2 + 24);
  v25 = *(__int64 **)(a1 + 296);
  if ( *v25 == a1 + 288 )
  {
    *v24 = v23;
    v24[1] = (unsigned __int64)v25;
    *v25 = (__int64)v24;
    *(_QWORD *)(a1 + 296) = v24;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, v23, 0, *v25, 0LL);
  }
  ++*(_DWORD *)(a1 + 600);
  return 1;
}
