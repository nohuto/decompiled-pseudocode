/*
 * XREFs of RtlpGrowBlockInPlace @ 0x180028190
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180025AF0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlpCreateSplitBlock @ 0x180028890 (RtlpCreateSplitBlock.c)
 *     RtlpZeroBlockFromOffset @ 0x180029AE4 (RtlpZeroBlockFromOffset.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163260 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // rbp
  unsigned int v10; // edx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __int64 *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int v20; // r8d
  char v21; // al
  unsigned __int64 v22; // r14
  __int64 v23; // r12
  unsigned __int8 v24; // r12
  unsigned __int16 v25; // r8
  __int64 v26; // rdx
  char v27; // cl
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  __int64 v30; // r10
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r11
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  int v37; // eax
  int v38; // ecx
  __int64 v40; // r11
  __int64 v41; // rdx
  unsigned __int16 v42; // dx
  __int64 v43; // r11
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int16 v46; // dx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // [rsp+28h] [rbp-50h]
  unsigned __int64 v53; // [rsp+80h] [rbp+8h]
  __int64 *v54; // [rsp+90h] [rbp+18h]
  char v55; // [rsp+A0h] [rbp+28h]
  __int64 v56; // [rsp+A0h] [rbp+28h]

  v6 = a5;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v10 = *(_DWORD *)(a1 + 124);
  v55 = *(_BYTE *)(a3 + 10);
  v11 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v11 + 10) ^ (v10 >> 20) & *(_BYTE *)(a1 + 138)) & 1) != 0 )
    return 0;
  if ( v10 )
  {
    *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( HIBYTE(*(_DWORD *)(v11 + 8)) != ((unsigned __int8)*(_DWORD *)(v11 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v11 + 8)) ^ HIWORD(*(_DWORD *)(v11 + 8)))) )
      RtlpAnalyzeHeapFailure(a1, v11);
  }
  v12 = *(unsigned __int16 *)(v11 + 8);
  v13 = v12 + *(unsigned __int16 *)(a3 + 8);
  v53 = v13;
  if ( v13 < v6 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 10) ^ v12 ^ BYTE1(v12);
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      return 0;
    }
    return 0;
  }
  v14 = *(__int64 **)(v11 + 24);
  v15 = *(_QWORD *)(v11 + 16);
  v54 = v14;
  v16 = *v14;
  v17 = *(_QWORD *)(v15 + 8);
  if ( *v14 != v11 + 16 || v16 != v17 )
  {
    RtlpLogHeapFailure(13, a1, v11 + 16, v17, v16, 0LL);
    return 0;
  }
  *(_QWORD *)(a1 + 192) -= v12;
  v18 = *(_QWORD *)(a1 + 312);
  if ( v18 )
  {
    while ( 1 )
    {
      v19 = *(unsigned int *)(v18 + 8);
      if ( *(unsigned __int16 *)(v11 + 8) < v19 )
      {
        v20 = *(unsigned __int16 *)(v11 + 8);
        goto LABEL_14;
      }
      if ( !*(_QWORD *)v18 )
        break;
      v18 = *(_QWORD *)v18;
    }
    v20 = v19 - 1;
LABEL_14:
    RtlpHeapRemoveListEntry(a1, v18, 1, (__int64 *)(v11 + 16), v20, *(unsigned __int16 *)(v11 + 8));
    v14 = v54;
  }
  *v14 = v15;
  *(_QWORD *)(v15 + 8) = v14;
  if ( (*(_BYTE *)(v11 + 10) & 8) != 0 && !RtlpCommitBlock(a1, v11) )
  {
    RtlpDeCommitFreeBlock(a1, v11, *(unsigned __int16 *)(v11 + 8), 1);
    return 0;
  }
  v21 = *(_BYTE *)(v11 + 10);
  if ( (v21 & 4) != 0 )
  {
    v22 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
    if ( (v21 & 2) != 0 && v22 > 4 )
      v22 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
    v23 = RtlCompareMemoryUlong(v11 + 32, v22, 4277075694LL);
    if ( v23 != v22 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v11,
        (const void *)(v23 + v11 + 32));
      RtlpBreakPointHeap();
    }
    v13 = v53;
  }
  v24 = *(_BYTE *)(v11 + 10);
  v25 = 0;
  LOWORD(v26) = *(_WORD *)(a3 + 8);
  v27 = *(_BYTE *)(a3 + 15);
  if ( v27 == 5 )
  {
    v28 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v27 & 0x40) != 0 )
  {
    v28 = *(unsigned __int16 *)(a3 + 16LL * (*(_BYTE *)(a3 + 15) & 0x3F) + 12);
  }
  else if ( (v27 & 0x3F) == 0x3F )
  {
    if ( v27 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        LODWORD(v26) = *(_DWORD *)(a3 + 8);
        if ( ((unsigned int)v26 & *(_DWORD *)(a1 + 124)) != 0 )
          LOWORD(v26) = *(_WORD *)(a1 + 136) ^ v26;
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a3 + 8) ^ (a3 >> 4)) )
        v26 = 0LL;
      else
        v26 = *(_QWORD *)(a3
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(a3 + 8) ^ (unsigned int)(a3 >> 4)) >> 12));
      LOWORD(v26) = *(_WORD *)(v26 + 36);
    }
    v28 = *(_QWORD *)(a3 + 16LL * (unsigned __int16)v26);
  }
  else
  {
    v28 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v29 = 16LL * *(unsigned __int16 *)(a3 + 8) - v28;
  v30 = 0LL;
  if ( v13 - v6 > 2 )
    v30 = v13 - v6;
  else
    v6 = v13;
  if ( (v55 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_38;
    v40 = *(unsigned __int16 *)(a3 + 8);
    v41 = *(unsigned __int16 *)(a3 + 16 * v6 - 14);
    v56 = v40;
    if ( !RtlpGlobalTagHeap || !(_WORD)v41 )
      goto LABEL_108;
    if ( (v41 & 0x8000u) != 0LL )
    {
      v46 = v41 & 0x7FFF;
      if ( v46 >= 0x81u )
        goto LABEL_108;
      v47 = *(_QWORD *)(a1 + 328);
      if ( !v47 )
        goto LABEL_108;
      v45 = v47 + 16LL * v46;
      LOWORD(v41) = v46 | 0x8000;
    }
    else
    {
      if ( (v41 & 0x800) == 0 )
      {
        if ( (unsigned __int16)v41 >= *(_WORD *)(a1 + 224) )
          goto LABEL_108;
        v51 = *(_QWORD *)(a1 + 232);
        if ( !v51 )
          goto LABEL_108;
        ++*(_DWORD *)(v51 + 72 * v41 + 4);
        v45 = v51 + 72 * v41;
        *(_QWORD *)(v45 + 8) -= v40;
        goto LABEL_107;
      }
      v42 = v41 & 0xF7FF;
      if ( v42 >= *(_WORD *)(RtlpGlobalTagHeap + 224) )
        goto LABEL_108;
      v43 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
      if ( !v43 )
        goto LABEL_108;
      v44 = v42;
      LOWORD(v41) = v42 | 0x800;
      v45 = v43 + 72 * v44;
      v40 = v56;
    }
    ++*(_DWORD *)(v45 + 4);
    *(_QWORD *)(v45 + 8) -= v40;
    if ( (v41 & 0x8000u) != 0LL )
    {
      if ( v6 < 0x80 )
        v25 = v6;
      v45 = *(_QWORD *)(a1 + 328) + 16LL * v25;
      LOWORD(v41) = v25 | 0x8000;
    }
LABEL_107:
    ++*(_DWORD *)v45;
    v25 = v41;
    *(_QWORD *)(v45 + 8) += v6;
LABEL_108:
    *(_WORD *)(a3 + 16 * v6 - 14) = v25;
    goto LABEL_38;
  }
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v31 = *(unsigned __int16 *)(a3 + 8);
    v32 = *(unsigned __int8 *)(a3 + 11);
    if ( RtlpGlobalTagHeap )
    {
      if ( *(_BYTE *)(a3 + 11) )
      {
        if ( (unsigned __int16)v32 < *(_WORD *)(a1 + 224) )
        {
          v33 = *(_QWORD *)(a1 + 232);
          if ( v33 )
          {
            v34 = 9 * v32;
            LOBYTE(v25) = *(_BYTE *)(a3 + 11);
            ++*(_DWORD *)(v33 + 8 * v34 + 4);
            *(_QWORD *)(v33 + 8 * v34 + 8) -= v31;
            ++*(_DWORD *)(v33 + 8 * v34);
            *(_QWORD *)(v33 + 8 * v34 + 8) += v6;
          }
        }
      }
    }
    *(_BYTE *)(a3 + 11) = v25;
  }
LABEL_38:
  *(_WORD *)(a3 + 8) = v6;
  v35 = 16 * v6;
  v36 = 16 * v6 - a4;
  if ( v30 )
  {
    if ( v36 >= 0x3F )
    {
      *(_QWORD *)(v35 + a3) = v36;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v36;
    }
    v37 = *(unsigned __int8 *)(a3 + 14);
    if ( (_BYTE)v37 )
      v38 = (a3 & 0xFFFF0000) - (v37 << 16) + 0x10000;
    else
      v38 = a1;
    LOWORD(v52) = v6;
    RtlpCreateSplitBlock(a1, v38, v35 + a3, v24, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v52, v30);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v24;
    if ( v36 >= 0x3F )
    {
      *(_QWORD *)(v35 + a3) = v36;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v36;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a3 + 8);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( a4 < v29 )
      v29 = a4;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v29);
    goto LABEL_46;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v48 = 4 - (v29 & 3);
    if ( (v29 & 3) == 0 )
      v48 = v29 & 3;
    if ( a4 > v48 + v29 && ((a4 - v48 - v29) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v49 = ((a4 - v48 - v29) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v50 = v48 + v29 + a3 + 16;
      if ( v49 )
      {
        if ( (v50 & 4) == 0 )
          goto LABEL_93;
        *(_DWORD *)v50 = -1163005939;
        if ( --v49 )
        {
          v50 += 4LL;
LABEL_93:
          memset64((void *)v50, 0xBAADF00DBAADF00DuLL, v49 >> 1);
          if ( (v49 & 1) != 0 )
            *(_DWORD *)(v50 + 4 * v49 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_46:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    *(__m128i *)(a3 + a4 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(_BYTE *)(a3 + 10) = (a2 >> 4) ^ (*(_BYTE *)(a3 + 10) ^ (a2 >> 4)) & 0x1F;
  return 1;
}
