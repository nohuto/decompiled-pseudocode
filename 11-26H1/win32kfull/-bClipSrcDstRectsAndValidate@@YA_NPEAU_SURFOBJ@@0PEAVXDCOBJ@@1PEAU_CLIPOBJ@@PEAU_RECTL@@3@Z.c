/*
 * XREFs of ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVXDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x14007A584
 * Callers:
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400790D0 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 * Callees:
 *     <none>
 */

bool __fastcall bClipSrcDstRectsAndValidate(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct XDCOBJ *a3,
        __int64 a4,
        struct _CLIPOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7)
{
  __int64 v8; // rdi
  LONG left; // r13d
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r11
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  LONG v21; // eax
  int v22; // r8d
  int v23; // r15d
  int v24; // r8d
  int v25; // edx
  LONG v26; // eax
  LONG v27; // eax
  struct _RECTL v28; // xmm0
  int v29; // ebx
  int v30; // esi
  int v31; // r11d
  int v32; // edi
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  bool result; // al
  HDEV hdev; // rax
  __int64 v39; // rax
  __m128i v40; // xmm0
  float v41; // xmm3_4
  __m128i v42; // xmm2
  float v43; // xmm4_4
  __m128i v44; // xmm1
  __m128i v45; // xmm5
  int v46; // r8d
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // r8d
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // r13d
  unsigned int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // r13d
  unsigned int v60; // r8d
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __m128i v64; // xmm5
  __m128i v65; // xmm0
  int v66; // r14d
  unsigned int v67; // r8d
  __m128i v68; // xmm1
  __m128i v69; // xmm2
  __m128i v70; // xmm5
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // r14d
  unsigned int v75; // r8d
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // r14d
  unsigned int v79; // r8d
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // r13d
  unsigned int v83; // r8d
  __int64 v84; // rax
  __int64 v85; // rax
  bool v86; // sf
  __m128i v87; // xmm0
  float v88; // xmm4_4
  float v89; // xmm6_4
  __m128i v90; // xmm2
  __m128i v91; // xmm1
  int v92; // r11d
  __m128i v93; // xmm3
  unsigned int v94; // r8d
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // edi
  unsigned int v98; // r8d
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // edi
  unsigned int v102; // r8d
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned int v105; // r8d
  __int64 v106; // rax
  __int64 v107; // rax
  __m128i v108; // xmm0
  unsigned int v109; // r8d
  __m128i v110; // xmm1
  __m128i v111; // xmm2
  __m128i v112; // xmm3
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rcx
  unsigned int v116; // r8d
  __int64 v117; // rax
  __int64 v118; // rax
  float v119; // xmm0_4
  float v120; // xmm1_4
  __m128i v121; // xmm2
  __m128i v122; // xmm3
  __m128i v123; // xmm4
  __m128i v124; // xmm0
  int v125; // r8d
  unsigned int v126; // edx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rcx
  int v130; // r8d
  unsigned int v131; // edx
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rcx
  int v135; // r8d
  unsigned int v136; // edx
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rcx
  int v140; // r8d
  unsigned int v141; // edx
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rcx
  float v145; // xmm0_4
  float v146; // xmm1_4
  __m128i v147; // xmm2
  __m128i v148; // xmm3
  __m128i v149; // xmm4
  __m128i v150; // xmm0
  int v151; // r8d
  unsigned int v152; // edx
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rcx
  int v156; // r8d
  unsigned int v157; // edx
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rcx
  int v161; // r8d
  unsigned int v162; // edx
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rcx
  int v166; // edx
  unsigned int v167; // ecx
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rcx
  int v171; // [rsp+0h] [rbp-68h]
  struct _RECTL v172; // [rsp+10h] [rbp-58h]
  struct _RECTL v173; // [rsp+10h] [rbp-58h]
  LONG v174; // [rsp+10h] [rbp-58h]
  int v175; // [rsp+20h] [rbp-48h]
  int v176; // [rsp+30h] [rbp-38h]
  struct _RECTL v177; // [rsp+30h] [rbp-38h]
  struct _RECTL v178; // [rsp+40h] [rbp-28h]
  struct XDCOBJ *v180; // [rsp+C8h] [rbp+60h]
  LONG v181; // [rsp+D0h] [rbp+68h]
  int v182; // [rsp+D0h] [rbp+68h]

