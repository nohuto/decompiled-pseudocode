/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x180025C70
 * Callers:
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180024F50 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180028190 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180028890 (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapSegment @ 0x1800DD034 (RtlpValidateHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x180104954 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1801465B0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpCollectFreeBlocks @ 0x180017060 (RtlpCollectFreeBlocks.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180025AF0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180025C70 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180026CC0 (RtlpInsertFreeBlock.c)
 *     RtlpHeapHandleError @ 0x1800274C0 (RtlpHeapHandleError.c)
 *     RtlpCommitBlock @ 0x1800274E0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x180029BD0 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180029DB0 (RtlpInsertUCRBlock.c)
 *     RtlpLogHeapContractEvent @ 0x180072390 (RtlpLogHeapContractEvent.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpRemoveUCRBlock @ 0x1800D9DA4 (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapDecommit @ 0x180114C28 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163260 (RtlCompareMemoryUlong.c)
 */

void __fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // rax
  char v5; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 *v21; // rcx
  char v22; // al
  __int16 v23; // cx
  unsigned __int64 v24; // rdi
  __int16 v25; // cx
  __int64 v26; // rsi
  int v27; // edx
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r14
  __int64 v34; // r12
  unsigned int v35; // r8d
  char v36; // al
  unsigned __int64 v37; // r14
  __int64 v38; // r12
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // r13
  __int64 v42; // rsi
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  _QWORD *v46; // rdx
  __int64 v47; // r8
  _QWORD *v48; // r12
  int v49; // edx
  __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rsi
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // rax
  _BYTE *v64; // rsi
  __int64 v65; // rdi
  unsigned __int64 v66; // rdi
  bool v67; // cc
  __int64 v68; // rdx
  unsigned __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdi
  __int64 v79; // rcx
  unsigned __int64 v80; // rcx
  __int64 v81; // r12
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  _BYTE *v87; // rsi
  __int64 v88; // rdi
  unsigned __int64 v89; // rdi
  __int64 v90; // rdx
  unsigned __int64 v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdi
  __int64 v104; // rcx
  __int64 v105; // r9
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rdx
  unsigned __int64 v108; // rax
  __int64 v109; // rax
  bool v110; // zf
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v114; // [rsp+48h] [rbp-28h] BYREF
  __int64 v115; // [rsp+50h] [rbp-20h]
  __int64 v116; // [rsp+58h] [rbp-18h]
  __int64 v117; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v118; // [rsp+68h] [rbp-8h]
  char v119; // [rsp+B0h] [rbp+40h]
  unsigned __int64 v120; // [rsp+C0h] [rbp+50h] BYREF

  v120 = a3;
  v4 = *(_QWORD *)(a1 + 360);
  v5 = 0;
  v114 = 0LL;
  v7 = a3;
  v113 = 0LL;
  v117 = 0LL;
  v116 = 0LL;
  v119 = 0;
  if ( RtlpHeapKey != v4 )
    goto LABEL_17;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      v106 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
      v110 = v106 == a2 + 80;
      v107 = v106 + 4096;
      if ( !v110 )
        v107 = v106;
      v108 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
      if ( v108 > v107 )
        *(_QWORD *)(a1 + 664) -= v108 - v107;
    }
    v11 = a2;
    goto LABEL_68;
  }
  if ( a3 < *(_QWORD *)(a1 + 176)
    || (v10 = a3 + *(_QWORD *)(a1 + 192), v10 < *(_QWORD *)(a1 + 184))
    || v10 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
  {
LABEL_17:
    RtlpInsertFreeBlock(a1, a2);
    return;
  }
  v11 = a2;
  v12 = *(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  v115 = a2;
  v12 *= 16LL;
  v13 = a2 - v12;
  if ( a2 - v12 != a2
    && ((*(_BYTE *)(v13 + 10) ^ (unsigned __int8)((*(_DWORD *)(a1 + 124) >> 20) & *(_BYTE *)(a1 + 138))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*(_DWORD *)(v13 + 8)) != ((unsigned __int8)*(_DWORD *)(v13 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v13 + 8)) ^ HIWORD(*(_DWORD *)(v13 + 8)))) )
        RtlpAnalyzeHeapFailure(a1, v13);
    }
    v14 = *(__int64 **)(v13 + 24);
    v15 = *(_QWORD *)(v13 + 16);
    v118 = v14;
    v16 = *v14;
    v17 = *(_QWORD *)(v15 + 8);
    if ( *v14 == v13 + 16 && v16 == v17 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v13 + 8);
      v18 = *(_QWORD *)(a1 + 312);
      if ( v18 )
      {
        while ( 1 )
        {
          v19 = *(unsigned int *)(v18 + 8);
          if ( *(unsigned __int16 *)(v13 + 8) < v19 )
          {
            v35 = *(unsigned __int16 *)(v13 + 8);
            goto LABEL_54;
          }
          if ( !*(_QWORD *)v18 )
            break;
          v18 = *(_QWORD *)v18;
        }
        v35 = v19 - 1;
LABEL_54:
        RtlpHeapRemoveListEntry(a1, v18, 1, (__int64 *)(v13 + 16), v35, *(unsigned __int16 *)(v13 + 8));
        v14 = v118;
      }
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      if ( (*(_BYTE *)(v13 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v13, a3) )
      {
        v36 = *(_BYTE *)(v13 + 10);
        if ( (v36 & 4) != 0 )
        {
          v37 = 16LL * *(unsigned __int16 *)(v13 + 8) - 32;
          if ( (v36 & 2) != 0 && v37 > 4 )
            v37 = 16LL * *(unsigned __int16 *)(v13 + 8) - 36;
          v38 = RtlCompareMemoryUlong(v13 + 32, v37, 4277075694LL);
          if ( v38 != v37 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v13,
              (const void *)(v38 + v13 + 32));
            RtlpBreakPointHeap();
          }
        }
        v11 = v13;
        v7 += *(unsigned __int16 *)(v13 + 8);
        *(_BYTE *)(v13 + 10) = 0;
        *(_BYTE *)(v13 + 15) = 0;
        *(_WORD *)(v13 + 8) = v7;
        v25 = *(_WORD *)(a1 + 140) ^ v7;
        v115 = v13;
        v120 = v7;
        *(_WORD *)(v13 + 16 * v7 + 12) = v25;
      }
      else
      {
        LOBYTE(v105) = 1;
        RtlpDeCommitFreeBlock(a1, v13, *(unsigned __int16 *)(v13 + 8), v105);
      }
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v13 + 16, v17, v16, 0LL);
    }
  }
  v26 = v11 + 16 * v7;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v27 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v26 + 8);
    if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v26 + 8)) >> 8) ^ BYTE2(v27))) )
      RtlpLogHeapFailure(3, a1, v11 + 16 * v7, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v26 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v26 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*(_DWORD *)(v26 + 8)) != ((unsigned __int8)*(_DWORD *)(v26 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v26 + 8)) ^ HIWORD(*(_DWORD *)(v26 + 8)))) )
        RtlpAnalyzeHeapFailure(a1, v11 + 16 * v7);
    }
    v21 = *(__int64 **)(v26 + 24);
    v28 = *(_QWORD *)(v26 + 16);
    v118 = v21;
    v29 = *v21;
    v30 = *(_QWORD *)(v28 + 8);
    if ( *v21 == v26 + 16 && v29 == v30 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v26 + 8);
      v31 = *(_QWORD *)(a1 + 312);
      if ( v31 )
      {
        v20 = *(unsigned __int16 *)(v26 + 8);
        while ( 1 )
        {
          v32 = *(unsigned int *)(v31 + 8);
          if ( v20 < v32 )
            break;
          if ( !*(_QWORD *)v31 )
          {
            LODWORD(v20) = v32 - 1;
            break;
          }
          v31 = *(_QWORD *)v31;
        }
        RtlpHeapRemoveListEntry(a1, v31, 1, (__int64 *)(v26 + 16), v20, *(unsigned __int16 *)(v26 + 8));
        v21 = v118;
      }
      *v21 = v28;
      *(_QWORD *)(v28 + 8) = v21;
      if ( (*(_BYTE *)(v26 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v11 + 16 * v7, a3) )
      {
        v22 = *(_BYTE *)(v26 + 10);
        if ( (v22 & 4) != 0 )
        {
          v33 = 16LL * *(unsigned __int16 *)(v26 + 8) - 32;
          if ( (v22 & 2) != 0 && v33 > 4 )
            v33 = 16LL * *(unsigned __int16 *)(v26 + 8) - 36;
          v34 = RtlCompareMemoryUlong(v26 + 32, v33, 4277075694LL);
          if ( v34 != v33 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v26,
              (const void *)(v34 + v26 + 32));
            RtlpBreakPointHeap();
          }
          v11 = v115;
        }
        *(_BYTE *)(v11 + 10) = 0;
        *(_BYTE *)(v11 + 15) = 0;
        v7 += *(unsigned __int16 *)(v26 + 8);
        *(_WORD *)(v11 + 8) = v7;
        v23 = *(_WORD *)(a1 + 140) ^ v7;
        v120 = v7;
        *(_WORD *)(v11 + 16 * v7 + 12) = v23;
        break;
      }
      LOBYTE(v39) = 1;
      RtlpDeCommitFreeBlock(a1, v11 + 16 * v7, *(unsigned __int16 *)(v26 + 8), v39);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v26 + 16, v30, v29, 0LL);
    }
  }
  if ( v7 - 257 <= 0xFDFF )
  {
    RtlpInsertFreeBlock(a1, v11);
    v24 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
    if ( v24 < *(_QWORD *)(a1 + 672) - (*(_QWORD *)(a1 + 672) >> 4)
      && v24 > *(_QWORD *)(a1 + 680) - (*(_QWORD *)(a1 + 680) >> 2) )
    {
      RtlpCollectFreeBlocks(a1);
      *(_QWORD *)(a1 + 680) = v24;
      *(_QWORD *)(a1 + 672) = v24;
    }
    return;
  }
  v5 = 0;
