/*
 * XREFs of NvmeSubmitIoToSQ @ 0x140020590
 * Callers:
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x140119EC0 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     FreeNVMePrpListBufferEntry @ 0x140045980 (FreeNVMePrpListBufferEntry.c)
 *     NvmeStartIoPolling @ 0x14011E230 (NvmeStartIoPolling.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeSubmitIoToSQ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        __int16 a10,
        unsigned __int8 a11,
        unsigned __int16 *a12)
{
  __int64 v12; // r15
  __int64 v14; // rsi
  unsigned int v15; // r9d
  __int64 v17; // rax
  char v18; // cl
  _DWORD *v19; // rax
  unsigned int v20; // r8d
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  KIRQL v24; // r12
  __int64 v25; // r14
  unsigned int v26; // edi
  PSLIST_ENTRY v27; // r9
  int v28; // esi
  unsigned int v29; // r8d
  unsigned __int16 Next_high; // ax
  __int64 v31; // r14
  unsigned __int64 v32; // rbp
  __int16 v33; // ax
  __int64 v34; // r8
  unsigned __int8 *v35; // rax
  unsigned int v36; // edx
  __int64 v37; // r8
  __int64 v38; // r11
  __int64 v39; // r12
  bool v40; // zf
  __int64 v41; // rdi
  int v42; // r10d
  unsigned __int8 v43; // r9
  __int64 v44; // rcx
  int v45; // edx
  int v46; // eax
  __int64 v47; // rbp
  char v48; // dl
  unsigned int v49; // ecx
  __int16 v50; // cx
  __int64 v51; // rsi
  _BYTE **v52; // rcx
  __int64 v54; // rdi
  unsigned int v55; // r11d
  __int64 v56; // rdx
  unsigned int v57; // r10d
  unsigned int v58; // edx
  __m128i *v59; // r11
  __int64 v60; // rax
  unsigned int v61; // ecx
  unsigned int v62; // r8d
  __int64 v63; // rdx
  __int64 v64; // r9
  __int64 v65; // rax
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  unsigned int v68; // eax
  __int64 v69; // r9
  unsigned int v70; // r15d
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // r10
  __int64 v75; // rcx
  __int64 v76; // rax
  void (__fastcall *v77)(__int64, _QWORD, _QWORD); // rax
  __int64 v78; // rax
  int v79; // ecx
  _QWORD *v80; // r9
  unsigned int v81; // r10d
  _DWORD *v82; // r11
  unsigned int v83; // ebx
  unsigned int v84; // r8d
  __int64 v85; // rbp
  unsigned int v86; // ecx
  unsigned int v87; // eax
  unsigned int v88; // edi
  __int64 *v89; // r12
  int v90; // r8d
  unsigned int v91; // r14d
  char DepthSList; // al
  unsigned int v93; // r10d
  unsigned int v94; // ecx
  _DWORD *v95; // rax
  __int64 v96; // rcx
  __int64 *v97; // rdx
  unsigned int v98; // eax
  __int64 *v99; // rcx
  int v100; // edi
  unsigned int v101; // eax
  bool v102; // cc
  __int64 v103; // rax
  __int64 v104; // r12
  __int64 v105; // rcx
  __int64 v106; // rdx
  unsigned int v107; // ecx
  signed __int32 v108; // eax
  unsigned __int64 v109; // rdi
  unsigned int v110; // ecx
  _QWORD *v111; // rcx
  signed __int32 v112[8]; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int16 v113; // [rsp+A0h] [rbp-F8h]
  unsigned int v114; // [rsp+A4h] [rbp-F4h]
  char v115; // [rsp+A8h] [rbp-F0h]
  KIRQL v116; // [rsp+A9h] [rbp-EFh]
  _DWORD *v117; // [rsp+B0h] [rbp-E8h]
  char v118; // [rsp+B8h] [rbp-E0h]
  __int64 *v119; // [rsp+C0h] [rbp-D8h]
  unsigned int v120; // [rsp+C8h] [rbp-D0h] BYREF
  unsigned int v121; // [rsp+CCh] [rbp-CCh]
  __int64 v122; // [rsp+D0h] [rbp-C8h]
  __int64 v123; // [rsp+D8h] [rbp-C0h]
  __int64 v124; // [rsp+E0h] [rbp-B8h]
  unsigned __int64 v125; // [rsp+E8h] [rbp-B0h]
  __int64 v126; // [rsp+F0h] [rbp-A8h]
  __int64 v127; // [rsp+F8h] [rbp-A0h]
  __int64 v128; // [rsp+100h] [rbp-98h] BYREF
  __int64 v129; // [rsp+108h] [rbp-90h]
  _BYTE v130[20]; // [rsp+110h] [rbp-88h] BYREF
  int v131; // [rsp+124h] [rbp-74h]
  __int64 v132; // [rsp+128h] [rbp-70h]

  v12 = a1;
  v129 = a1;
  v122 = a4;
  v120 = 0;
  v14 = a4;
  v128 = 0LL;
  v15 = 0;
  v127 = *(_QWORD *)(a2 + 184);
  v17 = *(_QWORD *)(a1 + 16);
  v114 = 0;
  v18 = *(_BYTE *)(v17 + 1728);
  LOBYTE(v17) = *(_BYTE *)(v17 + 1729);
  v115 = v18;
  v118 = v17;
  v19 = *(_DWORD **)(a2 + 8);
  v20 = v19[11];
  v21 = (((_WORD)v20 + (unsigned __int16)v19[8]) & 0xFFF) + (unsigned int)v19[10] + 4095LL;
  v119 = (__int64 *)v20;
  v22 = v21 >> 12;
  v23 = (a7 + 4095LL + (unsigned __int64)(v20 & 0xFFF)) >> 12;
  v125 = v23;
  if ( !(_DWORD)v23 )
    return 3221225488LL;
  if ( v20 >= 0x1000 )
  {
    v15 = v20 >> 12;
    v114 = v20 >> 12;
    v119 = (__int64 *)(v20 - (v20 >> 12 << 12));
  }
  if ( v15 + (unsigned int)v23 > (unsigned int)v22 )
    return 3221225488LL;
  v24 = KfRaiseIrql(2u);
  v116 = v24;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 128));
  v25 = a3 + 88;
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 88) + 1228LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    if ( v14 )
      FreeNVMePrpListBufferEntry(*(_QWORD *)(v12 + 16), a5, v14);
    KeLowerIrql(v24);
    return 3221225486LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)v25 + 948LL) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    v83 = a5;
    NvmeNamespaceQueueIo(v12, a2, a5);
    if ( !v14 )
      goto LABEL_109;
    goto LABEL_108;
  }
  v26 = *(_DWORD *)(a3 + 124);
  if ( !a12 )
  {
    v27 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a3 + 64));
    if ( v27 )
    {
      _InterlockedOr(v112, 0);
      while ( 1 )
      {
        v28 = *(unsigned __int16 *)(a3 + 142);
        v29 = 0;
        if ( (unsigned __int16)(v28 + 1) < v26 )
          LOWORD(v29) = v28 + 1;
        if ( (_WORD)v29 == *(_WORD *)(a3 + 140) )
          break;
        if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v29, v28) == v28 )
        {
LABEL_14:
          Next_high = HIWORD(v27[3].Next);
          v121 = v29;
          goto LABEL_15;
        }
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a3 + 64), v27);
      v14 = v122;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
    v85 = *(_QWORD *)v25;
    v86 = *(unsigned __int16 *)(*(_QWORD *)v25 + 22LL);
    if ( v86 != 1 )
    {
      v87 = *(unsigned __int16 *)(a3 + 136);
      LODWORD(v117) = v87 - 1;
      v88 = v87 % v86;
      do
      {
        if ( v88 >= *(unsigned __int16 *)(v85 + 22) )
          break;
        a3 = *(_QWORD *)(*(_QWORD *)v25 + 728LL) + 192LL * v88;
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 128));
        v121 = *(_DWORD *)(a3 + 124);
        v27 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a3 + 64));
        if ( v27 )
        {
          _InterlockedOr(v112, 0);
          v93 = v121;
          while ( 1 )
          {
            v28 = *(unsigned __int16 *)(a3 + 142);
            v29 = 0;
            if ( (unsigned __int16)(v28 + 1) < v93 )
              LOWORD(v29) = v28 + 1;
            if ( (_WORD)v29 == *(_WORD *)(a3 + 140) )
              break;
            if ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v29, v28) == v28 )
              goto LABEL_14;
          }
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a3 + 64), v27);
        }
        v94 = *(unsigned __int16 *)(v85 + 22);
        _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
        v88 = (v88 + 1) % v94;
      }
      while ( v88 != (_DWORD)v117 );
      v14 = v122;
    }
    v83 = a5;
    NvmeNamespaceQueueIo(v12, a2, a5);
    if ( !v14 )
      goto LABEL_109;
LABEL_108:
    FreeNVMePrpListBufferEntry(*(_QWORD *)(v12 + 16), v83, v14);
LABEL_109:
    KeLowerIrql(v24);
    return 2147483665LL;
  }
  do
  {
    v28 = *(unsigned __int16 *)(a3 + 142);
    v84 = 0;
    if ( (unsigned __int16)(v28 + 1) < v26 )
      LOWORD(v84) = v28 + 1;
    v121 = v84;
    if ( (_WORD)v84 == *(_WORD *)(a3 + 140) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
      KeLowerIrql(v24);
      DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a3 + 64));
      StorEtwNvmeControllerEvent(
        *(_QWORD *)(v12 + 16),
        1,
        2,
        (unsigned int)L"Failed to get free slot",
        (__int64)L"SQ ID",
        *(_WORD *)(a3 + 136),
        (__int64)L"SQ head",
        *(_WORD *)(a3 + 140),
        (__int64)L"SQ tail",
        *(_WORD *)(a3 + 142),
        (__int64)L"Command ID",
        *a12,
        (__int64)L"IO SQ count",
        *(_WORD *)(*(_QWORD *)(v12 + 16) + 22LL),
        (__int64)L"IO CQ count",
        *(_WORD *)(*(_QWORD *)(v12 + 16) + 26LL),
        (__int64)L"Queue depth",
        *(_DWORD *)(*(_QWORD *)(v12 + 16) + 8LL),
        (__int64)L"Free command ID count",
        DepthSList);
      return 3221225701LL;
    }
  }
  while ( _InterlockedCompareExchange16((volatile signed __int16 *)(a3 + 142), v84, v28) != v28 );
  Next_high = *a12;
LABEL_15:
  v31 = Next_high;
  v113 = Next_high;
  v32 = (unsigned __int64)Next_high << 7;
  if ( (*(_BYTE *)(*(_QWORD *)(a3 + 32) + v32 + 60) & 4) != 0 )
    memset_0(*(void **)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)v28), 0, 0x40uLL);
  v33 = *(_WORD *)(v12 + 652);
  if ( !v33 )
    v33 = *(_WORD *)(v12 + 416);
  *(_WORD *)(*(_QWORD *)(a3 + 32) + v32 + 58) = v33;
  *(_DWORD *)(*(_QWORD *)(a3 + 32) + v32 + 80) = *(_DWORD *)(v12 + 56);
  if ( (int)IoGetIoAttributionHandle(a2, &v128) < 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v12 + 608) + 4LL) & 1) != 0 )
    {
      v54 = *(_QWORD *)(a3 + 32);
      *(_QWORD *)(v54 + v32 + 64) = KeQueryUnbiasedInterruptTime();
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a3 + 32) + v32 + 64) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 1288LL) + 40LL);
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a3 + 32) + v32 + 64) = KeQueryUnbiasedInterruptTimePrecise((PULONG64)(v32
                                                                                                + *(_QWORD *)(a3 + 32)
                                                                                                + 64LL));
    v34 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + v32 + 64);
    v131 = 0;
    v35 = *(unsigned __int8 **)(a2 + 184);
    *(_OWORD *)&v130[4] = 0LL;
    *(_DWORD *)v130 = 1;
    v36 = *v35 | _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFF00;
    v132 = v34;
    *(_DWORD *)&v130[4] = v36 | 0x100;
    IoRecordIoAttribution(v128, v130);
  }
  v37 = v113;
  v38 = v127;
  v39 = (unsigned __int16)v28;
  v40 = FUAEnabled == 0;
  v126 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)v28);
  v41 = v126;
  *(_WORD *)(v126 + 2) = v113;
  if ( v40 || (*(_BYTE *)(v38 + 2) & 4) == 0 )
    v42 = 0;
  else
    v42 = 0x40000000;
  v43 = a11;
  v44 = *(unsigned int *)(v12 + 64);
  v45 = *(_DWORD *)(v12 + 56);
  if ( a11 )
  {
    *(_BYTE *)v41 = 2;
  }
  else
  {
    *(_BYTE *)v41 = 1;
    *(_WORD *)(v41 + 54) = 0;
    *(_DWORD *)(v41 + 48) &= 0xFF0FFFFF;
    v37 = v113;
  }
  *(_DWORD *)v41 &= 0xFFFFFCFF;
  *(_QWORD *)(v41 + 16) = 0LL;
  *(_DWORD *)(v41 + 4) = v45;
  *(_BYTE *)(v41 + 52) = 0;
  *(_QWORD *)(v41 + 40) = a8 / v44;
  *(_WORD *)(v41 + 48) = a10 - 1;
  v46 = v42 | *(_DWORD *)(v41 + 48) & 0x3FFFFFF;
  *(_QWORD *)(v41 + 56) = 0LL;
  *(_DWORD *)(v41 + 48) = v46 & 0x7FFFFFFF;
  if ( v118 )
  {
    if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v12 + 16) + 136LL), 0x20u) )
    {
      v55 = v114;
      v56 = *(_QWORD *)(a2 + 8) + 48LL;
      v57 = v125;
      v123 = v56;
      *(_QWORD *)(v41 + 24) = (unsigned int)v119 + (*(_QWORD *)(v56 + 8LL * v114) << 12);
      if ( v57 == 1 )
        goto LABEL_58;
      if ( v57 == 2 )
      {
        *(_QWORD *)(v41 + 32) = *(_QWORD *)(v56 + 8LL * (v55 + 1)) << 12;
LABEL_58:
        v73 = *(_QWORD *)(v12 + 16);
        v74 = *(_QWORD *)(v73 + 128) + 1160LL;
        if ( *(_QWORD *)(a2 + 8) )
        {
          if ( *(_QWORD *)(v73 + 128) != -1160LL )
          {
            v75 = *(_QWORD *)v74;
            if ( *(_QWORD *)v74 )
            {
              v76 = *(_QWORD *)(v75 + 8);
              if ( v76 )
              {
                if ( *(int *)(v74 + 28) >= 3
                  && (v77 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v76 + 240)) != 0LL )
                {
                  v77(v75, *(_QWORD *)(a2 + 8), v43);
                }
                else
                {
                  LOBYTE(v37) = 1;
                  KeFlushIoBuffers(*(_QWORD *)(a2 + 8), v43, v37);
                }
                LOWORD(v37) = v113;
              }
            }
          }
        }
        *(_BYTE *)(*(_QWORD *)(a3 + 32) + v32 + 60) = 0;
        goto LABEL_26;
      }
      v58 = 1;
      v59 = *(__m128i **)(v122 + 16);
      v60 = v57 - 1;
      LODWORD(v117) = v57 - 1;
      if ( v57 > 1 )
      {
        if ( (unsigned int)v60 >= 8 )
        {
          v119 = &v59->m128i_i64[v60];
          v125 = v123 + 8LL * (v114 + 1);
          if ( (unsigned __int64)&v59->m128i_u64[1] <= v123 + 8 * (unsigned __int64)(v114 + (unsigned int)v117)
            && (unsigned __int64)v119 >= v125 )
          {
            v58 = 1;
          }
          else
          {
            v61 = v57 - ((unsigned __int8)v117 & 7);
            v62 = 1;
            v63 = v123;
            v64 = v114 + 5;
            do
            {
              v62 += 8;
              *v59 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v63 + 8LL * (unsigned int)(v64 - 4))), 0xCu);
              v65 = (unsigned int)(v64 + 2);
              v59[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v63 + 8LL * (unsigned int)(v64 - 2))), 0xCu);
              v66 = _mm_loadu_si128((const __m128i *)(v63 + 8 * v64));
              v64 = (unsigned int)(v64 + 8);
              v59[2] = _mm_slli_epi64(v66, 0xCu);
              v67 = _mm_loadu_si128((const __m128i *)(v63 + 8 * v65));
              v68 = v62;
              v59[3] = _mm_slli_epi64(v67, 0xCu);
              v59 += 4;
            }
            while ( v62 < v61 );
            v41 = v126;
            v58 = v62;
            v37 = v113;
            v43 = a11;
            if ( v68 >= v57 )
              goto LABEL_57;
          }
        }
        v69 = v123;
        v70 = v114;
        do
        {
          v71 = v58 + v70;
          ++v58;
          v59 = (__m128i *)((char *)v59 + 8);
          v59[-1].m128i_i64[1] = *(_QWORD *)(v69 + 8 * v71) << 12;
        }
        while ( v58 < v57 );
        v12 = v129;
        v43 = a11;
      }
LABEL_57:
      v72 = v122;
      *(_QWORD *)(v41 + 32) = *(_QWORD *)(v122 + 24);
      *(_DWORD *)(v72 + 32) = (_DWORD)v117;
      goto LABEL_58;
    }
    v78 = *(_QWORD *)(v38 + 24);
    v79 = 0;
    v125 = 0LL;
    v80 = 0LL;
    v81 = 2;
    v114 = 0;
    v82 = *(_DWORD **)(v78 + 24);
    v119 = (__int64 *)(v41 + 24);
    if ( v122 )
    {
      v80 = *(_QWORD **)(v122 + 16);
      v81 = *(unsigned __int16 *)(v122 + 36) + 1;
      v125 = *(_QWORD *)(v122 + 24);
    }
    if ( !*v82 )
    {
LABEL_70:
      if ( v122 )
        *(_DWORD *)(v122 + 32) = v79 - 1;
      *(_BYTE *)(*(_QWORD *)(a3 + 32) + v32 + 60) = 0x80;
      goto LABEL_26;
    }
    v89 = (__int64 *)(v41 + 32);
    v90 = 0;
    v91 = 0;
    while ( 1 )
    {
      v95 = &v82[6 * v90];
      v96 = *((_QWORD *)v95 + 2);
      v117 = v95;
      v124 = (unsigned int)v95[6];
      v123 = v96;
      v97 = v119;
      v98 = v114;
      if ( v124 + v96 % 4096 > 4096 )
        break;
      *v119 = v96;
      v98 += v117[6];
      v99 = (__int64 *)(v41 + 24);
      v114 = v98;
LABEL_126:
      if ( v97 == v99 )
      {
        v98 = v114;
        v119 = v89;
      }
      else if ( v97 == v89 )
      {
        if ( v80 )
        {
          v119 = v80 + 1;
          v98 = v114;
        }
      }
      else
      {
        v119 = v97 + 1;
      }
      if ( ++v91 < v81 && v98 < a7 && (unsigned int)++v90 < *v82 )
        continue;
LABEL_135:
      LOWORD(v37) = v113;
      v102 = v91 <= 2;
      v12 = v129;
      LODWORD(v117) = v91;
      v31 = v113;
      v79 = (int)v117;
      v39 = (unsigned __int16)v28;
      if ( !v102 )
      {
        *v80 = *(_QWORD *)(v41 + 32);
        *(_QWORD *)(v41 + 32) = v125;
      }
      goto LABEL_70;
    }
    v99 = (__int64 *)(v41 + 24);
    while ( 1 )
    {
      v41 = v126;
      if ( !(_DWORD)v124 )
        goto LABEL_126;
      v100 = v124;
      LODWORD(v117) = v123 & 0xFFF;
      *v97 = v123;
      v114 += 4096 - (_DWORD)v117;
      v101 = v100 + (_DWORD)v117;
      v41 = v126;
      if ( v101 <= 0x1000 )
      {
        v98 = v114;
        goto LABEL_126;
      }
      v124 = v101 - 4096;
      v123 += (unsigned int)(4096 - (_DWORD)v117);
      if ( v97 == v99 )
      {
        v97 = v89;
      }
      else if ( v97 == v89 )
      {
        if ( !v80 )
          goto LABEL_122;
        v97 = v80 + 1;
      }
      else
      {
        ++v97;
      }
      v119 = v97;
LABEL_122:
      if ( ++v91 < v81 )
      {
        v98 = v114;
        if ( v114 < a7 )
          continue;
      }
      goto LABEL_135;
    }
  }
LABEL_26:
  *(_BYTE *)(*(_QWORD *)(a3 + 32) + v32 + 61) = 0;
  v47 = v122;
  *(_QWORD *)((v31 << 7) + *(_QWORD *)(a3 + 32) + 24) = a2;
  *(_WORD *)((v31 << 7) + *(_QWORD *)(a3 + 32) + 56) = v28;
  *(_QWORD *)((v31 << 7) + *(_QWORD *)(a3 + 32) + 16) = v47;
  *(_WORD *)((v31 << 7) + *(_QWORD *)(a3 + 32) + 52) = a5;
  *(_DWORD *)((v31 << 7) + *(_QWORD *)(a3 + 32) + 48) = a7;
  v48 = v115;
  *(_QWORD *)((v31 << 7) + *(_QWORD *)(a3 + 32) + 40) = 0LL;
  *(_QWORD *)((v31 << 7) + *(_QWORD *)(a3 + 32) + 32) = 0LL;
  *(_QWORD *)((v31 << 7) + *(_QWORD *)(a3 + 32) + 40) = 0LL;
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16 * v39 + 8) = v37;
  if ( v48 == 1 )
  {
    v103 = *(_QWORD *)(a3 + 56);
    if ( v103 )
    {
      v104 = v39 << 6;
      memset_0((void *)(v103 + v104), 0, 0x40uLL);
      *(_DWORD *)(v104 + *(_QWORD *)(a3 + 56)) = 1;
      *(_DWORD *)(*(_QWORD *)(a3 + 56) + v104 + 8) = *(unsigned __int16 *)(a3 + 136);
      *(_DWORD *)(*(_QWORD *)(a3 + 56) + v104 + 12) = (unsigned __int16)v28;
      *(_QWORD *)(*(_QWORD *)(a3 + 56) + v104 + 40) |= 1uLL;
      *(_QWORD *)(*(_QWORD *)(a3 + 56) + v104 + 40) = *(_QWORD *)(*(_QWORD *)(a3 + 56) + v104 + 40) & 0xFFFFFFFFFFFFFFFDuLL | ((*(_DWORD *)(a2 + 16) & 0x42) != 0 ? 2 : 0);
      v48 = v115;
      v105 = *(_QWORD *)(a3 + 56);
      if ( *(char *)((v31 << 7) + *(_QWORD *)(a3 + 32) + 60) >= 0 )
        *(_QWORD *)(v105 + v104 + 32) = *(_QWORD *)(a2 + 8);
      else
        *(_QWORD *)(v105 + v104 + 24) = *(_QWORD *)(*(_QWORD *)(v127 + 24) + 24LL);
    }
  }
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  _InterlockedOr(v112, 0);
  *(_BYTE *)(*(_QWORD *)(a3 + 32) + (v31 << 7) + 60) |= 1u;
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 128));
  v49 = v120 & 0xFFFF0000 | (unsigned __int16)(v28 + 1);
  v120 = v49;
  if ( (unsigned __int16)(v28 + 1) == *(_DWORD *)(a3 + 124) )
    v120 = v49 & 0xFFFF0000;
  _InterlockedOr(v112, 0);
  v50 = v121;
  while ( *(_WORD *)(a3 + 142) == v50 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 132), 1, 0) )
    {
      while ( *(_DWORD *)(a3 + 128) )
        _InterlockedOr(v112, 0);
      if ( *(_WORD *)(a3 + 142) == v50 )
      {
        if ( v48 == 1 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v12 + 16)
                                                                                               + 128LL)
                                                                                   + 528LL))(
            *(_QWORD *)(*(_QWORD *)(v12 + 16) + 1648LL) + 64LL,
            *(unsigned int *)(a3 + 16),
            4LL,
            0LL,
            &v120);
        }
        else
        {
          **(_DWORD **)(a3 + 16) = v120;
          _InterlockedOr(v112, 0);
        }
      }
      _InterlockedOr(v112, 0);
      _InterlockedExchange((volatile __int32 *)(a3 + 132), 0);
      v51 = *(_QWORD *)(v12 + 16);
      if ( (*(_BYTE *)(v51 + 1360) & 1) != 0 )
      {
        *(_DWORD *)v130 = *(_DWORD *)(a3 + 136);
        *(_DWORD *)&v130[4] = *(_DWORD *)v41;
        *(_QWORD *)&v130[8] = a2;
        if ( v51 )
        {
          if ( *(_DWORD *)v51 == 1314276178 )
          {
            v106 = *(_QWORD *)(*(_QWORD *)(v51 + 1368) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
            v107 = *(_DWORD *)(v106 + 12);
            _InterlockedOr(v112, 0);
            if ( v107 )
            {
              if ( v106 != -64 )
              {
                v108 = _InterlockedExchangeAdd((volatile signed __int32 *)v106, 1u);
                v109 = v106 + 64 + ((unsigned __int64)((v108 + 1) % v107) << 6);
                v110 = (v108 + 1) % v107;
                if ( (*(_DWORD *)(v51 + 1336) & 1) != 0 )
                  v110 = _InterlockedIncrement((volatile signed __int32 *)(v51 + 1408));
                *(_DWORD *)(v109 + 4) = v110;
                v111 = (_QWORD *)(v109 + 8);
                *(_DWORD *)v109 = 0x10000;
                if ( (*(_DWORD *)(v51 + 1336) & 2) != 0 )
                  KeQuerySystemTimePrecise(v111);
                else
                  *v111 = MEMORY[0xFFFFF78000000014];
                *(_OWORD *)(v109 + 16) = *(_OWORD *)v130;
                *(_OWORD *)(v109 + 32) = 0LL;
              }
            }
          }
        }
      }
      break;
    }
  }
  KeLowerIrql(v116);
  v52 = *(_BYTE ***)(v12 + 16);
  if ( *v52[217] )
    NvmeStartIoPolling(v52);
  return 259LL;
}