  v180 = (struct XDCOBJ *)a4;
  v8 = a2;
  LODWORD(a4) = 0;
  LODWORD(a2) = 0;
  left = a6->left;
  LODWORD(v10) = a6->top;
  LODWORD(v11) = a6->right;
  LODWORD(v12) = a6->bottom;
  v181 = a7->left;
  if ( SLODWORD(a1[1].hsurf) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( _bittest((const signed __int32 *)hdev + 10, 0x11u) )
      {
        LODWORD(a4) = hdev[644];
        LODWORD(a2) = hdev[645];
      }
    }
  }
  LODWORD(v13) = 0;
  v175 = a4 + a1->sizlBitmap.cx;
  LODWORD(v14) = 0;
  v176 = a2 + a1->sizlBitmap.cy;
  if ( *(int *)(v8 + 88) < 0 )
  {
    v39 = *(_QWORD *)(v8 + 24);
    if ( v39 )
    {
      if ( _bittest((const signed __int32 *)(v39 + 40), 0x11u) )
      {
        LODWORD(v13) = *(_DWORD *)(v39 + 2576);
        LODWORD(v14) = *(_DWORD *)(v39 + 2580);
      }
    }
  }
  LODWORD(v15) = v13 + *(_DWORD *)(v8 + 32);
  LODWORD(v8) = v14 + *(_DWORD *)(v8 + 36);
  if ( a3 )
  {
    v16 = *(_QWORD *)a3;
    v17 = *(_DWORD *)(*(_QWORD *)a3 + 520LL);
    if ( (v17 & 1) != 0 && (v17 & 2) == 0 )
    {
      v40 = 0LL;
      v41 = 1.0 / *(float *)(v16 + 524);
      v45 = 0LL;
      v42 = 0LL;
      v44 = 0LL;
      v43 = 1.0 / *(float *)(v16 + 528);
      *(float *)v44.m128i_i32 = (float)(int)a2 * v43;
      *(float *)v40.m128i_i32 = (float)(int)a4 * v41;
      *(float *)v45.m128i_i32 = (float)(a2 + a1->sizlBitmap.cy) * v43;
      v46 = _mm_cvtsi128_si32(v40);
      v47 = (unsigned __int8)(v46 >> 23);
      if ( v47 > 0x9E )
        goto LABEL_100;
      v48 = v46 & 0x7FFFFF | 0x800000LL;
      if ( v47 < 0x76 )
        v49 = v48 >> (118 - (unsigned __int8)v47);
      else
        v49 = v48 << ((unsigned __int8)v47 - 118);
      a4 = (v49 + 0x80000000LL) >> 32;
      if ( v46 < 0 )
        LODWORD(a4) = -(int)a4;
      v50 = _mm_cvtsi128_si32(v44);
      v51 = (unsigned __int8)(v50 >> 23);
      if ( v51 > 0x9E )
        goto LABEL_100;
      v52 = v50 & 0x7FFFFF | 0x800000LL;
      if ( v51 < 0x76 )
        v53 = v52 >> (118 - (unsigned __int8)v51);
      else
        v53 = v52 << ((unsigned __int8)v51 - 118);
      a2 = (v53 + 0x80000000LL) >> 32;
      if ( v50 < 0 )
        LODWORD(a2) = -(int)a2;
      *(float *)v42.m128i_i32 = (float)v175 * v41;
      v54 = _mm_cvtsi128_si32(v42);
      v55 = (unsigned __int8)(v54 >> 23);
      if ( v55 > 0x9E )
        goto LABEL_100;
      v56 = v54 & 0x7FFFFF | 0x800000LL;
      if ( v55 < 0x76 )
        v57 = v56 >> (118 - (unsigned __int8)v55);
      else
        v57 = v56 << ((unsigned __int8)v55 - 118);
      v58 = (v57 + 0x80000000LL) >> 32;
      if ( v54 < 0 )
        LODWORD(v58) = -(int)v58;
      v175 = v58;
      v59 = _mm_cvtsi128_si32(v45);
      v60 = (unsigned __int8)(v59 >> 23);
      if ( v60 > 0x9E )
      {
LABEL_100:
        LODWORD(a2) = 0;
        v176 = 0;
        LODWORD(a4) = 0;
        v175 = 0;
      }
      else
      {
        v61 = v59 & 0x7FFFFF | 0x800000LL;
        if ( v60 < 0x76 )
          v62 = v61 >> (118 - (unsigned __int8)v60);
        else
          v62 = v61 << ((unsigned __int8)v60 - 118);
        v63 = (v62 + 0x80000000LL) >> 32;
        if ( v59 < 0 )
          LODWORD(v63) = -(int)v63;
        v176 = v63;
      }
      v64 = _mm_cvtsi32_si128(v12);
      v65 = (__m128i)COERCE_UNSIGNED_INT((float)a6->left);
      *(float *)v65.m128i_i32 = *(float *)v65.m128i_i32 * v41;
      v68 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v10);
      v66 = _mm_cvtsi128_si32(v65);
      v69 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v11);
      v67 = (unsigned __int8)(v66 >> 23);
      *(float *)v68.m128i_i32 = *(float *)v68.m128i_i32 * v43;
      *(float *)v69.m128i_i32 = *(float *)v69.m128i_i32 * v41;
      v70 = (__m128i)_mm_cvtepi32_ps(v64);
      *(float *)v70.m128i_i32 = *(float *)v70.m128i_i32 * v43;
      if ( v67 > 0x9E )
        goto LABEL_101;
      v71 = v66 & 0x7FFFFFLL | 0x800000;
      if ( v67 < 0x76 )
        v72 = v71 >> (118 - (unsigned __int8)v67);
      else
        v72 = v71 << ((unsigned __int8)v67 - 118);
      v73 = (v72 + 0x80000000LL) >> 32;
      if ( v66 < 0 )
        LODWORD(v73) = -(int)v73;
      v174 = v73;
      v74 = _mm_cvtsi128_si32(v68);
      v75 = (unsigned __int8)(v74 >> 23);
      if ( v75 > 0x9E )
        goto LABEL_101;
      v76 = v74 & 0x7FFFFFLL | 0x800000;
      if ( v75 < 0x76 )
        v77 = v76 >> (118 - (unsigned __int8)v75);
      else
        v77 = v76 << ((unsigned __int8)v75 - 118);
      v10 = (v77 + 0x80000000LL) >> 32;
      if ( v74 < 0 )
        LODWORD(v10) = -(int)v10;
      v78 = _mm_cvtsi128_si32(v69);
      v79 = (unsigned __int8)(v78 >> 23);
      if ( v79 > 0x9E )
        goto LABEL_101;
      v80 = v78 & 0x7FFFFFLL | 0x800000;
      if ( v79 < 0x76 )
        v81 = v80 >> (118 - (unsigned __int8)v79);
      else
        v81 = v80 << ((unsigned __int8)v79 - 118);
      v11 = (v81 + 0x80000000LL) >> 32;
      if ( v78 < 0 )
        LODWORD(v11) = -(int)v11;
      v82 = _mm_cvtsi128_si32(v70);
      v83 = (unsigned __int8)(v82 >> 23);
      if ( v83 > 0x9E )
      {
LABEL_101:
        LODWORD(v12) = 0;
        LODWORD(v10) = 0;
        LODWORD(v11) = 0;
        left = 0;
      }
      else
      {
        v84 = v82 & 0x7FFFFF | 0x800000LL;
        if ( v83 < 0x76 )
          v85 = v84 >> (118 - (unsigned __int8)v83);
        else
          v85 = v84 << ((unsigned __int8)v83 - 118);
        v12 = (v85 + 0x80000000LL) >> 32;
        v86 = v82 < 0;
        left = v174;
        if ( v86 )
          LODWORD(v12) = -(int)v12;
      }
    }
  }
  if ( !v180 || (v18 = *(_QWORD *)v180, v19 = *(_DWORD *)(*(_QWORD *)v180 + 520LL), (v19 & 1) == 0) || (v19 & 2) != 0 )
  {
    LODWORD(v20) = a7->top;
LABEL_8:
    v21 = v181;
    goto LABEL_9;
  }
  v87 = 0LL;
  v88 = 1.0 / *(float *)(v18 + 524);
  v89 = 1.0 / *(float *)(v18 + 528);
  v91 = 0LL;
  v90 = 0LL;
  v93 = 0LL;
  *(float *)v87.m128i_i32 = (float)(int)v13 * v88;
  *(float *)v91.m128i_i32 = (float)(int)v14 * v89;
  v92 = _mm_cvtsi128_si32(v87);
  *(float *)v93.m128i_i32 = (float)(int)v8 * v89;
  v94 = (unsigned __int8)(v92 >> 23);
  if ( v94 > 0x9E )
    goto LABEL_141;
  v95 = v92 & 0x7FFFFF | 0x800000LL;
  if ( v94 < 0x76 )
    v96 = v95 >> (118 - (unsigned __int8)v94);
  else
    v96 = v95 << ((unsigned __int8)v94 - 118);
  v13 = (v96 + 0x80000000LL) >> 32;
  if ( v92 < 0 )
    LODWORD(v13) = -(int)v13;
  v97 = _mm_cvtsi128_si32(v91);
  v98 = (unsigned __int8)(v97 >> 23);
  if ( v98 > 0x9E )
    goto LABEL_141;
  v99 = v97 & 0x7FFFFF | 0x800000LL;
  if ( v98 < 0x76 )
    v100 = v99 >> (118 - (unsigned __int8)v98);
  else
    v100 = v99 << ((unsigned __int8)v98 - 118);
  v14 = (v100 + 0x80000000LL) >> 32;
  if ( v97 < 0 )
    LODWORD(v14) = -(int)v14;
  *(float *)v90.m128i_i32 = (float)(int)v15 * v88;
  v101 = _mm_cvtsi128_si32(v90);
  v102 = (unsigned __int8)(v101 >> 23);
  if ( v102 > 0x9E )
    goto LABEL_141;
  v103 = v101 & 0x7FFFFF | 0x800000LL;
  if ( v102 < 0x76 )
    v104 = v103 >> (118 - (unsigned __int8)v102);
  else
    v104 = v103 << ((unsigned __int8)v102 - 118);
  v15 = (v104 + 0x80000000LL) >> 32;
  if ( v101 < 0 )
    LODWORD(v15) = -(int)v15;
  v105 = (unsigned __int8)(_mm_cvtsi128_si32(v93) >> 23);
  if ( v105 > 0x9E )
  {
LABEL_141:
    LODWORD(v8) = 0;
    LODWORD(v15) = 0;
    LODWORD(v14) = 0;
    LODWORD(v13) = 0;
  }
  else
  {
    v106 = _mm_cvtsi128_si32(v93) & 0x7FFFFF | 0x800000LL;
    if ( v105 < 0x76 )
      v107 = v106 >> (118 - (unsigned __int8)v105);
    else
      v107 = v106 << ((unsigned __int8)v105 - 118);
    v8 = (v107 + 0x80000000LL) >> 32;
    if ( _mm_cvtsi128_si32(v93) < 0 )
      LODWORD(v8) = -(int)v8;
  }
  v108 = (__m128i)COERCE_UNSIGNED_INT((float)v181);
  v110 = (__m128i)COERCE_UNSIGNED_INT((float)a7->top);
  *(float *)v108.m128i_i32 = *(float *)v108.m128i_i32 * v88;
  v111 = (__m128i)COERCE_UNSIGNED_INT((float)a7->right);
  v112 = (__m128i)COERCE_UNSIGNED_INT((float)a7->bottom);
  v109 = (unsigned __int8)(_mm_cvtsi128_si32(v108) >> 23);
  *(float *)v110.m128i_i32 = *(float *)v110.m128i_i32 * v89;
  *(float *)v111.m128i_i32 = *(float *)v111.m128i_i32 * v88;
  *(float *)v112.m128i_i32 = *(float *)v112.m128i_i32 * v89;
  if ( v109 <= 0x9E )
  {
    v113 = _mm_cvtsi128_si32(v108) & 0x7FFFFF | 0x800000LL;
    if ( v109 < 0x76 )
      v114 = v113 >> (118 - (unsigned __int8)v109);
    else
      v114 = v113 << ((unsigned __int8)v109 - 118);
    v115 = (v114 + 0x80000000LL) >> 32;
    if ( _mm_cvtsi128_si32(v108) < 0 )
      LODWORD(v115) = -(int)v115;
    v181 = v115;
    v116 = (unsigned __int8)(_mm_cvtsi128_si32(v110) >> 23);
    if ( v116 <= 0x9E )
    {
      v117 = _mm_cvtsi128_si32(v110) & 0x7FFFFF | 0x800000LL;
      if ( v116 < 0x76 )
        v118 = v117 >> (118 - (unsigned __int8)v116);
      else
        v118 = v117 << ((unsigned __int8)v116 - 118);
      v20 = (v118 + 0x80000000LL) >> 32;
      if ( _mm_cvtsi128_si32(v110) < 0 )
        LODWORD(v20) = -(int)v20;
      if ( (unsigned __int8)(_mm_cvtsi128_si32(v111) >> 23) <= 0x9Eu
        && (unsigned __int8)(_mm_cvtsi128_si32(v112) >> 23) <= 0x9Eu )
      {
        goto LABEL_8;
      }
    }
  }
  LODWORD(v20) = 0;
  v21 = 0;
