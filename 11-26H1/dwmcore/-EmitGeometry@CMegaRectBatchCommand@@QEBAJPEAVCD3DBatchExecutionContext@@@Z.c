/*
 * XREFs of ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x180067310
 * Callers:
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180066020 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x18011B180 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x1800687E0 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18011AC50 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18011AFA0 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMegaRectBatchCommand::EmitGeometry(
        CMegaRectBatchCommand *this,
        struct CD3DBatchExecutionContext *a2)
{
  float v2; // xmm10_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v7; // xmm11_4
  float v8; // xmm12_4
  __m128 v9; // xmm13
  __int64 v10; // rsi
  __m128 v11; // xmm3
  __m128 v12; // xmm3
  __m128 v13; // xmm3
  __int64 v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm7_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  __int64 v20; // rax
  float v21; // xmm0_4
  float v22; // xmm0_4
  int v23; // eax
  float v24; // xmm0_4
  float v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  float v29; // r11d
  float m11; // xmm2_4
  float m12; // xmm3_4
  __int64 v32; // r9
  float v33; // xmm8_4
  float v34; // xmm6_4
  float v35; // xmm9_4
  float v36; // xmm10_4
  float v37; // xmm12_4
  float v38; // xmm13_4
  float v39; // xmm7_4
  float v40; // xmm11_4
  float v41; // xmm14_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm8_4
  float v51; // xmm1_4
  float v52; // xmm10_4
  float v53; // xmm13_4
  char v54; // al
  float *v55; // rax
  int v56; // r8d
  float v57; // xmm0_4
  float v58; // xmm14_4
  float v59; // xmm4_4
  float v60; // xmm0_4
  float v61; // xmm14_4
  float v62; // xmm3_4
  float v63; // xmm2_4
  unsigned __int32 v64; // xmm12_4
  float v65; // xmm1_4
  float v66; // xmm4_4
  float v67; // xmm5_4
  float v68; // xmm14_4
  int v69; // eax
  int *v70; // rdx
  int v71; // eax
  __int64 v72; // r10
  __int32 *v73; // rdx
  char *v74; // r10
  __int64 v75; // r8
  int v76; // r9d
  __int32 *v77; // r11
  __int32 *v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  __m128 si128; // xmm11
  __int64 v83; // rcx
  __m128 v84; // xmm6
  float v85; // xmm9_4
  float v86; // xmm8_4
  float v87; // xmm7_4
  int v88; // eax
  __int64 v89; // r15
  int v90; // eax
  unsigned int v91; // r12d
  unsigned int v92; // r14d
  int v93; // eax
  int v94; // r13d
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rcx
  __int64 v98; // rdx
  char *v99; // rdx
  __int16 v100; // cx
  signed __int64 v101; // r8
  __int64 v102; // r8
  int v103; // r12d
  unsigned int v104; // r15d
  __int64 v105; // r14
  int v106; // esi
  int v107; // r12d
  int v108; // r12d
  int v109; // r13d
  __int64 v110; // rcx
  _DWORD *v111; // r10
  int v112; // xmm0_4
  unsigned int v113; // eax
  float i; // r11d
  int v115; // eax
  __int64 v116; // rcx
  _DWORD *v117; // r10
  int v118; // xmm0_4
  unsigned int j; // eax
  __int32 *v120; // rcx
  __int64 v121; // rax
  float v122; // xmm2_4
  float v123; // xmm3_4
  float v124; // xmm4_4
  float v125; // xmm0_4
  float v126; // xmm0_4
  float v127; // xmm2_4
  float v128; // xmm3_4
  float v129; // xmm4_4
  float v130; // xmm0_4
  float v131; // xmm0_4
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  _DWORD *v136; // rdx
  int *v137; // r9
  __int64 v138; // r10
  __int64 v139; // rcx
  __m128 v140; // xmm3
  float v141; // xmm2_4
  __int64 v142; // r13
  unsigned int v143; // eax
  int v144; // eax
  int v145; // r14d
  unsigned int v146; // eax
  unsigned int v147; // eax
  int v148; // eax
  int v149; // eax
  int v150; // eax
  __int64 v151; // r14
  int v152; // eax
  int v153; // ecx
  unsigned int v154; // eax
  int v155; // r9d
  int v156; // [rsp+28h] [rbp-E0h]
  float m22; // [rsp+48h] [rbp-C0h]
  int m11_low; // [rsp+4Ch] [rbp-BCh] BYREF
  float dx; // [rsp+50h] [rbp-B8h]
  float v160; // [rsp+54h] [rbp-B4h]
  unsigned int v161; // [rsp+58h] [rbp-B0h]
  float v162; // [rsp+5Ch] [rbp-ACh]
  unsigned int v163; // [rsp+60h] [rbp-A8h] BYREF
  float m21; // [rsp+64h] [rbp-A4h]
  unsigned int v165; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v166; // [rsp+6Ch] [rbp-9Ch]
  __int64 v167; // [rsp+70h] [rbp-98h]
  char *v168; // [rsp+78h] [rbp-90h]
  __int32 *v169; // [rsp+80h] [rbp-88h]
  __int32 *v170; // [rsp+88h] [rbp-80h]
  int v171; // [rsp+90h] [rbp-78h] BYREF
  int v172; // [rsp+94h] [rbp-74h]
  int v173; // [rsp+98h] [rbp-70h]
  int v174; // [rsp+9Ch] [rbp-6Ch]
  __m128 v175; // [rsp+A0h] [rbp-68h] BYREF
  int v176; // [rsp+B0h] [rbp-58h]
  _DWORD v177[7]; // [rsp+B4h] [rbp-54h] BYREF
  __m128i v178; // [rsp+D0h] [rbp-38h]
  __int64 v179; // [rsp+E0h] [rbp-28h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v181[56]; // [rsp+108h] [rbp+0h]
  __int128 v182; // [rsp+1E8h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  v2 = *((float *)this + 4);
  v4 = *((float *)this + 5);
  v5 = *((float *)this + 8);
  v7 = *((float *)this + 9);
  v8 = *((float *)this + 16);
  v9 = (__m128)*((unsigned int *)this + 17);
  v10 = *((_QWORD *)this + 1);
  v11 = _mm_shuffle_ps((__m128)LODWORD(v2), (__m128)LODWORD(v2), 225);
  v11.m128_f32[0] = v4;
  v12 = _mm_shuffle_ps(v11, v11, 198);
  v12.m128_f32[0] = v5;
  *(float *)&v169 = v2;
  v13 = _mm_shuffle_ps(v12, v12, 39);
  v13.m128_f32[0] = v7;
  *(float *)&v167 = v4;
  *(__m128 *)&matrix.m11 = _mm_shuffle_ps(v13, v13, 57);
  *(float *)&v168 = v5;
  *(float *)&v166 = v7;
  *(float *)&v165 = v8;
  v163 = v9.m128_i32[0];
  *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps((__m128)LODWORD(v8), v9).m128_u64[0];
  D2D1InvertMatrix(&matrix);
  v14 = *(_QWORD *)(v10 + 16);
  v15 = *((float *)this + 22);
  v182 = *(_OWORD *)(v10 + 48);
  if ( v15 == 1.0 )
  {
    v16 = *((float *)&v182 + 3);
    v17 = *((float *)&v182 + 2);
    v18 = *((float *)&v182 + 1);
    v19 = *(float *)&v182;
  }
  else
  {
    v19 = *(float *)&v182;
    v18 = *((float *)&v182 + 1);
    v17 = *((float *)&v182 + 2);
    if ( !*(_BYTE *)(v14 + 81) )
    {
      v19 = *(float *)&v182 * v15;
      v18 = *((float *)&v182 + 1) * v15;
      v17 = *((float *)&v182 + 2) * v15;
    }
    v16 = *((float *)&v182 + 3) * v15;
  }
  v20 = *(_QWORD *)(v10 + 40);
  if ( v20 )
  {
    v140 = *(__m128 *)(v20 + 72);
    v141 = _mm_shuffle_ps(v140, v140, 255).m128_f32[0];
    v17 = v17 * (float)(_mm_shuffle_ps(v140, v140, 170).m128_f32[0] * v141);
    v19 = v19 * (float)(v141 * v140.m128_f32[0]);
    v18 = v18 * (float)(_mm_shuffle_ps(v140, v140, 85).m128_f32[0] * v141);
    v16 = v16 * v141;
  }
  v21 = (float)(v16 * 255.0) + 6291456.25;
  dx = v21;
  v22 = (float)(v17 * 255.0) + 6291456.25;
  v162 = v22;
  v23 = LODWORD(v22) << 15;
  v24 = (float)(v18 * 255.0) + 6291456.25;
  *(float *)&m11_low = (float)(v19 * 255.0) + 6291456.25;
  v161 = (m11_low << 10 >> 11) | ((int)(LODWORD(v24) << 10) >> 3) & 0xFFFFFF00 | v23 & 0xFFFF0000 | (LODWORD(dx) << 23) & 0xFF000000;
  LODWORD(v25) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 24) + 24LL))(*(_QWORD *)(v10 + 24));
  v27 = v10 + 104;
  v28 = *(_QWORD *)(v10 + 88);
  v29 = v25;
  m11 = matrix.m11;
  m12 = matrix.m12;
  m22 = matrix.m22;
  m21 = matrix.m21;
  v160 = matrix.m12;
  m11_low = SLODWORD(matrix.m11);
  *(FLOAT *)&v170 = matrix.dy;
  dx = matrix.dx;
  v162 = v25;
  if ( v28 == -1LL )
    goto LABEL_131;
  if ( v10 == -104 )
  {
    if ( !v28 )
      goto LABEL_14;
LABEL_131:
    ((void (__fastcall *)(__int64, unsigned __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v26,
      v28,
      v27);
    __debugbreak();
  }
  v26 = 0LL;
  if ( v28 )
  {
    do
    {
      if ( _bittest((const int *)&v29, v26) )
      {
        if ( (unsigned int)v26 >= v28 )
          goto LABEL_131;
        v32 = 14LL * (unsigned int)v26;
        v33 = *(float *)(v32 * 4 + v27);
        v34 = *(float *)(v32 * 4 + v27 + 12);
        v35 = *(float *)(v32 * 4 + v27 + 4);
        v36 = *(float *)(v32 * 4 + v27 + 16);
        v37 = *(float *)(v32 * 4 + v27 + 8);
        v38 = *(float *)(v32 * 4 + v27 + 20);
        v39 = *(float *)(v32 * 4 + v27 + 24);
        v40 = *(float *)(v32 * 4 + v27 + 28);
        v41 = *(float *)(v32 * 4 + v27 + 32);
        *(float *)&v181[v32] = (float)((float)(v33 * m11) + (float)(v34 * m12)) + (float)(v39 * 0.0);
        v42 = (float)(v36 * m12) + (float)(v35 * m11);
        v43 = v37 * m11;
        v44 = v33 * m21;
        *(float *)&v181[v32 + 1] = v42 + (float)(v40 * 0.0);
        v45 = (float)(v38 * v160) + v43;
        v46 = v35 * m21;
        *(float *)&v181[v32 + 2] = v45 + (float)(v41 * 0.0);
        *(float *)&v181[v32 + 3] = (float)(v44 + (float)(v34 * m22)) + (float)(v39 * 0.0);
        v47 = (float)(v36 * m22) + v46;
        v48 = (float)(v38 * m22) + (float)(v37 * m21);
        v49 = dx;
        v50 = v33 * dx;
        *(float *)&v181[v32 + 4] = v47 + (float)(v40 * 0.0);
        v51 = *(float *)&v170;
        v52 = v36 * *(float *)&v170;
        m12 = v160;
        v53 = v38 * *(float *)&v170;
        *(float *)&v181[v32 + 5] = v48 + (float)(v41 * 0.0);
        *(float *)&v181[v32 + 6] = (float)(v50 + (float)(v34 * v51)) + v39;
        *(float *)&v181[v32 + 7] = (float)(v52 + (float)(v35 * v49)) + v40;
        *(float *)&v181[v32 + 8] = (float)(v53 + (float)(v37 * v49)) + v41;
        v54 = *(_BYTE *)(v32 * 4 + v27 + 52);
        m11 = *(float *)&m11_low;
        LOBYTE(v181[v32 + 13]) = v54;
        if ( v54 )
          *(_OWORD *)&v181[14 * (unsigned int)v26 + 9] = *(_OWORD *)(56LL * (unsigned int)v26 + v27 + 36);
      }
      v26 = (unsigned int)(v26 + 1);
    }
    while ( (unsigned int)v26 < v28 );
    v4 = *(float *)&v167;
    v5 = *(float *)&v168;
    v2 = *(float *)&v169;
    v7 = *(float *)&v166;
    v8 = *(float *)&v165;
    v9.m128_i32[0] = v163;
  }
LABEL_14:
  v55 = *(float **)(v10 + 16);
  v56 = *(_DWORD *)(v10 + 96);
  v57 = v55[14];
  v58 = (float)(v55[15] * v5) + (float)(v57 * v2);
  v59 = (float)((float)(v55[15] * v7) + (float)(v57 * v4)) + v9.m128_f32[0];
  v60 = v55[16];
  v61 = v58 + v8;
  v62 = (float)((float)(v55[17] * v7) + (float)(v60 * v4)) + v9.m128_f32[0];
  v63 = (float)((float)(v55[17] * v5) + (float)(v60 * v2)) + v8;
  v64 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v65 = fminf(v59, v62);
  v66 = fmaxf(v59, v62);
  v67 = fminf(v61, v63);
  v68 = fmaxf(v61, v63);
  v160 = v65;
  m21 = v66;
  dx = v67;
  if ( v56 == 50529027 || !v56 )
  {
    v69 = v56;
  }
  else
  {
    v176 = 0x1000000;
    v177[0] = 0x2000000;
    v177[1] = 1;
    v177[2] = 2;
    v177[3] = 256;
    v177[4] = 512;
    v177[5] = 0x10000;
    v177[6] = 0x20000;
    if ( COERCE_FLOAT(LODWORD(v4) & v64) >= 0.000081380211 || COERCE_FLOAT(LODWORD(v5) & v64) >= 0.000081380211 )
    {
      v132 = 3;
      if ( v5 > 0.0 )
        v132 = 1;
      v171 = v132;
      v133 = 1;
      if ( v5 > 0.0 )
        v133 = 3;
      v173 = v133;
      v134 = 2;
      if ( v4 > 0.0 )
        v134 = 0;
      v172 = v134;
      v135 = 0;
      if ( v4 > 0.0 )
        v135 = 2;
    }
    else
    {
      v148 = 2;
      if ( v2 > 0.0 )
        v148 = 0;
      v171 = v148;
      v149 = 0;
      if ( v2 > 0.0 )
        v149 = 2;
      v173 = v149;
      v150 = 3;
      if ( v7 > 0.0 )
        v150 = 1;
      v172 = v150;
      v135 = 1;
      if ( v7 > 0.0 )
        v135 = 3;
    }
    v174 = v135;
    v136 = v177;
    v69 = 0;
    v137 = &v171;
    v138 = 4LL;
    do
    {
      v139 = (unsigned int)*v137;
      if ( (v56 & v177[2 * v139 - 1]) != 0 )
        v69 |= *(v136 - 1);
      if ( (v56 & v177[2 * v139]) != 0 )
        v69 |= *v136;
      ++v137;
      v136 += 2;
      --v138;
    }
    while ( v138 );
  }
  if ( (v69 & 0x1000000) != 0 )
  {
    v67 = v67 - -0.5;
    dx = v67;
  }
  if ( (v69 & 1) == 1 )
  {
    v65 = v65 - -0.5;
LABEL_130:
    v160 = v65;
    goto LABEL_20;
  }
  if ( (v69 & 1) == 2 )
  {
    v65 = v65 - 0.5;
    goto LABEL_130;
  }
LABEL_20:
  if ( (v69 & 0x100) != 0 )
    v68 = v68 - 0.5;
  if ( (v69 & 0x10000) != 0 )
  {
    v66 = v66 - 0.5;
    m21 = v66;
  }
  v70 = (int *)*((_QWORD *)this + 12);
  v71 = *v70;
  if ( *v70 )
  {
    v72 = v70[4];
    v73 = v70 + 3;
    m22 = 0.0;
    v74 = (char *)v73 + v72;
    v75 = v73[3] - (_QWORD)v74;
    v169 = v73;
    v168 = v74;
    *(float *)&v76 = 0.0;
    v77 = &v73[2 * v71 - 2];
    v78 = v73 + 2;
    v170 = v77;
    v79 = ((__int64)v73 + v75 + 8) >> 3;
    v167 = v79;
    if ( (int)v79 <= 0 )
    {
      v76 = 1;
      LODWORD(m22) = 1;
      while ( 1 )
      {
        v73 = v78;
        v74 = (char *)v78 + v78[1];
        v80 = v78[3] - (_QWORD)v74;
        v169 = v78;
        v78 += 2;
        v168 = v74;
        LODWORD(v79) = ((__int64)v78 + v80) >> 3;
        v167 = (unsigned int)v79;
        if ( (_DWORD)v79 )
          break;
        if ( v73 >= v77 )
          goto LABEL_29;
      }
      *(float *)&v76 = 0.0;
      m22 = 0.0;
    }
  }
  else
  {
    LODWORD(v79) = v163;
    v73 = 0LL;
    *(float *)&v76 = m22;
    v77 = 0LL;
    v74 = v168;
    v169 = 0LL;
    v170 = 0LL;
    v167 = v163;
  }
LABEL_29:
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  while ( 1 )
  {
LABEL_30:
    if ( v73 >= v77 )
      return 0LL;
    v178.m128i_i32[1] = *v73;
    v178.m128i_i32[3] = v73[2];
    v83 = 2 * v76;
    v178.m128i_i32[0] = *(_DWORD *)&v74[4 * v83];
    v178.m128i_i32[2] = *(_DWORD *)&v74[4 * v83 + 4];
    v84 = _mm_mul_ps(_mm_cvtepi32_ps(v178), si128);
    v175 = v84;
    if ( v84.m128_f32[0] < v67 )
      v84.m128_f32[0] = v67;
    v85 = v175.m128_f32[1];
    if ( v175.m128_f32[1] < v65 )
      v85 = v65;
    v86 = v175.m128_f32[2];
    if ( v68 < v175.m128_f32[2] )
      v86 = v68;
    v87 = v175.m128_f32[3];
    if ( v66 < v175.m128_f32[3] )
      v87 = v66;
    if ( v86 > v84.m128_f32[0] && v87 > v85 )
      break;
LABEL_73:
    ++v76;
    m22 = *(float *)&v76;
    if ( v76 >= (int)v79 )
    {
      v120 = v73 + 2;
      while ( 1 )
      {
        v73 = v120;
        v74 = (char *)v120 + v120[1];
        v121 = v120[3] - (_QWORD)v74;
        v169 = v120;
        v120 += 2;
        v168 = v74;
        LODWORD(v79) = ((__int64)v120 + v121) >> 3;
        v167 = (unsigned int)v79;
        if ( (_DWORD)v79 )
          break;
        if ( v73 >= v77 )
          goto LABEL_30;
      }
      *(float *)&v76 = 0.0;
      m22 = 0.0;
    }
  }
  v88 = 6;
  v89 = *((_QWORD *)a2 + 3);
  if ( !*((_BYTE *)a2 + 64) )
    v88 = 2;
  *(_QWORD *)&v182 = 0x2000200010000LL;
  v90 = *((_DWORD *)a2 + 17) + v88;
  DWORD2(v182) = 3;
  v91 = 8 * v90;
  v92 = 32 * v90;
  if ( (unsigned int)(32 * v90) <= *(_DWORD *)(v89 + 56) )
  {
LABEL_45:
    if ( *((_BYTE *)a2 + 73) )
    {
      *((_BYTE *)a2 + 73) = 0;
      v93 = 6;
      if ( !*((_BYTE *)a2 + 64) )
        v93 = 2;
      v163 = 0;
      v165 = 8 * (*((_DWORD *)a2 + 17) + v93);
      v179 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 24LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, unsigned int *, unsigned int *))(**((_QWORD **)a2 + 2)
                                                                                                 + 144LL))(
        *((_QWORD *)a2 + 2),
        0LL,
        1LL,
        &v179,
        &v165,
        &v163);
    }
    if ( *(_QWORD *)(v89 + 40) )
    {
      if ( (unsigned int)(*(_DWORD *)(v89 + 56) - *(_DWORD *)(v89 + 52)) / *(_DWORD *)(v89 + 48) < 4 )
      {
        *((_DWORD *)a2 + 8) |= 0x20u;
        v151 = *((_QWORD *)a2 + 3);
        if ( *(_QWORD *)(v151 + 40) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v151 + 16) + 552LL) + 120LL))(
            *(_QWORD *)(*(_QWORD *)(v151 + 16) + 552LL),
            *(_QWORD *)(v151 + 24),
            0LL);
          *(_QWORD *)(v151 + 40) = 0LL;
          *(_DWORD *)(v151 + 48) = 0;
          if ( *((_BYTE *)a2 + 74) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 104LL))(
              *((_QWORD *)a2 + 2),
              *((unsigned int *)a2 + 22),
              *((unsigned int *)a2 + 19));
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v151 + 64) + 552LL) + 120LL))(
              *(_QWORD *)(*(_QWORD *)(v151 + 64) + 552LL),
              *(_QWORD *)(v151 + 72),
              0LL);
            *(_QWORD *)(v151 + 88) = 0LL;
            *(_DWORD *)(v151 + 96) = 0;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 96LL))(
              *((_QWORD *)a2 + 2),
              *((unsigned int *)a2 + 23),
              *((unsigned int *)a2 + 20),
              0LL);
          }
          ++*((_DWORD *)a2 + 32);
          *((_QWORD *)a2 + 11) = 0LL;
          *((_DWORD *)a2 + 24) = 0;
        }
      }
    }
    v94 = CD3DBatchExecutionContext::PrepareIndexBuffer(a2, 6u);
    if ( v94 < 0 )
    {
      v154 = 530;
      goto LABEL_166;
    }
    if ( *(_QWORD *)(v89 + 40) )
      goto LABEL_52;
    v142 = *(_QWORD *)(v89 + 16);
    v166 = (v91 - *(_DWORD *)(v89 + 52) % v91) % v91;
    v175 = 0LL;
    v143 = *(_DWORD *)(v89 + 56) - *(_DWORD *)(v89 + 52);
    v163 = 100 * v91 + v166;
    v165 = v143;
    if ( *(_DWORD *)(v142 + 1124) )
    {
      v145 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0xA2Au, 0LL);
    }
    else
    {
      v144 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __m128 *))(**(_QWORD **)(v142 + 552)
                                                                                         + 112LL))(
               *(_QWORD *)(v142 + 552),
               *(_QWORD *)(v89 + 24),
               0LL,
               5 - (unsigned int)(v143 < 100 * v91 + v166),
               0,
               &v175);
      v145 = v144;
      if ( v144 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v144, 0xA30u, 0LL);
    }
    if ( !*(_DWORD *)(v142 + 1124)
      && (v145 == -2005532292 || v145 == -2147024882 || v145 == -2005270523)
      && *(_DWORD *)(v142 + 440) )
    {
      if ( v145 != -2005270523 )
        goto LABEL_158;
      v152 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v142 + 544) + 312LL))(*(_QWORD *)(v142 + 544));
      v153 = *(_DWORD *)(v142 + 1124);
      if ( v152 != -2005270480 )
      {
        if ( !v153 )
          *(_DWORD *)(v142 + 1124) = -2005270523;
        goto LABEL_163;
      }
      if ( !v153 )
      {
        *(_DWORD *)(v142 + 1124) = -2005270480;
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v142 + 16));
      }
      else
      {
LABEL_158:
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v142 + 16));
      }
    }
    if ( v145 >= 0 )
    {
LABEL_120:
      *(float *)&m11_low = 0.0;
      if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v145, 0LL, &m11_low) )
      {
        v155 = m11_low;
        if ( *(float *)&m11_low == -9.1482967e-34 )
        {
          if ( v145 >= 0 )
            v145 = -2003304307;
          if ( !*(_DWORD *)(v142 + 1124) )
            *(_DWORD *)(v142 + 1124) = v145;
        }
        v145 = v155;
        if ( v155 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v155, 0xB71u, 0LL);
      }
      v94 = v145;
      if ( v145 < 0 )
        goto LABEL_165;
      *(_QWORD *)(v89 + 40) = v175.m128_u64[0];
      v146 = v163;
      *(_DWORD *)(v89 + 48) = v91;
      if ( v165 < v146 )
      {
        *(_DWORD *)(v89 + 52) = 0;
        v147 = 0 / v91;
      }
      else
      {
        *(_DWORD *)(v89 + 52) += v166;
        v147 = *(_DWORD *)(v89 + 52) / v91;
      }
      *((_DWORD *)a2 + 19) = v147;
LABEL_52:
      v95 = *((_QWORD *)a2 + 3);
      v96 = 6LL;
      v97 = *(unsigned int *)(v95 + 100);
      v98 = *(_QWORD *)(v95 + 88);
      *(_DWORD *)(v95 + 100) += 6 * *(_DWORD *)(v95 + 96);
      v99 = (char *)(v97 + v98);
      v100 = *((_WORD *)a2 + 38) + *((_WORD *)a2 + 44);
      v101 = (char *)&v182 - v99;
      do
      {
        *(_WORD *)v99 = *(_WORD *)&v99[v101] + v100;
        v99 += 2;
        --v96;
      }
      while ( v96 );
      *((_DWORD *)a2 + 23) += 6;
      *((_DWORD *)a2 + 22) += 4;
      v102 = *(_QWORD *)(v89 + 40) + *(unsigned int *)(v89 + 52);
      *(_DWORD *)(v89 + 52) += 4 * *(_DWORD *)(v89 + 48);
      v103 = 6;
      v104 = v161;
      v105 = 2LL;
      if ( !*((_BYTE *)a2 + 64) )
        v103 = 2;
      v106 = 0;
      v107 = *((_DWORD *)a2 + 17) + v103;
      *(_DWORD *)v102 = v84.m128_i32[0];
      *(float *)(v102 + 4) = v85;
      *(_DWORD *)(v102 + 8) = 1065353216;
      v108 = 8 * v107;
      v109 = 2 * v108;
      *(float *)(v108 + v102) = v86;
      *(float *)(v108 + v102 + 4) = v85;
      *(_DWORD *)(v108 + v102 + 8) = 1065353216;
      *(float *)(v109 + v102) = v86;
      *(float *)(v109 + v102 + 4) = v87;
      *(_DWORD *)(v109 + v102 + 8) = 1065353216;
      v110 = 3 * v108;
      *(_DWORD *)(v110 + v102) = v84.m128_i32[0];
      *(float *)(v110 + v102 + 4) = v87;
      *(_DWORD *)(v110 + v102 + 8) = 1065353216;
      do
      {
        v111 = (_DWORD *)(v106 + v102 + 16);
        *(_DWORD *)(v106 + v102 + 12) = v104;
        if ( *((_BYTE *)a2 + 64) )
        {
          v112 = *(_DWORD *)(v106 + v102 + 4);
          *v111 = *(_DWORD *)(v106 + v102);
          *(_DWORD *)(v106 + v102 + 20) = v112;
          *(_DWORD *)(v106 + v102 + 24) = 0;
          *(_QWORD *)(v106 + v102 + 32) = 0LL;
          *(_DWORD *)(v106 + v102 + 40) = 0;
          *(_DWORD *)(v106 + v102 + 44) = 1065353216;
          if ( *((_BYTE *)a2 + 64) )
            v111 = (_DWORD *)(v106 + v102 + 48);
        }
        v113 = 0;
        for ( i = v162; v113 < *((_DWORD *)a2 + 17); ++v113 )
        {
          if ( _bittest((const int *)&i, v113) )
          {
            v122 = (float)((float)(*(float *)(v106 + v102 + 4) * *(float *)&v181[14 * v113 + 3])
                         + (float)(*(float *)(v106 + v102) * *(float *)&v181[14 * v113]))
                 + *(float *)&v181[14 * v113 + 6];
            v123 = (float)((float)(*(float *)(v106 + v102) * *(float *)&v181[14 * v113 + 1])
                         + (float)(*(float *)(v106 + v102 + 4) * *(float *)&v181[14 * v113 + 4]))
                 + *(float *)&v181[14 * v113 + 7];
            v124 = (float)((float)(*(float *)(v106 + v102) * *(float *)&v181[14 * v113 + 2])
                         + (float)(*(float *)(v106 + v102 + 4) * *(float *)&v181[14 * v113 + 5]))
                 + *(float *)&v181[14 * v113 + 8];
            if ( COERCE_FLOAT(LODWORD(v124) & v64) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v124 - 1.0) & v64) >= 0.000081380211 )
            {
              v122 = v122 / v124;
              v123 = v123 / v124;
            }
            *(float *)&v111[2 * v113] = v122;
            *(float *)&v111[2 * v113 + 1] = v123;
            if ( LOBYTE(v181[14 * v113 + 13]) )
            {
              v125 = *(float *)&v181[14 * v113 + 11];
              if ( v122 <= v125 )
                v125 = fmaxf(v122, *(float *)&v181[14 * v113 + 9]);
              *(float *)&v111[2 * v113] = v125;
              v126 = *(float *)&v181[14 * v113 + 12];
              if ( v123 <= v126 )
                v126 = fmaxf(v123, *(float *)&v181[14 * v113 + 10]);
              *(float *)&v111[2 * v113 + 1] = v126;
            }
          }
          else
          {
            *(_QWORD *)&v111[2 * v113] = 0LL;
          }
        }
        v115 = v108 + v106;
        v116 = v115;
        v117 = (_DWORD *)(v108 + v106 + v102 + 16);
        *(_DWORD *)(v115 + v102 + 12) = v104;
        if ( *((_BYTE *)a2 + 64) )
        {
          v118 = *(_DWORD *)(v115 + v102 + 4);
          *v117 = *(_DWORD *)(v115 + v102);
          *(_DWORD *)(v115 + v102 + 20) = v118;
          *(_DWORD *)(v115 + v102 + 24) = 0;
          *(_QWORD *)(v115 + v102 + 32) = 0LL;
          *(_DWORD *)(v115 + v102 + 40) = 0;
          *(_DWORD *)(v115 + v102 + 44) = 1065353216;
          if ( *((_BYTE *)a2 + 64) )
            v117 = (_DWORD *)(v115 + v102 + 48);
        }
        for ( j = 0; j < *((_DWORD *)a2 + 17); ++j )
        {
          if ( _bittest((const int *)&i, j) )
          {
            v127 = (float)((float)(*(float *)(v116 + v102 + 4) * *(float *)&v181[14 * j + 3])
                         + (float)(*(float *)(v116 + v102) * *(float *)&v181[14 * j]))
                 + *(float *)&v181[14 * j + 6];
            v128 = (float)((float)(*(float *)(v116 + v102) * *(float *)&v181[14 * j + 1])
                         + (float)(*(float *)(v116 + v102 + 4) * *(float *)&v181[14 * j + 4]))
                 + *(float *)&v181[14 * j + 7];
            v129 = (float)((float)(*(float *)(v116 + v102) * *(float *)&v181[14 * j + 2])
                         + (float)(*(float *)(v116 + v102 + 4) * *(float *)&v181[14 * j + 5]))
                 + *(float *)&v181[14 * j + 8];
            if ( COERCE_FLOAT(LODWORD(v129) & v64) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v129 - 1.0) & v64) >= 0.000081380211 )
            {
              v127 = v127 / v129;
              v128 = v128 / v129;
            }
            *(float *)&v117[2 * j] = v127;
            *(float *)&v117[2 * j + 1] = v128;
            if ( LOBYTE(v181[14 * j + 13]) )
            {
              v130 = *(float *)&v181[14 * j + 11];
              if ( v127 <= v130 )
                v130 = fmaxf(v127, *(float *)&v181[14 * j + 9]);
              *(float *)&v117[2 * j] = v130;
              v131 = *(float *)&v181[14 * j + 12];
              if ( v128 <= v131 )
                v131 = fmaxf(v128, *(float *)&v181[14 * j + 10]);
              *(float *)&v117[2 * j + 1] = v131;
            }
          }
          else
          {
            *(_QWORD *)&v117[2 * j] = 0LL;
          }
        }
        v106 += v109;
        --v105;
      }
      while ( v105 );
      v66 = m21;
      v65 = v160;
      v67 = dx;
      v73 = v169;
      LODWORD(v79) = v167;
      *(float *)&v76 = m22;
      v74 = v168;
      v77 = v170;
      goto LABEL_73;
    }
LABEL_163:
    if ( *(_DWORD *)(v142 + 1124) )
    {
      v145 = -2003304307;
      v94 = -2003304307;
LABEL_165:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v145, 0x6Cu, 0LL);
      v154 = 537;
      goto LABEL_166;
    }
    goto LABEL_120;
  }
  CD3DBatchExecutionContext::Flush(a2, 8LL);
  v94 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)(v89 + 16), v92, 0);
  if ( v94 >= 0 )
  {
    *((_BYTE *)a2 + 73) = 1;
    goto LABEL_45;
  }
  v154 = 507;
LABEL_166:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v94, v154, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\megarect.cpp",
    (const char *)(unsigned int)v94,
    v156);
  return (unsigned int)v94;
}
