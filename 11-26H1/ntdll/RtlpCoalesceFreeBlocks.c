/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x180010020
 * Callers:
 *     RtlpExtendHeap @ 0x18000DFC0 (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x180103CD4 (RtlpCoalesceHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163160 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // r10
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 **v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // edx
  __int64 *v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r9
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  char v27; // al
  SIZE_T v29; // rsi
  SIZE_T v30; // r15
  char v31; // al
  SIZE_T v32; // rsi
  SIZE_T v33; // rbp
  __int64 v34; // r9
  __int64 *v35; // r15
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 **v39; // rdx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rcx
  char v42; // al
  SIZE_T v43; // rsi
  SIZE_T v44; // r15
  __int64 v45; // r9
  __int64 v46; // r9
  __int64 *v47; // r12
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // r9
  unsigned __int16 *v51; // rcx
  __int64 **v52; // rdx
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rcx
  int v55; // ecx
  char v56; // al
  SIZE_T v57; // rsi
  SIZE_T v58; // r15
  __int64 v59; // r9
  int v60; // [rsp+20h] [rbp-48h]

  v5 = 16 * (*(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
  v6 = a3;
  v7 = a2 - v5;
  v8 = a2;
  if ( a2 - v5 != a2
    && ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*(_DWORD *)(a1 + 124) >> 20) & *(_BYTE *)(a1 + 138))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*(_DWORD *)(v7 + 8)) != ((unsigned __int8)*(_DWORD *)(v7 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v7 + 8)) ^ HIWORD(*(_DWORD *)(v7 + 8)))) )
        RtlpAnalyzeHeapFailure(a1, v7);
    }
    if ( a4 )
    {
      v47 = *(__int64 **)(v8 + 24);
      v48 = *(_QWORD *)(v8 + 16);
      v49 = *v47;
      v50 = *(_QWORD *)(v48 + 8);
      if ( *v47 == v8 + 16 && v49 == v50 )
      {
        v51 = (unsigned __int16 *)(v8 + 8);
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
        v52 = *(__int64 ***)(a1 + 312);
        if ( v52 )
        {
          v53 = *(unsigned __int16 *)(v8 + 8);
          while ( 1 )
          {
            v54 = *((unsigned int *)v52 + 2);
            if ( v53 < v54 )
            {
              v55 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_94;
            }
            if ( !*v52 )
              break;
            v52 = (__int64 **)*v52;
          }
          v55 = v54 - 1;
LABEL_94:
          LOBYTE(v53) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v52, v53, v8 + 16, v55, *(unsigned __int16 *)(v8 + 8));
          v51 = (unsigned __int16 *)(v8 + 8);
        }
        *v47 = v48;
        *(_QWORD *)(v48 + 8) = v47;
        if ( (*(_BYTE *)(v8 + 10) & 8) != 0 )
        {
          if ( !(unsigned __int8)RtlpCommitBlock(a1) )
          {
            LOBYTE(v59) = 1;
            RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), v59);
            a4 = 0;
            goto LABEL_7;
          }
          v51 = (unsigned __int16 *)(v8 + 8);
        }
        v56 = *(_BYTE *)(v8 + 10);
        if ( (v56 & 4) != 0 )
        {
          v57 = 16LL * *v51 - 32;
          if ( (v56 & 2) != 0 && v57 > 4 )
            v57 = 16LL * *v51 - 36;
          v58 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v57, 0xFEEEFEEE);
          if ( v58 != v57 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v8,
              (const void *)(v58 + v8 + 32));
            RtlpBreakPointHeap();
          }
        }
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v8 + 16, v50, v49, 0LL);
      }
      a4 = 0;
    }
