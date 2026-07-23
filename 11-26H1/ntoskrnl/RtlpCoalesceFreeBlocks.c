/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x14061E070
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14061ECD8 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14061F278 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x14061F730 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062889C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x14062912C (RtlpHeapRemoveListEntry.c)
 *     RtlCompareMemoryUlong @ 0x1407359E0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(ULONG_PTR a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r9
  __int64 v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 **v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  int v15; // ecx
  char v16; // al
  SIZE_T v17; // rsi
  SIZE_T v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // edx
  __int64 *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rax
  struct _KLOCK_ENTRIES *v25; // r9
  __int64 **v26; // rdx
  unsigned __int64 v27; // r8
  int v28; // r8d
  char v29; // al
  SIZE_T v30; // rsi
  SIZE_T v31; // rax
  int v33; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v7 = a2 - v5;
  if ( a2 - v5 != a2
    && ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*(_DWORD *)(a1 + 124) >> 20) & *(_BYTE *)(a1 + 138))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v7);
    }
    v8 = *(__int64 **)(v7 + 24);
    v9 = *(_QWORD *)(v7 + 16);
    v10 = *v8;
    v11 = *(struct _KLOCK_ENTRIES **)(v9 + 8);
    if ( (struct _KLOCK_ENTRIES *)*v8 == v11 && v10 == v7 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
      v12 = *(__int64 ***)(a1 + 312);
      if ( v12 )
      {
        v13 = *(unsigned __int16 *)(v7 + 8);
        while ( 1 )
        {
          v14 = *((unsigned int *)v12 + 2);
          if ( v13 < v14 )
            break;
          if ( !*v12 )
          {
            v15 = v14 - 1;
            goto LABEL_15;
          }
          v12 = (__int64 **)*v12;
        }
        v15 = *(unsigned __int16 *)(v7 + 8);
LABEL_15:
        LOBYTE(v13) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v12, v13, v7 + 16, v15, *(unsigned __int16 *)(v7 + 8));
      }
      *v8 = v9;
      *(_QWORD *)(v9 + 8) = v8;
      v16 = *(_BYTE *)(v7 + 10);
      if ( (v16 & 4) != 0 )
      {
        v17 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
        if ( (v16 & 2) != 0 && v17 > 4 )
          v17 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
        v18 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v17, 0xFEEEFEEE);
        if ( v18 != v17 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v7,
            (const void *)(v18 + v7 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
      }
      v19 = *(unsigned __int16 *)(v7 + 8);
      v4 = v7;
      *(_BYTE *)(v7 + 10) = 0;
      *(_BYTE *)(v7 + 15) = 0;
      *a3 += v19;
      *(_WORD *)(v7 + 8) = *(_WORD *)a3;
      *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
    }
    else
    {
      RtlpLogHeapFailure(0xDu, a1, v7 + 16, v11, v10, 0LL);
    }
  }
  v20 = v4 + 16LL * *a3;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v21 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v20 + 8);
    if ( HIBYTE(v21) != ((unsigned __int8)v21 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v20 + 8)) >> 8) ^ BYTE2(v21))) )
      RtlpLogHeapFailure(3u, a1, v20, 0LL, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v20 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v20 + 11) != (*(_BYTE *)(v20 + 8) ^ (unsigned __int8)(*(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v20);
    }
    v22 = *(__int64 **)(v20 + 24);
    v23 = *(_QWORD *)(v20 + 16);
    v24 = *v22;
    v25 = *(struct _KLOCK_ENTRIES **)(v23 + 8);
    if ( (struct _KLOCK_ENTRIES *)*v22 == v25 && v24 == v20 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v20 + 8);
      v26 = *(__int64 ***)(a1 + 312);
      if ( v26 )
      {
        while ( 1 )
        {
          v27 = *((unsigned int *)v26 + 2);
          if ( *(unsigned __int16 *)(v20 + 8) < v27 )
            break;
          if ( !*v26 )
          {
            v28 = v27 - 1;
            goto LABEL_41;
          }
          v26 = (__int64 **)*v26;
        }
        v28 = *(unsigned __int16 *)(v20 + 8);
LABEL_41:
        v33 = v28;
        LOBYTE(v28) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v26, v28, v20 + 16, v33, *(unsigned __int16 *)(v20 + 8));
      }
      *v22 = v23;
      *(_QWORD *)(v23 + 8) = v22;
      v29 = *(_BYTE *)(v20 + 10);
      if ( (v29 & 4) != 0 )
      {
        v30 = 16LL * *(unsigned __int16 *)(v20 + 8) - 32;
        if ( (v29 & 2) != 0 && v30 > 4 )
          v30 = 16LL * *(unsigned __int16 *)(v20 + 8) - 36;
        v31 = RtlCompareMemoryUlong((PVOID)(v20 + 32), v30, 0xFEEEFEEE);
        if ( v31 != v30 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v20,
            (const void *)(v20 + v31 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
      }
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      *a3 += *(unsigned __int16 *)(v20 + 8);
      *(_WORD *)(v4 + 8) = *(_WORD *)a3;
      *(_WORD *)(v4 + 16LL * *a3 + 12) = *(_WORD *)a3 ^ *(_WORD *)(a1 + 140);
      return v4;
    }
    RtlpLogHeapFailure(0xDu, a1, v20 + 16, v25, v24, 0LL);
  }
  return v4;
}
