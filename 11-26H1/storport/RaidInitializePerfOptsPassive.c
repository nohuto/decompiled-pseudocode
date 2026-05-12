/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x140054268
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAdapterAcquireStartIoLock @ 0x14000ECB0 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterReleaseStartIoLock @ 0x14000ECF0 (RaidAdapterReleaseStartIoLock.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidInitializePerfOptsPassive(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // r15
  unsigned int v3; // edi
  __int64 v4; // r14
  struct _PROCESSOR_NUMBER v5; // esi
  struct _SLIST_ENTRY *Pool; // r13
  void *v7; // rcx
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rsi
  _DWORD *v12; // rsi
  KIRQL v13; // r13
  USHORT ActiveGroupCount; // ax
  __int64 v15; // r12
  PVOID v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r13
  ULONG v19; // ebx
  ULONG ActiveProcessorCount; // r14d
  unsigned __int64 v21; // rdi
  int v22; // edi
  unsigned int v23; // eax
  size_t v24; // r15
  USHORT v25; // si
  _WORD *v26; // r13
  int v27; // ecx
  char *v28; // rax
  unsigned __int16 v29; // r9
  unsigned __int16 v30; // r10
  __int64 v31; // rdi
  char *v32; // r11
  __int64 v33; // r8
  char v34; // dl
  unsigned __int16 v35; // cx
  __int64 v36; // r9
  __int64 v37; // r12
  __int64 v38; // rdi
  void *v39; // rdi
  void *v40; // r15
  __int64 v41; // rax
  __int64 v42; // rax
  ULONG v43; // r13d
  __int64 v44; // rbx
  char v45; // di
  unsigned int v46; // esi
  char v47; // r15
  NTSTATUS v48; // eax
  char v49; // r11
  int EfficiencyClass; // r10d
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rdx
  unsigned __int64 v55; // r9
  unsigned int v56; // r13d
  unsigned int v57; // r12d
  __int64 v58; // r8
  __int64 v59; // rcx
  char v60; // al
  unsigned __int64 v61; // r10
  unsigned int v62; // edx
  unsigned int v63; // r8d
  unsigned int v64; // r9d
  char v65; // bl
  unsigned int v66; // r13d
  __int64 v67; // r15
  __int64 v68; // rsi
  __int64 v69; // rdi
  char v70; // cl
  char v71; // cl
  char v72; // al
  __int64 v73; // rcx
  _BYTE *v74; // rsi
  unsigned int v75; // r13d
  __int64 v76; // r9
  unsigned int v77; // ebx
  char v78; // r15
  unsigned int v79; // eax
  unsigned int v80; // r11d
  __int64 v81; // rdi
  unsigned int v82; // r10d
  __int64 v83; // r8
  __int64 v84; // rax
  char v85; // r8
  size_t v86; // r12
  struct _GROUP_AFFINITY *v87; // r15
  unsigned __int64 Mask; // rdx
  unsigned __int16 v89; // r9
  int v90; // edi
  unsigned __int16 i; // r8
  __int64 v92; // rax
  unsigned int v93; // ecx
  unsigned int v94; // r8d
  char v95; // r9
  __int64 v96; // r10
  char v97; // r11
  __int64 v98; // rdx
  _BYTE *v99; // rax
  __int64 v100; // rcx
  unsigned int v101; // r8d
  unsigned int v102; // r11d
  int v103; // r9d
  unsigned int v104; // eax
  unsigned int v105; // r8d
  __int64 v106; // r10
  USHORT v107; // r12
  ULONG v108; // r13d
  char *v109; // rbx
  char *v110; // r15
  unsigned int v111; // edi
  ULONG v112; // eax
  int v113; // esi
  unsigned int v114; // r11d
  int v115; // r9d
  unsigned int j; // r8d
  __int64 v117; // r10
  unsigned int v118; // r15d
  ULONG v119; // edi
  ULONG v120; // eax
  int v121; // r11d
  char *v122; // r13
  char *v123; // r8
  unsigned int v124; // ebx
  unsigned __int16 v125; // r9
  int v126; // r10d
  __int64 v127; // rsi
  __int64 v128; // rdi
  int v129; // ecx
  unsigned int v130; // edx
  signed __int32 v131[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v132; // [rsp+20h] [rbp-E0h]
  struct _PROCESSOR_NUMBER ProcessorNumber; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v134; // [rsp+2Ch] [rbp-D4h]
  _BYTE *v135; // [rsp+30h] [rbp-D0h]
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v137; // [rsp+3Ch] [rbp-C4h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v139; // [rsp+44h] [rbp-BCh]
  __int64 v140; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  __int64 v142; // [rsp+58h] [rbp-A8h]
  int v143; // [rsp+60h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE v144; // [rsp+68h] [rbp-98h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+80h] [rbp-80h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v146; // [rsp+D0h] [rbp-30h] BYREF
  char v148; // [rsp+170h] [rbp+70h]
  KIRQL v149; // [rsp+178h] [rbp+78h]
  unsigned int v150; // [rsp+178h] [rbp+78h]
  USHORT v151; // [rsp+178h] [rbp+78h]
  unsigned __int16 v152; // [rsp+180h] [rbp+80h]
  USHORT v153; // [rsp+188h] [rbp+88h]
  int v154; // [rsp+188h] [rbp+88h]
  ULONG v155; // [rsp+188h] [rbp+88h]

  v1 = *(_WORD *)(a1 + 4724);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 4728);
  ProcNumber = 0;
  v4 = a1;
  *(_QWORD *)&v144.OldIrql = 0LL;
  v132 = 0LL;
  ProcessorNumber = 0;
  v5 = 0;
  v152 = v1;
  *(_WORD *)(a1 + 4724) = 0;
  v144.LockQueue = 0LL;
  if ( (int)v3 < 1 )
    v3 = -v3;
  *(_DWORD *)(a1 + 4728) = 1;
  if ( v3 > 1 && (*(char *)(a1 + 110) >= 0 || !*(_QWORD *)(a1 + 4736)) )
  {
    Pool = (struct _SLIST_ENTRY *)RaidAllocatePool(64LL, 32LL * v3, 1413701970LL, *(_QWORD *)(a1 + 8));
    if ( !Pool )
      goto LABEL_7;
    v9 = KeQueryHighestNodeNumber() + 1;
    v10 = RaidAllocatePool(72LL, (unsigned __int64)v9 << 6, 1413701970LL, *(_QWORD *)(v4 + 8));
    *(_QWORD *)(v4 + 4736) = v10;
    if ( !v10 )
      goto LABEL_7;
    if ( v9 )
    {
      v11 = v9;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v2 + *(_QWORD *)(v4 + 4736)));
        v2 += 64LL;
        --v11;
      }
      while ( v11 );
      LODWORD(v2) = 0;
    }
    v12 = (_DWORD *)&Pool[1].Next + 1;
    do
    {
      *v12 = v2;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 4736) + ((unsigned __int64)((unsigned int)v2 % v9) << 6)),
        Pool);
      LODWORD(v2) = v2 + 1;
      v12 += 8;
      Pool += 2;
    }
    while ( (unsigned int)v2 < v3 );
    RaidAdapterAcquireStartIoLock(v4, &v144);
    *(_DWORD *)(v4 + 4728) = v3;
    RaidAdapterReleaseStartIoLock(v4, &v144);
    LOWORD(v2) = 0;
    v5 = ProcessorNumber;
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_8;
  v13 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  v149 = v13;
  if ( _InterlockedIncrement(&g_RaidPerfRedirectRefCount) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v15 = ActiveGroupCount;
    v153 = ActiveGroupCount;
    if ( *(char *)(v4 + 110) < 0 && (v16 = g_RaidPerProcessorState) != 0LL )
    {
      v17 = (unsigned int)v15;
    }
    else
    {
      v17 = v15;
      v16 = (PVOID)RaidAllocatePool(64LL, v15 << 13, 1917083986LL, *(_QWORD *)(v4 + 8));
      g_RaidPerProcessorState = v16;
    }
    if ( !v16
      || (*(char *)(v4 + 110) >= 0 || !g_RaidDPCRedirectionProcessors)
      && (g_RaidDPCRedirectionProcessors = (PVOID)RaidAllocatePool(64LL, 4 * v17, 1917083986LL, *(_QWORD *)(v4 + 8))) == 0LL )
    {
      v5 = (struct _PROCESSOR_NUMBER)-1073741670;
      if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
      {
        if ( g_RaidPerProcessorState )
        {
          ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
          g_RaidPerProcessorState = 0LL;
        }
        if ( g_RaidDPCRedirectionProcessors )
        {
          ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
          g_RaidDPCRedirectionProcessors = 0LL;
        }
        g_RaidPerfRedirectGroupCount = 0;
      }
      KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v13);
      goto LABEL_8;
    }
    if ( (_WORD)v15 )
    {
      v18 = 0LL;
      do
      {
        ProcNumber.Group = v2;
        ProcNumber.Reserved = 0;
        v19 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v2);
        if ( ActiveProcessorCount )
        {
          do
          {
            v21 = (unsigned __int64)(((unsigned __int16)v2 << 6) + v19) << 7;
            ProcNumber.Number = v19;
            KeInitializeDpc(
              (PRKDPC)((char *)g_RaidPerProcessorState + v21),
              (PKDEFERRED_ROUTINE)RaidpAdapterRedirectDpcRoutine,
              (char *)g_RaidPerProcessorState + v21);
            KeSetImportanceDpc((PRKDPC)((char *)g_RaidPerProcessorState + v21), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)((char *)g_RaidPerProcessorState + v21), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)((char *)g_RaidPerProcessorState + v21 + 64));
            InitializeSListHead((PSLIST_HEADER)((char *)g_RaidPerProcessorState + v21 + 80));
            ++v19;
            *(_DWORD *)((char *)g_RaidPerProcessorState + v21 + 96) = 0;
          }
          while ( v19 < ActiveProcessorCount );
          LOWORD(v15) = v153;
        }
        LOWORD(v2) = v2 + 1;
        *(_DWORD *)((char *)g_RaidDPCRedirectionProcessors + v18) = ActiveProcessorCount;
        v18 += 4LL;
      }
      while ( (unsigned __int16)v2 < (unsigned __int16)v15 );
      v1 = v152;
      v5 = ProcessorNumber;
      v4 = a1;
      v13 = v149;
    }
    _InterlockedOr(v131, 0);
    g_RaidPerfRedirectGroupCount = (unsigned __int16)v15;
  }
  *(_WORD *)(v4 + 4724) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v13);
  if ( (v1 & 2) == 0 || (v1 & 0xFFFC) == 0 )
  {
LABEL_8:
    v7 = *(void **)(v4 + 4744);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x72446152u);
      *(_QWORD *)(v4 + 4744) = 0LL;
      *(_WORD *)(v4 + 4726) = 0;
    }
    return *(unsigned int *)&v5;
  }
  v22 = v1 >> 2;
  v23 = v22 + 281;
  if ( (((_BYTE)v22 + 24) & 1) == 0 )
    v23 = v22 + 280;
  v24 = v23;
  v25 = 0;
  v142 = RaidAllocatePool(66LL, v23, 1917083986LL, *(_QWORD *)(v4 + 8));
  v26 = (_WORD *)v142;
  if ( !v142 )
  {
LABEL_7:
    v5 = (struct _PROCESSOR_NUMBER)-1073741670;
    goto LABEL_8;
  }
  v27 = v22 + 5;
  if ( (((_BYTE)v22 + 4) & 1) == 0 )
    v27 = v22 + 4;
  v154 = v27;
  v28 = (char *)RaidAllocatePool(
                  64LL,
                  v27 * (unsigned int)*(unsigned __int16 *)(v4 + 4726),
                  1917083986LL,
                  *(_QWORD *)(v4 + 8));
  P = v28;
  if ( !v28 )
  {
    ExFreePoolWithTag(v26, 0x72446152u);
    goto LABEL_7;
  }
  v29 = 0;
  if ( *(_WORD *)(v4 + 4726) )
  {
    do
    {
      v30 = 0;
      v31 = 64LL;
      v32 = &v28[v29 * v154];
      v33 = v29 << 6;
      *(_WORD *)v32 = v29;
      do
      {
        v34 = *(_BYTE *)(v33 + *(_QWORD *)(v4 + 4744));
        if ( v34 != -1 )
        {
          v35 = 0;
          if ( v30 )
          {
            while ( v32[v35 + 4] != v34 )
            {
              if ( ++v35 >= v30 )
                goto LABEL_59;
            }
          }
          else
          {
LABEL_59:
            v32[v30 + 4] = *(_BYTE *)(v33 + *(_QWORD *)(v4 + 4744));
            ++*((_WORD *)v32 + 1);
            ++v30;
          }
        }
        v33 = (unsigned int)(v33 + 1);
        --v31;
      }
      while ( v31 );
      ++v29;
    }
    while ( v29 < *(_WORD *)(v4 + 4726) );
    v1 = v152;
    v26 = (_WORD *)v142;
  }
  if ( !g_HeterogenousCPU || (*(_BYTE *)(v4 + 4435) & 0x10) == 0 )
  {
    if ( KeQueryHighestNodeNumber() != -1 )
    {
      v86 = v24;
      v87 = (struct _GROUP_AFFINITY *)(v26 + 132);
      do
      {
        memset_0(v26, 0, v86);
        KeQueryNodeActiveAffinity(v25, v87, v26);
        if ( *v26 )
        {
          Mask = v87->Mask;
          v89 = 0;
          v90 = 0;
          for ( i = 0; Mask; Mask >>= 1 )
          {
            if ( (Mask & 1) != 0 )
            {
              v92 = v89++;
              *(_DWORD *)&v26[2 * v92 + 2] = i;
            }
            ++i;
          }
          LOWORD(v93) = *v26;
          v94 = 0;
          if ( *v26 )
          {
            do
            {
              v95 = 0;
              v96 = *(_QWORD *)(v4 + 4744);
              v97 = *(_BYTE *)(((unsigned __int16)v26[136] << 6) + *(_DWORD *)&v26[2 * v94 + 2] + v96);
              if ( v97 == -1 )
              {
                ++v90;
              }
              else
              {
                v98 = *((unsigned int *)v26 + 65);
                if ( !(_DWORD)v98 )
                  goto LABEL_173;
                v99 = v26 + 140;
                v100 = (unsigned int)v98;
                do
                {
                  if ( v97 == *v99 )
                    v95 = 1;
                  ++v99;
                  --v100;
                }
                while ( v100 );
                v96 = *(_QWORD *)(v4 + 4744);
                if ( !v95 )
                {
LABEL_173:
                  *((_BYTE *)v26 + v98 + 280) = *(_BYTE *)(((unsigned __int16)v26[136] << 6)
                                                         + *(_DWORD *)&v26[2 * v94 + 2]
                                                         + v96);
                  ++*((_DWORD *)v26 + 65);
                }
              }
              v93 = (unsigned __int16)*v26;
              ++v94;
            }
            while ( v94 < v93 );
            v87 = (struct _GROUP_AFFINITY *)(v26 + 132);
          }
          v101 = *((_DWORD *)v26 + 65);
          LOWORD(v102) = 0;
          if ( v101 )
          {
            if ( v90 )
            {
              v103 = 0;
              v104 = (v101 + v90 - 1) / v101;
              v105 = 0;
              if ( (_WORD)v93 )
              {
                do
                {
                  v106 = *(_QWORD *)(v4 + 4744);
                  if ( *(_BYTE *)(((unsigned __int16)v26[136] << 6) + *(_DWORD *)&v26[2 * v105 + 2] + v106) == 0xFF )
                  {
                    ++v103;
                    *(_BYTE *)(((unsigned __int16)v26[136] << 6) + *(_DWORD *)&v26[2 * v105 + 2] + v106) = *((_BYTE *)v26 + (unsigned __int16)v102 + 280);
                    if ( v103 == v104 )
                    {
                      v103 = 0;
                      v102 = ((unsigned int)(unsigned __int16)v102 + 1) % *((_DWORD *)v26 + 65);
                    }
                  }
                  ++v105;
                }
                while ( v105 < (unsigned __int16)*v26 );
                v87 = (struct _GROUP_AFFINITY *)(v26 + 132);
              }
            }
          }
        }
        ++v25;
      }
      while ( v25 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
      v1 = v152;
    }
    ExFreePoolWithTag(v26, 0x72446152u);
    v26 = 0LL;
    v107 = 0;
    v151 = 0;
    if ( !*(_WORD *)(v4 + 4726) )
    {
LABEL_210:
      v40 = 0LL;
      goto LABEL_211;
    }
    v108 = v1;
    v109 = (char *)P;
    Length = v108;
    while ( 1 )
    {
      v110 = &v109[v107 * v154];
      if ( !*((_WORD *)v110 + 1) )
        break;
      v111 = *((unsigned __int16 *)v110 + 1);
      v112 = (v111 + KeQueryActiveProcessorCountEx(v107) - 1) / v111;
      if ( v112 != 1 )
      {
        v113 = v107 << 6;
        LOWORD(v114) = 0;
        v115 = 0;
        for ( j = 0; j < 0x40; ++j )
        {
          v117 = *(_QWORD *)(v4 + 4744);
          if ( *(_BYTE *)(j + v113 + v117) == 0xFF )
          {
            ++v115;
            *(_BYTE *)(j + v113 + v117) = v110[(unsigned __int16)v114 + 4];
            if ( v115 == v112 - 1 )
            {
              v115 = 0;
              v114 = ((unsigned int)(unsigned __int16)v114 + 1) % *((unsigned __int16 *)v110 + 1);
            }
          }
        }
LABEL_207:
        v109 = (char *)P;
        v108 = Length;
      }
      v151 = ++v107;
      if ( v107 >= *(_WORD *)(v4 + 4726) )
      {
        v1 = v152;
        v26 = 0LL;
        goto LABEL_210;
      }
    }
    LOWORD(v118) = 0;
    v119 = v108 >> 2;
    v120 = KeQueryActiveProcessorCountEx(v107);
    v121 = v154;
    v122 = (char *)P;
    v123 = v109;
    v137 = (v119 + v120 - 1) / v119;
    v124 = v137;
    v125 = 0;
    v126 = 0;
    v127 = v107 << 6;
    v128 = 64LL;
    do
    {
      if ( *(_BYTE *)(v127 + *(_QWORD *)(v4 + 4744)) == 0xFF )
      {
        if ( !*((_WORD *)v123 + 1) )
        {
          v129 = (unsigned __int16)v118;
          do
          {
            v130 = (v129 + 1) % (unsigned int)*(unsigned __int16 *)(v4 + 4726);
            v129 = (unsigned __int16)v130;
            LOWORD(v118) = v130;
            v123 = &v122[(unsigned __int16)v130 * v154];
          }
          while ( !*((_WORD *)v123 + 1) );
          v4 = a1;
          v124 = v137;
          v121 = v154;
        }
        ++v126;
        *(_BYTE *)(v127 + *(_QWORD *)(v4 + 4744)) = v123[v125 + 4];
        if ( v126 == v124 )
        {
          ++v125;
          v126 = 0;
          if ( v125 == *((_WORD *)v123 + 1) )
          {
            v118 = ((unsigned int)(unsigned __int16)v118 + 1) % *(unsigned __int16 *)(v4 + 4726);
            v123 = &v122[v121 * v118];
            v125 = 0;
          }
        }
      }
      v127 = (unsigned int)(v127 + 1);
      --v128;
    }
    while ( v128 );
    v107 = v151;
    goto LABEL_207;
  }
  v137 = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( v1 >> 2 >= v137 )
  {
    v40 = 0LL;
    goto LABEL_211;
  }
  ProcessorNumber = 0;
  memset_0(&Information, 0, sizeof(Information));
  memset_0(&v146, 0, sizeof(v146));
  v36 = *(_QWORD *)(v4 + 8);
  Length = 80;
  v37 = 0LL;
  v38 = 1024LL;
  if ( g_MaximumProcessorCount )
    v38 = (unsigned int)g_MaximumProcessorCount;
  v139 = 0;
  v150 = 0;
  v148 = 0;
  v134 = 0;
  v132 = RaidAllocatePool(64LL, 56LL * (unsigned int)v38, 1917083986LL, v36);
  if ( !v132 )
  {
    v5 = (struct _PROCESSOR_NUMBER)-1073741670;
    v39 = 0LL;
    v40 = 0LL;
LABEL_212:
    ExFreePoolWithTag(v26, 0x72446152u);
    goto LABEL_214;
  }
  v41 = RaidAllocatePool(64LL, (unsigned int)(2 * v38), 1917083986LL, *(_QWORD *)(v4 + 8));
  v135 = (_BYTE *)v41;
  v40 = (void *)v41;
  if ( !v41 )
  {
    v39 = (void *)v132;
    v5 = (struct _PROCESSOR_NUMBER)-1073741670;
    goto LABEL_212;
  }
  v42 = v38 + v41;
  v155 = 0;
  v140 = v42;
  if ( v137 )
  {
    v43 = 0;
    v44 = v42;
    while ( 1 )
    {
      v45 = 0;
      if ( KeGetProcessorNumberFromIndex(v43, &ProcessorNumber) < 0
        || KeQueryLogicalProcessorRelationship(&ProcessorNumber, RelationProcessorModule, &Information, &Length) < 0 )
      {
        goto LABEL_130;
      }
      v46 = 0;
      v47 = 0;
      v48 = KeQueryLogicalProcessorRelationship(&ProcessorNumber, RelationProcessorCore, &v146, &Length);
      v49 = 0;
      EfficiencyClass = 0;
      if ( v48 >= 0 )
        EfficiencyClass = v146.Processor.EfficiencyClass;
      v143 = EfficiencyClass;
      if ( (_DWORD)v37 )
      {
        v51 = v132 + 40;
        v52 = (unsigned int)v37;
        do
        {
          if ( *(_WORD *)(v51 + 8) == Information.Processor.GroupMask[0].Group
            && *(_QWORD *)v51 == Information.Processor.GroupMask[0].Mask )
          {
            v45 = 1;
          }
          v51 += 56LL;
          --v52;
        }
        while ( v52 );
        if ( v45 )
        {
LABEL_130:
          v53 = v132;
          goto LABEL_131;
        }
      }
      v53 = v132;
      v54 = 56LL * (unsigned int)v37;
      *(_BYTE *)(v54 + v132 + 33) = -1;
      v55 = Information.Processor.GroupMask[0].Mask;
      if ( !Information.Processor.GroupMask[0].Mask )
        goto LABEL_129;
      v56 = v139;
      v57 = v150;
      do
      {
        while ( !_bittest64((const __int64 *)&v55, v46) )
          ++v46;
        v58 = *(_QWORD *)(v4 + 4744);
        v55 &= ~(1LL << v46);
        if ( *(_BYTE *)(v46 + (Information.Processor.GroupMask[0].Group << 6) + v58) == 0xFF )
        {
          if ( !v47 )
          {
            v47 = 1;
            if ( *(_BYTE *)(v54 + v53 + 33) == 0xFF )
              *(_BYTE *)(v54 + v53 + 33) = EfficiencyClass;
          }
        }
        else
        {
          if ( *(_BYTE *)(v54 + v53 + 33) == 0xFF )
          {
            *(_BYTE *)(v54 + v53 + 33) = EfficiencyClass;
            v58 = *(_QWORD *)(v4 + 4744);
          }
          v59 = *(unsigned __int8 *)(v54 + v53 + 32);
          if ( (unsigned __int8)v59 < 0x20u )
          {
            *(_BYTE *)(v54 + v59 + v53) = *(_BYTE *)(v46 + (Information.Processor.GroupMask[0].Group << 6) + v58);
            ++*(_BYTE *)(v54 + v53 + 32);
            v60 = *(_BYTE *)(v46 + (Information.Processor.GroupMask[0].Group << 6) + *(_QWORD *)(v4 + 4744));
            if ( (_BYTE)EfficiencyClass )
              *(_BYTE *)(v57++ + v44) = v60;
            else
              v135[v56++] = v60;
          }
        }
        ++v46;
      }
      while ( v55 );
      v150 = v57;
      LODWORD(v37) = v134;
      v139 = v56;
      v43 = v155;
      if ( !v47 )
        goto LABEL_129;
      v61 = Information.Processor.GroupMask[0].Mask;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      if ( !Information.Processor.GroupMask[0].Mask )
        goto LABEL_126;
      v65 = v143;
      v66 = v139;
      v67 = 56LL * v134;
      do
      {
        while ( !_bittest64((const __int64 *)&v61, v64) )
          ++v64;
        v68 = *(_QWORD *)(v4 + 4744);
        v61 &= ~(1LL << v64);
        v69 = v64 + (Information.Processor.GroupMask[0].Group << 6);
        if ( *(_BYTE *)(v69 + v68) != 0xFF )
          goto LABEL_120;
        if ( *(_BYTE *)(v67 + v132 + 32) )
        {
          v70 = *(_BYTE *)(v67 + v62 + v132);
          if ( v70 != -1 )
          {
            *(_BYTE *)(v69 + v68) = v70;
            v53 = v132;
            v62 = (v62 + 1) % *(unsigned __int8 *)(v67 + v132 + 32);
            goto LABEL_121;
          }
        }
        else
        {
          if ( v65 )
          {
            if ( v150 )
            {
              if ( v63 <= v62 )
                v63 = v62;
              v71 = *(_BYTE *)(v62 + v140);
              v62 = (v62 + 1) % v150;
              goto LABEL_119;
            }
          }
          else if ( v66 )
          {
            if ( v63 <= v62 )
              v63 = v62;
            v71 = v135[v62];
            v62 = (v62 + 1) % v66;
LABEL_119:
            *(_BYTE *)(v69 + v68) = v71;
            goto LABEL_120;
          }
          v49 = 1;
        }
LABEL_120:
        v53 = v132;
LABEL_121:
        ++v64;
      }
      while ( v61 );
      LODWORD(v37) = v134;
      v43 = v155;
      v44 = v140;
      if ( v49 )
      {
        v72 = v148;
        if ( !v148 )
          v72 = 1;
        v148 = v72;
      }
LABEL_126:
      v73 = 56LL * (unsigned int)v37;
      if ( !*(_BYTE *)(v73 + v53 + 32) && !v49 )
        *(_BYTE *)(v73 + v53 + 32) = v63 + 1;
LABEL_129:
      *(_WORD *)(56LL * (unsigned int)v37 + v53 + 48) = Information.Processor.GroupMask[0].Group;
      *(_QWORD *)(56LL * (unsigned int)v37 + v53 + 40) = Information.Processor.GroupMask[0].Mask;
      v37 = (unsigned int)(v37 + 1);
      v134 = v37;
LABEL_131:
      v155 = ++v43;
      if ( v43 >= v137 )
      {
        v1 = v152;
        v26 = (_WORD *)v142;
        if ( v148 )
        {
          v74 = 0LL;
          if ( (_DWORD)v37 )
          {
            v75 = v139;
            v76 = v53 + 40;
            v77 = 0;
            while ( *(_BYTE *)(v76 - 8) )
            {
LABEL_154:
              v76 += 56LL;
              if ( !--v37 )
              {
                v1 = v152;
                v26 = (_WORD *)v142;
                goto LABEL_156;
              }
            }
            v78 = -1;
            if ( *(_BYTE *)(v76 - 7) == 1 )
            {
              v79 = v150;
              if ( v150 )
                goto LABEL_141;
            }
            if ( v75 )
            {
              v74 = v135;
              v80 = v75;
              goto LABEL_143;
            }
            v79 = v150;
            if ( v150 )
            {
LABEL_141:
              v74 = (_BYTE *)v140;
              v80 = v79;
            }
            else
            {
              v78 = 0;
              v80 = 1;
            }
LABEL_143:
            v81 = *(_QWORD *)v76;
            v82 = 0;
            while ( v81 )
            {
              while ( !_bittest64(&v81, v82) )
                ++v82;
              v83 = *(_QWORD *)(v4 + 4744);
              v81 &= ~(1LL << v82);
              v84 = v82 + (*(unsigned __int16 *)(v76 + 8) << 6);
              if ( *(_BYTE *)(v84 + v83) == 0xFF )
              {
                if ( v78 == -1 )
                {
                  *(_BYTE *)(v82 + (*(unsigned __int16 *)(v76 + 8) << 6) + v83) = v74[v77];
                  v85 = v77 + 1;
                  if ( v77 + 1 <= *(unsigned __int8 *)(v76 - 8) )
                    v85 = *(_BYTE *)(v76 - 8);
                  *(_BYTE *)(v76 - 8) = v85;
                  v77 = (v77 + 1) % v80;
                }
                else
                {
                  *(_BYTE *)(v84 + v83) = v78;
                  *(_BYTE *)(v76 - 8) = 1;
                }
              }
              ++v82;
            }
            goto LABEL_154;
          }
        }
LABEL_156:
        v40 = v135;
        break;
      }
    }
  }
LABEL_211:
  v39 = (void *)v132;
  *(_WORD *)(v4 + 4724) = v1 & 0xFFFC ^ (*(_WORD *)(v4 + 4724) & 1 | 2);
  v5 = 0;
  if ( v26 )
    goto LABEL_212;
LABEL_214:
  ExFreePoolWithTag(P, 0x72446152u);
  if ( v39 )
    ExFreePoolWithTag(v39, 0x72446152u);
  if ( v40 )
    ExFreePoolWithTag(v40, 0x72446152u);
  return *(unsigned int *)&v5;
}