LABEL_7:
    v10 = *(__int64 **)(v7 + 24);
    LODWORD(a3) = v7 + 16;
    v11 = *(_QWORD *)(v7 + 16);
    v12 = *v10;
    v13 = *(_QWORD *)(v11 + 8);
    if ( *v10 == v7 + 16 && v12 == v13 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
      v14 = *(__int64 ***)(a1 + 312);
      if ( v14 )
      {
        v15 = *(unsigned __int16 *)(v7 + 8);
        while ( 1 )
        {
          v16 = *((unsigned int *)v14 + 2);
          if ( v15 < v16 )
            break;
          if ( !*v14 )
          {
            LODWORD(v15) = v16 - 1;
            break;
          }
          v14 = (__int64 **)*v14;
        }
        LOBYTE(a3) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v14, (_DWORD)a3, v7 + 16, v15, *(unsigned __int16 *)(v7 + 8));
      }
      *v10 = v11;
      *(_QWORD *)(v11 + 8) = v10;
      if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v31 = *(_BYTE *)(v7 + 10);
        if ( (v31 & 4) != 0 )
        {
          v32 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v31 & 2) != 0 && v32 > 4 )
            v32 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v33 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v32, 0xFEEEFEEE);
          if ( v33 != v32 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v33 + v7 + 32));
            RtlpBreakPointHeap();
          }
        }
        v17 = *(unsigned __int16 *)(v7 + 8);
        v8 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        *v6 += v17;
        *(_WORD *)(v7 + 8) = *v6;
        *(_WORD *)(v7 + 16LL * *v6 + 12) = *(_WORD *)v6 ^ *(_WORD *)(a1 + 140);
      }
      else
      {
        LOBYTE(v45) = 1;
        RtlpDeCommitFreeBlock(a1, v7, *(unsigned __int16 *)(v7 + 8), v45);
      }
    }
    else
    {
      RtlpLogHeapFailure(13, a1, (_DWORD)a3, v13, v12, 0LL);
    }
  }
  v18 = v8 + 16LL * *v6;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v19 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v18 + 8);
    if ( HIBYTE(v19) != ((unsigned __int8)v19 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v18 + 8)) >> 8) ^ BYTE2(v19))) )
      RtlpLogHeapFailure(3, a1, v18, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v18 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v18 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*(_DWORD *)(v18 + 8)) != ((unsigned __int8)*(_DWORD *)(v18 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v18 + 8)) ^ HIWORD(*(_DWORD *)(v18 + 8)))) )
        RtlpAnalyzeHeapFailure(a1, v18);
    }
    if ( !a4 )
      goto LABEL_25;
    v35 = *(__int64 **)(v8 + 24);
    v36 = *(_QWORD *)(v8 + 16);
    v37 = *v35;
    v38 = *(_QWORD *)(v36 + 8);
    if ( *v35 != v8 + 16 || v37 != v38 )
    {
      RtlpLogHeapFailure(13, a1, v8 + 16, v38, v37, 0LL);
LABEL_77:
      a4 = 0;
      goto LABEL_25;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
    v39 = *(__int64 ***)(a1 + 312);
    if ( v39 )
    {
      v40 = *(unsigned __int16 *)(v8 + 8);
      while ( 1 )
      {
        v41 = *((unsigned int *)v39 + 2);
        if ( v40 < v41 )
          break;
        if ( !*v39 )
        {
          LODWORD(v40) = v41 - 1;
          break;
        }
        v39 = (__int64 **)*v39;
      }
      v60 = v40;
      LOBYTE(v40) = 1;
      RtlpHeapRemoveListEntry(a1, (_DWORD)v39, v40, v8 + 16, v60, *(unsigned __int16 *)(v8 + 8));
    }
    *v35 = v36;
    *(_QWORD *)(v36 + 8) = v35;
    if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
    {
      v42 = *(_BYTE *)(v8 + 10);
      if ( (v42 & 4) != 0 )
      {
        v43 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        if ( (v42 & 2) != 0 && v43 > 4 )
          v43 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
        v44 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v43, 0xFEEEFEEE);
        if ( v44 != v43 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v8,
            (const void *)(v44 + v8 + 32));
          RtlpBreakPointHeap();
        }
      }
      goto LABEL_77;
    }
    LOBYTE(v46) = 1;
    RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), v46);
    a4 = 0;
LABEL_25:
    v20 = *(__int64 **)(v18 + 24);
    v21 = *(_QWORD *)(v18 + 16);
    v22 = *v20;
    v23 = *(_QWORD *)(v21 + 8);
    if ( *v20 == v18 + 16 && v22 == v23 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v18 + 8);
      v24 = *(_QWORD **)(a1 + 312);
      if ( v24 )
      {
        v25 = *(unsigned __int16 *)(v18 + 8);
        while ( 1 )
        {
          v26 = *((unsigned int *)v24 + 2);
          if ( v25 < v26 )
            break;
          a3 = (_QWORD *)*v24;
          if ( !*v24 )
          {
            LODWORD(v25) = v26 - 1;
            break;
          }
          v24 = (_QWORD *)*v24;
        }
        LOBYTE(a3) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v24, (_DWORD)a3, v18 + 16, v25, *(unsigned __int16 *)(v18 + 8));
      }
      *v20 = v21;
      *(_QWORD *)(v21 + 8) = v20;
      if ( (*(_BYTE *)(v18 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v27 = *(_BYTE *)(v18 + 10);
        if ( (v27 & 4) != 0 )
        {
          v29 = 16LL * *(unsigned __int16 *)(v18 + 8) - 32;
          if ( (v27 & 2) != 0 && v29 > 4 )
            v29 = 16LL * *(unsigned __int16 *)(v18 + 8) - 36;
          v30 = RtlCompareMemoryUlong((PVOID)(v18 + 32), v29, 0xFEEEFEEE);
          if ( v30 != v29 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v18,
              (const void *)(v18 + v30 + 32));
            if ( NtCurrentPeb()->BeingDebugged )
            {
              __debugbreak();
              RtlpHeapInvalidBreakPoint = 0;
            }
          }
        }
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        *v6 += *(unsigned __int16 *)(v18 + 8);
        *(_WORD *)(v8 + 8) = *v6;
        *(_WORD *)(v8 + 16LL * *v6 + 12) = *(_WORD *)v6 ^ *(_WORD *)(a1 + 140);
        return v8;
      }
      LOBYTE(v34) = 1;
      RtlpDeCommitFreeBlock(a1, v18, *(unsigned __int16 *)(v18 + 8), v34);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v18 + 16, v23, v22, 0LL);
    }
  }
  return v8;
}
