/*
 * XREFs of RtlpGrowBlockInPlace @ 0x180013260
 * Callers:
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlpZeroBlockFromOffset @ 0x180014BB4 (RtlpZeroBlockFromOffset.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163160 (RtlCompareMemoryUlong.c)
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
  SIZE_T v22; // r14
  SIZE_T v23; // r12
  char v24; // r12
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
  __int64 v38; // r11
  __int64 v39; // rdx
  unsigned __int16 v40; // dx
  __int64 v41; // r11
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int16 v44; // dx
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // [rsp+28h] [rbp-50h]
  unsigned __int64 v51; // [rsp+80h] [rbp+8h]
  __int64 *v52; // [rsp+90h] [rbp+18h]
  char v53; // [rsp+A0h] [rbp+28h]
  __int64 v54; // [rsp+A0h] [rbp+28h]

  v6 = a5;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v10 = *(_DWORD *)(a1 + 124);
  v53 = *(_BYTE *)(a3 + 10);
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
  v51 = v13;
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
  v52 = v14;
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
    v14 = v52;
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
    v23 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v22, 0xFEEEFEEE);
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
    v13 = v51;
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
  if ( (v53 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_38;
    v38 = *(unsigned __int16 *)(a3 + 8);
    v39 = *(unsigned __int16 *)(a3 + 16 * v6 - 14);
    v54 = v38;
    if ( !RtlpGlobalTagHeap || !(_WORD)v39 )
      goto LABEL_105;
    if ( (v39 & 0x8000u) != 0LL )
    {
      v44 = v39 & 0x7FFF;
      if ( v44 >= 0x81u )
        goto LABEL_105;
      v45 = *(_QWORD *)(a1 + 328);
      if ( !v45 )
        goto LABEL_105;
      v43 = v45 + 16LL * v44;
      LOWORD(v39) = v44 | 0x8000;
    }
    else
    {
      if ( (v39 & 0x800) == 0 )
      {
        if ( (unsigned __int16)v39 >= *(_WORD *)(a1 + 224) )
          goto LABEL_105;
        v49 = *(_QWORD *)(a1 + 232);
        if ( !v49 )
          goto LABEL_105;
        ++*(_DWORD *)(v49 + 72 * v39 + 4);
        v43 = v49 + 72 * v39;
        *(_QWORD *)(v43 + 8) -= v38;
        goto LABEL_104;
      }
      v40 = v39 & 0xF7FF;
      if ( v40 >= *(_WORD *)(RtlpGlobalTagHeap + 224) )
        goto LABEL_105;
      v41 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
      if ( !v41 )
        goto LABEL_105;
      v42 = v40;
      LOWORD(v39) = v40 | 0x800;
      v43 = v41 + 72 * v42;
      v38 = v54;
    }
    ++*(_DWORD *)(v43 + 4);
    *(_QWORD *)(v43 + 8) -= v38;
    if ( (v39 & 0x8000u) != 0LL )
    {
      if ( v6 < 0x80 )
        v25 = v6;
      v43 = *(_QWORD *)(a1 + 328) + 16LL * v25;
      LOWORD(v39) = v25 | 0x8000;
    }
LABEL_104:
    ++*(_DWORD *)v43;
    v25 = v39;
    *(_QWORD *)(v43 + 8) += v6;
LABEL_105:
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
    LOWORD(v50) = v6;
    RtlpCreateSplitBlock(a1, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v50, v30);
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
    goto LABEL_44;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v46 = 4 - (v29 & 3);
    if ( (v29 & 3) == 0 )
      v46 = v29 & 3;
    if ( a4 > v46 + v29 && ((a4 - v46 - v29) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v47 = ((a4 - v46 - v29) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v48 = v46 + v29 + a3 + 16;
      if ( v47 )
      {
        if ( (v48 & 4) == 0 )
          goto LABEL_90;
        *(_DWORD *)v48 = -1163005939;
        if ( --v47 )
        {
          v48 += 4LL;
LABEL_90:
          memset64((void *)v48, 0xBAADF00DBAADF00DuLL, v47 >> 1);
          if ( (v47 & 1) != 0 )
            *(_DWORD *)(v48 + 4 * v47 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_44:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    *(__m128i *)(a3 + a4 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(_BYTE *)(a3 + 10) = (a2 >> 4) ^ (*(_BYTE *)(a3 + 10) ^ (a2 >> 4)) & 0x1F;
  return 1;
}
