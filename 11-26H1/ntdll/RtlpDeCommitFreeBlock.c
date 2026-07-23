/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x180010D40
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapSegment @ 0x1800D9FA4 (RtlpValidateHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x180103CD4 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180146460 (RtlZeroHeap.c)
 * Callees:
 *     RtlpCollectFreeBlocks @ 0x180002140 (RtlpCollectFreeBlocks.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180011D90 (RtlpInsertFreeBlock.c)
 *     RtlpHeapHandleError @ 0x180012590 (RtlpHeapHandleError.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x180014CA0 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180014E80 (RtlpInsertUCRBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapContractEvent @ 0x180095098 (RtlpLogHeapContractEvent.c)
 *     RtlpRemoveUCRBlock @ 0x1800D6D64 (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapDecommit @ 0x180114424 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163160 (RtlCompareMemoryUlong.c)
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
  SIZE_T v33; // r14
  SIZE_T v34; // r12
  unsigned int v35; // r8d
  char v36; // al
  SIZE_T v37; // r14
  SIZE_T v38; // r12
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
  __int64 v52; // rsi
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  _BYTE *v56; // rsi
  __int64 v57; // rdi
  unsigned __int64 v58; // rdi
  bool v59; // cc
  __int64 v60; // rdx
  unsigned __int64 v61; // rdi
  __int64 v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  __int64 v67; // r12
  __int64 v68; // rcx
  _BYTE *v69; // rsi
  __int64 v70; // rdi
  unsigned __int64 v71; // rdi
  __int64 v72; // rdx
  unsigned __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // r9
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rax
  void *TraceHandle; // rax
  bool v82; // zf
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  int v85[2]; // [rsp+40h] [rbp-30h] BYREF
  int v86[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v87; // [rsp+50h] [rbp-20h]
  __int64 v88; // [rsp+58h] [rbp-18h]
  __int64 v89; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v90; // [rsp+68h] [rbp-8h]
  char v91; // [rsp+B0h] [rbp+40h]
  unsigned __int64 v92; // [rsp+C0h] [rbp+50h] BYREF

  v92 = a3;
  v4 = *(_QWORD *)(a1 + 360);
  v5 = 0;
  *(_QWORD *)v86 = 0LL;
  v7 = a3;
  *(_QWORD *)v85 = 0LL;
  v89 = 0LL;
  v88 = 0LL;
  v91 = 0;
  if ( RtlpHeapKey != v4 )
    goto LABEL_17;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      v78 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
      v82 = v78 == a2 + 80;
      v79 = v78 + 4096;
      if ( !v82 )
        v79 = v78;
      v80 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
      if ( v80 > v79 )
        *(_QWORD *)(a1 + 664) -= v80 - v79;
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
  v87 = a2;
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
    v90 = v14;
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
        v14 = v90;
      }
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      if ( (*(_BYTE *)(v13 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v36 = *(_BYTE *)(v13 + 10);
        if ( (v36 & 4) != 0 )
        {
          v37 = 16LL * *(unsigned __int16 *)(v13 + 8) - 32;
          if ( (v36 & 2) != 0 && v37 > 4 )
            v37 = 16LL * *(unsigned __int16 *)(v13 + 8) - 36;
          v38 = RtlCompareMemoryUlong((PVOID)(v13 + 32), v37, 0xFEEEFEEE);
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
        v87 = v13;
        v92 = v7;
        *(_WORD *)(v13 + 16 * v7 + 12) = v25;
      }
      else
      {
        LOBYTE(v77) = 1;
        RtlpDeCommitFreeBlock(a1, v13, *(unsigned __int16 *)(v13 + 8), v77);
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
    v90 = v21;
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
        v21 = v90;
      }
      *v21 = v28;
      *(_QWORD *)(v28 + 8) = v21;
      if ( (*(_BYTE *)(v26 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v22 = *(_BYTE *)(v26 + 10);
        if ( (v22 & 4) != 0 )
        {
          v33 = 16LL * *(unsigned __int16 *)(v26 + 8) - 32;
          if ( (v22 & 2) != 0 && v33 > 4 )
            v33 = 16LL * *(unsigned __int16 *)(v26 + 8) - 36;
          v34 = RtlCompareMemoryUlong((PVOID)(v26 + 32), v33, 0xFEEEFEEE);
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
          v11 = v87;
        }
        *(_BYTE *)(v11 + 10) = 0;
        *(_BYTE *)(v11 + 15) = 0;
        v7 += *(unsigned __int16 *)(v26 + 8);
        *(_WORD *)(v11 + 8) = v7;
        v23 = *(_WORD *)(a1 + 140) ^ v7;
        v92 = v7;
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
    v88 = *(_QWORD *)(v42 + 48);
    v83 = *(_QWORD *)(v42 + 56);
    --*(_DWORD *)(v41 + 84);
    v87 = v83;
    *(_DWORD *)(v41 + 80) -= *(_QWORD *)(v42 + 56) >> 12;
    *(_QWORD *)(a1 + 576) += *(_QWORD *)(v42 + 56);
    --*(_DWORD *)(a1 + 604);
    v84 = *(_QWORD *)(v42 + 56);
    if ( v84 >= 0xFF000 )
      *(_QWORD *)(a1 + 584) -= v84;
    v5 = 1;
    v7 += (*(_QWORD *)(v42 + 56) >> 4) + 64LL;
    v91 = 1;
    v92 = v7;
  }
  else
  {
    v87 = 0LL;
  }
  if ( *(_WORD *)(a1 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_73;
  *(_QWORD *)v86 = v11;
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
    v5 = v91;
LABEL_73:
    v43 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v86 = v43;
    if ( v43 == v11 + 80 )
    {
      v43 += 4096LL;
      *(_QWORD *)v86 = v43;
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
    v66 = v45 - v43;
    v67 = 2147353472LL;
    *(_QWORD *)v85 = v66;
    if ( a4 || *(_BYTE *)(v42 + 15) == 3 )
    {
      if ( !v66 )
      {
LABEL_131:
        if ( !v91 )
        {
          v69 = (_BYTE *)(*(_QWORD *)v86 + *(_QWORD *)v85);
          v70 = 16 * v7;
          *(_WORD *)(*(_QWORD *)v86 + *(_QWORD *)v85 + 12LL) = *(_WORD *)(a1 + 140);
          if ( v70 + v11 == *(_QWORD *)v85 + *(_QWORD *)v86 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v69[11] = v69[8] ^ v69[9] ^ v69[10];
              *((_DWORD *)v69 + 2) ^= *(_DWORD *)(a1 + 136);
            }
          }
          else
          {
            v69[15] = 0;
            v69[10] = 0;
            v71 = (unsigned __int64)(v11 + v70 - *(_QWORD *)v85 - *(_QWORD *)v86) >> 4;
            v59 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v69 + 4) = v71;
            if ( !v59 && (unsigned __int16)v71 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("(LONG)FreeEntry->Size > 1");
              RtlpHeapHandleError(1LL);
            }
            v69[11] = 0;
            v72 = *(_QWORD *)(v41 + 40);
            if ( v72 == v41 )
            {
              LOBYTE(v73) = 0;
            }
            else
            {
              v73 = ((unsigned __int64)&v69[-v41] >> 16) + 1;
              if ( v73 >= 0xFE )
                RtlpLogHeapFailure(3, v72, (_DWORD)v69, v41, 0LL, 0LL);
            }
            v69[14] = v73;
            RtlpInsertFreeBlock(a1, v69);
          }
        }
        RtlpCreateUCREntry(a1, v41, v86[0] - 48, v85[0], v11, (__int64)&v89);
        RtlpInsertFreeBlock(a1, v11);
        if ( RtlGetCurrentServiceSessionId() )
          v74 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v74 = 2147353472LL;
        if ( *(_BYTE *)v74 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v67 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(
            a1,
            v86[0],
            v85[0],
            16 * *(_QWORD *)(a1 + 192),
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v67);
        }
        v75 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v76 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v76 = 2147353482LL;
        if ( *(_BYTE *)v76 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v75 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapContractEvent(
            a1,
            v86[0],
            v85[0],
            16 * *(_QWORD *)(a1 + 192),
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v75);
        }
        return;
      }
    }
    else if ( !v66 || v66 < *(_QWORD *)(a1 + 176) )
    {
      goto LABEL_204;
    }
    ++*(_DWORD *)(a1 + 612);
    if ( (int)RtlpSecMemFreeVirtualMemory(v66, v86, v85, 0x4000LL) >= 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v68 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v68 = 2147353472LL;
      if ( *(_BYTE *)v68 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapDecommit(a1, *(_QWORD *)v86, *(_QWORD *)v85, 6LL);
      goto LABEL_131;
    }
    ++*(_DWORD *)(a1 + 628);
    v82 = v91 == 0;
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
    v47 = *(_QWORD *)v86;
    v49 = RtlpHeapErrorHandlerThreshold;
  }
  v50 = 16 * v7;
  if ( !v91 )
    v50 -= 32LL;
  v51 = ((v11 + v50) & 0xFFFFFFFFFFFFF000uLL) - v47;
  *(_QWORD *)v85 = v51;
  if ( !v51 )
  {
    if ( v49 < 1 || !v91 )
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
  if ( (int)RtlpSecMemFreeVirtualMemory(v51, v86, v85, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(a1 + 628);
    v82 = v91 == 0;
LABEL_192:
    if ( !v82 )
      RtlpCreateUCREntry(a1, v41, v88 - 48, v87, v11, (__int64)&v92);
    RtlpInsertFreeBlock(a1, v11);
    return;
  }
  v52 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v53 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v53 = 2147353472LL;
  if ( *(_BYTE *)v53 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(a1, *(_QWORD *)v86, *(_QWORD *)v85, 5LL);
  ++*(_DWORD *)(a1 + 612);
  v54 = v48[5];
  if ( v54 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) -= v54;
  RtlpRemoveUCRBlock(a1, v48);
  v48[5] += *(_QWORD *)v85;
  RtlpInsertUCRBlock(a1, v48);
  *(_DWORD *)(v41 + 80) += *(_QWORD *)v85 >> 12;
  *(_QWORD *)(a1 + 576) -= *(_QWORD *)v85;
  v55 = v48[5];
  if ( v55 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) += v55;
  if ( !v91 )
  {
    v56 = (_BYTE *)(*(_QWORD *)v86 + *(_QWORD *)v85);
    v57 = 16 * v7;
    *(_WORD *)(*(_QWORD *)v86 + *(_QWORD *)v85 + 12LL) = *(_WORD *)(a1 + 140);
    if ( v57 + v11 == *(_QWORD *)v85 + *(_QWORD *)v86 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v56[11] = v56[8] ^ v56[9] ^ v56[10];
        *((_DWORD *)v56 + 2) ^= *(_DWORD *)(a1 + 136);
      }
    }
    else
    {
      v56[15] = 0;
      v56[10] = 0;
      v58 = (unsigned __int64)(v57 - *(_QWORD *)v85) >> 4;
      v59 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v56 + 4) = v58;
      if ( !v59 && (unsigned __int16)v58 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v56[11] = 0;
      v60 = *(_QWORD *)(v41 + 40);
      if ( v60 == v41 )
      {
        LOBYTE(v61) = 0;
      }
      else
      {
        v61 = ((unsigned __int64)&v56[-v41] >> 16) + 1;
        if ( v61 >= 0xFE )
          RtlpLogHeapFailure(3, v60, (_DWORD)v56, v41, 0LL, 0LL);
      }
      v56[14] = v61;
      RtlpInsertFreeBlock(a1, v56);
    }
    v52 = 2147353472LL;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v62 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v62 = 2147353472LL;
  if ( *(_BYTE *)v62 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v52 = (__int64)NtCurrentPeb()->SharedData + 550;
    TraceHandle = (void *)*(unsigned __int8 *)v52;
    v63 = v87;
    RtlpLogHeapContractEvent(a1, v86[0], v85[0], 16 * *(_QWORD *)(a1 + 192), v91, v87, TraceHandle);
  }
  else
  {
    v63 = v87;
  }
  v64 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v65 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v65 = 2147353482LL;
  if ( *(_BYTE *)v65 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v64 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapContractEvent(a1, v86[0], v85[0], 16 * *(_QWORD *)(a1 + 192), v91, v63, (HANDLE)*(unsigned __int8 *)v64);
  }
}
