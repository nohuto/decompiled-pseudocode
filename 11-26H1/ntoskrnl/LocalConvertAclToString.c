/*
 * XREFs of LocalConvertAclToString @ 0x140A607C4
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A61D64 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x14053B580 (_ultow_s.c)
 *     wcscpy_s @ 0x14053CB00 (wcscpy_s.c)
 *     SddlpFreeUuidString @ 0x1408186A4 (SddlpFreeUuidString.c)
 *     SddlpUuidToString @ 0x14081874C (SddlpUuidToString.c)
 *     LookupSidInTable @ 0x140925630 (LookupSidInTable.c)
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     LocalGetAceCondition @ 0x140A614C8 (LocalGetAceCondition.c)
 *     RtlNtStatusToDosError @ 0x140A62640 (RtlNtStatusToDosError.c)
 *     SddlpAlloc @ 0x140A62788 (SddlpAlloc.c)
 *     LocalConvertSidToStringSidW @ 0x140A633E0 (LocalConvertSidToStringSidW.c)
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
  unsigned int v9; // r12d
  __int64 v11; // r13
  __int64 v12; // r14
  ULONG v13; // edi
  wchar_t *v14; // rax
  __int64 result; // rax
  __int64 v16; // rax
  int v17; // ebx
  unsigned __int8 *v18; // r15
  int v19; // r14d
  char *v20; // rcx
  unsigned int v21; // edx
  void **v22; // r15
  wchar_t *v23; // r14
  unsigned __int8 *v24; // r9
  unsigned __int64 v25; // rbx
  unsigned int v26; // r15d
  char *v27; // rcx
  unsigned int v28; // edx
  wchar_t *v29; // r14
  rsize_t v30; // rbx
  unsigned int v31; // esi
  wchar_t *v32; // r14
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
  char *v61; // rcx
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
  char *v83; // r15
  _BYTE *v84; // r13
  unsigned int v85; // eax
  unsigned int m; // r15d
  int *v87; // rcx
  int v88; // r9d
  unsigned int v89; // r8d
  void *v90; // rcx
  unsigned int k; // r8d
  unsigned int v92; // ecx
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95; // ecx
  unsigned int v96; // ecx
  unsigned int v97; // ecx
  unsigned int v98; // ecx
  unsigned int v99; // ebx
  unsigned __int8 *v100; // r14
  ULONG AceCondition; // eax
  int v102; // r11d
  _DWORD *v103; // r10
  __int64 v104; // r9
  int *v105; // rcx
  int v106; // r8d
  unsigned int v107; // edx
  unsigned int j; // r10d
  int *v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  wchar_t **v112; // rbx
  __int64 v113; // rax
  int v114; // r13d
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
  int v128; // edi
  unsigned int i; // ebx
  unsigned int v130; // ecx
  char *v131; // r8
  unsigned int v132; // edx
  unsigned int v133; // r10d
  wchar_t **v134; // rcx
  __int64 v135; // rax
  wchar_t *v136; // rcx
  __int64 v137; // rax
  wchar_t **v138; // rax
  wchar_t **v139; // rdi
  __int64 v140; // rax
  wchar_t **v141; // rdi
  __int64 v142; // rax
  wchar_t **v143; // rsi
  __int64 v144; // rax
  wchar_t **v145; // rsi
  __int64 v146; // rax
  wchar_t *v147; // rax
  __int64 v148; // rsi
  __int64 v149; // rsi
  unsigned __int8 *v150; // r8
  unsigned int v151; // r9d
  int v152; // edx
  unsigned int v153; // [rsp+58h] [rbp-69h]
  int v154; // [rsp+5Ch] [rbp-65h] BYREF
  __int64 v155; // [rsp+60h] [rbp-61h]
  ULONG v156; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int8 *v157; // [rsp+70h] [rbp-51h]
  wchar_t *Src; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int8 *v159; // [rsp+80h] [rbp-41h]
  wchar_t *v160; // [rsp+88h] [rbp-39h] BYREF
  __int64 v161; // [rsp+90h] [rbp-31h] BYREF
  char *v162; // [rsp+98h] [rbp-29h]
  _DWORD *v163; // [rsp+A0h] [rbp-21h]
  int v164; // [rsp+A8h] [rbp-19h]
  unsigned int *v165; // [rsp+B0h] [rbp-11h]
  _BYTE *v166; // [rsp+B8h] [rbp-9h]
  unsigned int Vala; // [rsp+140h] [rbp+7Fh]

  v9 = 0;
  v164 = 0;
  LODWORD(v11) = 0;
  v155 = 0LL;
  v12 = a1;
  v160 = 0LL;
  v13 = 0;
  Vala = 0;
  v159 = 0LL;
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
  v17 = 2 - (a3 != 0);
  v153 = v17;
  v162 = (char *)SddlpAlloc(8 * v16);
  if ( !v162 )
    return 8LL;
  v166 = (_BYTE *)SddlpAlloc(*(unsigned __int16 *)(v12 + 4));
  if ( !v166 )
  {
    v90 = v162;
    goto LABEL_117;
  }
  v163 = (_DWORD *)SddlpAlloc(4LL * *(unsigned __int16 *)(v12 + 4));
  if ( !v163 )
  {
    SddlpFree(v162);
    v90 = v166;
LABEL_117:
    SddlpFree(v90);
    return 8LL;
  }
  v157 = (unsigned __int8 *)(v12 + 8);
  v18 = (unsigned __int8 *)(v12 + 8);
  while ( v9 < *(unsigned __int16 *)(v12 + 4) )
  {
    v19 = *v18;
    v20 = byte_140E0889C;
    v11 = (unsigned int)(v11 + 2);
    v21 = 0;
    v155 = v11;
    while ( (v17 & *((_DWORD *)v20 + 1)) != v17 || v19 != *(_DWORD *)v20 )
    {
      ++v21;
      v20 += 24;
      if ( v21 >= 0x11 )
        goto LABEL_19;
    }
    v125 = (__int64 *)(0x140000000LL + 24LL * v21 + 14715024);
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
    v128 = v11 + 2 + 2 * v127;
    for ( i = 0; i < 8; ++i )
    {
      if ( (v18[1] & (1 << i)) == 0 )
        continue;
      v130 = v153;
      v131 = (char *)&unk_140E08784;
      v132 = 0;
      v133 = 0;
      while ( 1 )
      {
        if ( (v130 & *((_DWORD *)v131 - 1)) != v130 )
          goto LABEL_184;
        if ( !*(_DWORD *)v131 )
          break;
        while ( v132 < *(_DWORD *)v131 )
        {
          if ( *(_BYTE *)(v132 + *(_QWORD *)(v131 + 4)) == (_BYTE)v19 )
          {
            v130 = v153;
            goto LABEL_183;
          }
          ++v132;
        }
        v130 = v153;
LABEL_184:
        ++v133;
        v131 += 32;
        if ( v133 >= 9 )
          goto LABEL_185;
        v132 = 0;
      }
LABEL_183:
      if ( 1 << i != *((_DWORD *)v131 - 2) )
        goto LABEL_184;
      v134 = &(&off_140E08770)[4 * v133];
      if ( v134 )
      {
        v135 = -1LL;
        do
          ++v135;
        while ( (*v134)[v135] );
        v128 += 2 * v135;
      }
LABEL_185:
      ;
    }
    v92 = *v18;
    LODWORD(v11) = v128 + 2;
    v155 = (unsigned int)(v128 + 2);
    v154 = v128 + 2;
    if ( v92 <= 9 )
    {
      if ( v92 != 9 )
      {
        if ( v92 )
        {
          v116 = v92 - 1;
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
                goto LABEL_222;
              }
            }
          }
        }
      }
LABEL_134:
      v99 = *((_DWORD *)v18 + 1);
      v100 = v18 + 8;
      v159 = v18 + 8;
      Vala = v99;
    }
    else
    {
      v93 = v92 - 10;
      if ( !v93 )
        goto LABEL_134;
      v94 = v93 - 1;
      if ( v94 )
      {
        v95 = v94 - 2;
        if ( !v95 )
          goto LABEL_134;
        v96 = v95 - 4;
        if ( !v96 )
          goto LABEL_134;
        v97 = v96 - 1;
        if ( !v97 )
          goto LABEL_134;
        v98 = v97 - 1;
        if ( !v98 || v98 - 1 <= 1 )
          goto LABEL_134;
        goto LABEL_19;
      }
LABEL_222:
      v150 = v18 + 12;
      v99 = *((_DWORD *)v18 + 1);
      v151 = *((_DWORD *)v18 + 2) & 1;
      Vala = v99;
      v152 = *((_DWORD *)v18 + 2) & 2;
      v100 = &v18[16 * v151 + (v152 != 0 ? 28LL : 12LL)];
      v159 = v100;
      if ( (-(__int64)(v151 != 0) & (unsigned __int64)(v18 + 12)) != 0 )
      {
        LODWORD(v11) = v128 + 74;
        v154 = v128 + 74;
      }
      if ( v152 )
      {
        if ( v151 )
          v150 = v18 + 28;
        if ( v150 )
          v154 = v11 + 72;
      }
    }
    if ( Src )
    {
      SddlpFree(Src);
      Src = 0LL;
    }
    v156 = 0;
    AceCondition = LocalGetAceCondition(v18, v100, &Src, &v156);
    v102 = 0;
    v13 = AceCondition;
    if ( AceCondition )
    {
      LODWORD(v11) = v154;
      v155 = (unsigned int)v154;
    }
    else
    {
      v103 = v163;
      v104 = v153;
      v105 = dword_140E08A3C;
      v106 = v153;
      v107 = 0;
      v163[v9] = 0;
      if ( *v18 == 17 )
        v106 = 4;
      while ( (v106 & v105[1]) != v106 || v99 != *v105 )
      {
        ++v107;
        v105 += 6;
        if ( v107 >= 0x1C )
          goto LABEL_143;
      }
      v138 = &(&off_140E08A30)[3 * v107];
      if ( v138 )
      {
        v103[v9] = 1;
        v136 = *v138;
        v137 = -1LL;
        do
          ++v137;
        while ( v136[v137] );
        v102 = 2 * v137;
        goto LABEL_153;
      }
LABEL_143:
      for ( j = 0; j < 0x20; ++j )
      {
        if ( (Vala & (1 << j)) != 0 )
        {
          v109 = dword_140E08A3C;
          if ( *v18 == 17 )
            v104 = 4LL;
          v110 = 0LL;
          while ( ((unsigned int)v104 & v109[1]) != (_DWORD)v104 || (Vala & (1 << j)) != *v109 )
          {
            v110 = (unsigned int)(v110 + 1);
            v109 += 6;
            if ( (unsigned int)v110 >= 0x1C )
              goto LABEL_152;
          }
          v122 = &(&off_140E08A30)[3 * v110];
          if ( !v122 )
          {
LABEL_152:
            v102 = 20;
            v163[v9] = 2;
            break;
          }
          v123 = *v122;
          v124 = -1LL;
          do
            ++v124;
          while ( v123[v124] );
          v104 = v153;
          v102 += 2 * v124;
        }
      }
LABEL_153:
      LODWORD(v11) = v102 + v154 + 6;
      v155 = (unsigned int)v11;
      v111 = LookupSidInTable(0LL, v100, a6, v104, (int)&v154, a9, &v161);
      v112 = (wchar_t **)&v162[8 * v9];
      if ( v111 )
      {
        *v112 = (wchar_t *)(v111 + 2);
LABEL_155:
        v113 = -1LL;
        do
          ++v113;
        while ( (*v112)[v113] );
        v12 = a1;
        v114 = v11 + 2 * v113;
        v115 = *((unsigned __int16 *)v18 + 1);
        v11 = (unsigned int)(v114 + 4);
        v17 = v153;
        ++v9;
        v155 = v11;
        v18 += v115;
        continue;
      }
      if ( v161 )
      {
        v147 = (wchar_t *)SddlpAlloc(6uLL);
        *v112 = v147;
        if ( v147 )
        {
          wcscpy_s(v147, 3uLL, L"SA");
          goto LABEL_169;
        }
        v13 = 8;
      }
      else
      {
        v121 = LocalConvertSidToStringSidW(v100);
        if ( v121 >= 0 )
        {
LABEL_169:
          v166[v9] = 1;
          goto LABEL_155;
        }
        v13 = RtlNtStatusToDosError(v121);
      }
    }
    break;
  }
  if ( (_DWORD)v11 )
  {
    if ( v13 )
      goto LABEL_93;
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
      v25 = (unsigned __int64)(unsigned int)v11 >> 1;
      v26 = 0;
      while ( 1 )
      {
        v154 = v26;
        if ( v26 >= *(unsigned __int16 *)(a1 + 4) )
        {
LABEL_92:
          LODWORD(v11) = v155;
          goto LABEL_93;
        }
        if ( !v25 )
          goto LABEL_91;
        v27 = byte_140E0889C;
        *v23 = 40;
        v28 = 0;
        v29 = v23 + 1;
        v30 = v25 - 1;
        while ( (v153 & *((_DWORD *)v27 + 1)) != v153 || *v24 != *(_DWORD *)v27 )
        {
          ++v28;
          v27 += 24;
          if ( v28 >= 0x11 )
            goto LABEL_32;
        }
        v139 = &(&off_140E08890)[3 * v28];
        if ( v139 )
        {
          wcscpy_s(v29, v30, *v139);
          v140 = *((unsigned int *)v139 + 2);
          v24 = v157;
          v30 -= v140;
          v29 += v140;
        }
LABEL_32:
        if ( !v30 )
          goto LABEL_91;
        *v29 = 59;
        v31 = 0;
        v32 = v29 + 1;
        v33 = v30 - 1;
        do
        {
          if ( ((unsigned __int8)(1 << v31) & v24[1]) == 0 )
            goto LABEL_41;
          v34 = (char *)&unk_140E08784;
          v35 = 0;
          while ( 1 )
          {
            if ( (v153 & *((_DWORD *)v34 - 1)) == v153 )
            {
              if ( *(_DWORD *)v34 )
              {
                for ( k = 0; k < *(_DWORD *)v34; ++k )
                {
                  if ( *(_BYTE *)(k + *(_QWORD *)(v34 + 4)) == *v24 )
                    goto LABEL_38;
                }
                goto LABEL_39;
              }
LABEL_38:
              if ( 1 << v31 == *((_DWORD *)v34 - 2) )
                break;
            }
LABEL_39:
            ++v35;
            v34 += 32;
            if ( v35 >= 9 )
              goto LABEL_40;
          }
          v141 = &(&off_140E08770)[4 * v35];
          if ( v141 )
          {
            wcscpy_s(v32, v33, *v141);
            v142 = *((unsigned int *)v141 + 2);
            v33 -= v142;
            v32 += v142;
LABEL_40:
            v24 = v157;
            goto LABEL_41;
          }
          v24 = v157;
LABEL_41:
          ++v31;
        }
        while ( v31 < 8 );
        v36 = (unsigned int)v154;
        if ( !v33 )
          goto LABEL_91;
        *v32 = 59;
        v37 = v33 - 1;
        v38 = *v24;
        v39 = v32 + 1;
        v165 = 0LL;
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
                v48 = v159;
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
          v159 = v48;
          if ( v75 )
            v41 = (unsigned int *)&v24[v76 + 12];
          v161 = (__int64)v41;
          if ( v77 )
          {
            v40 = (unsigned int *)(v24 + 12);
            v165 = (unsigned int *)(v24 + 12);
          }
          else
          {
            v165 = 0LL;
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
        v159 = v24 + 8;
        Vala = v81;
LABEL_52:
        if ( Src )
        {
          SddlpFree(Src);
          Src = 0LL;
        }
        v49 = v157;
        v156 = 0;
        v156 = LocalGetAceCondition(v157, v48, &Src, &v156);
        v13 = v156;
        if ( v156 )
          goto LABEL_92;
        v50 = v163[v36];
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
          v54 = dword_140E08A3C;
          v55 = v153;
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
          v143 = &(&off_140E08A30)[3 * v56];
          if ( v143 )
          {
            wcscpy_s(v39, v37, *v143);
            v144 = *((unsigned int *)v143 + 2);
            v37 -= v144;
            v39 += v144;
          }
        }
        else
        {
          v85 = Vala;
          for ( m = 0; m < 0x20; ++m )
          {
            if ( (v85 & (1 << m)) != 0 )
            {
              v87 = dword_140E08A3C;
              v88 = v153;
              v89 = 0;
              if ( *v49 == 17 )
                v88 = 4;
              while ( (v88 & v87[1]) != v88 || (v85 & (1 << m)) != *v87 )
              {
                ++v89;
                v87 += 6;
                if ( v89 >= 0x1C )
                  goto LABEL_112;
              }
              v145 = &(&off_140E08A30)[3 * v89];
              if ( v145 )
              {
                wcscpy_s(v39, v37, *v145);
                v146 = *((unsigned int *)v145 + 2);
                v37 -= v146;
                v39 += v146;
              }
              v49 = v157;
LABEL_112:
              v85 = Vala;
            }
          }
          v13 = v156;
          v40 = v165;
          v41 = (unsigned int *)v161;
          LODWORD(v36) = v154;
        }
LABEL_66:
        if ( !v37 )
          goto LABEL_91;
        v57 = v37 - 1;
        *v39 = 59;
        v58 = v39 + 1;
        if ( !v40 )
          goto LABEL_68;
        if ( !(unsigned int)SddlpUuidToString(v40, &v160) )
          goto LABEL_92;
        v148 = -1LL;
        do
          ++v148;
        while ( v160[v148] );
        wcscpy_s(v58, v57, v160);
        v57 -= v148;
        v58 += v148;
        SddlpFreeUuidString((void **)&v160);
LABEL_68:
        if ( !v57 )
          goto LABEL_91;
        *v58 = 59;
        v59 = v57 - 1;
        v60 = v58 + 1;
        if ( !v41 )
          goto LABEL_70;
        if ( !(unsigned int)SddlpUuidToString(v41, &v160) )
          goto LABEL_92;
        v149 = -1LL;
        do
          ++v149;
        while ( v160[v149] );
        wcscpy_s(v60, v59, v160);
        v59 -= v149;
        v60 += v149;
        SddlpFreeUuidString((void **)&v160);
LABEL_70:
        if ( !v59 )
          goto LABEL_91;
        v61 = v162;
        *v60 = 59;
        v62 = v60 + 1;
        v63 = v59 - 1;
        v64 = *(const wchar_t **)&v61[8 * (unsigned int)v36];
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
          v13 = 1336;
          goto LABEL_92;
        }
LABEL_74:
        if ( v68 <= 1 )
          goto LABEL_91;
        v69 = v157;
        v25 = v68 - 1;
        *v67 = 41;
        v26 = v36 + 1;
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
LABEL_93:
    v22 = a4;
  }
  v82 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v83 = v162;
    v84 = v166;
    do
    {
      if ( v84[v82] )
        SddlpFree(*(void **)&v83[8 * v82]);
      ++v82;
    }
    while ( v82 < *(unsigned __int16 *)(a1 + 4) );
    LODWORD(v11) = v155;
    v22 = a4;
  }
  SddlpFree(v162);
  SddlpFree(v166);
  SddlpFree(v163);
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
