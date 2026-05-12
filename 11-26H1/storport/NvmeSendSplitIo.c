/*
 * XREFs of NvmeSendSplitIo @ 0x140040110
 * Callers:
 *     NvmeSplitIoParallel @ 0x14001EFF0 (NvmeSplitIoParallel.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x140119EC0 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     FreeNVMePrpListBufferEntry @ 0x140045980 (FreeNVMePrpListBufferEntry.c)
 *     GetNVMePrpListBufferEntry @ 0x140047000 (GetNVMePrpListBufferEntry.c)
 *     AllocateNewNVMePrpListBufferEntry @ 0x140058120 (AllocateNewNVMePrpListBufferEntry.c)
 *     NvmeRingSQDoorbellForBatchingSplitIo @ 0x14011E100 (NvmeRingSQDoorbellForBatchingSplitIo.c)
 *     NvmeStartIoPolling @ 0x14011E230 (NvmeStartIoPolling.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeSendSplitIo(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        bool *a5,
        __int64 *a6,
        unsigned int *a7,
        _WORD *a8,
        char a9)
{
  __int64 v9; // rbp
  unsigned int v11; // r9d
  char v13; // di
  __int64 NVMePrpListBufferEntry; // r13
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // r15
  __int64 v19; // rax
  bool v20; // zf
  unsigned __int64 v21; // r15
  __int64 v22; // rbx
  unsigned int v23; // edi
  PSLIST_ENTRY v24; // r8
  int v25; // ebp
  unsigned int v26; // edx
  unsigned __int16 Next_high; // si
  char v28; // r12
  __int64 v29; // r9
  __int64 v30; // rdx
  __int16 v31; // cx
  unsigned __int64 v32; // rsi
  __int64 v33; // rdi
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // r10d
  __int64 v40; // rcx
  int v41; // r11d
  __int64 v42; // rdx
  unsigned int v43; // r8d
  unsigned int v44; // eax
  __int64 v45; // r11
  __int64 v46; // r12
  __m128i *v47; // r8
  unsigned int v48; // r9d
  __int64 v49; // r10
  __int64 v50; // rsi
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rax
  unsigned __int16 v54; // r8
  __int64 v55; // rcx
  signed __int16 v56; // ax
  __int64 v57; // r8
  unsigned int v58; // eax
  __int16 v59; // cx
  char v60; // si
  __int64 v61; // rsi
  unsigned __int32 v62; // r12d
  __int64 v63; // r8
  _QWORD *v64; // r12
  __int64 v65; // r15
  __int64 v66; // rax
  _QWORD *v67; // r10
  unsigned int v68; // r8d
  _DWORD *v69; // r11
  unsigned int v70; // eax
  unsigned int v72; // edx
  __int64 v73; // r12
  unsigned int v74; // ecx
  unsigned int v75; // eax
  unsigned int v76; // esi
  __int64 v77; // rdx
  int v78; // r9d
  _QWORD *v79; // rdi
  unsigned int v80; // esi
  _BYTE **v81; // rcx
  char DepthSList; // al
  __int64 v83; // r8
  signed __int32 v84; // ecx
  bool v85; // cl
  __int64 v86; // rdi
  unsigned int v87; // r9d
  signed __int16 v88; // dx
  unsigned int v89; // ecx
  unsigned int v90; // edx
  _QWORD *v91; // rcx
  unsigned int v92; // eax
  int v93; // edi
  unsigned int v94; // eax
  bool v95; // cc
  __int64 v96; // rax
  __int64 v97; // r10
  __int64 v98; // rcx
  __int64 v99; // rax
  void (__fastcall *v100)(__int64, _QWORD, bool); // rax
  __int64 v101; // rdx
  unsigned int v102; // r8d
  __int64 v103; // rcx
  unsigned int v104; // edx
  __int64 v105; // rdi
  signed __int32 v106; // r15d
  _QWORD *v107; // rcx
  signed __int32 v108[8]; // [rsp+0h] [rbp-188h] BYREF
  unsigned __int16 v109; // [rsp+A0h] [rbp-E8h]
  KIRQL v110; // [rsp+A2h] [rbp-E6h]
  unsigned int v111; // [rsp+A4h] [rbp-E4h]
  __int64 v112; // [rsp+A8h] [rbp-E0h]
  char v113; // [rsp+B0h] [rbp-D8h]
  char v114; // [rsp+B1h] [rbp-D7h]
  unsigned int v115; // [rsp+B4h] [rbp-D4h]
  unsigned int v116; // [rsp+B8h] [rbp-D0h]
  unsigned int v117; // [rsp+BCh] [rbp-CCh]
  unsigned int v118; // [rsp+C0h] [rbp-C8h] BYREF
  _QWORD *v119; // [rsp+C8h] [rbp-C0h]
  __int64 v120; // [rsp+D0h] [rbp-B8h]
  __int64 v121; // [rsp+D8h] [rbp-B0h]
  unsigned __int64 v122; // [rsp+E0h] [rbp-A8h]
  unsigned __int64 v123; // [rsp+E8h] [rbp-A0h]
  __int64 v124; // [rsp+F0h] [rbp-98h]
  int v125; // [rsp+F8h] [rbp-90h]
  int v126; // [rsp+FCh] [rbp-8Ch]
  unsigned __int64 v127; // [rsp+100h] [rbp-88h]
  _DWORD *v128; // [rsp+108h] [rbp-80h]
  __int64 v129; // [rsp+110h] [rbp-78h]
  __int64 v130; // [rsp+118h] [rbp-70h]
  __int128 v131; // [rsp+120h] [rbp-68h]
  bool v132; // [rsp+190h] [rbp+8h]

  v9 = *(_QWORD *)(a1 + 16);
  v11 = a2;
  v13 = 0;
  v112 = v9;
  v118 = 0;
  NVMePrpListBufferEntry = 0LL;
  v16 = *(_QWORD *)(v9 + 16);
  v17 = *(_DWORD *)(a1 + 56);
  v18 = *(unsigned int *)(a1 + 52);
  v110 = 0;
  v114 = *(_BYTE *)(v16 + 1728);
  v19 = HIDWORD(*(_QWORD *)(v16 + 136));
  LOBYTE(v19) = v19 & 1;
  v121 = v19;
  v126 = *(unsigned __int16 *)(a1 + 34) + 1;
  v125 = *(unsigned __int16 *)(a1 + 32);
  v122 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 184LL);
  v20 = *(_BYTE *)v122 == 3;
  v113 = *(_BYTE *)v122;
  v132 = v20;
  v124 = *(_QWORD *)(v122 + 24);
  v21 = ((unsigned __int64)(v17 & 0xFFF) + v18 + 4095) >> 12;
  if ( (unsigned int)v21 > 2 )
  {
    NVMePrpListBufferEntry = GetNVMePrpListBufferEntry(v16, v11);
    if ( !NVMePrpListBufferEntry )
    {
      NVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(*(_QWORD *)(v9 + 16), a2);
      if ( !NVMePrpListBufferEntry )
      {
        v62 = -1073741670;
LABEL_103:
        v83 = v124;
        *(_DWORD *)(a1 + 112) = v62;
        _InterlockedExchange((volatile __int32 *)(a1 + 104), 5);
        _InterlockedCompareExchange((volatile signed __int32 *)(v83 + 112), v62, 0);
        v84 = *(unsigned __int16 *)(v83 + 32);
        v85 = _InterlockedIncrement((volatile signed __int32 *)(v83 + 116)) >= v84;
        if ( a5 )
          *a5 = v85;
LABEL_123:
        if ( a6 && *a6 )
        {
          v60 = 1;
          NvmeRingSQDoorbellForBatchingSplitIo(*(_QWORD *)(v9 + 16), *a6, *a7, (unsigned __int16)*a8, v13 ^ 1);
        }
        else
        {
          v60 = 0;
        }
        if ( v13 )
          goto LABEL_51;
        goto LABEL_64;
      }
    }
    v11 = a2;
  }
  if ( a4 )
  {
    v22 = a3;
  }
  else
  {
    v63 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v63 + 136) & 2) != 0 )
      v22 = *(_QWORD *)(v63 + 728) + 192LL * v11;
    else
      v22 = 192LL * *(unsigned __int16 *)(*(_QWORD *)(v63 + 872) + 2LL * v11) + *(_QWORD *)(v63 + 728) - 192LL;
  }
  v13 = 1;
  v110 = KfRaiseIrql(2u);
  LOBYTE(v109) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v22 + 128));
  if ( *(_BYTE *)(*(_QWORD *)(v22 + 88) + 1228LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
    if ( NVMePrpListBufferEntry )
      FreeNVMePrpListBufferEntry(*(_QWORD *)(v9 + 16), a2, NVMePrpListBufferEntry);
    v62 = -1073741810;
    goto LABEL_103;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v22 + 88) + 948LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 104), 3, 1) == 1
      && !_interlockedbittestandset((volatile signed __int32 *)(v124 + 108), 0) )
    {
      NvmeNamespaceQueueIo(v9, *(_QWORD *)(a1 + 24), a2);
    }
    if ( NVMePrpListBufferEntry )
      FreeNVMePrpListBufferEntry(*(_QWORD *)(v9 + 16), a2, NVMePrpListBufferEntry);
    goto LABEL_122;
  }
  v23 = *(_DWORD *)(v22 + 124);
  if ( a4 )
  {
    while ( 1 )
    {
      v25 = *(unsigned __int16 *)(v22 + 142);
      v72 = 0;
      if ( (unsigned __int16)(v25 + 1) < v23 )
        LOWORD(v72) = v25 + 1;
      v117 = v72;
      if ( (_WORD)v72 == *(_WORD *)(v22 + 140) )
        break;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v22 + 142), v72, v25) == v25 )
      {
        Next_high = *a4;
        goto LABEL_15;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
    DepthSList = ExQueryDepthSList((PSLIST_HEADER)(v22 + 64));
    v9 = v112;
    StorEtwNvmeControllerEvent(
      *(_QWORD *)(v112 + 16),
      1,
      2,
      (unsigned int)L"Failed to get free slot for split IO",
      (__int64)L"SQ ID",
      *(_WORD *)(v22 + 136),
      (__int64)L"SQ head",
      *(_WORD *)(v22 + 140),
      (__int64)L"SQ tail",
      *(_WORD *)(v22 + 142),
      (__int64)L"Command ID",
      *a4,
      (__int64)L"IO SQ count",
      *(_WORD *)(*(_QWORD *)(v112 + 16) + 22LL),
      (__int64)L"IO CQ count",
      *(_WORD *)(*(_QWORD *)(v112 + 16) + 26LL),
      (__int64)L"Queue depth",
      *(_DWORD *)(*(_QWORD *)(v112 + 16) + 8LL),
      (__int64)L"Free command ID count",
      DepthSList);
    v62 = -1073741595;
    v13 = 1;
    goto LABEL_103;
  }
  v24 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v22 + 64));
  if ( v24 )
  {
    _InterlockedOr(v108, 0);
    while ( 1 )
    {
      v25 = *(unsigned __int16 *)(v22 + 142);
      v26 = 0;
      if ( (unsigned __int16)(v25 + 1) < v23 )
        LOWORD(v26) = v25 + 1;
      if ( (_WORD)v26 == *(_WORD *)(v22 + 140) )
        break;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v22 + 142), v26, v25) == v25 )
      {
        v117 = v26;
        goto LABEL_14;
      }
    }
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v22 + 64), v24);
    v9 = v112;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
  v73 = *(_QWORD *)(v22 + 88);
  v74 = *(unsigned __int16 *)(v73 + 22);
  if ( v74 == 1 )
    goto LABEL_116;
  v75 = *(unsigned __int16 *)(v22 + 136);
  v116 = v75 - 1;
  v76 = v75 % v74;
  while ( 1 )
  {
    if ( v76 >= *(unsigned __int16 *)(v73 + 22) )
    {
LABEL_115:
      v9 = v112;
LABEL_116:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 104), 3, 1) == 1
        && !_interlockedbittestandset((volatile signed __int32 *)(v124 + 108), 0) )
      {
        NvmeNamespaceQueueIo(v9, *(_QWORD *)(a1 + 24), a2);
      }
      if ( NVMePrpListBufferEntry )
        FreeNVMePrpListBufferEntry(*(_QWORD *)(v9 + 16), a2, NVMePrpListBufferEntry);
      v13 = v109;
LABEL_122:
      v62 = -2147483631;
      goto LABEL_123;
    }
    v86 = *(_QWORD *)(*(_QWORD *)(v22 + 88) + 728LL) + 192LL * v76;
    _InterlockedIncrement((volatile signed __int32 *)(v86 + 128));
    v117 = *(_DWORD *)(v86 + 124);
    v24 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v86 + 64));
    if ( v24 )
      break;
LABEL_114:
    v89 = *(unsigned __int16 *)(v73 + 22);
    _InterlockedDecrement((volatile signed __int32 *)(v86 + 128));
    v76 = (v76 + 1) % v89;
    if ( v76 == v116 )
      goto LABEL_115;
  }
  _InterlockedOr(v108, 0);
  v87 = v117;
  do
  {
    v25 = *(unsigned __int16 *)(v86 + 142);
    v88 = 0;
    if ( (unsigned __int16)(v25 + 1) < v87 )
      v88 = v25 + 1;
    if ( v88 == *(_WORD *)(v86 + 140) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v86 + 64), v24);
      goto LABEL_114;
    }
  }
  while ( _InterlockedCompareExchange16((volatile signed __int16 *)(v86 + 142), v88, v25) != v25 );
  LOWORD(v117) = v88;
  v22 = v86;
LABEL_14:
  Next_high = HIWORD(v24[3].Next);
LABEL_15:
  v28 = v121;
  v109 = Next_high;
  if ( (_BYTE)v121 )
  {
    if ( a6 )
    {
      v77 = *a6;
      if ( *a6 )
      {
        if ( v77 != v22 )
          NvmeRingSQDoorbellForBatchingSplitIo(*(_QWORD *)(v112 + 16), v77, *a7, (unsigned __int16)*a8, 0);
      }
    }
  }
  v29 = v112;
  _InterlockedExchange((volatile __int32 *)(a1 + 104), 2);
  v30 = *(_QWORD *)(v22 + 32);
  v31 = *(_WORD *)(v29 + 652);
  v32 = (unsigned __int64)Next_high << 7;
  v127 = v32;
  if ( !v31 )
    v31 = *(_WORD *)(v29 + 416);
  *(_WORD *)(v30 + v32 + 58) = v31;
  *(_DWORD *)(v32 + *(_QWORD *)(v22 + 32) + 80) = *(_DWORD *)(v29 + 56);
  if ( (*(_DWORD *)(*(_QWORD *)(v29 + 608) + 4LL) & 1) != 0 )
  {
    v33 = *(_QWORD *)(v22 + 32);
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v29 = v112;
    *(_QWORD *)(v33 + v32 + 64) = UnbiasedInterruptTime;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v22 + 32) + v32 + 64) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v22 + 88) + 1288LL) + 40LL);
  }
  v35 = *(_QWORD *)(v22 + 24);
  v36 = 16LL * (unsigned __int16)v25;
  v130 = v36;
  v37 = *(_QWORD *)(v36 + v35);
  v38 = *(_QWORD *)(v22 + 32);
  v129 = v37;
  if ( (*(_BYTE *)(v32 + v38 + 60) & 4) != 0 )
  {
    memset_0(*(void **)(v36 + *(_QWORD *)(v22 + 24)), 0, 0x40uLL);
    v29 = v112;
  }
  if ( FUAEnabled && (*(_BYTE *)(v122 + 2) & 4) != 0 )
    v39 = 0x40000000;
  else
    v39 = 0;
  v40 = *(unsigned int *)(v29 + 64);
  v41 = *(_DWORD *)(v29 + 56);
  v42 = *(_QWORD *)(a1 + 40);
  v43 = *(_DWORD *)(a1 + 52) / (unsigned int)v40;
  if ( v113 == 3 )
  {
    *(_BYTE *)v37 = 2;
  }
  else
  {
    *(_BYTE *)v37 = 1;
    *(_WORD *)(v37 + 54) = 0;
    *(_DWORD *)(v37 + 48) &= 0xFF0FFFFF;
    v28 = v121;
  }
  *(_DWORD *)v37 &= 0xFFFFFCFF;
  *(_QWORD *)(v37 + 16) = 0LL;
  *(_WORD *)(v37 + 48) = v43 - 1;
  *(_DWORD *)(v37 + 48) &= 0xC3FFFFFF;
  *(_DWORD *)(v37 + 4) = v41;
  *(_QWORD *)(v37 + 40) = v42 / v40;
  v44 = *(_DWORD *)(v37 + 48) & 0xBFFFFFFF;
  *(_BYTE *)(v37 + 52) = 0;
  *(_QWORD *)(v37 + 56) = 0LL;
  *(_DWORD *)(v37 + 48) = (v39 | v44) & 0x7FFFFFFF;
  *(_WORD *)(v37 + 2) = v109;
  if ( v28 )
  {
    v45 = *(unsigned int *)(a1 + 60);
    v46 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 48LL;
    *(_QWORD *)(v37 + 24) = *(unsigned int *)(a1 + 56) + (*(_QWORD *)(v46 + 8 * v45) << 12);
    if ( (_DWORD)v21 != 1 )
    {
      if ( (_DWORD)v21 == 2 )
      {
        *(_QWORD *)(v37 + 32) = *(_QWORD *)(v46 + 8LL * (unsigned int)(v45 + 1)) << 12;
      }
      else
      {
        v47 = *(__m128i **)(NVMePrpListBufferEntry + 16);
        v48 = 1;
        v49 = (unsigned int)(v21 - 1);
        if ( (unsigned int)v21 > 1 )
        {
          if ( (unsigned int)v49 < 8 )
            goto LABEL_182;
          v123 = (unsigned __int64)v47 + 8 * v49;
          v122 = v46 + 8LL * (unsigned int)(v45 + 1);
          if ( (unsigned __int64)&v47->m128i_u64[1] <= v46 + 8 * (unsigned __int64)(unsigned int)(v49 + v45)
            && v123 >= v122 )
          {
            goto LABEL_182;
          }
          v50 = (unsigned int)(v45 + 5);
          do
          {
            v48 += 8;
            *v47 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v46 + 8LL * (unsigned int)(v50 - 4))), 0xCu);
            v51 = (unsigned int)(v50 + 2);
            v47[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v46 + 8LL * (unsigned int)(v50 - 2))), 0xCu);
            v52 = _mm_loadu_si128((const __m128i *)(v46 + 8 * v50));
            v50 = (unsigned int)(v50 + 8);
            v47[2] = _mm_slli_epi64(v52, 0xCu);
            v47[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v46 + 8 * v51)), 0xCu);
            v47 += 4;
          }
          while ( v48 < (unsigned int)v21 - (((_BYTE)v21 - 1) & 7) );
          v32 = v127;
          if ( v48 < (unsigned int)v21 )
          {
LABEL_182:
            do
            {
              v53 = v48 + (unsigned int)v45;
              ++v48;
              v47 = (__m128i *)((char *)v47 + 8);
              v47[-1].m128i_i64[1] = *(_QWORD *)(v46 + 8 * v53) << 12;
            }
            while ( v48 < (unsigned int)v21 );
          }
        }
        v29 = v112;
        *(_QWORD *)(v37 + 32) = *(_QWORD *)(NVMePrpListBufferEntry + 24);
        *(_DWORD *)(NVMePrpListBufferEntry + 32) = v49;
      }
    }
    *(_BYTE *)(v32 + *(_QWORD *)(v22 + 32) + 60) = 8;
    goto LABEL_39;
  }
  v64 = (_QWORD *)(v37 + 24);
  v115 = *(_DWORD *)(a1 + 52);
  v65 = 0LL;
  v66 = *(_QWORD *)(a1 + 88);
  v67 = 0LL;
  v111 = 0;
  v68 = 2;
  v119 = (_QWORD *)(v37 + 24);
  v116 = 0;
  v69 = *(_DWORD **)(v66 + 24);
  v70 = 0;
  if ( NVMePrpListBufferEntry )
  {
    v67 = *(_QWORD **)(NVMePrpListBufferEntry + 16);
    v68 = *(unsigned __int16 *)(NVMePrpListBufferEntry + 36) + 1;
    v65 = *(_QWORD *)(NVMePrpListBufferEntry + 24);
  }
  if ( *v69 )
  {
    v78 = 0;
    v122 = v37 + 32;
    v79 = (_QWORD *)(v37 + 32);
    v80 = 0;
    while ( 1 )
    {
      v120 = *(_QWORD *)&v69[6 * v78 + 4];
      v128 = &v69[6 * v78];
      v123 = (unsigned int)v128[6];
      v90 = v116;
      v91 = v119;
      if ( (__int64)(v123 + v120 % 4096) > 4096 )
        break;
      *v119 = v120;
      v90 += v128[6];
      v116 = v90;
LABEL_128:
      v92 = v115;
LABEL_129:
      if ( v91 == v64 )
      {
        v92 = v115;
        v119 = v79;
      }
      else if ( v91 == v79 )
      {
        if ( v67 )
        {
          v119 = v67 + 1;
          v92 = v115;
        }
      }
      else
      {
        v119 = v91 + 1;
      }
      v111 = ++v80;
      if ( v80 < v68 && v90 < v92 && (unsigned int)++v78 < *v69 )
        continue;
LABEL_151:
      v37 = v129;
      v95 = v80 <= 2;
      v32 = v127;
      v29 = v112;
      if ( !v95 )
      {
        *v67 = *(_QWORD *)(v129 + 32);
        *(_QWORD *)(v37 + 32) = v65;
      }
      v70 = v111;
      goto LABEL_59;
    }
    v92 = v115;
    while ( 1 )
    {
      v80 = v111;
      if ( !(_DWORD)v123 )
        goto LABEL_129;
      v93 = v123;
      v111 = v120 & 0xFFF;
      *v91 = v120;
      v90 += 4096 - v111;
      v94 = v93 + v111;
      v116 = v90;
      v79 = (_QWORD *)v122;
      if ( v94 <= 0x1000 )
        goto LABEL_128;
      v123 = v94 - 4096;
      v120 += 4096 - v111;
      if ( v91 == v64 )
      {
        v91 = (_QWORD *)v122;
      }
      else if ( v91 == (_QWORD *)v122 )
      {
        if ( !v67 )
          goto LABEL_141;
        v91 = v67 + 1;
      }
      else
      {
        ++v91;
      }
      v119 = v91;
LABEL_141:
      v111 = ++v80;
      if ( v80 < v68 )
      {
        v92 = v115;
        if ( v90 < v115 )
          continue;
      }
      goto LABEL_151;
    }
  }
LABEL_59:
  if ( NVMePrpListBufferEntry )
    *(_DWORD *)(NVMePrpListBufferEntry + 32) = v70 - 1;
  *(_BYTE *)(v32 + *(_QWORD *)(v22 + 32) + 60) = -120;
LABEL_39:
  v54 = v109;
  *(_BYTE *)(v32 + *(_QWORD *)(v22 + 32) + 61) = 0;
  *(_QWORD *)(v32 + *(_QWORD *)(v22 + 32) + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v32 + *(_QWORD *)(v22 + 32) + 40) = a1;
  *(_WORD *)(v32 + *(_QWORD *)(v22 + 32) + 56) = v25;
  *(_QWORD *)(v32 + *(_QWORD *)(v22 + 32) + 16) = NVMePrpListBufferEntry;
  *(_WORD *)(v32 + *(_QWORD *)(v22 + 32) + 52) = a2;
  *(_DWORD *)(v32 + *(_QWORD *)(v22 + 32) + 48) = *(_DWORD *)(a1 + 52);
  v55 = v130;
  *(_QWORD *)(v32 + *(_QWORD *)(v22 + 32) + 32) = 0LL;
  *(_WORD *)(v55 + *(_QWORD *)(v22 + 24) + 8) = v54;
  v56 = _InterlockedExchangeAdd16((volatile signed __int16 *)(v124 + 120), 1u);
  v57 = v121;
  if ( !v56 )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 184LL) + 3LL) |= 1u;
    if ( (_BYTE)v57 )
    {
      v96 = *(_QWORD *)(v29 + 16);
      v97 = *(_QWORD *)(v96 + 128) + 1160LL;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
      {
        if ( *(_QWORD *)(v96 + 128) != -1160LL )
        {
          v98 = *(_QWORD *)v97;
          if ( *(_QWORD *)v97 )
          {
            v99 = *(_QWORD *)(v98 + 8);
            if ( v99 )
            {
              if ( *(int *)(v97 + 28) >= 3 && (v100 = *(void (__fastcall **)(__int64, _QWORD, bool))(v99 + 240)) != 0LL )
              {
                v100(v98, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), v132);
              }
              else
              {
                LOBYTE(v57) = 1;
                KeFlushIoBuffers(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), v132, v57);
              }
              LOBYTE(v57) = v121;
              v29 = v112;
            }
          }
        }
      }
    }
  }
  _InterlockedOr(v108, 0);
  *(_BYTE *)(*(_QWORD *)(v22 + 32) + v32 + 60) |= 1u;
  _InterlockedDecrement((volatile signed __int32 *)(v22 + 128));
  v58 = v118 & 0xFFFF0000 | (unsigned __int16)(v25 + 1);
  v118 = v58;
  if ( (unsigned __int16)(v25 + 1) == *(_DWORD *)(v22 + 124) )
  {
    v58 &= 0xFFFF0000;
    v118 = v58;
  }
  if ( (_BYTE)v57 )
  {
    if ( a9 || v126 == v125 )
    {
      if ( a6 )
        *a6 = 0LL;
      goto LABEL_43;
    }
    v60 = 0;
    *a6 = v22;
    *a7 = v58;
    *a8 = v117;
  }
  else
  {
LABEL_43:
    _InterlockedOr(v108, 0);
    v59 = v117;
    v60 = 1;
    while ( *(_WORD *)(v22 + 142) == v59 )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 132), 1, 0) )
      {
        while ( *(_DWORD *)(v22 + 128) )
          _InterlockedOr(v108, 0);
        if ( *(_WORD *)(v22 + 142) == v59 )
        {
          if ( v114 == 1 )
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v29 + 16)
                                                                                                 + 128LL)
                                                                                     + 528LL))(
              *(_QWORD *)(*(_QWORD *)(v29 + 16) + 1648LL) + 64LL,
              *(unsigned int *)(v22 + 16),
              4LL,
              0LL,
              &v118);
            v29 = v112;
          }
          else
          {
            **(_DWORD **)(v22 + 16) = v118;
            _InterlockedOr(v108, 0);
          }
        }
        _InterlockedOr(v108, 0);
        _InterlockedExchange((volatile __int32 *)(v22 + 132), 0);
        v61 = *(_QWORD *)(v29 + 16);
        if ( (*(_BYTE *)(v61 + 1360) & 1) != 0 )
        {
          LODWORD(v131) = *(_DWORD *)(v22 + 136);
          *((_QWORD *)&v131 + 1) = *(_QWORD *)(a1 + 24);
          DWORD1(v131) = *(_DWORD *)v37;
          if ( v61 )
          {
            if ( *(_DWORD *)v61 == 1314276178 )
            {
              v101 = *(_QWORD *)(*(_QWORD *)(v61 + 1368) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
              v102 = *(_DWORD *)(v101 + 12);
              v103 = v101 + 64;
              _InterlockedOr(v108, 0);
              if ( v102 )
              {
                if ( v101 != -64 )
                {
                  v104 = _InterlockedIncrement((volatile signed __int32 *)v101) % v102;
                  v105 = v103 + ((unsigned __int64)v104 << 6);
                  if ( (*(_DWORD *)(v61 + 1336) & 1) != 0 )
                    v106 = _InterlockedIncrement((volatile signed __int32 *)(v61 + 1408));
                  else
                    v106 = v104;
                  *(_DWORD *)(v105 + 4) = v106;
                  v107 = (_QWORD *)(v105 + 8);
                  *(_DWORD *)v105 = 0x20000;
                  if ( (*(_DWORD *)(v61 + 1336) & 2) != 0 )
                    KeQuerySystemTimePrecise(v107);
                  else
                    *v107 = MEMORY[0xFFFFF78000000014];
                  *(_OWORD *)(v105 + 16) = v131;
                  *(_OWORD *)(v105 + 32) = 0LL;
                }
              }
            }
          }
        }
        v60 = 1;
        break;
      }
    }
  }
  v9 = v112;
  v62 = 259;
LABEL_51:
  KeLowerIrql(v110);
LABEL_64:
  if ( v60 )
  {
    v81 = *(_BYTE ***)(v9 + 16);
    if ( *v81[217] )
      NvmeStartIoPolling(v81);
  }
  return v62;
}
