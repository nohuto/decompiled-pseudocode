/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x14062889C
 * Callers:
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061E070 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14061E464 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x14061F278 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14061F4D4 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x14061F730 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14062045C (RtlpSetupExtendedBlock.c)
 *     RtlpPopulateListIndex @ 0x140629228 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x14080B8A0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x140628784 (RtlpHeapExceptionFilter.c)
 */

void __fastcall RtlpAnalyzeHeapFailure(ULONG_PTR a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r9
  int v6; // edi
  __int64 v7; // rax
  char v8; // al
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD **v12; // rdx
  _QWORD **v13; // rcx
  unsigned __int16 v14; // cx
  unsigned __int64 v15; // rcx
  int v16; // ecx
  __int16 v17; // dx
  __int64 v18; // rdx
  unsigned int v19; // ecx
  int v20; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 124);
  if ( (v6 & *(_DWORD *)(a2 + 8)) != 0 )
    goto LABEL_33;
  v5 = 10LL;
  if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
    && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
  {
    goto LABEL_33;
  }
  v5 = 1LL;
  v7 = *(unsigned __int8 *)(a2 + 14);
  v4 = (_BYTE)v7 ? (a2 & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000 : a1;
  if ( *(_DWORD *)(v4 + 16) != -1114130 )
    goto LABEL_33;
  v8 = *(_BYTE *)(a2 + 15);
  if ( v8 != 4 )
  {
    v5 = 2LL;
    if ( a2 < *(_QWORD *)(v4 + 48) || a2 >= *(_QWORD *)(v4 + 72) || *(_QWORD *)(v4 + 40) != a1 )
      goto LABEL_33;
  }
  v5 = 3LL;
  if ( v8 == 3 )
  {
    v9 = a2 + 16;
    v10 = *(_QWORD *)(v9 + 32);
    if ( (v10 & 0xFFF) != 0 )
      goto LABEL_33;
    if ( v10 < *(_QWORD *)(v4 + 48) )
      goto LABEL_33;
    if ( *(_QWORD *)(v9 + 40) + v10 > *(_QWORD *)(v4 + 72) )
      goto LABEL_33;
    v5 = 4LL;
    v11 = **(_QWORD **)(v9 + 8);
    if ( v11 != *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
      goto LABEL_33;
    if ( v11 != v9 )
      goto LABEL_33;
    v5 = 5LL;
    v12 = (_QWORD **)(v9 + 16);
    v13 = (_QWORD **)*v12[1];
    if ( v13 != (_QWORD **)(*v12)[1] || v13 != v12 )
      goto LABEL_33;
  }
  else
  {
    v5 = 6LL;
    if ( (*(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12)) != *(_WORD *)(a2 + 8) )
      goto LABEL_33;
  }
  v5 = 7LL;
  v14 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
  if ( !v14 )
    goto LABEL_29;
  v15 = a2 - 16LL * v14;
  if ( v6 )
  {
    v16 = *(_DWORD *)(v15 + 8);
    LOWORD(v20) = v16;
    if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
      v20 = *(_DWORD *)(a1 + 136) ^ v16;
    v17 = v20;
  }
  else
  {
    v17 = *(_WORD *)(v15 + 8);
  }
  if ( v17 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
  {
LABEL_29:
    v5 = 8LL;
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0
      || (v18 = **(_QWORD **)(a2 + 24), v18 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v18 == a2 + 16 )
    {
      v5 = 9LL;
    }
  }
LABEL_33:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( (unsigned int)v5 > 5 )
  {
    if ( (_DWORD)v5 != 6 && (_DWORD)v5 != 7 )
    {
      if ( (_DWORD)v5 == 8 )
      {
        v5 = 8LL;
        v19 = 13;
        goto LABEL_50;
      }
      if ( (_DWORD)v5 != 10 )
      {
        v19 = 2;
        goto LABEL_50;
      }
    }
    goto LABEL_49;
  }
  if ( (_DWORD)v5 == 5 )
    goto LABEL_40;
  if ( (unsigned int)v5 < 2 )
  {
LABEL_49:
    v19 = 3;
    goto LABEL_50;
  }
  if ( (_DWORD)v5 == 2 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    v19 = 12;
    goto LABEL_50;
  }
  if ( (_DWORD)v5 == 3 )
  {
    v5 = 3LL;
    v19 = 0;
    goto LABEL_50;
  }
LABEL_40:
  v19 = 14;
LABEL_50:
  RtlpLogHeapFailure(v19, a1, a2, (struct _KLOCK_ENTRIES *)v5, 0LL, 0LL);
}
