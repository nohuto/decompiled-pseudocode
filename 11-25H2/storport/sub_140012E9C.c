/*
 * XREFs of sub_140012E9C @ 0x140012E9C
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140029740 @ 0x140029740 (sub_140029740.c)
 *     sub_14002B350 @ 0x14002B350 (sub_14002B350.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140012E9C(__int64 a1)
{
  unsigned __int16 v1; // bx
  WORD v2; // r15
  unsigned int v3; // edi
  __int64 v4; // r14
  struct _PROCESSOR_NUMBER v5; // esi
  __int64 *v6; // r15
  struct _SLIST_ENTRY *v7; // r13
  void *v8; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // r15d
  unsigned int *v15; // rsi
  KIRQL v16; // r13
  USHORT ActiveGroupCount; // ax
  __int64 v18; // r12
  PVOID v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r13
  ULONG v22; // ebx
  ULONG ActiveProcessorCount; // r14d
  unsigned __int64 v24; // rdi
  int v25; // edi
  unsigned int v26; // eax
  size_t v27; // r15
  USHORT v28; // si
  _WORD *v29; // r12
  int v30; // r13d
  char *v31; // rax
  unsigned __int16 v32; // r8
  unsigned __int16 v33; // r10
  unsigned int v34; // r9d
  char *v35; // rdx
  char v36; // r11
  unsigned __int16 i; // cx
  unsigned int v38; // r13d
  __int64 v39; // r9
  unsigned int v40; // edi
  char *v41; // r15
  char *v42; // rax
  PVOID v43; // r13
  KAFFINITY v44; // r10
  ULONG v45; // eax
  unsigned int v46; // r12d
  char v47; // di
  NTSTATUS ProcessorNumberFromIndex; // eax
  NTSTATUS v49; // eax
  unsigned int v50; // esi
  char v51; // r15
  NTSTATUS v52; // eax
  int v53; // ebx
  char *v54; // rax
  __int64 v55; // rcx
  char *v56; // rcx
  __int64 v57; // rdx
  unsigned int v58; // r13d
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r11
  __int64 v62; // rcx
  char v63; // al
  char *v64; // r11
  char v65; // al
  KAFFINITY v66; // rdi
  unsigned int v67; // r9d
  unsigned int v68; // ecx
  char v69; // dl
  unsigned int v70; // r11d
  __int64 v71; // rbx
  unsigned int v72; // r10d
  char v73; // si
  __int64 v74; // r15
  char *v75; // rdx
  char v76; // cl
  unsigned int v77; // edx
  char v78; // al
  __int64 v79; // r8
  __int64 v80; // rcx
  _BYTE *v81; // rsi
  unsigned int v82; // ecx
  unsigned int v83; // ebx
  char *v84; // r9
  __int64 v85; // rdx
  char v86; // r13
  unsigned int v87; // r11d
  __int64 v88; // rdi
  __int64 v89; // r15
  __int64 v90; // rax
  char v91; // r8
  size_t v92; // r13
  struct _GROUP_AFFINITY *v93; // r15
  KAFFINITY Mask; // rdx
  unsigned __int16 v95; // r9
  int v96; // edi
  unsigned __int16 j; // r8
  __int64 v98; // rax
  unsigned int v99; // ecx
  unsigned int v100; // edx
  char v101; // cl
  __int64 v102; // r9
  int v103; // r10d
  __int64 v104; // r8
  char v105; // r10
  _BYTE *v106; // rax
  __int64 v107; // r9
  unsigned int v108; // r8d
  unsigned int v109; // r11d
  int v110; // r9d
  unsigned int v111; // eax
  unsigned int v112; // r8d
  __int64 v113; // r10
  USHORT v114; // r15
  ULONG v115; // r12d
  char *v116; // rbx
  char *v117; // rdi
  ULONG v118; // eax
  unsigned int v119; // r11d
  int v120; // esi
  unsigned int v121; // r13d
  int v122; // r9d
  unsigned int k; // r8d
  __int64 v124; // r10
  unsigned int v125; // r13d
  ULONG v126; // eax
  char *v127; // r11
  char *v128; // r8
  unsigned int v129; // ebx
  unsigned __int16 v130; // r9
  int v131; // r10d
  __int64 v132; // rsi
  __int64 v133; // rdi
  int v134; // ecx
  unsigned int v135; // edx
  signed __int32 v136[8]; // [rsp+0h] [rbp-100h] BYREF
  char *v137; // [rsp+20h] [rbp-E0h]
  struct _PROCESSOR_NUMBER ProcessorNumber; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v139; // [rsp+2Ch] [rbp-D4h]
  ULONG v140; // [rsp+30h] [rbp-D0h]
  unsigned int v141; // [rsp+34h] [rbp-CCh]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v143; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h]
  ULONG Length; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v146; // [rsp+58h] [rbp-A8h]
  char *v147; // [rsp+60h] [rbp-A0h]
  int v148; // [rsp+68h] [rbp-98h]
  __int64 v149; // [rsp+70h] [rbp-90h]
  __int128 v150; // [rsp+78h] [rbp-88h] BYREF
  __int64 v151; // [rsp+88h] [rbp-78h]
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Dst; // [rsp+90h] [rbp-70h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+E0h] [rbp-20h] BYREF
  char v155; // [rsp+180h] [rbp+80h]
  __int64 v156; // [rsp+180h] [rbp+80h]
  unsigned int v157; // [rsp+188h] [rbp+88h]
  KIRQL v158; // [rsp+188h] [rbp+88h]
  unsigned int v159; // [rsp+188h] [rbp+88h]
  USHORT v160; // [rsp+188h] [rbp+88h]
  unsigned __int16 v161; // [rsp+190h] [rbp+90h]
  __int64 *v162; // [rsp+198h] [rbp+98h]
  USHORT v163; // [rsp+198h] [rbp+98h]
  int v164; // [rsp+198h] [rbp+98h]
  unsigned int v165; // [rsp+198h] [rbp+98h]

  v1 = *(_WORD *)(a1 + 4660);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 4664);
  ProcNumber = 0;
  v4 = a1;
  v151 = 0LL;
  v143 = 0LL;
  ProcessorNumber = 0;
  v5 = 0;
  v161 = v1;
  *(_WORD *)(a1 + 4660) = 0;
  v150 = 0LL;
  if ( (int)v3 < 1 )
    v3 = -v3;
  *(_DWORD *)(a1 + 4664) = 1;
  if ( v3 > 1 )
  {
    v6 = (__int64 *)(a1 + 4672);
    if ( *(char *)(a1 + 110) >= 0 || !*v6 )
    {
      v7 = (struct _SLIST_ENTRY *)sub_1400143E0(64LL, 32LL * v3, 1413701970LL, *(_QWORD *)(a1 + 8));
      if ( !v7 )
        goto LABEL_7;
      v10 = KeQueryHighestNodeNumber() + 1;
      v157 = v10;
      v11 = sub_1400143E0(72LL, (unsigned __int64)v10 << 6, 1413701970LL, *(_QWORD *)(v4 + 8));
      *v6 = v11;
      if ( !v11 )
        goto LABEL_7;
      if ( v10 )
      {
        v12 = v10;
        v13 = 0LL;
        do
        {
          InitializeSListHead((PSLIST_HEADER)(v13 + *v6));
          v13 += 64LL;
          --v12;
        }
        while ( v12 );
        v10 = v157;
        v162 = (__int64 *)(v4 + 4672);
        v14 = 0;
      }
      else
      {
        v162 = v6;
        v14 = 0;
      }
      v15 = (unsigned int *)&v7[1].Next + 1;
      do
      {
        *v15 = v14;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(*v162 + ((unsigned __int64)(v14 % v10) << 6)), v7);
        ++v14;
        v15 += 8;
        v7 += 2;
      }
      while ( v14 < v3 );
      v4 = a1;
      sub_14002B350(a1, &v150);
      *(_DWORD *)(a1 + 4664) = v3;
      sub_140029740(a1, &v150);
      v5 = ProcessorNumber;
    }
    v2 = 0;
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_8;
  v16 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v158 = v16;
  if ( _InterlockedIncrement(&dword_140168560) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v18 = ActiveGroupCount;
    v163 = ActiveGroupCount;
    if ( *(char *)(v4 + 110) < 0 && (v19 = ::P) != 0LL )
    {
      v20 = (unsigned int)v18;
    }
    else
    {
      v20 = v18;
      v19 = (PVOID)sub_1400143E0(64LL, v18 << 13, 1917083986LL, *(_QWORD *)(v4 + 8));
      ::P = v19;
    }
    if ( !v19
      || (*(char *)(v4 + 110) >= 0 || !qword_140168520)
      && (qword_140168520 = (PVOID)sub_1400143E0(64LL, 4 * v20, 1917083986LL, *(_QWORD *)(v4 + 8))) == 0LL )
    {
      v5 = (struct _PROCESSOR_NUMBER)-1073741670;
      if ( _InterlockedExchangeAdd(&dword_140168560, 0xFFFFFFFF) == 1 )
      {
        if ( ::P )
        {
          ExFreePoolWithTag(::P, 0x72446152u);
          ::P = 0LL;
        }
        if ( qword_140168520 )
        {
          ExFreePoolWithTag(qword_140168520, 0x72446152u);
          qword_140168520 = 0LL;
        }
        dword_140168668 = 0;
      }
      KeReleaseSpinLock(&SpinLock, v16);
      goto LABEL_8;
    }
    if ( (_WORD)v18 )
    {
      v21 = 0LL;
      do
      {
        ProcNumber.Group = v2;
        ProcNumber.Reserved = 0;
        v22 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v2);
        if ( ActiveProcessorCount )
        {
          do
          {
            v24 = (unsigned __int64)((v2 << 6) + v22) << 7;
            ProcNumber.Number = v22;
            KeInitializeDpc((PRKDPC)((char *)::P + v24), DeferredRoutine, (char *)::P + v24);
            KeSetImportanceDpc((PRKDPC)((char *)::P + v24), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)((char *)::P + v24), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)((char *)::P + v24 + 64));
            InitializeSListHead((PSLIST_HEADER)((char *)::P + v24 + 80));
            ++v22;
            *(_DWORD *)((char *)::P + v24 + 96) = 0;
          }
          while ( v22 < ActiveProcessorCount );
          LOWORD(v18) = v163;
        }
        ++v2;
        *(_DWORD *)((char *)qword_140168520 + v21) = ActiveProcessorCount;
        v21 += 4LL;
      }
      while ( v2 < (unsigned __int16)v18 );
      v1 = v161;
      v5 = ProcessorNumber;
      v4 = a1;
      v16 = v158;
    }
    _InterlockedOr(v136, 0);
    dword_140168668 = (unsigned __int16)v18;
  }
  *(_WORD *)(v4 + 4660) |= 1u;
  KeReleaseSpinLock(&SpinLock, v16);
  if ( (v1 & 2) == 0 || (v1 & 0xFFFC) == 0 )
  {
LABEL_8:
    v8 = *(void **)(v4 + 4680);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x72446152u);
      *(_QWORD *)(v4 + 4680) = 0LL;
      *(_WORD *)(v4 + 4662) = 0;
    }
    return *(unsigned int *)&v5;
  }
  v25 = v1 >> 2;
  v26 = v25 + 281;
  if ( (((_BYTE)v25 + 24) & 1) == 0 )
    v26 = v25 + 280;
  v27 = v26;
  v28 = 0;
  v146 = sub_1400143E0(66LL, v26, 1917083986LL, *(_QWORD *)(v4 + 8));
  v29 = (_WORD *)v146;
  if ( !v146 )
  {
LABEL_7:
    v5 = (struct _PROCESSOR_NUMBER)-1073741670;
    goto LABEL_8;
  }
  v30 = v25 + 5;
  if ( (((_BYTE)v25 + 4) & 1) == 0 )
    v30 = v25 + 4;
  v164 = v30;
  v31 = (char *)sub_1400143E0(
                  64LL,
                  v30 * (unsigned int)*(unsigned __int16 *)(v4 + 4662),
                  1917083986LL,
                  *(_QWORD *)(v4 + 8));
  P = v31;
  if ( !v31 )
  {
    ExFreePoolWithTag(v29, 0x72446152u);
    goto LABEL_7;
  }
  v32 = 0;
  if ( *(_WORD *)(v4 + 4662) )
  {
    do
    {
      v33 = 0;
      v34 = 0;
      v35 = &v31[v32 * v30];
      *(_WORD *)v35 = v32;
      do
      {
        v36 = *(_BYTE *)(v34 + (v32 << 6) + *(_QWORD *)(v4 + 4680));
        if ( v36 != -1 )
        {
          for ( i = 0; i < v33; ++i )
          {
            if ( v35[i + 4] == v36 )
              goto LABEL_63;
          }
          v35[v33 + 4] = v36;
          ++*((_WORD *)v35 + 1);
          ++v33;
        }
LABEL_63:
        ++v34;
      }
      while ( v34 < 0x40 );
      ++v32;
    }
    while ( v32 < *(_WORD *)(v4 + 4662) );
    v1 = v161;
    v29 = (_WORD *)v146;
  }
  if ( !byte_140168D81 || (*(_BYTE *)(v4 + 4371) & 0x10) == 0 )
  {
    if ( KeQueryHighestNodeNumber() != -1 )
    {
      v92 = v27;
      v93 = (struct _GROUP_AFFINITY *)(v29 + 132);
      do
      {
        memset_0(v29, 0, v92);
        KeQueryNodeActiveAffinity(v28, v93, v29);
        if ( *v29 )
        {
          Mask = v93->Mask;
          v95 = 0;
          v96 = 0;
          for ( j = 0; Mask; Mask >>= 1 )
          {
            if ( (Mask & 1) != 0 )
            {
              v98 = v95++;
              *(_DWORD *)&v29[2 * v98 + 2] = j;
            }
            ++j;
          }
          LOWORD(v99) = *v29;
          v100 = 0;
          if ( *v29 )
          {
            do
            {
              v101 = 0;
              v102 = *(_QWORD *)(v4 + 4680);
              v103 = (unsigned __int16)v29[136] << 6;
              if ( *(_BYTE *)((unsigned int)(v103 + *(_DWORD *)&v29[2 * v100 + 2]) + v102) == 0xFF )
              {
                ++v96;
              }
              else
              {
                v104 = *((unsigned int *)v29 + 65);
                if ( !(_DWORD)v104 )
                  goto LABEL_178;
                v105 = *(_BYTE *)((unsigned int)(v103 + *(_DWORD *)&v29[2 * v100 + 2]) + v102);
                v106 = v29 + 140;
                v107 = (unsigned int)v104;
                do
                {
                  if ( v105 == *v106 )
                    v101 = 1;
                  ++v106;
                  --v107;
                }
                while ( v107 );
                v102 = *(_QWORD *)(v4 + 4680);
                if ( !v101 )
                {
LABEL_178:
                  *((_BYTE *)v29 + v104 + 280) = *(_BYTE *)(((unsigned __int16)v29[136] << 6)
                                                          + *(_DWORD *)&v29[2 * v100 + 2]
                                                          + v102);
                  ++*((_DWORD *)v29 + 65);
                }
              }
              v99 = (unsigned __int16)*v29;
              ++v100;
            }
            while ( v100 < v99 );
          }
          v108 = *((_DWORD *)v29 + 65);
          LOWORD(v109) = 0;
          if ( v108 )
          {
            if ( v96 )
            {
              v110 = 0;
              v111 = (v108 + v96 - 1) / v108;
              v112 = 0;
              if ( (_WORD)v99 )
              {
                do
                {
                  v113 = *(_QWORD *)(v4 + 4680);
                  if ( *(_BYTE *)(((unsigned __int16)v29[136] << 6) + *(_DWORD *)&v29[2 * v112 + 2] + v113) == 0xFF )
                  {
                    ++v110;
                    *(_BYTE *)(((unsigned __int16)v29[136] << 6) + *(_DWORD *)&v29[2 * v112 + 2] + v113) = *((_BYTE *)v29 + (unsigned __int16)v109 + 280);
                    if ( v110 == v111 )
                    {
                      v110 = 0;
                      v109 = ((unsigned int)(unsigned __int16)v109 + 1) % *((_DWORD *)v29 + 65);
                    }
                  }
                  ++v112;
                }
                while ( v112 < (unsigned __int16)*v29 );
                v93 = (struct _GROUP_AFFINITY *)(v29 + 132);
              }
            }
          }
        }
        ++v28;
      }
      while ( v28 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
      v1 = v161;
      v30 = v164;
    }
    ExFreePoolWithTag(v29, 0x72446152u);
    LODWORD(v44) = 0;
    v29 = 0LL;
    v114 = 0;
    v160 = 0;
    if ( !*(_WORD *)(v4 + 4662) )
    {
LABEL_214:
      v41 = 0LL;
      goto LABEL_215;
    }
    v115 = v1;
    v116 = (char *)P;
    v140 = v115;
    while ( 1 )
    {
      v117 = &v116[v114 * v30];
      if ( !*((_WORD *)v117 + 1) )
        break;
      v118 = KeQueryActiveProcessorCountEx(v114);
      v119 = (*((unsigned __int16 *)v117 + 1) + v118 - 1) / *((unsigned __int16 *)v117 + 1) - 1;
      if ( (*((unsigned __int16 *)v117 + 1) + v118 - 1) / *((unsigned __int16 *)v117 + 1) != 1 )
      {
        v120 = v114 << 6;
        LOWORD(v121) = 0;
        v122 = 0;
        for ( k = 0; k < 0x40; ++k )
        {
          v124 = *(_QWORD *)(v4 + 4680);
          if ( *(_BYTE *)(k + v120 + v124) == 0xFF )
          {
            ++v122;
            *(_BYTE *)(k + v120 + v124) = v117[(unsigned __int16)v121 + 4];
            if ( v122 == v119 )
            {
              v122 = 0;
              v121 = ((unsigned int)(unsigned __int16)v121 + 1) % *((unsigned __int16 *)v117 + 1);
            }
          }
        }
LABEL_211:
        v30 = v164;
        v115 = v140;
        v114 = v160;
      }
      ++v114;
      LODWORD(v44) = 0;
      v160 = v114;
      if ( v114 >= *(_WORD *)(v4 + 4662) )
      {
        v1 = v161;
        v29 = 0LL;
        goto LABEL_214;
      }
    }
    LOWORD(v125) = 0;
    v126 = KeQueryActiveProcessorCountEx(v114);
    v127 = (char *)P;
    v128 = (char *)P;
    v141 = ((v115 >> 2) + v126 - 1) / (v115 >> 2);
    v129 = v141;
    v130 = 0;
    v131 = 0;
    v132 = v114 << 6;
    v133 = 64LL;
    do
    {
      if ( *(_BYTE *)(v132 + *(_QWORD *)(v4 + 4680)) == 0xFF )
      {
        if ( !*((_WORD *)v128 + 1) )
        {
          v134 = (unsigned __int16)v125;
          do
          {
            v135 = (v134 + 1) % (unsigned int)*(unsigned __int16 *)(v4 + 4662);
            v134 = (unsigned __int16)v135;
            LOWORD(v125) = v135;
            v128 = (char *)P + v164 * (unsigned int)(unsigned __int16)v135;
          }
          while ( !*((_WORD *)v128 + 1) );
          v4 = a1;
          v129 = v141;
          v127 = (char *)P;
        }
        ++v131;
        *(_BYTE *)(v132 + *(_QWORD *)(v4 + 4680)) = v128[v130 + 4];
        if ( v131 == v129 )
        {
          ++v130;
          v131 = 0;
          if ( v130 == *((_WORD *)v128 + 1) )
          {
            v125 = ((unsigned int)(unsigned __int16)v125 + 1) % *(unsigned __int16 *)(v4 + 4662);
            v128 = &v127[v164 * v125];
            v130 = 0;
          }
        }
      }
      v132 = (unsigned int)(v132 + 1);
      --v133;
    }
    while ( v133 );
    v116 = (char *)P;
    goto LABEL_211;
  }
  v141 = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( v1 >> 2 >= v141 )
  {
    v41 = 0LL;
    LODWORD(v44) = 0;
    goto LABEL_215;
  }
  ProcessorNumber = 0;
  memset_0(&Dst, 0, sizeof(Dst));
  memset_0(&Information, 0, sizeof(Information));
  v38 = 0;
  v39 = *(_QWORD *)(v4 + 8);
  Length = 80;
  v40 = 1024;
  v139 = 0;
  if ( dword_1401688B0 )
    v40 = dword_1401688B0;
  v165 = 0;
  v159 = 0;
  v155 = 0;
  v41 = (char *)sub_1400143E0(64LL, 56LL * v40, 1917083986LL, v39);
  v137 = v41;
  v42 = 0LL;
  if ( !v41
    || (v42 = (char *)sub_1400143E0(64LL, 2 * v40, 1917083986LL, *(_QWORD *)(v4 + 8)),
        LODWORD(v44) = 0,
        (v143 = v42) == 0LL) )
  {
    v5 = (struct _PROCESSOR_NUMBER)-1073741670;
    v43 = v42;
    goto LABEL_216;
  }
  v147 = &v42[v40];
  v45 = 0;
  v140 = 0;
  if ( !v141 )
    goto LABEL_215;
  v46 = 0;
  do
  {
    v47 = v44;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v45, &ProcessorNumber);
    LODWORD(v44) = 0;
    if ( ProcessorNumberFromIndex < 0 )
      goto LABEL_136;
    v49 = KeQueryLogicalProcessorRelationship(&ProcessorNumber, RelationGroup|RelationProcessorPackage, &Dst, &Length);
    LODWORD(v44) = 0;
    if ( v49 < 0 )
      goto LABEL_136;
    v50 = 0;
    v51 = 0;
    v52 = KeQueryLogicalProcessorRelationship(&ProcessorNumber, RelationProcessorCore, &Information, &Length);
    LODWORD(v44) = 0;
    v53 = 0;
    if ( v52 >= 0 )
      v53 = Information.Processor.Reserved[0];
    v148 = v53;
    if ( v38 )
    {
      v54 = v137 + 40;
      v55 = v38;
      do
      {
        if ( *((_WORD *)v54 + 4) == Dst.Processor.GroupMask[0].Group
          && *(_QWORD *)v54 == Dst.Processor.GroupMask[0].Mask )
        {
          v47 = 1;
        }
        v54 += 56;
        --v55;
      }
      while ( v55 );
      if ( v47 )
      {
        v41 = v137;
        goto LABEL_136;
      }
    }
    v56 = v137;
    v57 = 56LL * v38;
    v137[v57 + 33] = -1;
    v44 = Dst.Processor.GroupMask[0].Mask;
    if ( !Dst.Processor.GroupMask[0].Mask )
    {
      v41 = v56;
      LODWORD(v44) = 0;
      goto LABEL_134;
    }
    v58 = v159;
    do
    {
      while ( 1 )
      {
        v59 = v58;
        v60 = v46;
        if ( _bittest64((const __int64 *)&v44, v50) )
          break;
        ++v50;
      }
      v61 = *(_QWORD *)(v4 + 4680);
      v44 &= ~(1LL << v50);
      if ( *(_BYTE *)(v50 + (Dst.Processor.GroupMask[0].Group << 6) + v61) == 0xFF )
      {
        if ( !v51 )
        {
          v51 = 1;
          if ( v56[v57 + 33] == -1 )
            v56[v57 + 33] = v53;
        }
      }
      else
      {
        if ( v56[v57 + 33] == -1 )
        {
          v56[v57 + 33] = v53;
          v61 = *(_QWORD *)(v4 + 4680);
        }
        v62 = (unsigned __int8)v56[v57 + 32];
        if ( (unsigned __int8)v62 < 0x20u )
        {
          v63 = *(_BYTE *)(v50 + (Dst.Processor.GroupMask[0].Group << 6) + v61);
          v64 = v137;
          v137[v57 + v62] = v63;
          ++v64[v57 + 32];
          v65 = *(_BYTE *)(v50 + (Dst.Processor.GroupMask[0].Group << 6) + *(_QWORD *)(v4 + 4680));
          if ( (_BYTE)v53 )
          {
            ++v58;
            v147[v59] = v65;
          }
          else
          {
            ++v46;
            *((_BYTE *)v143 + v60) = v65;
          }
        }
        v56 = v137;
      }
      ++v50;
    }
    while ( v44 );
    v159 = v58;
    v38 = v139;
    v165 = v46;
    if ( !v51 )
    {
      v41 = v137;
      goto LABEL_134;
    }
    v66 = Dst.Processor.GroupMask[0].Mask;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    if ( !Dst.Processor.GroupMask[0].Mask )
      goto LABEL_129;
    v71 = 56LL * v139;
    do
    {
      while ( 1 )
      {
        v72 = v68;
        v73 = v69;
        if ( _bittest64((const __int64 *)&v66, v70) )
          break;
        ++v70;
      }
      v66 &= ~(1LL << v70);
      v74 = v70 + (Dst.Processor.GroupMask[0].Group << 6);
      v149 = *(_QWORD *)(v4 + 4680);
      if ( *(_BYTE *)(v74 + v149) != 0xFF )
        goto LABEL_124;
      v75 = v137;
      if ( !v137[v71 + 32] )
      {
        if ( (_BYTE)v148 )
        {
          if ( v159 )
          {
            *(_BYTE *)(v74 + v149) = v147[v67];
            if ( v68 <= v67 )
              v68 = v67;
            v77 = (v67 + 1) % v159;
            goto LABEL_122;
          }
        }
        else if ( v46 )
        {
          *(_BYTE *)(v74 + v149) = *((_BYTE *)v143 + v67);
          if ( v68 <= v67 )
            v68 = v67;
          v77 = (v67 + 1) % v46;
LABEL_122:
          v67 = v77;
          v69 = v73;
          goto LABEL_124;
        }
        v69 = 1;
        goto LABEL_124;
      }
      v76 = v137[v71 + v67];
      if ( v76 != -1 )
      {
        *(_BYTE *)(v74 + v149) = v76;
        v67 = (v67 + 1) % (unsigned __int8)v75[v71 + 32];
      }
      v69 = v73;
      v68 = v72;
LABEL_124:
      ++v70;
      LODWORD(v44) = 0;
    }
    while ( v66 );
    v38 = v139;
    if ( v69 )
    {
      v78 = v155;
      if ( !v155 )
        v78 = 1;
      v155 = v78;
    }
LABEL_129:
    v41 = v137;
    v79 = 56LL * v38;
    if ( !v137[v79 + 32] && !v69 )
      v137[v79 + 32] = v68 + 1;
LABEL_134:
    *(_WORD *)&v41[56 * v38 + 48] = Dst.Processor.GroupMask[0].Group;
    v80 = 56LL * v38++;
    v139 = v38;
    *(_QWORD *)&v41[v80 + 40] = Dst.Processor.GroupMask[0].Mask;
LABEL_136:
    v45 = v140 + 1;
    v140 = v45;
  }
  while ( v45 < v141 );
  v1 = v161;
  v29 = (_WORD *)v146;
  if ( v155 )
  {
    v81 = 0LL;
    v82 = 0;
    if ( v38 )
    {
      v83 = v165;
      v84 = v41 + 40;
      v85 = v38;
      v156 = v38;
      while ( *(v84 - 8) != (_BYTE)v44 )
      {
LABEL_160:
        v84 += 56;
        v156 = --v85;
        if ( !v85 )
        {
          v1 = v161;
          v29 = (_WORD *)v146;
          v41 = v137;
          goto LABEL_215;
        }
      }
      v86 = -1;
      if ( *(v84 - 7) != 1 || !v159 )
      {
        if ( v83 )
        {
          v81 = v143;
          v87 = v83;
LABEL_148:
          v88 = *(_QWORD *)v84;
          if ( *(_QWORD *)v84 )
          {
            do
            {
              while ( !_bittest64(&v88, (unsigned int)v44) )
                LODWORD(v44) = v44 + 1;
              v89 = *(_QWORD *)(v4 + 4680);
              v88 &= ~(1LL << v44);
              v90 = (unsigned int)v44 + (*((unsigned __int16 *)v84 + 4) << 6);
              if ( *(_BYTE *)(v90 + v89) == 0xFF )
              {
                if ( v86 == -1 )
                {
                  *(_BYTE *)(v90 + v89) = v81[v82];
                  v91 = v82 + 1;
                  if ( v82 + 1 <= (unsigned __int8)*(v84 - 8) )
                    v91 = *(v84 - 8);
                  *(v84 - 8) = v91;
                  v82 = (v82 + 1) % v87;
                }
                else
                {
                  *(_BYTE *)(v90 + v89) = v86;
                  *(v84 - 8) = 1;
                }
              }
              LODWORD(v44) = v44 + 1;
            }
            while ( v88 );
            v85 = v156;
            v83 = v165;
          }
          LODWORD(v44) = 0;
          goto LABEL_160;
        }
        if ( !v159 )
        {
          v86 = v44;
          v87 = 1;
          goto LABEL_148;
        }
      }
      v81 = v147;
      v87 = v159;
      goto LABEL_148;
    }
  }
LABEL_215:
  v43 = v143;
  *(_WORD *)(v4 + 4660) = v1 & 0xFFFC ^ (*(_WORD *)(v4 + 4660) & 1 | 2);
  v5 = (struct _PROCESSOR_NUMBER)v44;
  if ( v29 )
LABEL_216:
    ExFreePoolWithTag(v29, 0x72446152u);
  ExFreePoolWithTag(P, 0x72446152u);
  if ( v41 )
    ExFreePoolWithTag(v41, 0x72446152u);
  if ( v43 )
    ExFreePoolWithTag(v43, 0x72446152u);
  return *(unsigned int *)&v5;
}
