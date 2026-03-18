/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180075F40
 * Callers:
 *     ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ @ 0x180072F90 (-ComputeOcclusion@CMegaRectCollection@@QEAAXXZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x180076F80 (-AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077240 (-OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 * Callees:
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x180077650 (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800ED070 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r10
  FastRegion::Internal::CStripe *v4; // r15
  __int64 v5; // r9
  int *v7; // rbp
  FastRegion::Internal::CStripe *v8; // rbx
  int v9; // r12d
  char *v10; // r13
  int v11; // eax
  char *v12; // rdi
  const struct FastRegion::Internal::CStripe *v13; // r14
  const struct FastRegion::Internal::CStripe *v14; // rdi
  char *v15; // r8
  char *v16; // rcx
  int *v17; // rax
  __int64 v18; // r10
  _DWORD *v19; // rdx
  FastRegion::Internal::CStripe *v20; // rbp
  int v21; // r11d
  int v22; // r9d
  int *v23; // rax
  int v24; // r11d
  int v25; // r11d
  int v26; // edx
  char *v27; // r12
  int v28; // ecx
  const struct FastRegion::Internal::CStripe *v29; // r10
  int v30; // eax
  const struct FastRegion::Internal::CStripe *v31; // r9
  int *v32; // rdx
  const struct FastRegion::Internal::CStripe *v33; // r8
  int *v34; // rcx
  int *v35; // r8
  int *v36; // r9
  int *v37; // r11
  _DWORD *v38; // rdx
  int v39; // r10d
  int v40; // eax
  int *v41; // r8
  int v42; // r10d
  int v43; // r10d
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // r10
  __int64 m; // rcx
  int v48; // eax
  __int64 v49; // rax
  FastRegion::Internal::CStripe *v50; // rcx
  _DWORD *v51; // rdx
  _DWORD *v52; // r8
  int v53; // eax
  __int64 v54; // r10
  _DWORD *v55; // r10
  char *v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  _DWORD *v59; // rcx
  char *v60; // r8
  FastRegion::Internal::CStripe *v61; // rdx
  int v62; // ecx
  bool v63; // zf
  int v64; // ecx
  __int64 v65; // r11
  _DWORD *v66; // rdx
  int *v67; // r9
  int *v68; // rax
  int *v69; // rcx
  int v70; // r10d
  int v71; // r8d
  int *v72; // rax
  int v73; // r10d
  int v74; // r10d
  int v75; // eax
  const struct FastRegion::Internal::CStripe *v76; // r10
  bool v77; // cc
  __int64 v78; // rcx
  _DWORD *v79; // rcx
  int *v80; // r9
  int *v81; // rdx
  int *v82; // r8
  int *v83; // rax
  FastRegion::Internal::CStripe *v84; // rbp
  int v85; // r11d
  int v86; // r10d
  int *v87; // r9
  int v88; // r10d
  int v89; // r10d
  int v90; // ecx
  __int64 v91; // r9
  _DWORD *v92; // r9
  char *v93; // r10
  __int64 v94; // rcx
  __int64 v95; // r8
  _DWORD *v96; // rdx
  __int64 v97; // r10
  FastRegion::Internal::CStripe *v98; // rdx
  int v99; // eax
  int v100; // ecx
  bool v101; // zf
  _DWORD *v102; // rdi
  __int64 v103; // r8
  _DWORD *v104; // r8
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r9
  _DWORD *v108; // rdx
  __int64 v109; // r8
  __int64 v110; // rax
  __int64 v111; // r9
  __int64 jj; // r8
  int v113; // r11d
  int v114; // r9d
  const struct FastRegion::Internal::CStripe *v115; // r10
  __int64 v116; // r9
  __int64 v117; // rdx
  _DWORD *v118; // rcx
  char *v119; // r8
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // r9
  __int64 i; // rcx
  char *v124; // r8
  __int64 v125; // r9
  __int64 ii; // rcx
  FastRegion::Internal::CStripe *v127; // r8
  int v128; // edx
  __int64 v129; // rax
  __int64 v130; // r10
  char *v131; // r8
  __int64 v132; // r10
  _DWORD *v133; // r10
  char *v134; // r9
  __int64 v135; // rcx
  __int64 v136; // r8
  _DWORD *v137; // rdx
  char *v138; // r9
  __int64 v139; // r11
  _DWORD *v140; // rdx
  int *v141; // r9
  int *v142; // rax
  int *v143; // rcx
  int v144; // r10d
  int v145; // r8d
  int *v146; // rax
  int v147; // r10d
  int v148; // r10d
  int v149; // eax
  int v150; // r9d
  int v151; // eax
  int v152; // r11d
  int v153; // r10d
  __int64 k; // rcx
  __int64 v155; // r9
  _DWORD *v156; // r9
  __int64 v157; // rcx
  __int64 v158; // r8
  _DWORD *v159; // rdx
  char *v160; // r10
  int v161; // eax
  char *v162; // r9
  __int64 v163; // r8
  __int64 n; // rcx
  int v165; // r10d
  int v166; // r8d
  int v167; // r10d
  int v168; // eax
  int v169; // r11d
  int v170; // eax
  __int64 v171; // r10
  _DWORD *v172; // r10
  char *v173; // r8
  __int64 v174; // r9
  __int64 v175; // rdx
  _DWORD *v176; // rcx
  char *v177; // r8
  int v178; // eax
  int v179; // r8d
  int v180; // eax
  int v181; // eax
  int v182; // edx
  __int64 v183; // rax
  __int64 v184; // r10
  __int64 j; // rcx
  int v186; // r10d
  int v187; // r8d
  FastRegion::Internal::CStripe *v188; // rcx
  int v189; // eax
  int v190; // r8d
  char *v191; // [rsp+50h] [rbp+8h]

  v3 = *(int *)a2;
  v4 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v5 = *(int *)a3;
  v7 = (int *)((char *)a3 + 12);
  v8 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v9 = 8 * (v5 + v3);
  *((_DWORD *)this + 4) = v9;
  v10 = (char *)a2 + 8 * v3 + 12;
  v11 = *((_DWORD *)a2 + 3);
  v12 = (char *)a3 + 8 * v5 + 12;
  v191 = v12;
  if ( v11 >= *((_DWORD *)a3 + 3) )
  {
    v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    if ( v11 <= *((_DWORD *)a3 + 3) )
    {
      *(_DWORD *)v4 = v11;
      v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
      v15 = (char *)a2 + *((int *)a2 + 6) + 20;
      v16 = (char *)a2 + *((int *)a2 + 4) + 12;
      v17 = (int *)((char *)v7 + v7[1]);
      v18 = (__int64)v7 + v7[3] + 8;
      v19 = (_DWORD *)((char *)v4 + v9);
      if ( v16 == v15 )
        goto LABEL_13;
      if ( v17 == (int *)v18 )
        goto LABEL_155;
      while ( 1 )
      {
LABEL_5:
        v20 = v8;
        while ( 1 )
        {
          v21 = *v17;
          v22 = *(_DWORD *)v16;
          if ( *(_DWORD *)v16 < *v17 )
          {
            v16 += 4;
            *v19++ = v22;
            goto LABEL_103;
          }
          v23 = v17 + 1;
          if ( v21 < v22 )
          {
            v8 = v20;
            goto LABEL_151;
          }
          v24 = *v23;
LABEL_9:
          v16 += 4;
LABEL_10:
          v8 = v20;
          if ( *(_DWORD *)v16 < v24 )
            break;
          v25 = *v23;
          v17 = v23 + 1;
          if ( v25 < *(_DWORD *)v16 )
          {
            *v19++ = v25;
            if ( v17 != (int *)v18 )
              goto LABEL_103;
LABEL_154:
            while ( v16 != v15 )
            {
LABEL_155:
              v151 = *(_DWORD *)v16;
              v16 += 4;
              *v19++ = v151;
            }
LABEL_13:
            v26 = (_DWORD)v19 - ((_DWORD)v8 + 8);
            *((_DWORD *)v8 + 3) = v26;
            if ( (_DWORD)this + v26 - *((_DWORD *)this + 4) - (_DWORD)v8 + 20 )
              v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
LABEL_15:
            v27 = v191;
            goto LABEL_16;
          }
          v16 += 4;
          if ( v16 == v15 )
            goto LABEL_13;
          if ( v17 == (int *)v18 )
            goto LABEL_155;
        }
        v16 += 4;
        if ( v16 == v15 )
          goto LABEL_13;
        while ( 1 )
        {
LABEL_151:
          v24 = *v23;
          v150 = *(_DWORD *)v16;
          if ( *(_DWORD *)v16 < *v23 )
            goto LABEL_9;
          v17 = v23 + 1;
          if ( v24 < v150 )
            break;
          *v19 = v150;
          v16 += 4;
          ++v19;
          if ( v17 == (int *)v18 )
            goto LABEL_154;
LABEL_103:
          v113 = *v17;
          v114 = *(_DWORD *)v16;
          if ( *(_DWORD *)v16 < *v17 )
          {
            *v19 = v114;
            v16 += 4;
            ++v19;
            v8 = v20;
            if ( v16 == v15 )
              goto LABEL_13;
            goto LABEL_5;
          }
          v23 = v17 + 1;
          if ( v113 < v114 )
          {
            *v19++ = v113;
            v24 = *v23;
            goto LABEL_10;
          }
          *v19 = v114;
          v16 += 4;
          ++v19;
          v8 = v20;
          if ( v16 == v15 )
            goto LABEL_13;
        }
        if ( v17 == (int *)v18 )
          goto LABEL_154;
      }
    }
    while ( 1 )
    {
      v76 = v13;
      v77 = v11 <= *(_DWORD *)v13;
      if ( v11 < *(_DWORD *)v13 )
      {
        v78 = *((int *)this + 4);
        v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        *(_DWORD *)v4 = v11;
        v79 = (_DWORD *)((char *)v4 + v78);
        v80 = (int *)((char *)v13 + *((int *)v13 - 1) - 8);
        v81 = (int *)((char *)a2 + *((int *)a2 + 4) + 12);
        v82 = (int *)((char *)v14 + *((int *)v14 + 1));
        v83 = (int *)((char *)v13 + *((int *)v13 + 1));
        if ( v81 == v82 )
          goto LABEL_82;
        if ( v80 == v83 )
          goto LABEL_195;
LABEL_74:
        while ( 2 )
        {
          v84 = v8;
          while ( 1 )
          {
            v85 = *v80;
            v86 = *v81;
            if ( *v81 < *v80 )
            {
              ++v81;
              *v79++ = v86;
              goto LABEL_158;
            }
            v87 = v80 + 1;
            if ( v85 < v86 )
            {
              v8 = v84;
              goto LABEL_191;
            }
            v88 = *v87;
LABEL_78:
            ++v81;
LABEL_79:
            v8 = v84;
            if ( *v81 < v88 )
              break;
            v89 = *v87;
            v80 = v87 + 1;
            if ( v89 < *v81 )
            {
              *v79++ = v89;
              if ( v80 != v83 )
                goto LABEL_158;
              goto LABEL_194;
            }
            if ( ++v81 == v82 )
              goto LABEL_82;
            if ( v80 == v83 )
              goto LABEL_195;
          }
          if ( ++v81 == v82 )
            goto LABEL_82;
          while ( 1 )
          {
LABEL_191:
            v88 = *v87;
            v169 = *v81;
            if ( *v81 < *v87 )
              goto LABEL_78;
            v80 = v87 + 1;
            if ( v88 < v169 )
              break;
            *v79 = v169;
            ++v81;
            ++v79;
            if ( v80 == v83 )
              goto LABEL_194;
LABEL_158:
            v152 = *v80;
            v153 = *v81;
            if ( *v81 < *v80 )
            {
              *v79 = v153;
              ++v81;
              ++v79;
              v8 = v84;
              if ( v81 == v82 )
                goto LABEL_82;
              goto LABEL_74;
            }
            v87 = v80 + 1;
            if ( v152 < v153 )
            {
              *v79++ = v152;
              v88 = *v87;
              goto LABEL_79;
            }
            *v79 = v153;
            ++v81;
            ++v79;
            v8 = v84;
            if ( v81 == v82 )
              goto LABEL_82;
          }
          if ( v80 != v83 )
            continue;
          break;
        }
LABEL_194:
        if ( v81 == v82 )
          goto LABEL_82;
        do
        {
LABEL_195:
          v170 = *v81++;
          *v79++ = v170;
        }
        while ( v81 != v82 );
LABEL_82:
        v90 = (_DWORD)v79 - ((_DWORD)v8 + 8);
        *((_DWORD *)v8 + 3) = v90;
        if ( v90 - *((_DWORD *)v8 + 1) != -8 )
          v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        goto LABEL_15;
      }
      v131 = (char *)v13 + 8;
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      if ( v77 )
        break;
      if ( v131 == v12 )
      {
        v171 = *((int *)this + 4);
        v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        *(_DWORD *)v4 = v11;
        v172 = (_DWORD *)((char *)v4 + v171);
        v173 = (char *)a2 + *((int *)a2 + 4) + 12;
        v174 = (*((int *)a2 + 6) - (*((int *)a2 + 4) + 12LL) + 20) >> 2;
        v175 = (int)v174;
        if ( (int)v174 > 0 )
        {
          v176 = v172;
          v177 = (char *)(v173 - (char *)v172);
          do
          {
            *v176 = *(_DWORD *)&v177[(_QWORD)v176];
            ++v176;
            --v175;
          }
          while ( v175 );
        }
        v178 = (_DWORD)v172 + 4 * v174 - ((_DWORD)v4 + 8);
        *((_DWORD *)v4 + 3) = v178;
        if ( v178 - *((_DWORD *)v4 + 1) != -8 )
          v8 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
        goto LABEL_92;
      }
    }
    v27 = v12;
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    if ( v131 != v191 )
    {
      FastRegion::Internal::CStripe::Subtract(
        (FastRegion::Internal::CRgnData *)((char *)this + 12),
        (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
        v76,
        (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
      v188 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
      v189 = *((_DWORD *)v4 + 3) - *((_DWORD *)v4 + 1);
      goto LABEL_256;
    }
    v132 = *((int *)this + 4);
    *(_DWORD *)v4 = v11;
    v133 = (_DWORD *)((char *)v4 + v132);
    v134 = (char *)a2 + *((int *)a2 + 4) + 12;
    v135 = (*((int *)a2 + 6) - (*((int *)a2 + 4) + 12LL) + 20) >> 2;
    v136 = (int)v135;
    if ( (int)v135 > 0 )
    {
      v137 = v133;
      v138 = (char *)(v134 - (char *)v133);
      do
      {
        *v137 = *(_DWORD *)((char *)v137 + (_QWORD)v138);
        ++v137;
        --v136;
      }
      while ( v136 );
    }
    v98 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
    *((_DWORD *)v4 + 3) = (_DWORD)v133 + 4 * v135 - ((_DWORD)v4 + 8);
    v101 = (_DWORD)v133 + 4 * (_DWORD)v135 - (_DWORD)v4 == *((_DWORD *)v4 + 1);
    goto LABEL_90;
  }
  v54 = *((int *)this + 4);
  v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  *(_DWORD *)v4 = v11;
  v55 = (_DWORD *)((char *)v4 + v54);
  v56 = (char *)a2 + *((int *)a2 + 4) + 12;
  v57 = (*((int *)a2 + 6) - (*((int *)a2 + 4) + 12LL) + 20) >> 2;
  v58 = (int)v57;
  if ( (int)v57 > 0 )
  {
    v59 = v55;
    v60 = (char *)(v56 - (char *)v55);
    do
    {
      *v59 = *(_DWORD *)((char *)v59 + (_QWORD)v60);
      ++v59;
      --v58;
    }
    while ( v58 );
  }
  v61 = (FastRegion::Internal::CStripe *)((char *)v4 + 8);
  v62 = (_DWORD)v55 + 4 * v57 - ((_DWORD)v4 + 8);
  *((_DWORD *)v4 + 3) = v62;
  v63 = v62 + (_DWORD)this - *((_DWORD *)this + 4) - (_DWORD)v4 + 20 == 0;
LABEL_55:
  if ( v63 )
    goto LABEL_57;
LABEL_56:
  v8 = v61;
LABEL_57:
  while ( 1 )
  {
    v48 = *(_DWORD *)v14;
    v64 = *v7;
    if ( *(_DWORD *)v14 >= *v7 )
      break;
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    *(_DWORD *)v8 = v48;
    if ( v14 == (const struct FastRegion::Internal::CStripe *)v10 )
    {
      if ( v8 != v4 && (char *)v8 + *((int *)v8 + 1) != (char *)v8 + *((int *)v8 - 1) - 8 )
        goto LABEL_21;
      goto LABEL_41;
    }
    v115 = (FastRegion::Internal::CStripe *)((char *)v8 + *((int *)v8 + 1));
    v116 = (*((int *)v14 + 1) - (*((int *)v14 - 1) - 8LL)) >> 2;
    v117 = (int)v116;
    if ( (int)v116 > 0 )
    {
      v118 = (_DWORD *)((char *)v8 + *((int *)v8 + 1));
      v119 = (char *)((const struct FastRegion::Internal::CStripe *)((char *)v14 + *((int *)v14 - 1) - 8) - v115);
      do
      {
        *v118 = *(_DWORD *)&v119[(_QWORD)v118];
        ++v118;
        --v117;
      }
      while ( v117 );
    }
    v61 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    v120 = (int)v115 + 4 * (int)v116 - ((int)v8 + 8);
    *((_DWORD *)v8 + 3) = v120;
    v121 = *((int *)v8 + 1);
    if ( v8 == v4 )
    {
      v63 = (_DWORD)v115 + 4 * (_DWORD)v116 - (_DWORD)v8 == (_DWORD)v121;
      goto LABEL_55;
    }
    v122 = (int)((v121 - (*((int *)v8 - 1) - 8LL)) >> 2);
    if ( v122 != (v120 - v121 + 8) >> 2 )
      goto LABEL_56;
    for ( i = 0LL; i < v122; ++i )
    {
      if ( *(_DWORD *)((char *)v8 + 4 * i + v121) != *(_DWORD *)((char *)v8 + 4 * i + *((int *)v8 - 1) - 8) )
        goto LABEL_56;
    }
  }
  v13 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
  if ( v48 <= v64 )
  {
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    if ( v14 == (const struct FastRegion::Internal::CStripe *)v10 )
      goto LABEL_39;
    *(_DWORD *)v8 = v64;
    v139 = (__int64)v7 + v7[3] + 8;
    v140 = (_DWORD *)((char *)v8 + *((int *)v8 + 1));
    v141 = (int *)((char *)v14 + *((int *)v14 + 1));
    v142 = (int *)((char *)v7 + v7[1]);
    v143 = (int *)((char *)v14 + *((int *)v14 - 1) - 8);
    if ( v143 == v141 )
      goto LABEL_231;
    if ( v142 != (int *)v139 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_138:
          v144 = *v142;
          v145 = *v143;
          if ( *v143 < *v142 )
          {
            ++v143;
            *v140++ = v145;
            goto LABEL_248;
          }
          v146 = v142 + 1;
          if ( v144 >= v145 )
            break;
          while ( 1 )
          {
LABEL_261:
            v147 = *v146;
            v190 = *v143;
            if ( *v143 < *v146 )
              goto LABEL_141;
            v142 = v146 + 1;
            if ( v147 < v190 )
              break;
            *v140 = v190;
            ++v143;
            ++v140;
            if ( v142 == (int *)v139 )
              goto LABEL_231;
LABEL_248:
            v186 = *v142;
            v187 = *v143;
            if ( *v143 < *v142 )
            {
              *v140 = v187;
              ++v143;
              ++v140;
              if ( v143 == v141 )
                goto LABEL_232;
              goto LABEL_138;
            }
            v146 = v142 + 1;
            if ( v186 < v187 )
            {
              *v140++ = v186;
              v147 = *v146;
              goto LABEL_142;
            }
            *v140 = v187;
            ++v143;
            ++v140;
            if ( v143 == v141 )
              goto LABEL_232;
          }
          if ( v142 == (int *)v139 )
            goto LABEL_231;
        }
        v147 = *v146;
LABEL_141:
        ++v143;
LABEL_142:
        if ( *v143 < v147 )
        {
          if ( ++v143 != v141 )
            goto LABEL_261;
          goto LABEL_232;
        }
        v148 = *v146;
        v142 = v146 + 1;
        if ( v148 < *v143 )
          break;
        if ( ++v143 == v141 )
          goto LABEL_232;
        if ( v142 == (int *)v139 )
          goto LABEL_146;
      }
      *v140++ = v148;
      if ( v142 != (int *)v139 )
        goto LABEL_248;
LABEL_231:
      if ( v143 == v141 )
      {
LABEL_232:
        v127 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        v182 = (_DWORD)v140 - ((_DWORD)v8 + 8);
        *((_DWORD *)v8 + 3) = v182;
        v183 = *((int *)v8 + 1);
        if ( v8 == v4 )
        {
          if ( v182 - (_DWORD)v183 == -8 )
            goto LABEL_15;
        }
        else
        {
          v184 = (int)((v183 - (*((int *)v8 - 1) - 8LL)) >> 2);
          if ( v184 == (v182 - v183 + 8) >> 2 )
          {
            for ( j = 0LL; ; ++j )
            {
              if ( j >= v184 )
                goto LABEL_15;
              if ( *(_DWORD *)((char *)v8 + 4 * j + v183) != *(_DWORD *)((char *)v8 + 4 * j + *((int *)v8 - 1) - 8) )
                break;
            }
          }
        }
LABEL_128:
        v8 = v127;
        goto LABEL_15;
      }
    }
    do
    {
LABEL_146:
      v149 = *v143++;
      *v140++ = v149;
    }
    while ( v143 != v141 );
    goto LABEL_232;
  }
  *(_DWORD *)v8 = v64;
  v65 = (__int64)v7 + v7[3] + 8;
  v66 = (_DWORD *)((char *)v8 + *((int *)v8 + 1));
  v67 = (int *)((char *)v14 + *((int *)v14 + 1));
  v68 = (int *)((char *)v7 + v7[1]);
  v69 = (int *)((char *)v14 + *((int *)v14 - 1) - 8);
  if ( v69 != v67 )
  {
    if ( v68 != (int *)v65 )
    {
      while ( 1 )
      {
LABEL_61:
        v70 = *v68;
        v71 = *v69;
        if ( *v69 < *v68 )
        {
          ++v69;
          *v66++ = v71;
          goto LABEL_176;
        }
        v72 = v68 + 1;
        if ( v70 < v71 )
        {
LABEL_212:
          while ( 1 )
          {
            v73 = *v72;
            v179 = *v69;
            if ( *v69 < *v72 )
              break;
            v68 = v72 + 1;
            if ( v73 < v179 )
            {
              if ( v68 != (int *)v65 )
                goto LABEL_61;
              goto LABEL_125;
            }
            *v66 = v179;
            ++v69;
            ++v66;
            if ( v68 == (int *)v65 )
              goto LABEL_125;
LABEL_176:
            v165 = *v68;
            v166 = *v69;
            if ( *v69 < *v68 )
            {
              *v66 = v166;
              ++v69;
              ++v66;
              if ( v69 != v67 )
                goto LABEL_61;
              goto LABEL_126;
            }
            v72 = v68 + 1;
            if ( v165 < v166 )
            {
              *v66++ = v165;
              v73 = *v72;
              goto LABEL_65;
            }
            *v66 = v166;
            ++v69;
            ++v66;
            if ( v69 == v67 )
              goto LABEL_126;
          }
        }
        else
        {
          v73 = *v72;
        }
        ++v69;
LABEL_65:
        if ( *v69 < v73 )
          break;
        v74 = *v72;
        v68 = v72 + 1;
        if ( v74 < *v69 )
        {
          *v66++ = v74;
          if ( v68 != (int *)v65 )
            goto LABEL_176;
          goto LABEL_125;
        }
        if ( ++v69 == v67 )
          goto LABEL_126;
        if ( v68 == (int *)v65 )
          goto LABEL_69;
      }
      if ( ++v69 != v67 )
        goto LABEL_212;
      goto LABEL_126;
    }
    goto LABEL_69;
  }
LABEL_125:
  while ( v69 != v67 )
  {
LABEL_69:
    v75 = *v69++;
    *v66++ = v75;
  }
LABEL_126:
  v127 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  v128 = (_DWORD)v66 - ((_DWORD)v8 + 8);
  *((_DWORD *)v8 + 3) = v128;
  v129 = *((int *)v8 + 1);
  if ( v8 != v4 )
  {
    v130 = (int)((v129 - (*((int *)v8 - 1) - 8LL)) >> 2);
    if ( v130 == (v128 - v129 + 8) >> 2 )
    {
      for ( k = 0LL; ; ++k )
      {
        if ( k >= v130 )
          goto LABEL_15;
        if ( *(_DWORD *)((char *)v8 + 4 * k + v129) != *(_DWORD *)((char *)v8 + 4 * k + *((int *)v8 - 1) - 8) )
          break;
      }
    }
    goto LABEL_128;
  }
  v27 = v191;
  if ( v128 - (_DWORD)v129 != -8 )
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  while ( 1 )
  {
LABEL_16:
    while ( 1 )
    {
      v28 = *(_DWORD *)v13;
      v29 = v13;
      v30 = *(_DWORD *)v14;
      v31 = v14;
      v32 = (int *)v14;
      v33 = v13;
      if ( *(_DWORD *)v14 >= *(_DWORD *)v13 )
        break;
      v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
      *(_DWORD *)v8 = v30;
      if ( v14 == (const struct FastRegion::Internal::CStripe *)v10 )
        goto LABEL_40;
      v34 = (int *)((char *)v14 + *((int *)v14 - 1) - 8);
      v35 = (int *)((char *)v13 + *((int *)v13 - 1) - 8);
      v36 = (int *)((char *)v14 + *((int *)v14 + 1));
      v37 = (int *)((char *)v13 + *((int *)v13 + 1));
      v38 = (_DWORD *)((char *)v8 + *((int *)v8 + 1));
      if ( v34 == v36 )
        goto LABEL_32;
      if ( v35 == v37 )
        goto LABEL_221;
      while ( 1 )
      {
LABEL_25:
        v39 = *v35;
        v40 = *v34;
        if ( *v34 < *v35 )
        {
          ++v34;
          *v38++ = v40;
          goto LABEL_180;
        }
        v41 = v35 + 1;
        if ( v39 >= v40 )
        {
          v42 = *v41;
LABEL_28:
          ++v34;
          goto LABEL_29;
        }
LABEL_217:
        v42 = *v41;
        v180 = *v34;
        if ( *v34 < *v41 )
          goto LABEL_28;
        v35 = v41 + 1;
        if ( v42 >= v180 )
          break;
        if ( v35 == v37 )
        {
LABEL_220:
          if ( v34 == v36 )
            goto LABEL_32;
          do
          {
LABEL_221:
            v181 = *v34++;
            *v38++ = v181;
          }
          while ( v34 != v36 );
          goto LABEL_32;
        }
      }
      *v38 = v180;
      ++v34;
      ++v38;
      if ( v35 == v37 )
        goto LABEL_220;
      while ( 1 )
      {
LABEL_180:
        v167 = *v35;
        v168 = *v34;
        if ( *v34 < *v35 )
        {
          *v38 = v168;
          ++v34;
          ++v38;
          if ( v34 == v36 )
            goto LABEL_32;
          goto LABEL_25;
        }
        v41 = v35 + 1;
        if ( v167 >= v168 )
        {
          *v38 = v168;
          ++v34;
          ++v38;
          if ( v34 != v36 )
            goto LABEL_217;
          goto LABEL_32;
        }
        *v38++ = v167;
        v42 = *v41;
LABEL_29:
        if ( *v34 < v42 )
          break;
        v43 = *v41;
        v35 = v41 + 1;
        if ( v43 >= *v34 )
        {
          if ( ++v34 == v36 )
            goto LABEL_32;
          if ( v35 == v37 )
            goto LABEL_221;
          goto LABEL_25;
        }
        *v38++ = v43;
        if ( v35 == v37 )
          goto LABEL_220;
      }
      if ( ++v34 != v36 )
        goto LABEL_217;
LABEL_32:
      v44 = (_DWORD)v38 - ((_DWORD)v8 + 8);
      *((_DWORD *)v8 + 3) = v44;
      v45 = *((int *)v8 + 1);
      if ( v8 == v4 )
      {
        if ( !(v44 + 8 - (_DWORD)v45) )
          continue;
LABEL_117:
        v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
        continue;
      }
      v46 = (int)((v45 - (*((int *)v8 - 1) - 8LL)) >> 2);
      if ( v46 != (v44 - v45 + 8) >> 2 )
        goto LABEL_117;
      for ( m = 0LL; m < v46; ++m )
      {
        if ( *(_DWORD *)((char *)v8 + 4 * m + v45) != *(_DWORD *)((char *)v8 + 4 * m + *((int *)v8 - 1) - 8) )
          goto LABEL_117;
      }
    }
    v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
    if ( v30 > v28 )
      break;
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    if ( v14 == (const struct FastRegion::Internal::CStripe *)v10 )
    {
      *(_DWORD *)v8 = v30;
      if ( v8 != v4 && (char *)v8 + *((int *)v8 + 1) != (char *)v8 + *((int *)v8 - 1) - 8 )
        goto LABEL_21;
      goto LABEL_41;
    }
    if ( v13 == (const struct FastRegion::Internal::CStripe *)v27 )
    {
      v155 = *((int *)v8 + 1);
      *(_DWORD *)v8 = v28;
      v156 = (_DWORD *)((char *)v8 + v155);
      v157 = (*((int *)v14 + 1) - (*((int *)v14 - 1) - 8LL)) >> 2;
      v158 = (int)v157;
      if ( (int)v157 > 0 )
      {
        v159 = v156;
        v160 = (char *)((const struct FastRegion::Internal::CStripe *)((char *)v14 + *((int *)v14 - 1) - 8)
                      - (const struct FastRegion::Internal::CStripe *)v156);
        do
        {
          *v159 = *(_DWORD *)((char *)v159 + (_QWORD)v160);
          ++v159;
          --v158;
        }
        while ( v158 );
      }
      v98 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
      v161 = (_DWORD)v156 + 4 * v157 - ((_DWORD)v8 + 8);
      v100 = v161;
      *((_DWORD *)v8 + 3) = v161;
      if ( v8 != v4 )
      {
        v162 = (char *)v8 + *((int *)v8 + 1);
        v163 = (int)((*((int *)v8 + 1) - (*((int *)v8 - 1) - 8LL)) >> 2);
        if ( v163 == ((__int64)v98 + v161 - (_QWORD)v162) >> 2 )
        {
          for ( n = 0LL; n < v163; ++n )
          {
            if ( *(_DWORD *)&v162[4 * n] != *(_DWORD *)((char *)v8 + 4 * n + *((int *)v8 - 1) - 8) )
              goto LABEL_91;
          }
          goto LABEL_92;
        }
LABEL_91:
        v8 = v98;
        goto LABEL_92;
      }
LABEL_89:
      v101 = (_DWORD)v98 + v100 - (_DWORD)v8 - *((_DWORD *)v8 + 1) == 0;
LABEL_90:
      if ( v101 )
        goto LABEL_92;
      goto LABEL_91;
    }
LABEL_254:
    FastRegion::Internal::CStripe::Subtract(v8, (const struct FastRegion::Internal::CStripe *)v32, v33, v31);
    if ( v8 == v4 )
    {
      v188 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
      v189 = *((_DWORD *)v8 + 3) - *((_DWORD *)v8 + 1);
LABEL_256:
      if ( (_DWORD)v188 + v189 - (_DWORD)v8 )
        v8 = v188;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v8) )
    {
      v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    }
  }
  v32 = (int *)((char *)v14 - 8);
  if ( v13 != (const struct FastRegion::Internal::CStripe *)v27 )
  {
    v31 = v29;
    goto LABEL_254;
  }
  v91 = *((int *)v8 + 1);
  *(_DWORD *)v8 = v28;
  v92 = (_DWORD *)((char *)v8 + v91);
  v93 = (char *)v32 + v32[1];
  v94 = ((__int64)v14 + *((int *)v14 + 1) - (_QWORD)v93) >> 2;
  v95 = (int)v94;
  if ( (int)v94 > 0 )
  {
    v96 = v92;
    v97 = v93 - (char *)v92;
    do
    {
      *v96 = *(_DWORD *)((char *)v96 + v97);
      ++v96;
      --v95;
    }
    while ( v95 );
  }
  v98 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
  v99 = (_DWORD)v92 + 4 * v94 - ((_DWORD)v8 + 8);
  v100 = v99;
  *((_DWORD *)v8 + 3) = v99;
  if ( v8 == v4 )
    goto LABEL_89;
  v124 = (char *)v8 + *((int *)v8 + 1);
  v125 = (int)((*((int *)v8 + 1) - (*((int *)v8 - 1) - 8LL)) >> 2);
  if ( v125 != ((__int64)v98 + v99 - (_QWORD)v124) >> 2 )
    goto LABEL_91;
  for ( ii = 0LL; ii < v125; ++ii )
  {
    if ( *(_DWORD *)&v124[4 * ii] != *(_DWORD *)((char *)v8 + 4 * ii + *((int *)v8 - 1) - 8) )
      goto LABEL_91;
  }
LABEL_92:
  v102 = (_DWORD *)((char *)v14 + 8);
  if ( v102 != (_DWORD *)v10 )
  {
    while ( 2 )
    {
      v103 = *((int *)v8 + 1);
      *(_DWORD *)v8 = *(v102 - 2);
      v104 = (_DWORD *)((char *)v8 + v103);
      v105 = (int)*(v102 - 1);
      v106 = ((int)v102[1] - (v105 - 8)) >> 2;
      v107 = (int)v106;
      if ( (int)v106 > 0 )
      {
        v108 = v104;
        do
        {
          *v108 = *(_DWORD *)((char *)v108 + (char *)v102 + v105 - 8 - (char *)v104);
          ++v108;
          --v107;
        }
        while ( v107 );
      }
      v109 = (int)v104 + 4 * (int)v106 - ((int)v8 + 8);
      *((_DWORD *)v8 + 3) = v109;
      v110 = *((int *)v8 + 1);
      if ( v8 == v4 )
      {
        if ( (_DWORD)v109 - (_DWORD)v110 == -8 )
          goto LABEL_207;
      }
      else
      {
        v111 = (int)((v110 - (*((int *)v8 - 1) - 8LL)) >> 2);
        if ( v111 == (v109 - v110 + 8) >> 2 )
        {
          for ( jj = 0LL; jj < v111; ++jj )
          {
            if ( *(_DWORD *)((char *)v8 + 4 * jj + v110) != *(_DWORD *)((char *)v8 + 4 * jj + *((int *)v8 - 1) - 8) )
              goto LABEL_206;
          }
LABEL_207:
          v102 += 2;
          if ( v102 == (_DWORD *)v10 )
            goto LABEL_38;
          continue;
        }
      }
      break;
    }
LABEL_206:
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
    goto LABEL_207;
  }
LABEL_38:
  v48 = *(v102 - 2);
LABEL_39:
  *(_DWORD *)v8 = v48;
LABEL_40:
  if ( v8 != v4 && (char *)v8 + *((int *)v8 + 1) != (char *)v8 + *((int *)v8 - 1) - 8 )
LABEL_21:
    v8 = (FastRegion::Internal::CStripe *)((char *)v8 + 8);
LABEL_41:
  v49 = (v8 - this - 12) >> 3;
  *(_DWORD *)this = v49;
  if ( (_DWORD)v49 )
  {
    v50 = (FastRegion::Internal::CStripe *)((char *)v8 - 16);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    if ( (FastRegion::Internal::CStripe *)((char *)v8 - 16) >= v4 )
    {
      v51 = (_DWORD *)((char *)v8 + *((int *)v8 - 1) - 8);
      do
      {
        v52 = v51;
        v51 = (_DWORD *)((char *)v50 + *((int *)v50 + 1));
        if ( v51 != v52 )
        {
          if ( *((_DWORD *)this + 1) > *v51 )
            *((_DWORD *)this + 1) = *v51;
          v53 = *(v52 - 1);
          if ( *((_DWORD *)this + 2) < v53 )
            *((_DWORD *)this + 2) = v53;
        }
        v50 = (FastRegion::Internal::CStripe *)((char *)v50 - 8);
      }
      while ( v50 >= v4 );
    }
  }
}
