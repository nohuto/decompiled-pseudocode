/*
 * XREFs of RtlpCreateSplitBlock @ 0x180013960
 * Callers:
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlpFindEntry @ 0x180015010 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18006CAA0 (RtlpHeapAddListEntry.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163160 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpCreateSplitBlock(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        __int16 a6,
        __int64 a7)
{
  unsigned __int64 v8; // rbp
  int v9; // r12d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  _DWORD *v14; // r14
  unsigned __int64 v15; // r15
  _QWORD **v16; // rdx
  __int64 *v17; // rsi
  unsigned __int64 v18; // rax
  int v19; // r13d
  int v20; // eax
  _QWORD *v21; // rdi
  __int64 v22; // r12
  _QWORD *v23; // rax
  int v24; // edx
  __int16 v25; // r14
  __int64 v26; // r8
  int v27; // edx
  __int16 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdi
  unsigned int v31; // edx
  __int64 v32; // r9
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // eax
  __int64 *v38; // rax
  _QWORD *v39; // r14
  __int64 *v40; // rdi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  int v43; // edx
  unsigned int v44; // esi
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // r15
  __int64 *v49; // r9
  __int64 *v50; // r8
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 *v53; // r15
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  int v56; // r8d
  __int16 v57; // r13
  _QWORD *i; // r12
  int v59; // edx
  __int16 v60; // r14
  unsigned int v61; // r10d
  int v62; // edx
  unsigned int v63; // r11d
  __int64 v64; // rax
  __int64 *v65; // rax
  __int64 *v66; // rax
  __int64 *v67; // rdx
  int v68; // r8d
  _DWORD *v69; // rdx
  char v70; // al
  SIZE_T v71; // r14
  SIZE_T v72; // r15
  unsigned __int64 v73; // rsi
  _QWORD *v74; // rdi
  _QWORD *Entry; // r8
  int v76; // ecx
  int v77; // eax
  __int64 *v78; // rax
  _QWORD *v79; // rdi
  _QWORD *v80; // rdx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rax
  _DWORD *v83; // r8
  unsigned __int64 v84; // rdx
  _QWORD *v85; // rdi
  _QWORD *v86; // r8
  __int64 *v87; // rax
  _QWORD *v88; // r14
  __int64 *v89; // rdi
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rax
  int v92; // edx
  unsigned int v93; // esi
  __int64 v94; // rax
  __int64 v95; // r12
  __int64 v96; // r15
  int v97; // ecx
  int v98; // eax
  int v99; // edx
  __int16 v100; // r13
  _DWORD *v101; // r8
  unsigned __int64 v102; // rdx
  _QWORD *v103; // rdi
  __int64 *v104; // rax
  int v105; // ecx
  int v106; // eax
  __int64 **v107; // [rsp+30h] [rbp-68h]
  __int64 *v108; // [rsp+38h] [rbp-60h]
  __int64 *v109; // [rsp+40h] [rbp-58h]
  __int64 v110; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v111; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v113; // [rsp+B8h] [rbp+20h]
  __int16 v114; // [rsp+B8h] [rbp+20h]
  unsigned __int16 v115; // [rsp+B8h] [rbp+20h]
  int v116; // [rsp+C8h] [rbp+30h]

  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  v8 = a3;
  v9 = 0;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((a3 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      RtlpLogHeapFailure(3, v10, a3, a2, 0LL, 0LL);
  }
  v12 = a7;
  *(_BYTE *)(v8 + 14) = v11;
  v13 = v8 + 16 * a7;
  *(_BYTE *)(v8 + 11) = 0;
  *(_WORD *)(v8 + 8) = a7;
  v14 = (_DWORD *)(v13 + 8);
  while ( ((*(_BYTE *)(v13 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *v14 ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*v14) != ((unsigned __int8)*v14 ^ (unsigned __int8)(BYTE1(*v14) ^ HIWORD(*v14))) )
        RtlpAnalyzeHeapFailure(a1, v13);
    }
    v49 = *(__int64 **)(v13 + 24);
    v50 = (__int64 *)(v13 + 16);
    v51 = *(_QWORD *)(v13 + 16);
    v108 = v49;
    v52 = *v49;
    if ( *v49 != v13 + 16 || v52 != *(_QWORD *)(v51 + 8) )
    {
      RtlpLogHeapFailure(13, a1, (_DWORD)v50, *(_QWORD *)(v51 + 8), v52, 0LL);
      v14 = (_DWORD *)(v13 + 8);
      goto LABEL_142;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)v14;
    v53 = *(__int64 **)(a1 + 312);
    if ( v53 )
    {
      v54 = *(unsigned __int16 *)v14;
      v111 = *(_WORD *)v14;
      while ( 1 )
      {
        v55 = *((unsigned int *)v53 + 2);
        if ( v54 < v55 )
        {
          v61 = v54;
          v62 = v55 - 1;
          goto LABEL_98;
        }
        if ( !*v53 )
          break;
        v53 = (__int64 *)*v53;
        v54 = *(unsigned __int16 *)v14;
      }
      v62 = v55 - 1;
      v61 = v55 - 1;
LABEL_98:
      v12 = a7;
      v63 = v61 - *((_DWORD *)v53 + 6);
      v116 = v63;
      v64 = 2 * v63;
      if ( !*((_DWORD *)v53 + 3) )
        v64 = v63;
      v110 = 8 * v64;
      v107 = (__int64 **)(8 * v64 + v53[6]);
      v65 = *v107;
      --*((_DWORD *)v53 + 4);
      if ( v61 == v62 )
        --*((_DWORD *)v53 + 5);
      if ( v65 == v50 )
      {
        v66 = (__int64 *)v53[4];
        if ( !*v53 )
          LODWORD(v55) = v62;
        v67 = (__int64 *)*v50;
        v109 = (__int64 *)*v50;
        if ( v61 >= (unsigned int)v55 )
        {
          if ( v67 == v66 )
          {
            *v107 = 0LL;
            v69 = (_DWORD *)(v53[5] + 4 * ((unsigned __int64)v63 >> 5));
            goto LABEL_112;
          }
          *v107 = v67;
        }
        else
        {
          if ( v67 == v66 )
            goto LABEL_111;
          v68 = *((_DWORD *)v67 - 2);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v68 ^= *(_DWORD *)(a1 + 136);
            v114 = v68;
            if ( HIBYTE(v68) != ((unsigned __int8)v68 ^ (unsigned __int8)(BYTE1(v68) ^ BYTE2(v68))) )
            {
              RtlpLogHeapFailure(3, a1, (_DWORD)v67 - 16, 0, 0LL, 0LL);
              LOWORD(v68) = v114;
              v49 = v108;
              v67 = v109;
              v63 = v116;
            }
          }
          if ( v111 != (unsigned __int16)v68 )
          {
LABEL_111:
            *(_QWORD *)(v110 + v53[6]) = 0LL;
            v69 = (_DWORD *)(v53[5] + 4 * ((unsigned __int64)v63 >> 5));
LABEL_112:
            *v69 &= ~(1 << (v63 & 0x1F));
            goto LABEL_113;
          }
          *(_QWORD *)(v110 + v53[6]) = v67;
        }
      }
    }
LABEL_113:
    *v49 = v51;
    *(_QWORD *)(v51 + 8) = v49;
    if ( (*(_BYTE *)(v13 + 10) & 8) == 0 || RtlpCommitBlock(a1, v13) )
    {
      if ( a5 )
      {
        v70 = *(_BYTE *)(v13 + 10);
        if ( (v70 & 4) != 0 )
        {
          v71 = 16LL * *(unsigned __int16 *)(v13 + 8) - 32;
          if ( (v70 & 2) != 0 && v71 > 4 )
            v71 = 16LL * *(unsigned __int16 *)(v13 + 8) - 36;
          v72 = RtlCompareMemoryUlong((PVOID)(v13 + 32), v71, 0xFEEEFEEE);
          if ( v72 != v71 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v13,
              (const void *)(v72 + v13 + 32));
            RtlpBreakPointHeap();
          }
        }
      }
      *(_BYTE *)(v8 + 10) = *(_BYTE *)(v13 + 10);
      v73 = *(unsigned __int16 *)(v13 + 8) + v12;
      if ( v73 > 0xFF00 )
      {
        RtlpInsertFreeBlock(a1, v8, v73);
        return 1;
      }
      *(_WORD *)(v8 + 8) = v73;
      *(_WORD *)(v8 + 16 * v73 + 12) = *(_WORD *)(a1 + 140) ^ v73;
      *(_BYTE *)(v8 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(v8 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v101 = (_DWORD *)(v8 + 32);
          v102 = (16 * (unsigned __int64)(unsigned __int16)v73 - 32) >> 2;
          if ( v102 )
          {
            if ( ((unsigned __int8)v101 & 4) != 0 )
            {
              --v102;
              *v101 = -17891602;
              v101 = (_DWORD *)(v8 + 36);
            }
            memset64(v101, 0xFEEEFEEEFEEEFEEEuLL, v102 >> 1);
            if ( (v102 & 1) != 0 )
              v101[v102 - 1] = -17891602;
          }
          *(_BYTE *)(v8 + 10) |= 4u;
        }
        v103 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v73);
        else
          Entry = (_QWORD *)*v103;
        if ( v103 != Entry )
        {
          v105 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v105 )
            {
              v106 = *((_DWORD *)Entry - 2);
              v105 = *(_DWORD *)(a1 + 124);
              if ( (v105 & v106) != 0 )
                LOWORD(v106) = *(_WORD *)(a1 + 136) ^ v106;
            }
            else
            {
              LOWORD(v106) = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)v73 <= (unsigned __int64)(unsigned __int16)v106 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v103 != Entry );
        }
        v104 = (__int64 *)Entry[1];
        v79 = (_QWORD *)(v8 + 16);
        if ( (_QWORD *)*v104 == Entry )
        {
          *v79 = Entry;
          *(_QWORD *)(v8 + 24) = v104;
          *v104 = (__int64)v79;
          Entry[1] = v79;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v104, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
        v80 = *(_QWORD **)(a1 + 312);
        if ( !v80 )
          goto LABEL_54;
        v81 = *(unsigned __int16 *)(v8 + 8);
        while ( 1 )
        {
          v82 = *((unsigned int *)v80 + 2);
          if ( v81 < v82 )
            goto LABEL_195;
          Entry = (_QWORD *)*v80;
          if ( !*v80 )
            break;
          v80 = (_QWORD *)*v80;
        }
LABEL_194:
        LODWORD(v81) = v82 - 1;
      }
      else
      {
        *(_BYTE *)(v8 + 10) = 0;
        v74 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v73);
        else
          Entry = (_QWORD *)*v74;
        if ( v74 != Entry )
        {
          v76 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v76 )
            {
              v77 = *((_DWORD *)Entry - 2);
              v76 = *(_DWORD *)(a1 + 124);
              if ( (v76 & v77) != 0 )
                LOWORD(v77) = *(_WORD *)(a1 + 136) ^ v77;
            }
            else
            {
              LOWORD(v77) = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)v73 <= (unsigned __int64)(unsigned __int16)v77 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v74 != Entry );
        }
        v78 = (__int64 *)Entry[1];
        v79 = (_QWORD *)(v8 + 16);
        if ( (_QWORD *)*v78 == Entry )
        {
          *v79 = Entry;
          *(_QWORD *)(v8 + 24) = v78;
          *v78 = (__int64)v79;
          Entry[1] = v79;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v78, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
        v80 = *(_QWORD **)(a1 + 312);
        if ( !v80 )
          goto LABEL_54;
        v81 = *(unsigned __int16 *)(v8 + 8);
        while ( 1 )
        {
          v82 = *((unsigned int *)v80 + 2);
          if ( v81 < v82 )
            break;
          Entry = (_QWORD *)*v80;
          if ( !*v80 )
            goto LABEL_194;
          v80 = (_QWORD *)*v80;
        }
      }
LABEL_195:
      LOBYTE(Entry) = 1;
      RtlpHeapAddListEntry(a1, (_DWORD)v80, (_DWORD)Entry, (_DWORD)v79, v81, *(unsigned __int16 *)(v8 + 8));
      goto LABEL_54;
    }
    RtlpDeCommitFreeBlock(a1, v13, *(unsigned __int16 *)(v13 + 8), 1);
LABEL_142:
    if ( v9 )
      return 0;
    v9 = 1;
  }
  v15 = (unsigned __int16)v12;
  *(_WORD *)(v13 + 12) = *(_WORD *)(a1 + 140) ^ v12;
  *(_BYTE *)(v8 + 15) = 0;
  if ( a5 )
  {
    *(_BYTE *)(v8 + 10) &= 0xF0u;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
    {
      v83 = (_DWORD *)(v8 + 32);
      v84 = (16 * (unsigned __int64)(unsigned __int16)v12 - 32) >> 2;
      if ( v84 )
      {
        if ( ((unsigned __int8)v83 & 4) != 0 )
        {
          --v84;
          *v83 = -17891602;
          v83 = (_DWORD *)(v8 + 36);
        }
        memset64(v83, 0xFEEEFEEEFEEEFEEEuLL, v84 >> 1);
        if ( (v84 & 1) != 0 )
          v83[v84 - 1] = -17891602;
      }
      *(_BYTE *)(v8 + 10) |= 4u;
    }
    v85 = (_QWORD *)(a1 + 336);
    if ( *(_QWORD *)(a1 + 312) )
      v86 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v12);
    else
      v86 = (_QWORD *)*v85;
    if ( v85 != v86 )
    {
      v97 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v97 )
        {
          v98 = *((_DWORD *)v86 - 2);
          v97 = *(_DWORD *)(a1 + 124);
          if ( (v97 & v98) != 0 )
            LOWORD(v98) = *(_WORD *)(a1 + 136) ^ v98;
        }
        else
        {
          LOWORD(v98) = *((_WORD *)v86 - 4);
        }
        if ( (unsigned __int16)v12 <= (unsigned __int64)(unsigned __int16)v98 )
          break;
        v86 = (_QWORD *)*v86;
      }
      while ( v85 != v86 );
    }
    v87 = (__int64 *)v86[1];
    v88 = (_QWORD *)(v8 + 16);
    if ( (_QWORD *)*v87 == v86 )
    {
      *v88 = v86;
      *(_QWORD *)(v8 + 24) = v87;
      *v87 = (__int64)v88;
      v86[1] = v88;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)v86, 0, *v87, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
    v89 = *(__int64 **)(a1 + 312);
    if ( !v89 )
      goto LABEL_54;
    v90 = *(unsigned __int16 *)(v8 + 8);
    while ( 1 )
    {
      v91 = *((unsigned int *)v89 + 2);
      if ( v90 < v91 )
        break;
      if ( !*v89 )
      {
        v92 = v91 - 1;
        LODWORD(v90) = v91 - 1;
        goto LABEL_168;
      }
      v89 = (__int64 *)*v89;
    }
    v92 = v91 - 1;
LABEL_168:
    v93 = v90 - *((_DWORD *)v89 + 6);
    v115 = *(_WORD *)(v8 + 8);
    v94 = v89[6];
    v95 = 2 * v93;
    if ( !*((_DWORD *)v89 + 3) )
      v95 = v93;
    ++*((_DWORD *)v89 + 4);
    v96 = *(_QWORD *)(v94 + 8 * v95);
    if ( (_DWORD)v90 == v92 )
      ++*((_DWORD *)v89 + 5);
    if ( !v96 )
      goto LABEL_173;
    v99 = *(_DWORD *)(v96 - 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v99 ^= *(_DWORD *)(a1 + 136);
      v100 = v99;
      if ( HIBYTE(v99) != ((unsigned __int8)v99 ^ (unsigned __int8)(BYTE1(v99) ^ BYTE2(v99))) )
      {
        RtlpLogHeapFailure(3, a1, v96 - 16, 0, 0LL, 0LL);
        LOWORD(v99) = v100;
      }
    }
    if ( v115 - (unsigned __int16)v99 <= 0 )
    {
LABEL_173:
      *(_QWORD *)(v89[6] + 8 * v95) = v88;
      if ( !v96 )
        *(_DWORD *)(v89[5] + 4 * ((unsigned __int64)v93 >> 5)) |= 1 << (v93 & 0x1F);
    }
    goto LABEL_54;
  }
  *(_BYTE *)(v8 + 10) = 0;
  v16 = (_QWORD **)(a1 + 336);
  v17 = *(__int64 **)(a1 + 312);
  if ( !v17 )
  {
    v21 = *v16;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v18 = *((unsigned int *)v17 + 2);
    if ( v15 < v18 )
    {
      v19 = v15;
      goto LABEL_12;
    }
    if ( !*v17 )
      break;
    v17 = (__int64 *)*v17;
  }
  v19 = v18 - 1;
LABEL_12:
  v20 = *((_DWORD *)v17 + 6);
  while ( 2 )
  {
    v21 = (_QWORD *)v17[4];
    v22 = (unsigned int)(v19 - v20);
    v23 = (_QWORD *)v21[1];
    if ( v21 != v23 )
    {
      v24 = *((_DWORD *)v23 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v24 ^= *(_DWORD *)(a1 + 136);
        v25 = v24;
        if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(BYTE1(v24) ^ BYTE2(v24))) )
        {
          RtlpLogHeapFailure(3, a1, (_DWORD)v23 - 16, 0, 0LL, 0LL);
          LOWORD(v24) = v25;
        }
      }
      if ( (int)(v15 - (unsigned __int16)v24) <= 0 )
      {
        v26 = *v21 - 16LL;
        v27 = *(_DWORD *)(v26 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v27 ^= *(_DWORD *)(a1 + 136);
          v28 = v27;
          if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
          {
            RtlpLogHeapFailure(3, a1, v26, 0, 0LL, 0LL);
            LOWORD(v27) = v28;
          }
        }
        if ( (int)(v15 - (unsigned __int16)v27) <= 0 )
        {
          v21 = (_QWORD *)*v21;
          break;
        }
        if ( !*v17 && v19 == *((_DWORD *)v17 + 2) - 1 )
        {
          if ( *((_DWORD *)v17 + 3) )
            v22 = (unsigned int)(2 * v22);
          for ( i = *(_QWORD **)(v17[6] + 8 * v22); v21 != i; i = (_QWORD *)*i )
          {
            v59 = *((_DWORD *)i - 2);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v59 ^= *(_DWORD *)(a1 + 136);
              v60 = v59;
              if ( HIBYTE(v59) != ((unsigned __int8)v59 ^ (unsigned __int8)(BYTE1(v59) ^ BYTE2(v59))) )
              {
                RtlpLogHeapFailure(3, a1, (_DWORD)i - 16, 0, 0LL, 0LL);
                LOWORD(v59) = v60;
              }
            }
            if ( (int)(v15 - (unsigned __int16)v59) <= 0 )
            {
              v21 = i;
              goto LABEL_31;
            }
          }
        }
        else
        {
          v29 = v17[5];
          v30 = (unsigned int)v22 >> 5;
          v31 = *(_DWORD *)(v29 + 4 * v30) & (-1 << (v22 & 0x1F));
          v32 = v29 + 4 * v30;
          if ( v31 )
          {
LABEL_25:
            if ( (_WORD)v31 )
            {
              if ( (_BYTE)v31 )
                v33 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v31];
              else
                v33 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v31)] + 8;
            }
            else if ( (v31 & 0xFF0000) != 0 )
            {
              v33 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v31)] + 16;
            }
            else
            {
              v33 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v31 >> 24] + 24;
            }
            v34 = 32 * v30 + v33;
            v35 = 2 * v34;
            if ( !*((_DWORD *)v17 + 3) )
              v35 = v34;
            v21 = *(_QWORD **)(v17[6] + 8LL * v35);
            break;
          }
          while ( (unsigned int)v30 <= ((unsigned int)(*((_DWORD *)v17 + 2) - *((_DWORD *)v17 + 6)) >> 5) - 1 )
          {
            v31 = *(_DWORD *)(v32 + 4);
            v32 += 4LL;
            LODWORD(v30) = v30 + 1;
            if ( v31 )
              goto LABEL_25;
          }
        }
LABEL_67:
        v17 = (__int64 *)*v17;
        v19 = *((_DWORD *)v17 + 6);
        v20 = v19;
        continue;
      }
    }
    break;
  }
LABEL_31:
  if ( !v21 )
    goto LABEL_67;
  v8 = a3;
  v16 = (_QWORD **)(a1 + 336);
LABEL_33:
  if ( v16 != v21 )
  {
    v36 = *(_DWORD *)(a1 + 124);
    do
    {
      if ( v36 )
      {
        v37 = *((_DWORD *)v21 - 2);
        v36 = *(_DWORD *)(a1 + 124);
        if ( (v36 & v37) != 0 )
          LOWORD(v37) = *(_WORD *)(a1 + 136) ^ v37;
      }
      else
      {
        LOWORD(v37) = *((_WORD *)v21 - 4);
      }
      if ( v15 <= (unsigned __int16)v37 )
        break;
      v21 = (_QWORD *)*v21;
    }
    while ( v16 != v21 );
  }
  v38 = (__int64 *)v21[1];
  v39 = (_QWORD *)(v8 + 16);
  if ( (_QWORD *)*v38 == v21 )
  {
    *v39 = v21;
    *(_QWORD *)(v8 + 24) = v38;
    *v38 = (__int64)v39;
    v21[1] = v39;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v21, 0, *v38, 0LL);
  }
  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
  v40 = *(__int64 **)(a1 + 312);
  if ( v40 )
  {
    v41 = *(unsigned __int16 *)(v8 + 8);
    while ( 1 )
    {
      v42 = *((unsigned int *)v40 + 2);
      if ( v41 < v42 )
      {
        v43 = v42 - 1;
        goto LABEL_47;
      }
      if ( !*v40 )
        break;
      v40 = (__int64 *)*v40;
    }
    v43 = v42 - 1;
    LODWORD(v41) = v42 - 1;
LABEL_47:
    v44 = v41 - *((_DWORD *)v40 + 6);
    v113 = *(_WORD *)(v8 + 8);
    v45 = v40[6];
    v46 = 2 * v44;
    if ( !*((_DWORD *)v40 + 3) )
      v46 = v44;
    ++*((_DWORD *)v40 + 4);
    v47 = *(_QWORD *)(v45 + 8 * v46);
    if ( (_DWORD)v41 == v43 )
      ++*((_DWORD *)v40 + 5);
    if ( !v47 )
      goto LABEL_52;
    v56 = *(_DWORD *)(v47 - 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v56 ^= *(_DWORD *)(a1 + 136);
      v57 = v56;
      if ( HIBYTE(v56) != ((unsigned __int8)v56 ^ (unsigned __int8)(BYTE1(v56) ^ BYTE2(v56))) )
      {
        RtlpLogHeapFailure(3, a1, v47 - 16, 0, 0LL, 0LL);
        LOWORD(v56) = v57;
      }
    }
    if ( v113 - (unsigned __int16)v56 <= 0 )
    {
LABEL_52:
      *(_QWORD *)(v40[6] + 8 * v46) = v39;
      if ( !v47 )
        *(_DWORD *)(v40[5] + 4 * ((unsigned __int64)v44 >> 5)) |= 1 << (v44 & 0x1F);
    }
  }
LABEL_54:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
    *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 1;
}
