/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800EBC90
 * Callers:
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1800E9F90 (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1800EA550 (-AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800EB500 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x1800ED904 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800EC980 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800ED070 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  int *v4; // r11
  int *v7; // rcx
  const struct FastRegion::Internal::CRgnData *v8; // rbp
  __int64 v9; // r8
  int *v10; // r12
  int *v11; // rdi
  int *v12; // r14
  int *v13; // r13
  int *v14; // rbx
  int v15; // edx
  int v16; // eax
  const struct FastRegion::Internal::CStripe *v17; // rcx
  const struct FastRegion::Internal::CStripe *v18; // r14
  int *v19; // rdi
  int *v20; // rcx
  int v21; // eax
  int *v22; // r13
  int v23; // ecx
  const struct FastRegion::Internal::CStripe *v24; // r9
  int v25; // eax
  int *v26; // rdx
  int v27; // eax
  int v28; // eax
  __int64 v29; // r10
  _DWORD *v30; // r10
  __int64 v31; // r9
  __int64 v32; // rdx
  _DWORD *v33; // rcx
  char *v34; // r8
  int v35; // eax
  int v36; // ecx
  int *v37; // rdx
  int *v38; // r8
  char *v39; // r8
  char *v40; // r10
  __int64 v41; // r9
  __int64 v42; // rdx
  _DWORD *v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  __int64 v46; // r8
  char *v47; // r8
  char *v48; // r10
  __int64 v49; // r9
  __int64 j; // rdx
  _DWORD *v51; // r10
  char *v52; // r8
  __int64 v53; // r9
  char *v54; // r10
  __int64 v55; // rdx
  _DWORD *v56; // rcx
  __int64 v57; // r8
  const struct FastRegion::Internal::CStripe *v58; // r14
  __int64 v59; // r10
  _DWORD *v60; // r10
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // rdx
  _DWORD *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 kk; // rcx
  __int64 v69; // r10
  _DWORD *v70; // r10
  char *v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  _DWORD *v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // r9
  __int64 n; // rcx
  const struct FastRegion::Internal::CStripe *v80; // rdx
  char *v81; // r8
  char *v82; // r13
  __int64 v83; // r9
  __int64 v84; // rdx
  _DWORD *v85; // rcx
  __int64 v86; // r8
  int v87; // eax
  int v88; // ecx
  const struct FastRegion::Internal::CStripe *v89; // r8
  const struct FastRegion::Internal::CStripe *v90; // r9
  __int64 v91; // rdx
  _DWORD *v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r10
  _DWORD *v95; // r8
  char *v96; // r9
  int v97; // eax
  __int64 v98; // rdx
  __int64 jj; // rcx
  _DWORD *v100; // rdi
  __int64 v101; // r10
  _DWORD *v102; // r10
  __int64 v103; // rax
  __int64 v104; // r9
  __int64 v105; // rdx
  _DWORD *v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // r9
  __int64 ii; // rcx
  int *v111; // rcx
  int v112; // edx
  int v113; // r8d
  __int64 v114; // r9
  char *v115; // rdx
  __int64 v116; // r9
  __int64 v117; // r8
  _DWORD *v118; // r8
  char *v119; // r10
  __int64 v120; // rcx
  __int64 v121; // r9
  _DWORD *v122; // rdx
  __int64 v123; // r10
  int v124; // eax
  const struct FastRegion::Internal::CStripe *v125; // rdx
  int *v126; // rdx
  int v127; // ecx
  int v128; // r14d
  __int64 v129; // r8
  char *v130; // r8
  char *v131; // r13
  __int64 v132; // r9
  __int64 v133; // r10
  _DWORD *v134; // r10
  char *v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  _DWORD *v138; // rcx
  __int64 v139; // r8
  int v140; // eax
  char *v141; // r9
  char *v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r10
  _DWORD *v145; // r8
  __int64 v146; // r9
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // r9
  __int64 m; // rcx
  __int64 i; // r8
  const struct FastRegion::Internal::CStripe *v152; // r8
  __int64 v153; // r10
  _DWORD *v154; // r10
  char *v155; // r8
  __int64 v156; // r9
  __int64 v157; // rdx
  _DWORD *v158; // rcx
  __int64 v159; // r8
  int v160; // eax
  int *v161; // r11
  __int64 k; // rcx
  char *v163; // r9
  char *v164; // r8
  __int64 v165; // rdx
  __int64 v166; // rcx
  int v167; // eax
  char *v168; // r9
  __int64 v169; // r8
  __int64 v170; // rdx
  char *v171; // rcx
  __int64 v172; // r9
  int v173; // eax
  int *v174; // r10
  int *v175; // r10
  int *v176; // r11
  const struct FastRegion::Internal::CStripe *v177; // [rsp+70h] [rbp+8h]
  char *v179; // [rsp+80h] [rbp+18h]
  int v180; // [rsp+88h] [rbp+20h]

  v3 = *(int *)a2;
  v4 = (int *)((char *)a2 + 12);
  v7 = (int *)((char *)a3 + 12);
  v8 = a2;
  v9 = *(int *)a3;
  v10 = (int *)((char *)this + 12);
  v11 = v4;
  v179 = (char *)a2 + 8 * v3 + 12;
  v12 = v7;
  v13 = v7;
  v14 = (int *)((char *)this + 12);
  v177 = (const struct FastRegion::Internal::CStripe *)&v7[2 * v9];
  *((_DWORD *)this + 4) = 8 * (v9 + v3);
  v15 = *v7;
  v16 = *v4;
  if ( *v4 < *v7 )
  {
    v29 = *((int *)this + 4);
    v19 = v4 + 2;
    *v10 = v16;
    v30 = (int *)((char *)v10 + v29);
    v31 = (v4[3] - (__int64)v4[1] + 8) >> 2;
    v32 = (int)v31;
    if ( (int)v31 > 0 )
    {
      v33 = v30;
      v34 = (char *)((char *)v4 + v4[1] - (char *)v30);
      do
      {
        *v33 = *(_DWORD *)((char *)v33 + (_QWORD)v34);
        ++v33;
        --v32;
      }
      while ( v32 );
    }
    *((_DWORD *)this + 6) = (_DWORD)v30 + 4 * v31 - ((_DWORD)this + 20);
    if ( (_DWORD)v30 + 4 * (_DWORD)v31 - *((_DWORD *)this + 4) != (_DWORD)v14 )
      v14 = (int *)((char *)this + 20);
    while ( 1 )
    {
      while ( 1 )
      {
        v35 = *v19;
        v36 = *v12;
        v37 = v19;
        v38 = v19;
        if ( *v19 >= *v12 )
        {
          v51 = v12 + 2;
          v18 = (const struct FastRegion::Internal::CStripe *)(v12 + 2);
          if ( v35 > v36 )
          {
            v38 = v19 - 2;
          }
          else
          {
            v19 += 2;
            if ( v19 == (int *)v179 )
            {
              *v14 = v36;
              v52 = (char *)v13 + v13[1];
              v53 = ((__int64)v51 + (int)v51[1] - (_QWORD)v52) >> 2;
              v54 = (char *)v14 + v14[1];
              v55 = (int)v53;
              if ( (int)v53 > 0 )
              {
                v56 = (int *)((char *)v14 + v14[1]);
                v57 = v52 - v54;
                do
                {
                  *v56 = *(_DWORD *)((char *)v56 + v57);
                  ++v56;
                  --v55;
                }
                while ( v55 );
              }
              v14[3] = (_DWORD)v54 + 4 * v53 - ((_DWORD)v14 + 8);
              if ( v14 == v10 )
              {
                if ( (_DWORD)v54 + 4 * (_DWORD)v53 - (_DWORD)v14 != v14[1] )
                  v14 += 2;
              }
              else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
              {
                v14 = v176;
              }
              goto LABEL_41;
            }
          }
          v80 = (const struct FastRegion::Internal::CStripe *)v13;
LABEL_65:
          FastRegion::Internal::CStripe::Union(
            (FastRegion::Internal::CStripe *)v14,
            v80,
            (const struct FastRegion::Internal::CStripe *)v38);
          if ( v14 == v10 )
          {
            v20 = v14 + 2;
            v21 = v14[3] - v14[1];
LABEL_4:
            if ( (_DWORD)v20 + v21 - (_DWORD)v14 )
              goto LABEL_5;
            goto LABEL_6;
          }
LABEL_159:
          if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
            v14 += 2;
          goto LABEL_6;
        }
        v19 += 2;
        *v14 = v35;
        if ( v19 == (int *)v179 )
        {
          v111 = v14 + 2;
          v112 = v14[1] - ((_DWORD)v14 + 8);
          v113 = v14[1] - 8;
          v14[3] = v113;
          v114 = v14[1];
          if ( v14 == v10 )
          {
            if ( v112 + (_DWORD)v111 - (_DWORD)v114 )
LABEL_98:
              v14 += 2;
          }
          else
          {
            v115 = (char *)v14 + v114;
            v116 = (int)((v114 - (*(v14 - 1) - 8LL)) >> 2);
            if ( v116 != ((__int64)v111 + v113 - (_QWORD)v115) >> 2 )
              goto LABEL_98;
            for ( i = 0LL; i < v116; ++i )
            {
              if ( *(_DWORD *)&v115[4 * i] != *(int *)((char *)&v14[i - 2] + *(v14 - 1)) )
                goto LABEL_98;
            }
          }
          v18 = (const struct FastRegion::Internal::CStripe *)(v12 + 2);
          v117 = v14[1];
          *v14 = *((_DWORD *)a3 + 3);
          v118 = (int *)((char *)v14 + v117);
          v119 = (char *)v13 + v13[1];
          v120 = ((__int64)v18 + *((int *)v18 + 1) - (_QWORD)v119) >> 2;
          v121 = (int)v120;
          if ( (int)v120 > 0 )
          {
            v122 = v118;
            v123 = v119 - (char *)v118;
            do
            {
              *v122 = *(_DWORD *)((char *)v122 + v123);
              ++v122;
              --v121;
            }
            while ( v121 );
          }
          v124 = (_DWORD)v118 + 4 * v120 - ((_DWORD)v14 + 8);
          v14[3] = v124;
          if ( v14 == v10 )
          {
            if ( v124 - v14[1] != -8 )
              v14 += 2;
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
          {
            v14 = v175;
          }
          goto LABEL_41;
        }
        v39 = (char *)v37 + v38[1];
        v40 = (char *)v14 + v14[1];
        v41 = ((__int64)v19 + v19[1] - (_QWORD)v39) >> 2;
        v42 = (int)v41;
        if ( (int)v41 > 0 )
        {
          v43 = (int *)((char *)v14 + v14[1]);
          v44 = v39 - v40;
          do
          {
            *v43 = *(_DWORD *)((char *)v43 + v44);
            ++v43;
            --v42;
          }
          while ( v42 );
        }
        v45 = (_DWORD)v40 + 4 * v41 - ((_DWORD)v14 + 8);
        v14[3] = v45;
        v46 = v14[1];
        if ( v14 == v10 )
          break;
        v47 = (char *)v14 + v46;
        v48 = (char *)v14 + *(v14 - 1) - 8;
        v49 = (int)((v47 - v48) >> 2);
        if ( v49 != ((__int64)v14 + v45 - (_QWORD)v47 + 8) >> 2 )
          goto LABEL_62;
        for ( j = 0LL; j < v49; ++j )
        {
          if ( *(_DWORD *)&v47[4 * j] != *(_DWORD *)&v48[4 * j] )
            goto LABEL_62;
        }
      }
      if ( (_DWORD)v40 + 4 * (_DWORD)v41 - (_DWORD)v14 != (_DWORD)v46 )
LABEL_62:
        v14 += 2;
    }
  }
  v17 = (const struct FastRegion::Internal::CStripe *)(v7 + 2);
  v18 = v17;
  if ( v16 <= v15 )
  {
    v19 = v4 + 2;
    FastRegion::Internal::CStripe::Union(
      (FastRegion::Internal::CRgnData *)((char *)this + 12),
      (const struct FastRegion::Internal::CStripe *)v4,
      (const struct FastRegion::Internal::CStripe *)v13);
    v20 = (int *)((char *)this + 20);
    v21 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
    goto LABEL_4;
  }
  *v10 = v15;
  v81 = (char *)v13 + v13[1];
  v82 = (char *)v14 + *((int *)this + 4);
  v83 = ((__int64)v17 + *((int *)v17 + 1) - (_QWORD)v81) >> 2;
  v84 = (int)v83;
  if ( (int)v83 > 0 )
  {
    v85 = (int *)((char *)v14 + *((int *)this + 4));
    v86 = v81 - v82;
    do
    {
      *v85 = *(_DWORD *)((char *)v85 + v86);
      ++v85;
      --v84;
    }
    while ( v84 );
  }
  *((_DWORD *)this + 6) = (_DWORD)v82 + 4 * v83 - ((_DWORD)this + 20);
  if ( (_DWORD)v82 + 4 * (_DWORD)v83 - *((_DWORD *)this + 4) != (_DWORD)v14 )
    v14 = (int *)((char *)this + 20);
  while ( 1 )
  {
    v87 = *(_DWORD *)v18;
    v88 = *v4;
    v89 = v18;
    v90 = v18;
    if ( *v4 < *(_DWORD *)v18 )
    {
      v19 = v11 + 2;
      v38 = (int *)((char *)v18 - 8);
      v80 = (const struct FastRegion::Internal::CStripe *)v4;
      goto LABEL_65;
    }
    v125 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
    v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
    if ( v88 <= v87 )
      break;
    *v14 = v87;
    if ( v125 == v177 )
    {
      v126 = v14 + 2;
      v127 = v14[1] - ((_DWORD)v14 + 8);
      v128 = v14[1] - 8;
      v14[3] = v128;
      v129 = v14[1];
      if ( v14 == v10 )
      {
        if ( v127 + (_DWORD)v126 - (_DWORD)v129 )
LABEL_111:
          v14 += 2;
      }
      else
      {
        v130 = (char *)v14 + v129;
        v131 = (char *)v14 + *(v14 - 1) - 8;
        v132 = (int)((v130 - v131) >> 2);
        if ( v132 != ((__int64)v126 + v128 - (_QWORD)v130) >> 2 )
          goto LABEL_111;
        for ( k = 0LL; k < v132; ++k )
        {
          if ( *(_DWORD *)&v130[4 * k] != *(_DWORD *)&v131[4 * k] )
            goto LABEL_111;
        }
      }
      v19 = v11 + 2;
      v133 = v14[1];
      *v14 = *v4;
      v134 = (int *)((char *)v14 + v133);
      v135 = (char *)v4 + v4[1];
      v136 = ((__int64)v19 + v19[1] - (_QWORD)v135) >> 2;
      v137 = (int)v136;
      if ( (int)v136 > 0 )
      {
        v138 = v134;
        v139 = v135 - (char *)v134;
        do
        {
          *v138 = *(_DWORD *)((char *)v138 + v139);
          ++v138;
          --v137;
        }
        while ( v137 );
      }
      v140 = (_DWORD)v134 + 4 * v136 - ((_DWORD)v14 + 8);
      v14[3] = v140;
      if ( v14 == v10 )
      {
        if ( v140 - v14[1] != -8 )
          v14 += 2;
        goto LABEL_86;
      }
LABEL_149:
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
        v14 = v161;
      goto LABEL_86;
    }
    v168 = (char *)v89 + *((int *)v90 + 1);
    v180 = (_DWORD)v14 + v14[1];
    v169 = ((__int64)v125 + *((int *)v125 + 1) - (_QWORD)v168) >> 2;
    v170 = (int)v169;
    if ( (int)v169 > 0 )
    {
      v171 = (char *)v14 + v14[1];
      v172 = v168 - v171;
      do
      {
        *(_DWORD *)v171 = *(_DWORD *)&v171[v172];
        v171 += 4;
        --v170;
      }
      while ( v170 );
    }
    v173 = v180 + 4 * v169 - ((_DWORD)v14 + 8);
    v14[3] = v173;
    if ( v14 == v10 )
    {
      if ( v173 - v14[1] != -8 )
LABEL_176:
        v14 += 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
    {
      goto LABEL_176;
    }
  }
  v19 = v11 + 2;
  if ( v125 == v177 )
  {
    v153 = v14[1];
    *v14 = v88;
    v154 = (int *)((char *)v14 + v153);
    v155 = (char *)v4 + v4[1];
    v156 = ((__int64)v19 + v19[1] - (_QWORD)v155) >> 2;
    v157 = (int)v156;
    if ( (int)v156 > 0 )
    {
      v158 = v154;
      v159 = v155 - (char *)v154;
      do
      {
        *v158 = *(_DWORD *)((char *)v158 + v159);
        ++v158;
        --v157;
      }
      while ( v157 );
    }
    v160 = (_DWORD)v154 + 4 * v156 - ((_DWORD)v14 + 8);
    v14[3] = v160;
    if ( v14 == v10 )
    {
      if ( v160 - v14[1] != -8 )
        v14 += 2;
      goto LABEL_86;
    }
    goto LABEL_149;
  }
  FastRegion::Internal::CStripe::Union(
    (FastRegion::Internal::CStripe *)v14,
    (const struct FastRegion::Internal::CStripe *)v4,
    v89);
  if ( v14 != v10 )
    goto LABEL_159;
  v20 = v14 + 2;
  if ( v14[3] - v14[1] != -8 )
LABEL_5:
    v14 = v20;
LABEL_6:
  v22 = v19 - 2;
  while ( 2 )
  {
    v23 = *(_DWORD *)v18;
    v24 = v18;
    v25 = *v19;
    v26 = v19;
    if ( *v19 >= *(_DWORD *)v18 )
    {
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
      if ( v25 <= v23 )
      {
        v19 += 2;
        v22 += 2;
        if ( v19 == (int *)v179 )
        {
          *v14 = v25;
          if ( v18 != v177 )
          {
            v163 = (char *)v18 + *((int *)v18 - 1) - 8;
            v164 = (char *)v14 + v14[1];
            v165 = (*((int *)v18 + 1) - (*((int *)v18 - 1) - 8LL)) >> 2;
            if ( (int)v165 > 0 )
            {
              v166 = 0LL;
              do
              {
                *(_DWORD *)&v164[4 * v166] = *(_DWORD *)&v163[4 * v166];
                ++v166;
              }
              while ( v166 < (int)v165 );
            }
            v167 = (_DWORD)v164 + 4 * v165 - ((_DWORD)v14 + 8);
            v14[3] = v167;
            if ( v14 == v10 )
            {
              if ( v167 - v14[1] != -8 )
                v14 += 2;
            }
            else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
            {
              v14 = v174;
            }
            goto LABEL_41;
          }
LABEL_11:
          if ( v14 != v10 && (char *)v14 + v14[1] != (char *)v14 + *(v14 - 1) - 8 )
            goto LABEL_120;
          goto LABEL_12;
        }
        if ( v18 == v177 )
        {
          *v14 = v23;
          v141 = (char *)v26 + v26[1];
          v142 = (char *)v14 + v14[1];
          v143 = ((__int64)v19 + v19[1] - (_QWORD)v141) >> 2;
          v144 = (int)v143;
          if ( (int)v143 > 0 )
          {
            v145 = (int *)((char *)v14 + v14[1]);
            v146 = v141 - v142;
            do
            {
              *v145 = *(_DWORD *)((char *)v145 + v146);
              ++v145;
              --v144;
            }
            while ( v144 );
          }
          v147 = (int)v142 + 4 * (int)v143 - ((int)v14 + 8);
          v14[3] = v147;
          v148 = v14[1];
          if ( v14 == v10 )
          {
            if ( (_DWORD)v147 - (_DWORD)v148 == -8 )
              goto LABEL_86;
          }
          else
          {
            v149 = (int)((v148 - (*(v14 - 1) - 8LL)) >> 2);
            if ( v149 == (v147 - v148 + 8) >> 2 )
            {
              for ( m = 0LL; m < v149; ++m )
              {
                if ( *(int *)((char *)&v14[m] + v148) != *(int *)((char *)&v14[m - 2] + *(v14 - 1)) )
                  goto LABEL_162;
              }
              goto LABEL_86;
            }
          }
LABEL_162:
          v14 += 2;
          goto LABEL_86;
        }
        v152 = v24;
LABEL_136:
        FastRegion::Internal::CStripe::Union(
          (FastRegion::Internal::CStripe *)v14,
          (const struct FastRegion::Internal::CStripe *)v26,
          v152);
        if ( v14 == v10 )
        {
          if ( v14[3] - v14[1] != -8 )
            v14 += 2;
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v14) )
        {
          v14 += 2;
        }
        continue;
      }
      if ( v18 != v177 )
      {
        v152 = (const struct FastRegion::Internal::CStripe *)v22;
        v26 = (int *)v24;
        goto LABEL_136;
      }
      v69 = v14[1];
      *v14 = v23;
      v70 = (int *)((char *)v14 + v69);
      v71 = (char *)v22 + v22[1];
      v72 = ((__int64)v19 + v19[1] - (_QWORD)v71) >> 2;
      v73 = (int)v72;
      if ( (int)v72 > 0 )
      {
        v74 = v70;
        v75 = v71 - (char *)v70;
        do
        {
          *v74 = *(_DWORD *)((char *)v74 + v75);
          ++v74;
          --v73;
        }
        while ( v73 );
      }
      v76 = (int)v70 + 4 * (int)v72 - ((int)v14 + 8);
      v14[3] = v76;
      v77 = v14[1];
      if ( v14 == v10 )
      {
        if ( (_DWORD)v76 - (_DWORD)v77 == -8 )
          goto LABEL_86;
      }
      else
      {
        v78 = (int)((v77 - (*(v14 - 1) - 8LL)) >> 2);
        if ( v78 == (v76 - v77 + 8) >> 2 )
        {
          for ( n = 0LL; n < v78; ++n )
          {
            if ( *(int *)((char *)&v14[n] + v77) != *(int *)((char *)&v14[n - 2] + *(v14 - 1)) )
              goto LABEL_85;
          }
LABEL_86:
          v100 = v19 + 2;
          if ( v100 == (_DWORD *)v179 )
          {
LABEL_143:
            *v14 = *(v100 - 2);
            goto LABEL_11;
          }
          while ( 2 )
          {
            v101 = v14[1];
            *v14 = *(v100 - 2);
            v102 = (int *)((char *)v14 + v101);
            v103 = (int)*(v100 - 1);
            v104 = ((int)v100[1] - (v103 - 8)) >> 2;
            v105 = (int)v104;
            if ( (int)v104 > 0 )
            {
              v106 = v102;
              do
              {
                *v106 = *(_DWORD *)((char *)v106 + (char *)v100 + v103 - 8 - (char *)v102);
                ++v106;
                --v105;
              }
              while ( v105 );
            }
            v107 = (int)v102 + 4 * (int)v104 - ((int)v14 + 8);
            v14[3] = v107;
            v108 = v14[1];
            if ( v14 == v10 )
            {
              if ( (_DWORD)v107 - (_DWORD)v108 == -8 )
                goto LABEL_142;
            }
            else
            {
              v109 = (int)((v108 - (*(v14 - 1) - 8LL)) >> 2);
              if ( v109 == (v107 - v108 + 8) >> 2 )
              {
                for ( ii = 0LL; ii < v109; ++ii )
                {
                  if ( *(int *)((char *)&v14[ii] + v108) != *(int *)((char *)&v14[ii - 2] + *(v14 - 1)) )
                    goto LABEL_141;
                }
LABEL_142:
                v100 += 2;
                if ( v100 == (_DWORD *)v179 )
                  goto LABEL_143;
                continue;
              }
            }
            break;
          }
LABEL_141:
          v14 += 2;
          goto LABEL_142;
        }
      }
LABEL_85:
      v14 += 2;
      goto LABEL_86;
    }
    break;
  }
  v19 += 2;
  v22 += 2;
  if ( v19 != (int *)v179 )
  {
    v152 = (const struct FastRegion::Internal::CStripe *)((char *)v18 - 8);
    v26 = v22;
    goto LABEL_136;
  }
  v91 = v14[1];
  *v14 = v25;
  v92 = (int *)((char *)v14 + v91);
  v93 = (*((int *)v18 + 1) - (*((int *)v18 - 1) - 8LL)) >> 2;
  v94 = (int)v93;
  if ( (int)v93 > 0 )
  {
    v95 = v92;
    v96 = (char *)((const struct FastRegion::Internal::CStripe *)((char *)v18 + *((int *)v18 - 1) - 8)
                 - (const struct FastRegion::Internal::CStripe *)v92);
    do
    {
      *v95 = *(_DWORD *)((char *)v95 + (_QWORD)v96);
      ++v95;
      --v94;
    }
    while ( v94 );
  }
  v97 = (_DWORD)v92 + 4 * v93 - ((_DWORD)v14 + 8);
  v14[3] = v97;
  if ( v14 == v10 )
  {
    if ( (_DWORD)v92 + 4 * (_DWORD)v93 - (_DWORD)v14 == v14[1] )
      goto LABEL_41;
    goto LABEL_106;
  }
  v98 = (int)((v14[1] - (*(v14 - 1) - 8LL)) >> 2);
  if ( v98 != (v97 - (__int64)v14[1] + 8) >> 2 )
  {
LABEL_106:
    v14 += 2;
    goto LABEL_41;
  }
  for ( jj = 0LL; jj < v98; ++jj )
  {
    if ( *(int *)((char *)&v14[jj] + v14[1]) != *(int *)((char *)&v14[jj - 2] + *(v14 - 1)) )
      goto LABEL_106;
  }
LABEL_41:
  v58 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
  if ( v58 != v177 )
  {
    while ( 2 )
    {
      v59 = v14[1];
      *v14 = *((_DWORD *)v58 - 2);
      v60 = (int *)((char *)v14 + v59);
      v61 = *((int *)v58 - 1);
      v62 = (*((int *)v58 + 1) - (v61 - 8)) >> 2;
      v63 = (int)v62;
      if ( (int)v62 > 0 )
      {
        v64 = v60;
        do
        {
          *v64 = *(_DWORD *)((char *)v64
                           + (const struct FastRegion::Internal::CStripe *)((char *)v58 + v61 - 8)
                           - (const struct FastRegion::Internal::CStripe *)v60);
          ++v64;
          --v63;
        }
        while ( v63 );
      }
      v65 = (int)v60 + 4 * (int)v62 - ((int)v14 + 8);
      v14[3] = v65;
      v66 = v14[1];
      if ( v14 == v10 )
      {
        if ( (_DWORD)v65 - (_DWORD)v66 == -8 )
          goto LABEL_157;
      }
      else
      {
        v67 = (int)((v66 - (*(v14 - 1) - 8LL)) >> 2);
        if ( v67 == (v65 - v66 + 8) >> 2 )
        {
          for ( kk = 0LL; kk < v67; ++kk )
          {
            if ( *(int *)((char *)&v14[kk] + v66) != *(int *)((char *)&v14[kk - 2] + *(v14 - 1)) )
              goto LABEL_156;
          }
LABEL_157:
          v58 = (const struct FastRegion::Internal::CStripe *)((char *)v58 + 8);
          if ( v58 == v177 )
          {
            v8 = a2;
            goto LABEL_118;
          }
          continue;
        }
      }
      break;
    }
LABEL_156:
    v14 += 2;
    goto LABEL_157;
  }
LABEL_118:
  *v14 = *((_DWORD *)v58 - 2);
  if ( v14 != v10 && (char *)v14 + v14[1] != (char *)v14 + *(v14 - 1) - 8 )
LABEL_120:
    v14 += 2;
LABEL_12:
  *(_DWORD *)this = ((char *)v14 - (char *)this - 12) >> 3;
  v27 = *((_DWORD *)v8 + 1);
  if ( v27 >= *((_DWORD *)a3 + 1) )
    v27 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v27;
  v28 = *((_DWORD *)v8 + 2);
  if ( v28 <= *((_DWORD *)a3 + 2) )
    v28 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v28;
}
