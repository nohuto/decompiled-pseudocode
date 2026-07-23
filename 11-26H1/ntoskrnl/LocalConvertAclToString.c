/*
 * XREFs of LocalConvertAclToString @ 0x140A6D784
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A6ED34 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x14053DA00 (_ultow_s.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     SddlpFreeUuidString @ 0x14081E8B4 (SddlpFreeUuidString.c)
 *     SddlpUuidToString @ 0x14081E95C (SddlpUuidToString.c)
 *     LookupSidInTable @ 0x140901140 (LookupSidInTable.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     LocalGetAceCondition @ 0x140A6E49C (LocalGetAceCondition.c)
 *     RtlNtStatusToDosError @ 0x140A6F610 (RtlNtStatusToDosError.c)
 *     SddlpAlloc @ 0x140A6F758 (SddlpAlloc.c)
 *     LocalConvertSidToStringSidW @ 0x140A703B0 (LocalConvertSidToStringSidW.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        void **a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        unsigned int Val,
        char a9)
{
  unsigned int v9; // r15d
  __int64 v11; // r12
  __int64 v12; // rbx
  ULONG v13; // edi
  wchar_t *v14; // rax
  __int64 result; // rax
  __int64 v16; // rax
  unsigned __int8 *v17; // r14
  int v18; // esi
  char *v19; // rcx
  unsigned int v20; // r9d
  unsigned int v21; // edx
  void **v22; // rsi
  wchar_t *v23; // r14
  unsigned __int8 *v24; // r9
  unsigned int v25; // r15d
  unsigned __int64 v26; // rbx
  char *v27; // rcx
  unsigned int v28; // edx
  wchar_t *v29; // r14
  rsize_t v30; // rbx
  wchar_t *v31; // r14
  unsigned int v32; // esi
  rsize_t v33; // rbx
  char *v34; // rdx
  unsigned int v35; // r10d
  __int64 v36; // r15
  rsize_t v37; // rbx
  unsigned int v38; // ecx
  wchar_t *v39; // r14
  unsigned int *v40; // r12
  unsigned int *v41; // r13
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned __int8 *v48; // rdi
  unsigned __int8 *v49; // rsi
  int v50; // eax
  wchar_t *v51; // r14
  size_t v52; // rbx
  __int64 v53; // rax
  int *v54; // rcx
  int v55; // r8d
  unsigned int v56; // edx
  rsize_t v57; // rbx
  wchar_t *v58; // r14
  rsize_t v59; // rbx
  wchar_t *v60; // r14
  _QWORD *v61; // r13
  wchar_t *v62; // r14
  rsize_t v63; // rbx
  const wchar_t *v64; // rsi
  __int64 v65; // rax
  wchar_t *v66; // rsi
  wchar_t *v67; // r14
  unsigned __int64 v68; // rbx
  unsigned __int8 *v69; // r9
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  unsigned int v74; // ecx
  int v75; // ecx
  __int64 v76; // rdx
  int v77; // r8d
  wchar_t *v78; // r14
  rsize_t v79; // rbx
  __int64 v80; // rax
  unsigned int v81; // eax
  unsigned int v82; // ebx
  _BYTE *v83; // rsi
  unsigned int v84; // eax
  unsigned int n; // r15d
  int *v86; // rcx
  int v87; // r9d
  unsigned int v88; // r8d
  void *v89; // rcx
  unsigned int m; // r8d
  unsigned int v91; // ecx
  __int64 v92; // r15
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95; // ecx
  unsigned int v96; // ecx
  unsigned int v97; // ecx
  unsigned int v98; // ecx
  unsigned int v99; // ebx
  unsigned __int8 *v100; // rdi
  ULONG AceCondition; // eax
  int v102; // r11d
  _DWORD *v103; // r10
  __int64 v104; // r9
  int *v105; // rcx
  int v106; // r8d
  unsigned int v107; // edx
  unsigned int k; // r10d
  int *v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  wchar_t **v112; // rbx
  __int64 v113; // rax
  int v114; // r12d
  __int64 v115; // rax
  unsigned int v116; // ecx
  unsigned int v117; // ecx
  unsigned int v118; // ecx
  unsigned int v119; // ecx
  unsigned int v120; // ecx
  NTSTATUS v121; // eax
  wchar_t **v122; // rax
  wchar_t *v123; // rcx
  __int64 v124; // rax
  __int64 *v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // r12d
  unsigned int i; // ebx
  char *v130; // r8
  unsigned int v131; // r10d
  wchar_t **v132; // rcx
  __int64 v133; // rax
  unsigned int j; // edx
  wchar_t *v135; // rcx
  __int64 v136; // rax
  wchar_t **v137; // rax
  wchar_t **v138; // rdi
  __int64 v139; // rax
  wchar_t **v140; // rdi
  __int64 v141; // rax
  wchar_t **v142; // rsi
  __int64 v143; // rax
  wchar_t **v144; // rsi
  __int64 v145; // rax
  wchar_t *v146; // rax
  __int64 v147; // rsi
  __int64 v148; // rsi
  int v149; // edx
  unsigned int v150; // ecx
  __int64 v151; // r8
  unsigned int v152; // [rsp+58h] [rbp-69h]
  int v153; // [rsp+5Ch] [rbp-65h] BYREF
  ULONG v154; // [rsp+60h] [rbp-61h] BYREF
  __int64 v155; // [rsp+68h] [rbp-59h]
  char *v156; // [rsp+70h] [rbp-51h]
  unsigned __int8 *v157; // [rsp+78h] [rbp-49h]
  PSID Sid; // [rsp+80h] [rbp-41h]
  wchar_t *Src; // [rsp+88h] [rbp-39h] BYREF
  wchar_t *v160; // [rsp+90h] [rbp-31h] BYREF
  __int64 v161; // [rsp+98h] [rbp-29h] BYREF
  _DWORD *v162; // [rsp+A0h] [rbp-21h]
  int v163; // [rsp+A8h] [rbp-19h]
  unsigned int *v164; // [rsp+B0h] [rbp-11h]
  _BYTE *v165; // [rsp+B8h] [rbp-9h]
  unsigned int Vala; // [rsp+140h] [rbp+7Fh]

  v9 = 0;
  v163 = 0;
  LODWORD(v11) = 0;
  v155 = 0LL;
  v12 = a1;
  v160 = 0LL;
  v13 = 0;
  Vala = 0;
  Sid = 0LL;
  v161 = 0LL;
  Src = 0LL;
  if ( !a4 || !a5 )
    return 87LL;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 36;
    v14 = (wchar_t *)SddlpAlloc(0x24uLL);
    *a4 = v14;
    if ( !v14 )
    {
      result = (unsigned int)(v12 + 8);
LABEL_9:
      *a5 = 0;
      return result;
    }
    wcscpy(v14, L"NO_ACCESS_CONTROL");
    return 0LL;
  }
  v16 = *(unsigned __int16 *)(a1 + 4);
  if ( !(_WORD)v16 )
  {
    *a4 = 0LL;
    result = 0LL;
    goto LABEL_9;
  }
  v152 = 2 - (a3 != 0);
  v156 = (char *)SddlpAlloc(8 * v16);
  if ( !v156 )
    return 8LL;
  v165 = (_BYTE *)SddlpAlloc(*(unsigned __int16 *)(v12 + 4));
  if ( !v165 )
  {
    v89 = v156;
    goto LABEL_119;
  }
  v162 = (_DWORD *)SddlpAlloc(4LL * *(unsigned __int16 *)(v12 + 4));
  if ( !v162 )
  {
    SddlpFree(v156);
    v89 = v165;
LABEL_119:
    SddlpFree(v89);
    return 8LL;
  }
  v154 = 0;
  v157 = (unsigned __int8 *)(v12 + 8);
  v17 = (unsigned __int8 *)(v12 + 8);
  while ( v9 < *(unsigned __int16 *)(v12 + 4) )
  {
    v18 = *v17;
    v19 = byte_140E0888C;
    v20 = v152;
    v11 = (unsigned int)(v11 + 2);
    v155 = v11;
    v21 = 0;
    while ( (v152 & *((_DWORD *)v19 + 1)) != v152 || v18 != *(_DWORD *)v19 )
    {
      ++v21;
      v19 += 24;
      if ( v21 >= 0x11 )
        goto LABEL_19;
    }
    v125 = (__int64 *)(0x140000000LL + 24LL * v21 + 14715008);
    if ( !v125 )
    {
LABEL_19:
      v13 = 1336;
      break;
    }
    v126 = *v125;
    v127 = -1LL;
    do
      ++v127;
    while ( *(_WORD *)(v126 + 2 * v127) );
    v128 = v11 + 2 * v127 + 2;
    for ( i = 0; i < 8; ++i )
    {
      if ( (v17[1] & (1 << i)) == 0 )
        goto LABEL_193;
      v130 = (char *)&unk_140E08774;
      v131 = 0;
      while ( (v20 & *((_DWORD *)v130 - 1)) != v20 )
      {
LABEL_187:
        ++v131;
        v130 += 32;
        if ( v131 >= 9 )
          goto LABEL_193;
      }
      if ( *(_DWORD *)v130 )
      {
        for ( j = 0; j < *(_DWORD *)v130; ++j )
        {
          if ( *(_BYTE *)(j + *(_QWORD *)(v130 + 4)) == (_BYTE)v18 )
            goto LABEL_185;
        }
LABEL_186:
        v20 = v152;
        goto LABEL_187;
      }
LABEL_185:
      if ( 1 << i != *((_DWORD *)v130 - 2) )
        goto LABEL_186;
      v132 = &(&off_140E08760)[4 * v131];
      if ( v132 )
      {
        v133 = -1LL;
        do
          ++v133;
        while ( (*v132)[v133] );
        v128 += 2 * v133;
      }
LABEL_193:
      v20 = v152;
    }
    v91 = *v17;
    v11 = (unsigned int)(v128 + 2);
    v92 = v154;
    v155 = v11;
    v153 = v11;
    if ( v91 <= 9 )
    {
      if ( v91 != 9 )
      {
        if ( v91 )
        {
          v116 = v91 - 1;
          if ( v116 )
          {
            v117 = v116 - 1;
            if ( v117 )
            {
              v118 = v117 - 1;
              if ( v118 )
              {
                v119 = v118 - 2;
                if ( v119 )
                {
                  v120 = v119 - 1;
                  if ( v120 )
                  {
                    if ( v120 - 1 > 1 )
                      goto LABEL_19;
                  }
                }
                goto LABEL_225;
              }
            }
          }
        }
      }
LABEL_136:
      v99 = *((_DWORD *)v17 + 1);
      v100 = v17 + 8;
      Sid = v17 + 8;
      Vala = v99;
    }
    else
    {
      v93 = v91 - 10;
      if ( !v93 )
        goto LABEL_136;
      v94 = v93 - 1;
      if ( v94 )
      {
        v95 = v94 - 2;
        if ( !v95 )
          goto LABEL_136;
        v96 = v95 - 4;
        if ( !v96 )
          goto LABEL_136;
        v97 = v96 - 1;
        if ( !v97 )
          goto LABEL_136;
        v98 = v97 - 1;
        if ( !v98 || v98 - 1 <= 1 )
          goto LABEL_136;
        goto LABEL_19;
      }
LABEL_225:
      v99 = *((_DWORD *)v17 + 1);
      v149 = *((_DWORD *)v17 + 2) & 2;
      v150 = *((_DWORD *)v17 + 2) & 1;
      v151 = 16LL * v150;
      Vala = v99;
      v100 = &v17[(v149 != 0 ? 28LL : 12LL) + v151];
      Sid = v100;
      if ( v150 && v17 != (unsigned __int8 *)-12LL )
      {
        LODWORD(v11) = v11 + 72;
        v153 = v11;
      }
      if ( v149 && &v17[v151 + 12] )
        v153 = v11 + 72;
    }
    if ( Src )
    {
      SddlpFree(Src);
      Src = 0LL;
    }
    v154 = 0;
    AceCondition = LocalGetAceCondition(v17, v100, &Src, &v154);
    v102 = 0;
    v13 = AceCondition;
    if ( AceCondition )
    {
      LODWORD(v11) = v153;
      v155 = (unsigned int)v153;
    }
    else
    {
      v103 = v162;
      v104 = v152;
      v105 = dword_140E08A2C;
      v106 = v152;
      v107 = 0;
      v162[v92] = 0;
      if ( *v17 == 17 )
        v106 = 4;
      while ( (v106 & v105[1]) != v106 || v99 != *v105 )
      {
        ++v107;
        v105 += 6;
        if ( v107 >= 0x1C )
          goto LABEL_145;
      }
      v137 = &(&off_140E08A20)[3 * v107];
      if ( v137 )
      {
        v103[v92] = 1;
        v135 = *v137;
        v136 = -1LL;
        do
          ++v136;
        while ( v135[v136] );
        v102 = 2 * v136;
        goto LABEL_155;
      }
LABEL_145:
      for ( k = 0; k < 0x20; ++k )
      {
        if ( (Vala & (1 << k)) != 0 )
        {
          v109 = dword_140E08A2C;
          if ( *v17 == 17 )
            v104 = 4LL;
          v110 = 0LL;
          while ( ((unsigned int)v104 & v109[1]) != (_DWORD)v104 || (Vala & (1 << k)) != *v109 )
          {
            v110 = (unsigned int)(v110 + 1);
            v109 += 6;
            if ( (unsigned int)v110 >= 0x1C )
              goto LABEL_154;
          }
          v122 = &(&off_140E08A20)[3 * v110];
          if ( !v122 )
          {
LABEL_154:
            v102 = 20;
            v162[v92] = 2;
            break;
          }
          v123 = *v122;
          v124 = -1LL;
          do
            ++v124;
          while ( v123[v124] );
          v104 = v152;
          v102 += 2 * v124;
        }
      }
LABEL_155:
      LODWORD(v11) = v102 + v153 + 6;
      v155 = (unsigned int)v11;
      v111 = LookupSidInTable(0LL, Sid, a6, v104, (int)&v153, a9, &v161);
      v112 = (wchar_t **)&v156[8 * v92];
      if ( v111 )
      {
        *v112 = (wchar_t *)(v111 + 2);
LABEL_157:
        v113 = -1LL;
        do
          ++v113;
        while ( (*v112)[v113] );
        v12 = a1;
        v114 = v11 + 2 * v113;
        v115 = *((unsigned __int16 *)v17 + 1);
        v11 = (unsigned int)(v114 + 4);
        v9 = v92 + 1;
        v155 = v11;
        v17 += v115;
        v154 = v9;
        continue;
      }
      if ( v161 )
      {
        v146 = (wchar_t *)SddlpAlloc(6uLL);
        *v112 = v146;
        if ( v146 )
        {
          wcscpy_s(v146, 3uLL, L"SA");
          goto LABEL_171;
        }
        v13 = 8;
      }
      else
      {
        v121 = LocalConvertSidToStringSidW(Sid);
        if ( v121 >= 0 )
        {
LABEL_171:
          v165[v92] = 1;
          goto LABEL_157;
        }
        v13 = RtlNtStatusToDosError(v121);
      }
    }
    break;
  }
  if ( (_DWORD)v11 )
  {
    if ( v13 )
      goto LABEL_103;
    if ( (v11 & 1) != 0 )
    {
      LODWORD(v11) = v11 + 1;
      v155 = (unsigned int)v11;
    }
    v22 = a4;
    v23 = (wchar_t *)SddlpAlloc((unsigned int)v11);
    *a4 = v23;
    if ( v23 )
    {
      v24 = v157;
      v25 = 0;
      v26 = (unsigned __int64)(unsigned int)v11 >> 1;
      while ( 1 )
      {
        v153 = v25;
        if ( v25 >= *(unsigned __int16 *)(a1 + 4) )
        {
LABEL_102:
          LODWORD(v11) = v155;
          goto LABEL_103;
        }
        if ( !v26 )
          goto LABEL_101;
        v27 = byte_140E0888C;
        *v23 = 40;
        v28 = 0;
        v29 = v23 + 1;
        v30 = v26 - 1;
        while ( (v152 & *((_DWORD *)v27 + 1)) != v152 || *v24 != *(_DWORD *)v27 )
        {
          ++v28;
          v27 += 24;
          if ( v28 >= 0x11 )
            goto LABEL_32;
        }
        v138 = &(&off_140E08880)[3 * v28];
        if ( v138 )
        {
          wcscpy_s(v29, v30, *v138);
          v139 = *((unsigned int *)v138 + 2);
          v24 = v157;
          v30 -= v139;
          v29 += v139;
        }
LABEL_32:
        if ( !v30 )
        {
LABEL_101:
          v13 = 1336;
          goto LABEL_102;
        }
        *v29 = 59;
        v31 = v29 + 1;
        v32 = 0;
        v33 = v30 - 1;
        do
        {
          if ( ((unsigned __int8)(1 << v32) & v24[1]) == 0 )
            goto LABEL_41;
          v34 = (char *)&unk_140E08774;
          v35 = 0;
          while ( 1 )
          {
            if ( (v152 & *((_DWORD *)v34 - 1)) == v152 )
            {
              if ( *(_DWORD *)v34 )
              {
                for ( m = 0; m < *(_DWORD *)v34; ++m )
                {
                  if ( *(_BYTE *)(m + *(_QWORD *)(v34 + 4)) == *v24 )
                    goto LABEL_38;
                }
                goto LABEL_39;
              }
LABEL_38:
              if ( 1 << v32 == *((_DWORD *)v34 - 2) )
                break;
            }
LABEL_39:
            ++v35;
            v34 += 32;
            if ( v35 >= 9 )
              goto LABEL_40;
          }
          v140 = &(&off_140E08760)[4 * v35];
          if ( v140 )
          {
            wcscpy_s(v31, v33, *v140);
            v141 = *((unsigned int *)v140 + 2);
            v33 -= v141;
            v31 += v141;
LABEL_40:
            v24 = v157;
            goto LABEL_41;
          }
          v24 = v157;
LABEL_41:
          ++v32;
        }
        while ( v32 < 8 );
        v36 = (unsigned int)v153;
        if ( !v33 )
          goto LABEL_101;
        *v31 = 59;
        v37 = v33 - 1;
        v38 = *v24;
        v39 = v31 + 1;
        v164 = 0LL;
        v40 = 0LL;
        v161 = 0LL;
        v41 = 0LL;
        if ( v38 <= 9 )
        {
          if ( v38 == 9 )
            goto LABEL_90;
          if ( !v38 )
            goto LABEL_90;
          v70 = v38 - 1;
          if ( !v70 )
            goto LABEL_90;
          v71 = v70 - 1;
          if ( !v71 )
            goto LABEL_90;
          v72 = v71 - 1;
          if ( !v72 )
            goto LABEL_90;
          v73 = v72 - 2;
          if ( v73 )
          {
            v74 = v73 - 1;
            if ( v74 )
            {
              if ( v74 - 1 > 1 )
              {
LABEL_51:
                v48 = (unsigned __int8 *)Sid;
                goto LABEL_52;
              }
            }
          }
LABEL_84:
          v75 = *((_DWORD *)v24 + 2) & 2;
          v76 = 16LL * (*((_DWORD *)v24 + 2) & 1);
          v77 = *((_DWORD *)v24 + 2) & 1;
          Vala = *((_DWORD *)v24 + 1);
          v48 = &v24[v76 + (v75 != 0 ? 28LL : 12LL)];
          Sid = v48;
          if ( v75 )
            v41 = (unsigned int *)&v24[v76 + 12];
          v161 = (__int64)v41;
          if ( v77 )
          {
            v40 = (unsigned int *)(v24 + 12);
            v164 = (unsigned int *)(v24 + 12);
          }
          else
          {
            v164 = 0LL;
          }
          goto LABEL_52;
        }
        v42 = v38 - 10;
        if ( !v42 )
          goto LABEL_90;
        v43 = v42 - 1;
        if ( !v43 )
          goto LABEL_84;
        v44 = v43 - 2;
        if ( v44 )
        {
          v45 = v44 - 4;
          if ( v45 )
          {
            v46 = v45 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( v47 )
              {
                if ( v47 - 1 >= 2 )
                  goto LABEL_51;
              }
            }
          }
        }
LABEL_90:
        v81 = *((_DWORD *)v24 + 1);
        v48 = v24 + 8;
        Sid = v24 + 8;
        Vala = v81;
LABEL_52:
        if ( Src )
        {
          SddlpFree(Src);
          Src = 0LL;
        }
        v49 = v157;
        v154 = 0;
        v154 = LocalGetAceCondition(v157, v48, &Src, &v154);
        v13 = v154;
        if ( v154 )
          goto LABEL_102;
        v50 = v162[v36];
        if ( v50 == 2 )
        {
          wcscpy_s(v39, v37, L"0x");
          v51 = v39 + 2;
          v52 = v37 - 2;
          ultow_s(Vala, v51, v52, 16);
          v53 = -1LL;
          do
            ++v53;
          while ( v51[v53] );
          v39 = &v51[v53];
          v37 = v52 - v53;
        }
        else if ( v50 == 1 )
        {
          v54 = dword_140E08A2C;
          v55 = v152;
          if ( *v49 == 17 )
            v55 = 4;
          v56 = 0;
          while ( (v55 & v54[1]) != v55 || Vala != *v54 )
          {
            ++v56;
            v54 += 6;
            if ( v56 >= 0x1C )
              goto LABEL_66;
          }
          v142 = &(&off_140E08A20)[3 * v56];
          if ( v142 )
          {
            wcscpy_s(v39, v37, *v142);
            v143 = *((unsigned int *)v142 + 2);
            v37 -= v143;
            v39 += v143;
          }
        }
        else
        {
          v84 = Vala;
          for ( n = 0; n < 0x20; ++n )
          {
            if ( (v84 & (1 << n)) != 0 )
            {
              v86 = dword_140E08A2C;
              v87 = v152;
              v88 = 0;
              if ( *v49 == 17 )
                v87 = 4;
              while ( (v87 & v86[1]) != v87 || (v84 & (1 << n)) != *v86 )
              {
                ++v88;
                v86 += 6;
                if ( v88 >= 0x1C )
                  goto LABEL_114;
              }
              v144 = &(&off_140E08A20)[3 * v88];
              if ( v144 )
              {
                wcscpy_s(v39, v37, *v144);
                v145 = *((unsigned int *)v144 + 2);
                v37 -= v145;
                v39 += v145;
              }
              v49 = v157;
LABEL_114:
              v84 = Vala;
            }
          }
          v13 = v154;
          v40 = v164;
          v41 = (unsigned int *)v161;
          LODWORD(v36) = v153;
        }
LABEL_66:
        if ( !v37 )
          goto LABEL_101;
        *v39 = 59;
        v57 = v37 - 1;
        v58 = v39 + 1;
        if ( !v40 )
          goto LABEL_68;
        if ( !(unsigned int)SddlpUuidToString(v40, &v160) )
          goto LABEL_102;
        v147 = -1LL;
        do
          ++v147;
        while ( v160[v147] );
        wcscpy_s(v58, v57, v160);
        v57 -= v147;
        v58 += v147;
        SddlpFreeUuidString((void **)&v160);
LABEL_68:
        if ( !v57 )
          goto LABEL_101;
        v59 = v57 - 1;
        *v58 = 59;
        v60 = v58 + 1;
        if ( !v41 )
          goto LABEL_70;
        if ( !(unsigned int)SddlpUuidToString(v41, &v160) )
          goto LABEL_102;
        v148 = -1LL;
        do
          ++v148;
        while ( v160[v148] );
        wcscpy_s(v60, v59, v160);
        v59 -= v148;
        v60 += v148;
        SddlpFreeUuidString((void **)&v160);
LABEL_70:
        v61 = v156;
        if ( !v59 )
          goto LABEL_91;
        *v60 = 59;
        v62 = v60 + 1;
        v63 = v59 - 1;
        v64 = (const wchar_t *)v61[(unsigned int)v36];
        wcscpy_s(v62, v63, v64);
        v65 = -1LL;
        do
          ++v65;
        while ( v64[v65] );
        v66 = Src;
        v67 = &v62[v65];
        v68 = v63 - v65;
        if ( Src )
        {
          if ( v68 )
          {
            *v67 = 59;
            v78 = v67 + 1;
            v79 = v68 - 1;
            wcscpy_s(v78, v79, v66);
            v80 = -1LL;
            do
              ++v80;
            while ( v66[v80] );
            v67 = &v78[v80];
            v68 = v79 - v80;
            goto LABEL_74;
          }
LABEL_91:
          LODWORD(v11) = v155;
          v13 = 1336;
          v22 = a4;
          goto LABEL_92;
        }
LABEL_74:
        if ( v68 <= 1 )
          goto LABEL_91;
        v69 = v157;
        v26 = v68 - 1;
        *v67 = 41;
        v25 = v36 + 1;
        v23 = v67 + 1;
        *v23 = 0;
        v24 = &v69[*((unsigned __int16 *)v69 + 1)];
        v157 = v24;
      }
    }
    v13 = 8;
  }
  else
  {
    v13 = 1336;
LABEL_103:
    v22 = a4;
  }
  v61 = v156;
LABEL_92:
  v82 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v83 = v165;
    do
    {
      if ( v83[v82] )
        SddlpFree((void *)v61[v82]);
      ++v82;
    }
    while ( v82 < *(unsigned __int16 *)(a1 + 4) );
    v22 = a4;
  }
  SddlpFree(v61);
  SddlpFree(v165);
  SddlpFree(v162);
  SddlpFree(Src);
  if ( v13 )
  {
    SddlpFree(*v22);
    *v22 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v11;
  }
  return v13;
}