LABEL_9:
  v22 = v175;
  v182 = v21 - left;
  v171 = v20 - v10;
  if ( (int)a4 <= left )
    LODWORD(a4) = left;
  if ( (int)a2 <= (int)v10 )
    LODWORD(a2) = v10;
  if ( v175 >= (int)v11 )
    v22 = v11;
  v23 = v176;
  if ( v176 >= (int)v12 )
    v23 = v12;
  if ( v22 < (int)a4 )
  {
    LODWORD(a4) = v22;
  }
  else if ( v23 < (int)a2 )
  {
    LODWORD(a2) = v23;
  }
  v24 = v182 + v22;
  v25 = v171 + a2;
  if ( (int)v13 <= (int)a4 + v182 )
    LODWORD(v13) = a4 + v182;
  if ( (int)v14 <= v25 )
    LODWORD(v14) = v25;
  v26 = v24;
  v172.top = v14;
  if ( (int)v15 >= v24 )
    LODWORD(v15) = v24;
  else
    v26 = v15;
  v172.right = v26;
  v27 = v23 + v171;
  if ( (int)v8 >= v23 + v171 )
    LODWORD(v8) = v23 + v171;
  else
    v27 = v8;
  v172.bottom = v27;
  if ( (int)v15 < (int)v13 )
  {
    LODWORD(v13) = v15;
    goto LABEL_33;
  }
  v172.left = v13;
  if ( (int)v8 < (int)v14 )
  {
    LODWORD(v14) = v8;
    v172.top = v8;
LABEL_33:
    v172.left = v13;
  }
  v28 = v172;
  v29 = v13 - v182;
  v30 = v15 - v182;
  v173.left = v29;
  v31 = v14 - v171;
  v32 = v8 - v171;
  *(_QWORD *)&v173.top = __PAIR64__(v30, v31);
  v173.bottom = v32;
  v177 = v28;
  v178 = v173;
  if ( v29 >= v30 || v31 >= v32 )
    return 0;
  if ( a3 )
  {
    v33 = *(_QWORD *)a3;
    v34 = *(_DWORD *)(*(_QWORD *)a3 + 520LL);
    if ( (v34 & 1) != 0 && (v34 & 2) == 0 )
    {
      v119 = *(float *)(v33 + 528);
      v120 = *(float *)(v33 + 524);
      v122 = (__m128i)COERCE_UNSIGNED_INT((float)v30);
      v121 = (__m128i)COERCE_UNSIGNED_INT((float)v31);
      *(float *)v121.m128i_i32 = *(float *)v121.m128i_i32 * v119;
      v123 = (__m128i)COERCE_UNSIGNED_INT((float)v32);
      *(float *)v122.m128i_i32 = *(float *)v122.m128i_i32 * v120;
      *(float *)v123.m128i_i32 = *(float *)v123.m128i_i32 * v119;
      v124 = (__m128i)COERCE_UNSIGNED_INT((float)v29);
      *(float *)v124.m128i_i32 = *(float *)v124.m128i_i32 * v120;
      v125 = _mm_cvtsi128_si32(v124);
      v126 = (unsigned __int8)(v125 >> 23);
      if ( v126 > 0x9E )
        goto LABEL_167;
      v127 = v125 & 0x7FFFFFLL | 0x800000;
      if ( v126 < 0x76 )
        v128 = v127 >> (118 - (unsigned __int8)v126);
      else
        v128 = v127 << ((unsigned __int8)v126 - 118);
      v129 = (v128 + 0x80000000LL) >> 32;
      if ( v125 < 0 )
        LODWORD(v129) = -(int)v129;
      v130 = _mm_cvtsi128_si32(v121);
      v178.left = v129;
      v131 = (unsigned __int8)(v130 >> 23);
      if ( v131 > 0x9E )
        goto LABEL_167;
      v132 = v130 & 0x7FFFFFLL | 0x800000;
      if ( v131 < 0x76 )
        v133 = v132 >> (118 - (unsigned __int8)v131);
      else
        v133 = v132 << ((unsigned __int8)v131 - 118);
      v134 = (v133 + 0x80000000LL) >> 32;
      if ( v130 < 0 )
        LODWORD(v134) = -(int)v134;
      v135 = _mm_cvtsi128_si32(v122);
      v178.top = v134;
      v136 = (unsigned __int8)(v135 >> 23);
      if ( v136 > 0x9E )
        goto LABEL_167;
      v137 = v135 & 0x7FFFFFLL | 0x800000;
      if ( v136 < 0x76 )
        v138 = v137 >> (118 - (unsigned __int8)v136);
      else
        v138 = v137 << ((unsigned __int8)v136 - 118);
      v139 = (v138 + 0x80000000LL) >> 32;
      if ( v135 < 0 )
        LODWORD(v139) = -(int)v139;
      v140 = _mm_cvtsi128_si32(v123);
      v178.right = v139;
      v141 = (unsigned __int8)(v140 >> 23);
      if ( v141 > 0x9E )
      {
LABEL_167:
        v178 = (struct _RECTL)0LL;
      }
      else
      {
        v142 = v140 & 0x7FFFFFLL | 0x800000;
        if ( v141 < 0x76 )
          v143 = v142 >> (118 - (unsigned __int8)v141);
        else
          v143 = v142 << ((unsigned __int8)v141 - 118);
        v144 = (v143 + 0x80000000LL) >> 32;
        if ( v140 < 0 )
          LODWORD(v144) = -(int)v144;
        v178.bottom = v144;
      }
    }
  }
  if ( v180 )
  {
    v35 = *(_QWORD *)v180;
    v36 = *(_DWORD *)(*(_QWORD *)v180 + 520LL);
    if ( (v36 & 1) != 0 && (v36 & 2) == 0 )
    {
      v145 = *(float *)(v35 + 528);
      v146 = *(float *)(v35 + 524);
      v148 = (__m128i)COERCE_UNSIGNED_INT((float)v177.right);
      v147 = (__m128i)COERCE_UNSIGNED_INT((float)v177.top);
      *(float *)v147.m128i_i32 = *(float *)v147.m128i_i32 * v145;
      v149 = (__m128i)COERCE_UNSIGNED_INT((float)v177.bottom);
      *(float *)v148.m128i_i32 = *(float *)v148.m128i_i32 * v146;
      *(float *)v149.m128i_i32 = *(float *)v149.m128i_i32 * v145;
      v150 = (__m128i)COERCE_UNSIGNED_INT((float)v177.left);
      *(float *)v150.m128i_i32 = *(float *)v150.m128i_i32 * v146;
      v151 = _mm_cvtsi128_si32(v150);
      v152 = (unsigned __int8)(v151 >> 23);
      if ( v152 > 0x9E )
        goto LABEL_193;
      v153 = v151 & 0x7FFFFFLL | 0x800000;
      if ( v152 < 0x76 )
        v154 = v153 >> (118 - (unsigned __int8)v152);
      else
        v154 = v153 << ((unsigned __int8)v152 - 118);
      v155 = (v154 + 0x80000000LL) >> 32;
      if ( v151 < 0 )
        LODWORD(v155) = -(int)v155;
      v156 = _mm_cvtsi128_si32(v147);
      v177.left = v155;
      v157 = (unsigned __int8)(v156 >> 23);
      if ( v157 > 0x9E )
        goto LABEL_193;
      v158 = v156 & 0x7FFFFFLL | 0x800000;
      if ( v157 < 0x76 )
        v159 = v158 >> (118 - (unsigned __int8)v157);
      else
        v159 = v158 << ((unsigned __int8)v157 - 118);
      v160 = (v159 + 0x80000000LL) >> 32;
      if ( v156 < 0 )
        LODWORD(v160) = -(int)v160;
      v161 = _mm_cvtsi128_si32(v148);
      v177.top = v160;
      v162 = (unsigned __int8)(v161 >> 23);
      if ( v162 > 0x9E )
        goto LABEL_193;
      v163 = v161 & 0x7FFFFFLL | 0x800000;
      if ( v162 < 0x76 )
        v164 = v163 >> (118 - (unsigned __int8)v162);
      else
        v164 = v163 << ((unsigned __int8)v162 - 118);
      v165 = (v164 + 0x80000000LL) >> 32;
      if ( v161 < 0 )
        LODWORD(v165) = -(int)v165;
      v166 = _mm_cvtsi128_si32(v149);
      v177.right = v165;
      v167 = (unsigned __int8)(v166 >> 23);
      if ( v167 > 0x9E )
      {
LABEL_193:
        v177 = (struct _RECTL)0LL;
      }
      else
      {
        v168 = v166 & 0x7FFFFFLL | 0x800000;
        if ( v167 < 0x76 )
          v169 = v168 >> (118 - (unsigned __int8)v167);
        else
          v169 = v168 << ((unsigned __int8)v167 - 118);
        v170 = (v169 + 0x80000000LL) >> 32;
        if ( v166 < 0 )
          LODWORD(v170) = -(int)v170;
        v177.bottom = v170;
      }
    }
  }
  result = 1;
  *a7 = v177;
  *a6 = v178;
  return result;
}
