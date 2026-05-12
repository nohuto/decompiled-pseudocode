/*
 * XREFs of sub_1400068E0 @ 0x1400068E0
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_1400067A0 @ 0x1400067A0 (sub_1400067A0.c)
 *     sub_1400078A0 @ 0x1400078A0 (sub_1400078A0.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 * Callees:
 *     sub_14000E060 @ 0x14000E060 (sub_14000E060.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140022AC0 @ 0x140022AC0 (sub_140022AC0.c)
 *     sub_140029040 @ 0x140029040 (sub_140029040.c)
 *     sub_14002B0D0 @ 0x14002B0D0 (sub_14002B0D0.c)
 *     sub_1400395B0 @ 0x1400395B0 (sub_1400395B0.c)
 *     sub_140045B70 @ 0x140045B70 (sub_140045B70.c)
 *     sub_140046B40 @ 0x140046B40 (sub_140046B40.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140051870 @ 0x140051870 (sub_140051870.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140054A1C @ 0x140054A1C (sub_140054A1C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14006D084 @ 0x14006D084 (sub_14006D084.c)
 *     sub_140133B9C @ 0x140133B9C (sub_140133B9C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400068E0(__int64 a1, __int64 a2, int a3)
{
  int v3; // r12d
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdi
  char v8; // al
  char *v10; // r11
  unsigned int v11; // ebx
  unsigned int v12; // r9d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r8
  int v17; // ecx
  int v18; // ecx
  unsigned __int64 v19; // rcx
  char v20; // cl
  int v21; // ecx
  int v22; // eax
  _BYTE *v23; // r11
  unsigned int v24; // ebx
  unsigned int i; // r9d
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // r10
  __int64 v29; // r8
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r8
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  char v36; // al
  char v37; // al
  bool v38; // sf
  __int64 v39; // rcx
  char *v40; // rdx
  char v41; // al
  int *v42; // rax
  __int64 v43; // rdx
  char v44; // r13
  unsigned __int8 v45; // r11
  char v46; // bl
  char v47; // r14
  unsigned __int8 *v48; // rdi
  unsigned int v49; // esi
  _BYTE *v50; // r10
  __int64 v51; // rcx
  unsigned __int64 v52; // r8
  __int64 v53; // r9
  int v54; // ecx
  int v55; // ecx
  unsigned __int64 v56; // rcx
  char *v57; // rcx
  char v58; // r8
  char *v59; // rax
  unsigned int v60; // eax
  unsigned __int64 v61; // r8
  signed __int32 v63; // eax
  unsigned __int64 v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rdx
  char v67; // cl
  _BYTE *v69; // r14
  unsigned int v70; // ebx
  unsigned int v71; // r10d
  __int64 v72; // rcx
  unsigned __int64 v73; // r8
  __int64 v74; // r11
  __int64 v75; // r9
  int v76; // ecx
  int v77; // ecx
  unsigned __int64 v78; // rcx
  unsigned __int8 v79; // bl
  unsigned int v80; // esi
  unsigned int v81; // r10d
  __int64 v82; // rcx
  unsigned __int64 v83; // r8
  __int64 v84; // r11
  __int64 v85; // r9
  int v86; // ecx
  int v87; // ecx
  unsigned __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // rsi
  char *v92; // r9
  unsigned int v93; // ebx
  unsigned int v94; // r10d
  __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // r11
  __int64 v98; // r8
  int v99; // ecx
  int v100; // ecx
  unsigned __int64 v101; // rcx
  char v102; // cl
  unsigned __int64 v103; // r8
  __int64 v104; // rcx
  __int64 v105; // rbx
  unsigned int v106; // r10d
  __int64 v107; // r9
  __int64 v108; // rcx
  int v109; // esi
  int v110; // eax
  bool v111; // zf
  __int64 v112; // r8
  _QWORD *v113; // rbx
  _DWORD *v114; // rax
  ULONGLONG v115; // rax
  int v116; // esi
  int v117; // r9d
  char v118; // r14
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r14
  unsigned int v122; // esi
  KSPIN_LOCK *v123; // rbx
  unsigned __int64 v124; // rbx
  unsigned int v125; // ebx
  __int64 v126; // r13
  char v127; // si
  int v128; // eax
  _BYTE *v129; // r11
  unsigned int v130; // r9d
  unsigned int v131; // ebx
  __int64 v132; // rcx
  unsigned __int64 v133; // rdx
  __int64 v134; // r10
  __int64 v135; // r8
  int v136; // ecx
  int v137; // ecx
  unsigned __int64 v138; // rcx
  void (__fastcall *v139)(__int64, __int64, __int128 *, _QWORD); // rax
  __int64 v140; // rcx
  __int64 v141; // rdx
  void *v142; // rcx
  char v143; // [rsp+48h] [rbp-81h]
  char v144; // [rsp+60h] [rbp-69h]
  char v145; // [rsp+60h] [rbp-69h]
  unsigned __int64 v147; // [rsp+68h] [rbp-61h]
  unsigned __int64 v148; // [rsp+68h] [rbp-61h]
  KIRQL v150; // [rsp+78h] [rbp-51h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v152; // [rsp+80h] [rbp-49h]
  int v153; // [rsp+84h] [rbp-45h] BYREF
  int v154; // [rsp+88h] [rbp-41h] BYREF
  signed __int32 v155; // [rsp+8Ch] [rbp-3Dh]
  __int64 v156; // [rsp+90h] [rbp-39h]
  __int64 v157; // [rsp+98h] [rbp-31h] BYREF
  __int128 v158; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v159; // [rsp+B0h] [rbp-19h]
  int v160; // [rsp+B8h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v162; // [rsp+D8h] [rbp+Fh] BYREF

  LOBYTE(v3) = 0;
  ProcNumber = 0;
  v159 = 0LL;
  v5 = *(_QWORD *)(a2 + 184);
  v158 = 0LL;
  v160 = 0;
  v6 = a2;
  v7 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)&v162 = v5;
  v156 = 0LL;
  v157 = 0LL;
  v154 = 0;
  v153 = 0;
  if ( !*(_BYTE *)(a1 + 3368) )
    goto LABEL_31;
  v8 = *(_BYTE *)(v7 + 2);
  if ( v8 == 40 ? *(_DWORD *)(v7 + 20) : *(unsigned __int8 *)(v7 + 2) )
    goto LABEL_31;
  if ( v8 != 40 )
  {
    v10 = (char *)(v7 + 72);
    goto LABEL_25;
  }
  v10 = 0LL;
  if ( !*(_DWORD *)(v7 + 20) )
  {
    v11 = *(_DWORD *)(v7 + 56);
    v12 = 0;
    if ( v11 )
    {
      do
      {
        v13 = *(unsigned int *)(v7 + 4LL * v12 + 120);
        if ( (unsigned int)v13 < 0x80 )
          continue;
        v14 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v13 >= (unsigned int)v14 )
          continue;
        v15 = v13 + v7;
        v16 = (unsigned int)v13;
        v17 = *(_DWORD *)(v13 + v7);
        if ( v17 == 64 )
        {
          v19 = v16 + 40;
        }
        else
        {
          v18 = v17 - 65;
          if ( v18 )
          {
            if ( v18 == 1 && v16 + 40 <= v14 )
            {
              if ( *(_DWORD *)(v15 + 12) )
                v10 = (char *)(v15 + 32);
              break;
            }
            continue;
          }
          v19 = v16 + 56;
        }
        if ( v19 <= v14 )
        {
          if ( *(_BYTE *)(v15 + 10) )
            v10 = (char *)(v15 + 24);
          break;
        }
      }
      while ( ++v12 < v11 );
    }
  }
LABEL_25:
  if ( v10 && ((v20 = *v10, ((*v10 - 8) & 0x5D) == 0) || v20 == 37 || v20 == -98 || (unsigned __int8)(v20 - 94) <= 1u) )
    v144 = 1;
  else
LABEL_31:
    v144 = 0;
  v21 = *(unsigned __int8 *)(v7 + 2);
  if ( (_BYTE)v21 == 40 )
    v152 = *(_DWORD *)(v7 + 24);
  else
    v152 = *(_DWORD *)(v7 + 12);
  if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
  {
    v22 = (_BYTE)v21 == 40 ? *(_DWORD *)(v7 + 20) : v21;
    if ( v22 != 32 && v22 != 19 )
    {
      if ( v22 )
        goto LABEL_64;
      if ( (_BYTE)v21 != 40 )
      {
        v23 = (_BYTE *)(v7 + 72);
        goto LABEL_61;
      }
      v23 = 0LL;
      if ( !*(_DWORD *)(v7 + 20) )
      {
        v24 = *(_DWORD *)(v7 + 56);
        for ( i = 0; i < v24; ++i )
        {
          v26 = *(unsigned int *)(v7 + 4LL * i + 120);
          if ( (unsigned int)v26 < 0x80 )
            continue;
          v27 = *(unsigned int *)(v7 + 16);
          if ( (unsigned int)v26 >= (unsigned int)v27 )
            continue;
          v28 = v26 + v7;
          v29 = (unsigned int)v26;
          v30 = *(_DWORD *)(v26 + v7);
          if ( v30 == 64 )
          {
            v32 = v29 + 40;
          }
          else
          {
            v31 = v30 - 65;
            if ( v31 )
            {
              if ( v31 == 1 && v29 + 40 <= v27 )
              {
                if ( *(_DWORD *)(v28 + 12) )
                  v23 = (_BYTE *)(v28 + 32);
                break;
              }
              continue;
            }
            v32 = v29 + 56;
          }
          if ( v32 <= v27 )
          {
            if ( *(_BYTE *)(v28 + 10) )
              v23 = (_BYTE *)(v28 + 24);
            break;
          }
        }
      }
LABEL_61:
      if ( !v23 || *v23 != 18 && *v23 != 0xA0 )
      {
LABEL_64:
        v33 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v34 = *(_DWORD *)(v33 + *(_QWORD *)(a1 + 40));
        if ( (v34 & 1) != 0 )
        {
LABEL_67:
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
        }
        else
        {
          while ( 1 )
          {
            v35 = v34;
            v34 = _InterlockedCompareExchange((volatile signed __int32 *)(v33 + *(_QWORD *)(a1 + 40)), v34 - 2, v34);
            if ( v35 == v34 )
              break;
            if ( (v34 & 1) != 0 )
              goto LABEL_67;
          }
        }
        v36 = *(_BYTE *)(v7 + 3);
        if ( *(_BYTE *)(v7 + 2) == 40 )
        {
          v37 = ((v36 >> 7) & 0x80) + 56;
        }
        else
        {
          v38 = v36 < 0;
          v37 = -72;
          if ( !v38 )
            v37 = 56;
        }
        *(_BYTE *)(v7 + 3) = v37;
        v111 = byte_140168DAA == 0;
        *(_BYTE *)(v6 + 141) = -84;
        *(_DWORD *)(v6 + 48) = -1073740534;
        if ( v111 )
          goto LABEL_130;
        v162 = 0LL;
        IoGetActivityIdIrp(v6, &v162);
        v40 = *(char **)(v6 + 184);
        v41 = *v40;
        if ( *v40 != 15 )
        {
          if ( v41 == 14 )
          {
            if ( (byte_1401694F2 & 8) != 0 )
              sub_140052F3C(v39, &unk_140148B18, &v162, v6, *(_DWORD *)(v6 + 48));
          }
          else if ( v41 == 27 )
          {
            if ( v40[1] != 7 || *((_DWORD *)v40 + 2) )
            {
              if ( (byte_1401694F2 & 0x20) != 0 )
                sub_140052F3C(v39, &unk_140149FE8, &v162, v6, *(_DWORD *)(v6 + 48));
            }
            else if ( (byte_1401694F2 & 0x40) != 0 )
            {
              v42 = *(int **)(v6 + 56);
              if ( v42 )
                v3 = *v42;
              sub_140056AB0(v39, (_DWORD)v40, (unsigned int)&v162, v6, v3, *(_DWORD *)(v6 + 48));
            }
          }
          goto LABEL_130;
        }
        if ( byte_1401694F1 >= 0 )
        {
LABEL_130:
          IofCompleteRequest((PIRP)v6, 0);
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2232));
          return 1LL;
        }
        v43 = *((_QWORD *)v40 + 1);
        v44 = 0;
        v45 = 0;
        v46 = 0;
        v47 = 0;
        if ( *(_BYTE *)(v43 + 2) == 40 )
        {
          v48 = 0LL;
          if ( *(_DWORD *)(v43 + 20) )
            goto LABEL_129;
          v49 = *(_DWORD *)(v43 + 56);
          v50 = 0LL;
          if ( !v49 )
            goto LABEL_105;
          while ( 1 )
          {
            v51 = *(unsigned int *)(v43 + 4LL * (unsigned int)v50 + 120);
            if ( (unsigned int)v51 < 0x80 )
              goto LABEL_103;
            v52 = *(unsigned int *)(v43 + 16);
            if ( (unsigned int)v51 >= (unsigned int)v52 )
              goto LABEL_103;
            v53 = (unsigned int)v51;
            v54 = *(_DWORD *)(v51 + v43);
            if ( v54 == 64 )
            {
              v56 = v53 + 40;
            }
            else
            {
              v55 = v54 - 65;
              if ( v55 )
              {
                if ( v55 == 1 && v53 + 40 <= v52 )
                {
                  if ( *(_DWORD *)(v53 + v43 + 12) )
                    v48 = (unsigned __int8 *)(v53 + v43 + 32);
                  v44 = *(_BYTE *)(v53 + v43 + 8);
                  v50 = *(_BYTE **)(v53 + v43 + 24);
                  v45 = *(_BYTE *)(v53 + v43 + 9);
                  goto LABEL_105;
                }
                goto LABEL_103;
              }
              v56 = v53 + 56;
            }
            if ( v56 <= v52 )
            {
              if ( *(_BYTE *)(v53 + v43 + 10) )
                v48 = (unsigned __int8 *)(v53 + v43 + 24);
              v44 = *(_BYTE *)(v53 + v43 + 8);
              v50 = *(_BYTE **)(v53 + v43 + 16);
              v45 = *(_BYTE *)(v53 + v43 + 9);
LABEL_105:
              if ( v48 )
              {
                LODWORD(v57) = *v48;
                goto LABEL_111;
              }
              goto LABEL_129;
            }
LABEL_103:
            LODWORD(v50) = (_DWORD)v50 + 1;
            if ( (unsigned int)v50 >= v49 )
            {
              v50 = 0LL;
              goto LABEL_105;
            }
          }
        }
        LODWORD(v57) = *(unsigned __int8 *)(v43 + 72);
        v50 = *(_BYTE **)(v43 + 32);
        v45 = *(_BYTE *)(v43 + 11);
        v44 = *(_BYTE *)(v43 + 4);
        if ( *(_BYTE *)(v43 + 2) )
          goto LABEL_129;
LABEL_111:
        LOBYTE(v57) = (_BYTE)v57 - 8;
        if ( ((unsigned __int8)v57 & 0x5D) != 0 )
        {
LABEL_129:
          v6 = a2;
          goto LABEL_130;
        }
        if ( *(_BYTE *)(v43 + 3) == 1 || !v50 || !v45 )
          goto LABEL_127;
        v58 = 0;
        v57 = &v50[v45];
        v59 = v50 + 8;
        if ( (unsigned __int8)((*v50 & 0x7F) - 114) <= 1u )
        {
          if ( v59 > v57 )
            goto LABEL_126;
          LOBYTE(v3) = v50[2];
          v46 = v50[1] & 0xF;
          v47 = v50[3];
        }
        else
        {
          if ( v59 > v57 )
            goto LABEL_126;
          v46 = v50[2] & 0xF;
          v60 = v45;
          if ( (unsigned int)(unsigned __int8)v50[7] + 8 <= v45 )
            v60 = (unsigned __int8)v50[7] + 8;
          v57 = v50 + 13;
          v61 = (unsigned __int64)&v50[v60];
          if ( (unsigned __int64)(v50 + 13) <= v61 )
            LOBYTE(v3) = v50[12];
          if ( (unsigned __int64)(v50 + 14) <= v61 )
            v47 = *v57;
        }
        v58 = 1;
LABEL_126:
        if ( v58 )
        {
LABEL_128:
          v143 = v47;
          v6 = a2;
          sub_140052E64(
            (_DWORD)v57,
            v43,
            (unsigned int)&v162,
            a2,
            *(_DWORD *)(a2 + 48),
            *(_BYTE *)(v43 + 3),
            v44,
            v46,
            v3,
            v143,
            a2);
          goto LABEL_130;
        }
LABEL_127:
        v47 = 0;
        LOBYTE(v3) = 0;
        v46 = 0;
        goto LABEL_128;
      }
    }
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v7 + 96) = ProcNumber;
    v156 = v7;
  }
  else
  {
    if ( !*(_QWORD *)(v7 + 40) )
      *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 56);
    *(struct _PROCESSOR_NUMBER *)(v7 + 56) = ProcNumber;
  }
  v63 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 896), 0, 0);
  v111 = (*(_BYTE *)(a1 + 136) & 2) == 0;
  v64 = -1LL;
  v155 = v63;
  if ( v111 )
    goto LABEL_221;
  v65 = *(_QWORD *)(v6 + 184);
  if ( *(_BYTE *)v65 != 15 )
    goto LABEL_221;
  v66 = *(_QWORD *)(v65 + 8);
  v67 = *(_BYTE *)(v66 + 2);
  if ( v67 == 40 ? *(_DWORD *)(v66 + 20) : *(unsigned __int8 *)(v66 + 2) )
    goto LABEL_221;
  if ( v67 == 40 )
  {
    v69 = 0LL;
    if ( !*(_DWORD *)(v66 + 20) )
    {
      v70 = *(_DWORD *)(v66 + 56);
      v71 = 0;
      if ( v70 )
      {
        while ( 1 )
        {
          v72 = *(unsigned int *)(v66 + 4LL * v71 + 120);
          if ( (unsigned int)v72 < 0x80 )
            goto LABEL_156;
          v73 = *(unsigned int *)(v66 + 16);
          if ( (unsigned int)v72 >= (unsigned int)v73 )
            goto LABEL_156;
          v74 = v72 + v66;
          v75 = (unsigned int)v72;
          v76 = *(_DWORD *)(v72 + v66);
          if ( v76 == 64 )
            break;
          v77 = v76 - 65;
          if ( !v77 )
          {
            v78 = v75 + 56;
            goto LABEL_155;
          }
          if ( v77 == 1 && v75 + 40 <= v73 )
          {
            if ( *(_DWORD *)(v74 + 12) )
              v69 = (_BYTE *)(v74 + 32);
            goto LABEL_160;
          }
LABEL_156:
          if ( ++v71 >= v70 )
            goto LABEL_160;
        }
        v78 = v75 + 40;
LABEL_155:
        if ( v78 <= v73 )
        {
          if ( *(_BYTE *)(v74 + 10) )
            v69 = (_BYTE *)(v74 + 24);
          goto LABEL_160;
        }
        goto LABEL_156;
      }
    }
LABEL_160:
    v79 = 0;
    if ( *(_DWORD *)(v66 + 20) )
      goto LABEL_176;
    v80 = *(_DWORD *)(v66 + 56);
    v81 = 0;
    if ( !v80 )
      goto LABEL_176;
    while ( 1 )
    {
      v82 = *(unsigned int *)(v66 + 4LL * v81 + 120);
      if ( (unsigned int)v82 < 0x80 )
        goto LABEL_172;
      v83 = *(unsigned int *)(v66 + 16);
      if ( (unsigned int)v82 >= (unsigned int)v83 )
        goto LABEL_172;
      v84 = v66 + v82;
      v85 = (unsigned int)v82;
      v86 = *(_DWORD *)(v66 + v82);
      if ( v86 == 64 )
      {
        v88 = v85 + 40;
      }
      else
      {
        v87 = v86 - 65;
        if ( v87 )
        {
          if ( v87 == 1 && v85 + 40 <= v83 )
            goto LABEL_176;
          goto LABEL_172;
        }
        v88 = v85 + 56;
      }
      if ( v88 <= v83 )
      {
        v79 = *(_BYTE *)(v84 + 10);
        goto LABEL_176;
      }
LABEL_172:
      if ( ++v81 >= v80 )
        goto LABEL_176;
    }
  }
  v79 = *(_BYTE *)(v66 + 10);
  v69 = (_BYTE *)(v66 + 72);
LABEL_176:
  if ( !v69
    || ((*v69 - 10) & 0x5F) != 0
    || !*(_DWORD *)(a1 + 932)
    || (*(_BYTE *)(v66 + 2) != 40 ? (v89 = *(_DWORD *)(v66 + 12)) : (v89 = *(_DWORD *)(v66 + 24)),
        (v89 & 0x1000) == 0 || !*(_QWORD *)(a1 + 3440)) )
  {
    v6 = a2;
    goto LABEL_221;
  }
  v90 = sub_140133B9C(v69, v79);
  v6 = a2;
  v91 = (unsigned int)sub_14006D084(a1, v90);
  if ( (unsigned __int8)sub_140054A1C(a1 + 720, a2) || v155 )
  {
    v109 = a3 | 0x20;
    a3 |= 0x20u;
    goto LABEL_222;
  }
  RtlInterlockedSetBitRun(a1 + 3448, (unsigned int)v91, 1LL);
  if ( (qword_140168458 & 0x1000) == 0 )
    goto LABEL_221;
  HIDWORD(v147) = 0;
  if ( *(_BYTE *)(v7 + 2) != 40 )
  {
    v92 = (char *)(v7 + 72);
    goto LABEL_206;
  }
  v92 = 0LL;
  if ( *(_DWORD *)(v7 + 20) )
    goto LABEL_206;
  v93 = *(_DWORD *)(v7 + 56);
  v94 = 0;
  if ( !v93 )
    goto LABEL_206;
  while ( 1 )
  {
    v95 = *(unsigned int *)(v7 + 4LL * v94 + 120);
    if ( (unsigned int)v95 < 0x80 )
      goto LABEL_201;
    v96 = *(unsigned int *)(v7 + 16);
    if ( (unsigned int)v95 >= (unsigned int)v96 )
      goto LABEL_201;
    v97 = v95 + v7;
    v98 = (unsigned int)v95;
    v99 = *(_DWORD *)(v95 + v7);
    if ( v99 == 64 )
      break;
    v100 = v99 - 65;
    if ( !v100 )
    {
      v101 = v98 + 56;
      goto LABEL_200;
    }
    if ( v100 == 1 && v98 + 40 <= v96 )
    {
      if ( *(_DWORD *)(v97 + 12) )
        v92 = (char *)(v97 + 32);
      goto LABEL_206;
    }
LABEL_201:
    if ( ++v94 >= v93 )
      goto LABEL_206;
  }
  v101 = v98 + 40;
LABEL_200:
  if ( v101 > v96 )
    goto LABEL_201;
  if ( *(_BYTE *)(v97 + 10) )
    v92 = (char *)(v97 + 24);
LABEL_206:
  v102 = *v92;
  if ( ((*v92 - 8) & 0xFD) != 0 )
  {
    if ( ((v102 - 40) & 0xFD) != 0 && ((v102 + 88) & 0xFD) != 0 )
    {
      if ( ((v102 + 120) & 0xFD) != 0 )
      {
        v103 = -1LL;
      }
      else
      {
        HIBYTE(v148) = v92[2];
        BYTE6(v148) = v92[3];
        BYTE5(v148) = v92[4];
        BYTE4(v148) = v92[5];
        BYTE3(v148) = v92[6];
        BYTE2(v148) = v92[7];
        BYTE1(v148) = v92[8];
        LOBYTE(v148) = v92[9];
        v103 = v148;
      }
    }
    else
    {
      BYTE3(v147) = v92[2];
      BYTE2(v147) = v92[3];
      BYTE1(v147) = v92[4];
      LOBYTE(v147) = v92[5];
      v103 = v147;
    }
  }
  else
  {
    v103 = (unsigned __int8)v92[3] | (((unsigned __int8)v92[2] | ((unsigned __int64)(v92[1] & 0x1F) << 8)) << 8);
  }
  v104 = *(_QWORD *)(a1 + 24);
  v105 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 3440) + v91);
  if ( v104 )
  {
    if ( *(_DWORD *)v104 != 1314275652 )
    {
      v106 = *(_DWORD *)(v104 + 4932);
      if ( v106 )
      {
        v107 = *(_QWORD *)(v104 + 4936);
        if ( v107 )
        {
          v108 = v107 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(v104 + 4928)) % v106);
          *(_DWORD *)v108 = 47;
          *(_QWORD *)(v108 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v108 + 8) = v103;
          *(_QWORD *)(v108 + 16) = v91;
          *(_QWORD *)(v108 + 24) = v105;
          *(_QWORD *)(v108 + 32) = 1LL;
        }
      }
    }
  }
LABEL_221:
  v109 = a3;
LABEL_222:
  v110 = *(unsigned __int8 *)(v7 + 2);
  if ( (_BYTE)v110 == 40 )
    v110 = *(_DWORD *)(v7 + 20);
  if ( v110 == 9 )
    goto LABEL_230;
  if ( v110 != 8 )
  {
    switch ( v110 )
    {
      case 0:
      case 2:
      case 7:
      case 18:
      case 19:
      case 23:
      case 32:
      case 36:
      case 37:
        goto LABEL_230;
      case 16:
        v111 = (unsigned __int8)sub_140029040(*(_QWORD *)(a1 + 24)) == 0;
        goto LABEL_229;
      default:
        goto LABEL_231;
    }
  }
  v111 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 467LL) == 0;
LABEL_229:
  if ( v111 )
  {
LABEL_231:
    v109 |= 8u;
    a3 = v109;
    *(_QWORD *)(v162 + 16) = 0LL;
    if ( (unsigned __int8)sub_140021280(a1) )
    {
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    }
    else if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4960LL) )
    {
      goto LABEL_233;
    }
  }
  else
  {
LABEL_230:
    if ( (v152 & 0x100800) != 0 )
      goto LABEL_231;
LABEL_233:
    if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 504) < 0 || (v112 = 1LL, (*(_BYTE *)(a1 + 505) & 1) != 0) )
      v112 = 2LL;
    sub_140046B40(a1, v6, v112);
  }
  if ( v144 )
  {
    v113 = 0LL;
    if ( *(_DWORD *)(a1 + 3392) != -1 || *(_DWORD *)(a1 + 3376) != -1 || *(_DWORD *)(a1 + 3380) )
    {
      v114 = (_DWORD *)sub_1400143E0(64LL, 56LL, 1413701970LL, *(_QWORD *)(a1 + 8));
      v113 = v114;
      if ( v114 )
      {
        *v114 = 300819165;
        if ( *(_DWORD *)(a1 + 3392) == -1 )
          v115 = -1LL;
        else
          v115 = (unsigned int)(5000000 * *(_DWORD *)(a1 + 3392)) + KeQueryUnbiasedInterruptTime();
        v113[1] = v115;
        a3 = v109 | 0x10;
        v113[6] = a1;
        v113[5] = v6;
      }
    }
    if ( *(_BYTE *)(v7 + 2) == 40 )
    {
      v156 = v7;
      if ( v113 )
      {
        v113[2] = *(_QWORD *)(v7 + 96);
        *(_QWORD *)(v7 + 96) = v113;
      }
      *(_DWORD *)(v7 + 40) = *(_DWORD *)(a1 + 3384);
    }
    else
    {
      if ( v113 )
      {
        v113[2] = *(_QWORD *)(v7 + 48);
        *(_QWORD *)(v7 + 48) = v113;
      }
      *(_DWORD *)(v7 + 20) = *(_DWORD *)(a1 + 3384);
    }
  }
  v150 = KfRaiseIrql(2u);
  v116 = a2;
  v118 = sub_140045B70(*(_QWORD *)(a1 + 24), &ProcNumber);
  v145 = v118;
  v119 = v162;
  *(_BYTE *)(a2 + 141) = -87;
  *(_QWORD *)(v119 + 32) = a1;
  v120 = *(_QWORD *)(a1 + 24);
  if ( v120 )
  {
    v121 = *(_QWORD *)(a1 + 560);
    if ( v121 && *(_QWORD *)(v120 + 4904) )
    {
      v122 = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( *(_DWORD *)(v121 + 8) )
      {
        do
        {
          v123 = (KSPIN_LOCK *)(v121 + ((v122 + 1LL) << 6));
          KeAcquireInStackQueuedSpinLock(v123 + 5, &LockHandle);
          if ( (KSPIN_LOCK *)*v123 != v123 && *(_QWORD *)(*v123 + 40) < v64 )
            v64 = *(_QWORD *)(*v123 + 40);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          ++v122;
        }
        while ( v122 < *(_DWORD *)(v121 + 8) );
      }
      v124 = 0LL;
      if ( v64 != -1LL )
        v124 = v64;
      if ( v124 )
        LOBYTE(v3) = KeQueryUnbiasedInterruptTime() - v124 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4904LL);
      v116 = a2;
    }
    v118 = v145;
  }
  v125 = 0;
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    v126 = v7;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 28) = 0;
  }
  else
  {
    v126 = v156;
  }
  v127 = sub_14000E060((int)a1 + 720, v116, a3, v117, v3, (__int64)&v157, (__int64)&v154, (__int64)&v153);
  if ( !v127 )
    goto LABEL_311;
  if ( (_BYTE)v3 )
    ++*(_QWORD *)(a1 + 2096);
  if ( *(_BYTE *)(v7 + 2) != 40 )
    goto LABEL_303;
  v128 = HIDWORD(v157);
  *(_DWORD *)(v126 + 4) = v157;
  *(_DWORD *)(v126 + 28) = v128;
  if ( !*(_DWORD *)(a1 + 2372) )
    goto LABEL_303;
  if ( *(_BYTE *)(v126 + 2) != 40 )
  {
    v129 = (_BYTE *)(v126 + 72);
    goto LABEL_296;
  }
  v129 = 0LL;
  if ( *(_DWORD *)(v126 + 20) )
    goto LABEL_296;
  v130 = 0;
  v131 = *(_DWORD *)(v126 + 56);
  if ( !v131 )
  {
LABEL_292:
    v125 = 0;
    goto LABEL_296;
  }
  while ( 2 )
  {
    v132 = *(unsigned int *)(v126 + 4LL * v130 + 120);
    if ( (unsigned int)v132 < 0x80 )
      goto LABEL_291;
    v133 = *(unsigned int *)(v126 + 16);
    if ( (unsigned int)v132 >= (unsigned int)v133 )
      goto LABEL_291;
    v134 = v132 + v126;
    v135 = (unsigned int)v132;
    v136 = *(_DWORD *)(v132 + v126);
    if ( v136 == 64 )
    {
      v138 = v135 + 40;
    }
    else
    {
      v137 = v136 - 65;
      if ( v137 )
      {
        if ( v137 == 1 && v135 + 40 <= v133 )
        {
          v125 = 0;
          if ( *(_DWORD *)(v134 + 12) )
            v129 = (_BYTE *)(v134 + 32);
          goto LABEL_296;
        }
        goto LABEL_291;
      }
      v138 = v135 + 56;
    }
    if ( v138 > v133 )
    {
LABEL_291:
      if ( ++v130 >= v131 )
        goto LABEL_292;
      continue;
    }
    break;
  }
  v125 = 0;
  if ( *(_BYTE *)(v134 + 10) )
    v129 = (_BYTE *)(v134 + 24);
LABEL_296:
  if ( v129 && !*(_DWORD *)(v126 + 20) && (((*v129 - 8) & 0x5D) == 0 || *v129 == 66 || *v129 == 53 || *v129 == 0x91) )
    *(_DWORD *)(v126 + 48) = v153;
LABEL_303:
  switch ( v154 )
  {
    case 1:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2328));
      break;
    case 4:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2336));
      break;
    case 5:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2344));
      break;
    case 6:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2352));
      break;
  }
LABEL_311:
  if ( (a3 & 8) == 0 && *(_BYTE *)(a1 + 759) && *(char *)(a1 + 505) >= 0 && (*(_DWORD *)(a1 + 512) & 0x70) == 0 )
    sub_1400395B0(a1);
  if ( !v127 )
  {
    *(_BYTE *)(a2 + 141) = -88;
    if ( (unsigned __int8)sub_140051870(*(_QWORD *)(a1 + 728), a2 + 120, &v158) )
    {
      v141 = *(_QWORD *)(a1 + 728);
      if ( (*(_BYTE *)(*(_QWORD *)(v141 + 48) + 112LL) & 4) != 0
        && *(_DWORD *)(v141 + 40) == 1699901262
        && *(_DWORD *)(v141 + 24)
        && !*(_DWORD *)(v141 + 192) )
      {
        v142 = *(void **)(a1 + 728);
        *(_DWORD *)(v141 + 40) = 0;
        sub_14002B0D0(v142);
      }
    }
    else
    {
      v139 = *(void (__fastcall **)(__int64, __int64, __int128 *, _QWORD))(a1 + 712);
      v140 = *(_QWORD *)(a1 + 704);
      if ( (char *)v139 == (char *)sub_14004EEC0 )
        sub_14004EEC0(v140, a2, &v158, 0LL);
      else
        v139(v140, a2, &v158, 0LL);
      v125 = 1;
    }
  }
  if ( v118 == 1 )
    sub_140022AC0(*(_QWORD *)(a1 + 24), &ProcNumber);
  KeLowerIrql(v150);
  return v125;
}
