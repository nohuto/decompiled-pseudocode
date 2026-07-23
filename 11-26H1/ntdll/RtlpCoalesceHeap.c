/*
 * XREFs of RtlpCoalesceHeap @ 0x180103CD4
 * Callers:
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlCompactHeap @ 0x180103B80 (RtlCompactHeap.c)
 * Callees:
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpCoalesceHeap(unsigned __int64 a1)
{
  __int64 *v1; // rbp
  unsigned __int64 v2; // rdi
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 *v6; // r10
  __int64 *v7; // r12
  bool v8; // zf
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 *v14; // r13
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 336);
  v2 = 0LL;
  v3 = *(__int64 **)(a1 + 344);
  if ( (__int64 *)(a1 + 336) == v3 )
    return v2;
  do
  {
    v5 = (__int64)(v3 - 2);
    v6 = v3;
    v7 = v3;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, (unsigned __int64)(v3 - 2));
        v6 = v3;
      }
    }
    v8 = (*(_BYTE *)(v5 + 10) & 8) == 0;
    v9 = *(unsigned __int16 *)(v5 + 8);
    v3 = (__int64 *)*v3;
    v20 = v9;
    if ( !v8 )
    {
      v14 = *(__int64 **)(v5 + 24);
      v15 = v3[1];
      v16 = *v14;
      if ( (__int64 *)*v14 != v7 || v16 != v15 )
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v6, v15, v16, 0LL);
        goto LABEL_33;
      }
      *(_QWORD *)(a1 + 192) -= v9;
      v17 = *(_QWORD *)(a1 + 312);
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = *(unsigned int *)(v17 + 8);
          if ( *(unsigned __int16 *)(v5 + 8) < v18 )
          {
            v19 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_28;
          }
          if ( !*(_QWORD *)v17 )
            break;
          v17 = *(_QWORD *)v17;
        }
        v19 = v18 - 1;
LABEL_28:
        RtlpHeapRemoveListEntry(a1, v17, 1, v6, v19, *(unsigned __int16 *)(v5 + 8));
      }
      *v14 = (__int64)v3;
      v3[1] = (__int64)v14;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
        RtlpCommitBlock(a1, v5);
      v11 = *(unsigned __int16 *)(v5 + 8);
      v12 = v5;
      goto LABEL_32;
    }
    v10 = RtlpCoalesceFreeBlocks(a1, v5, &v20, 1);
    v11 = v20;
    v12 = v10;
    if ( v20 != v9 )
    {
      if ( v10 != v5 && (*(_WORD *)(v10 + 8) < 0x100u || *(_WORD *)(a1 + 140) != *(_WORD *)(v10 + 12)) )
      {
        RtlpInsertFreeBlock(a1, v10, v20);
LABEL_33:
        v3 = (__int64 *)v1[1];
        continue;
      }
LABEL_32:
      RtlpDeCommitFreeBlock(a1, v12, v11, 1);
      goto LABEL_33;
    }
    if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v10 + 8) )
      v2 = v10;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  while ( v1 != v3 );
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v2 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v2 + 11) != (*(_BYTE *)(v2 + 8) ^ (unsigned __int8)(*(_BYTE *)(v2 + 9) ^ *(_BYTE *)(v2 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v2);
    }
  }
  return v2;
}