LABEL_68:
  v40 = *(unsigned __int8 *)(a2 + 14);
  if ( (_BYTE)v40 )
    v41 = (a2 & 0xFFFFFFFFFFFF0000uLL) - (v40 << 16) + 0x10000;
  else
    v41 = a1;
  v42 = v11 + 16 * v7;
  if ( *(_BYTE *)(v42 + 15) == 3 )
  {
    RtlpRemoveUCRBlock(a1, v42 + 16);
    v116 = *(_QWORD *)(v42 + 48);
    v111 = *(_QWORD *)(v42 + 56);
    --*(_DWORD *)(v41 + 84);
    v115 = v111;
    *(_DWORD *)(v41 + 80) -= *(_QWORD *)(v42 + 56) >> 12;
    *(_QWORD *)(a1 + 576) += *(_QWORD *)(v42 + 56);
    --*(_DWORD *)(a1 + 604);
    v112 = *(_QWORD *)(v42 + 56);
    if ( v112 >= 0xFF000 )
      *(_QWORD *)(a1 + 584) -= v112;
    v5 = 1;
    v7 += (*(_QWORD *)(v42 + 56) >> 4) + 64LL;
    v119 = 1;
    v120 = v7;
  }
  else
  {
    v115 = 0LL;
  }
  if ( *(_WORD *)(a1 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_73;
  v114 = v11;
  v46 = *(_QWORD **)(v41 + 96);
  v47 = v11;
  while ( (_QWORD *)(v41 + 96) != v46 )
  {
    v48 = v46 - 2;
    if ( v46[2] + v46[3] == v11 )
      goto LABEL_88;
    v46 = (_QWORD *)*v46;
  }
  v48 = 0LL;
LABEL_88:
  if ( a4 && !v48 )
  {
    v5 = v119;
LABEL_73:
    v43 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    v114 = v43;
    if ( v43 == v11 + 80 )
    {
      v43 += 4096LL;
      v114 = v43;
    }
    v44 = 16 * v7;
    if ( !v5 )
      v44 -= 32LL;
    v45 = (v11 + v44) & 0xFFFFFFFFFFFFF000uLL;
    if ( v45 < v43 )
    {
      if ( RtlpHeapErrorHandlerThreshold < 1 || !v5 )
        goto LABEL_204;
      if ( NtCurrentPeb()->Ldr )
        goto LABEL_163;
      goto LABEL_165;
    }
    v80 = v45 - v43;
    v81 = 2147353472LL;
    v113 = v80;
    if ( a4 || *(_BYTE *)(v42 + 15) == 3 )
    {
      if ( !v80 )
      {
LABEL_131:
        if ( !v119 )
        {
          v87 = (_BYTE *)(v114 + v113);
          v88 = 16 * v7;
          *(_WORD *)(v114 + v113 + 12) = *(_WORD *)(a1 + 140);
          if ( v88 + v11 == v113 + v114 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v87[11] = v87[8] ^ v87[9] ^ v87[10];
              *((_DWORD *)v87 + 2) ^= *(_DWORD *)(a1 + 136);
            }
          }
          else
          {
            v87[15] = 0;
            v87[10] = 0;
            v89 = (v11 + v88 - v113 - v114) >> 4;
            v67 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v87 + 4) = v89;
            if ( !v67 && (unsigned __int16)v89 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("(LONG)FreeEntry->Size > 1");
              RtlpHeapHandleError(1LL);
            }
            v87[11] = 0;
            v90 = *(_QWORD *)(v41 + 40);
            if ( v90 == v41 )
            {
              LOBYTE(v91) = 0;
            }
            else
            {
              v91 = ((unsigned __int64)&v87[-v41] >> 16) + 1;
              if ( v91 >= 0xFE )
                RtlpLogHeapFailure(3, v90, (_DWORD)v87, v41, 0LL, 0LL);
            }
            v87[14] = v91;
            RtlpInsertFreeBlock(a1, v87);
          }
        }
        RtlpCreateUCREntry(a1, v41, v114 - 48, v113, v11, (__int64)&v117);
        RtlpInsertFreeBlock(a1, v11);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v93, v92, v94, v95) )
          v99 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v99 = 2147353472LL;
        if ( *(_BYTE *)v99 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v99, v96, v97, v98) )
            v81 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(a1, v114, v113, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v81);
        }
        v103 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v99, v96, v97, v98) )
          v104 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v104 = 2147353482LL;
        if ( *(_BYTE *)v104 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v104, v100, v101, v102) )
            v103 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapContractEvent(a1, v114, v113, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, *(unsigned __int8 *)v103);
        }
        return;
      }
    }
    else if ( !v80 || v80 < *(_QWORD *)(a1 + 176) )
    {
      goto LABEL_204;
    }
    ++*(_DWORD *)(a1 + 612);
    if ( (int)RtlpSecMemFreeVirtualMemory(v80, &v114, &v113, 0x4000LL) >= 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v83, v82, v84, v85) )
        v86 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v86 = 2147353472LL;
      if ( *(_BYTE *)v86 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapDecommit(a1, v114, v113, 6LL);
      goto LABEL_131;
    }
    ++*(_DWORD *)(a1 + 628);
    v110 = v119 == 0;
    goto LABEL_192;
  }
  v49 = RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v48 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v11);
    else
      DbgPrint("HEAP: ", (unsigned int)RtlpHeapErrorHandlerThreshold, v11);
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v47 = v114;
    v49 = RtlpHeapErrorHandlerThreshold;
  }
  v50 = 16 * v7;
  if ( !v119 )
    v50 -= 32LL;
  v51 = ((v11 + v50) & 0xFFFFFFFFFFFFF000uLL) - v47;
  v113 = v51;
  if ( !v51 )
  {
    if ( v49 < 1 || !v119 )
      goto LABEL_204;
    if ( NtCurrentPeb()->Ldr )
    {
LABEL_163:
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_164:
      DbgPrint("(!TrailingUCR)");
      RtlpHeapHandleError(1LL);
LABEL_204:
      RtlpInsertFreeBlock(a1, v11);
      return;
    }
LABEL_165:
    DbgPrint("HEAP: ");
    goto LABEL_164;
  }
  if ( (int)RtlpSecMemFreeVirtualMemory(v51, &v114, &v113, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(a1 + 628);
    v110 = v119 == 0;
LABEL_192:
    if ( !v110 )
      RtlpCreateUCREntry(a1, v41, v116 - 48, v115, v11, (__int64)&v120);
    RtlpInsertFreeBlock(a1, v11);
    return;
  }
  v56 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v53, v52, v54, v55) )
    v57 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v57 = 2147353472LL;
  if ( *(_BYTE *)v57 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(a1, v114, v113, 5LL);
  ++*(_DWORD *)(a1 + 612);
  v58 = v48[5];
  if ( v58 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v58;
  RtlpRemoveUCRBlock(a1, v48);
  v48[5] += v113;
  RtlpInsertUCRBlock(a1, v48);
  *(_DWORD *)(v41 + 80) += v113 >> 12;
  *(_QWORD *)(a1 + 576) -= v113;
  v63 = v48[5];
  if ( v63 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) += v63;
  if ( !v119 )
  {
    v64 = (_BYTE *)(v114 + v113);
    v65 = 16 * v7;
    *(_WORD *)(v114 + v113 + 12) = *(_WORD *)(a1 + 140);
    v60 = v113 + v114;
    v59 = v65 + v11;
    if ( v65 + v11 == v113 + v114 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v64[11] = v64[8] ^ v64[9] ^ v64[10];
        *((_DWORD *)v64 + 2) ^= *(_DWORD *)(a1 + 136);
      }
    }
    else
    {
      v64[15] = 0;
      v64[10] = 0;
      v66 = (v65 - v113) >> 4;
      v67 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v64 + 4) = v66;
      if ( !v67 && (unsigned __int16)v66 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v64[11] = 0;
      v68 = *(_QWORD *)(v41 + 40);
      if ( v68 == v41 )
      {
        LOBYTE(v69) = 0;
      }
      else
      {
        v69 = ((unsigned __int64)&v64[-v41] >> 16) + 1;
        if ( v69 >= 0xFE )
          RtlpLogHeapFailure(3, v68, (_DWORD)v64, v41, 0LL, 0LL);
      }
      v64[14] = v69;
      RtlpInsertFreeBlock(a1, v64);
    }
    v56 = 2147353472LL;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v60, v59, v61, v62) )
    v73 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v73 = 2147353472LL;
  if ( *(_BYTE *)v73 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v73, v70, v71, v72) )
      v56 = (__int64)NtCurrentPeb()->SharedData + 550;
    v109 = *(unsigned __int8 *)v56;
    v74 = v115;
    RtlpLogHeapContractEvent(a1, v114, v113, 16 * *(_QWORD *)(a1 + 192), v119, v115, v109);
  }
  else
  {
    v74 = v115;
  }
  v78 = 2147353482LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v73, v70, v71, v72) )
    v79 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v79 = 2147353482LL;
  if ( *(_BYTE *)v79 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v79, v75, v76, v77) )
      v78 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapContractEvent(a1, v114, v113, 16 * *(_QWORD *)(a1 + 192), v119, v74, *(unsigned __int8 *)v78);
  }
}
