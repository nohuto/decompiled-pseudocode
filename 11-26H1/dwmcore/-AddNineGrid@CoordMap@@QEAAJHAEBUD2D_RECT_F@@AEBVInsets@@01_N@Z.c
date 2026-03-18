/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1801422E8
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180141F30 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x180142E04 (-reserve_region@-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@CoordMap@@$09$00V.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801430B4 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        bool a7)
{
  float v9; // xmm4_4
  float v10; // xmm15_4
  float v11; // xmm3_4
  float v12; // xmm14_4
  float v13; // xmm11_4
  float v14; // xmm5_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm12_4
  float v19; // xmm13_4
  float v20; // xmm0_4
  bool v21; // r13
  unsigned __int32 v22; // xmm7_4
  float v23; // xmm1_4
  bool v24; // al
  bool v25; // di
  bool v26; // si
  bool v27; // r14
  bool v28; // bp
  float v29; // xmm15_4
  bool v30; // r15
  float v31; // xmm0_4
  float v32; // xmm11_4
  bool v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  bool v39; // r9
  float v40; // xmm8_4
  unsigned __int64 v41; // rax
  unsigned int k; // ecx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  const struct D2D_RECT_F *v46; // rdi
  __int64 v47; // r8
  FLOAT right; // xmm9_4
  float v49; // xmm8_4
  unsigned __int64 v50; // rax
  unsigned int m; // ecx
  __int64 v52; // rax
  float v53; // xmm10_4
  FLOAT v54; // xmm9_4
  __int64 v55; // r8
  float v56; // xmm8_4
  unsigned __int64 v57; // rax
  unsigned int n; // ecx
  __int64 v59; // rax
  float v60; // xmm12_4
  __int64 v61; // r9
  bool v62; // r10
  unsigned __int64 v63; // rax
  unsigned int ii; // ecx
  __int64 v65; // rax
  __int64 v66; // r9
  bool v67; // r10
  float v68; // xmm8_4
  unsigned __int64 v69; // rax
  unsigned int jj; // ecx
  __int64 v71; // rax
  FLOAT v72; // xmm9_4
  __int64 v73; // r8
  float v74; // xmm8_4
  unsigned __int64 v75; // rax
  unsigned int kk; // ecx
  __int64 v77; // rax
  unsigned int v78; // esi
  __int64 v80; // r8
  unsigned __int64 v81; // rax
  unsigned int i; // ecx
  __int64 v83; // rax
  __int64 v84; // r8
  float v85; // xmm10_4
  unsigned int j; // ecx
  unsigned int v87; // [rsp+20h] [rbp-108h]
  float left; // [rsp+30h] [rbp-F8h]
  float bottom; // [rsp+34h] [rbp-F4h]
  FLOAT v90; // [rsp+38h] [rbp-F0h]
  __int128 v91; // [rsp+40h] [rbp-E8h]
  float v92; // [rsp+138h] [rbp+10h]
  float top; // [rsp+148h] [rbp+20h]
  float v95; // [rsp+148h] [rbp+20h]
  float v96; // [rsp+150h] [rbp+28h]

  v9 = a5->bottom - a5->top;
  left = a3->left;
  v10 = a3->right - a3->left;
  v90 = a5->left;
  v11 = a5->right - a5->left;
  bottom = a3->bottom;
  v12 = bottom - a3->top;
  top = a3->top;
  v13 = fmaxf(0.0, fminf(*(float *)a4, v10));
  v14 = fmaxf(0.0, fminf(*((float *)a4 + 1), v12));
  v15 = fmaxf(0.0, fminf(*((float *)a4 + 2), v10 - v13));
  v16 = fmaxf(0.0, fminf(*((float *)a4 + 3), v12 - v14));
  if ( v13 < 0.0000011920929 )
    v13 = 0.0;
  if ( v15 < 0.0000011920929 )
    v15 = 0.0;
  if ( v14 < 0.0000011920929 )
    v14 = 0.0;
  if ( v16 < 0.0000011920929 )
    v16 = 0.0;
  v17 = fmaxf(0.0, fminf(*(float *)a6, v11));
  v18 = fmaxf(0.0, fminf(*((float *)a6 + 1), v9));
  v19 = fmaxf(0.0, fminf(*((float *)a6 + 2), v11 - v17));
  v20 = fmaxf(0.0, fminf(*((float *)a6 + 3), v9 - v18));
  v96 = v20;
  if ( v17 < 0.0000011920929 )
    v17 = 0.0;
  if ( v19 < 0.0000011920929 )
    v19 = 0.0;
  if ( v18 < 0.0000011920929 )
    v18 = 0.0;
  if ( v20 < 0.0000011920929 )
    v96 = 0.0;
  v21 = a7;
  v22 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( a7 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - (float)(v15 + v13)) & v22) > 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - (float)(v16 + v14)) & v22) > 0.0000011920929 )
    {
      goto LABEL_22;
    }
    v21 = 0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v11 - v17) - v19) - (float)((float)(v10 - v13) - v15)) & v22) <= 0.0000011920929 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - v13) & v22) <= 0.0000011920929 )
    {
      v13 = 0.0;
      v17 = 0.0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - v15) & v22) <= 0.0000011920929 )
    {
      v15 = 0.0;
      v19 = 0.0;
    }
  }
  v23 = v96;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 - v18) - v96) - (float)((float)(v12 - v14) - v16)) & v22) <= 0.0000011920929 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - v14) & v22) <= 0.0000011920929 )
    {
      v14 = 0.0;
      v18 = 0.0;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v96 - v16) & v22) <= 0.0000011920929 )
    {
      v23 = 0.0;
      v16 = 0.0;
      v96 = 0.0;
    }
  }
  if ( !v21
    && COERCE_FLOAT(LODWORD(v13) & v22) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v14) & v22) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v15) & v22) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v16) & v22) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v17) & v22) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v18) & v22) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v19) & v22) < 0.0000011920929
    && COERCE_FLOAT(LODWORD(v23) & v22) < 0.0000011920929 )
  {
    return 0;
  }
LABEL_22:
  v24 = v13 > 0.0;
  v25 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - (float)(v15 + v13)) & v22) <= 0.0000011920929;
  v26 = v15 > 0.0;
  v27 = v14 > 0.0;
  v28 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - (float)(v16 + v14)) & v22) <= 0.0000011920929;
  v29 = left + v13;
  v30 = v16 > 0.0;
  if ( v25 )
    v92 = left + v13;
  else
    v92 = a3->right - v15;
  v31 = top + v14;
  v95 = top + v14;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - (float)(v16 + v14)) & v22) <= 0.0000011920929 )
    v32 = v31;
  else
    v32 = bottom - v16;
  if ( v24 )
  {
    v80 = *(_QWORD *)this;
    v81 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4;
    for ( i = 0; ; ++i )
    {
      if ( i >= v81 )
        goto LABEL_102;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v80 + 16LL * i) - left) & v22) <= 0.0000011920929 )
        break;
      if ( *(float *)(v80 + 16LL * i) > left )
        goto LABEL_101;
    }
    if ( *(_DWORD *)(v80 + 16LL * i + 12) )
    {
LABEL_101:
      LODWORD(v81) = i;
LABEL_102:
      v83 = detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
              this,
              (unsigned int)v81);
      *(float *)v83 = left;
      *(FLOAT *)(v83 + 4) = v90;
      *(_QWORD *)(v83 + 8) = LODWORD(v90);
      goto LABEL_103;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5Bu, 0LL);
    v87 = 348;
    goto LABEL_135;
  }
  if ( !v25 )
  {
LABEL_103:
    v84 = *(_QWORD *)this;
    v33 = 0;
    v85 = v17 + a5->left;
    v34 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4;
    for ( j = 0; j < v34; ++j )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v84 + 16LL * j) - v29) & v22) <= 0.0000011920929 )
      {
        v33 = *(_DWORD *)(v84 + 16LL * j + 12) == 0;
LABEL_30:
        LODWORD(v34) = j;
        break;
      }
      if ( *(float *)(v84 + 16LL * j) > v29 )
        goto LABEL_30;
    }
    v35 = (unsigned int)v34;
    v36 = 2LL * (unsigned int)v34;
    if ( v33 )
    {
      *(float *)(v84 + 8 * v36 + 8) = v85;
    }
    else
    {
      v37 = detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
              this,
              v35);
      *(float *)v37 = v29;
      *(float *)(v37 + 4) = v85;
      *(float *)(v37 + 8) = v85;
      *(_DWORD *)(v37 + 12) = 0;
    }
  }
  if ( v15 <= 0.0 && v25 )
  {
    v46 = a3;
  }
  else
  {
    v38 = *(_QWORD *)this;
    v39 = 0;
    v40 = a5->right - v19;
    v41 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4;
    for ( k = 0; k < v41; ++k )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v38 + 16LL * k) - v92) & v22) <= 0.0000011920929 )
      {
        v39 = *(_DWORD *)(v38 + 16LL * k + 12) == 0;
LABEL_40:
        LODWORD(v41) = k;
        break;
      }
      if ( *(float *)(v38 + 16LL * k) > v92 )
        goto LABEL_40;
    }
    v43 = (unsigned int)v41;
    v44 = 2LL * (unsigned int)v41;
    if ( v39 )
    {
      *(float *)(v38 + 8 * v44 + 8) = v40;
    }
    else
    {
      v45 = detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
              this,
              v43);
      *(float *)v45 = v92;
      *(float *)(v45 + 4) = v40;
      *(float *)(v45 + 8) = v40;
      *(_DWORD *)(v45 + 12) = 0;
    }
    v46 = a3;
    if ( v26 )
    {
      v47 = *(_QWORD *)this;
      right = a5->right;
      v49 = a3->right;
      v50 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4;
      for ( m = 0; ; ++m )
      {
        if ( m >= v50 )
          goto LABEL_51;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v47 + 16LL * m) - v49) & v22) <= 0.0000011920929 )
          break;
        if ( *(float *)(v47 + 16LL * m) > v49 )
          goto LABEL_50;
      }
      if ( *(_DWORD *)(v47 + 16LL * m + 12) )
      {
LABEL_50:
        LODWORD(v50) = m;
LABEL_51:
        v52 = detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
                this,
                (unsigned int)v50);
        *(float *)v52 = v49;
        *(FLOAT *)(v52 + 4) = right;
        *(FLOAT *)(v52 + 8) = right;
        *(_DWORD *)(v52 + 12) = 0;
        goto LABEL_52;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5Bu, 0LL);
      v87 = 367;
      goto LABEL_135;
    }
  }
LABEL_52:
  if ( v27 )
  {
    v54 = a5->top;
    v55 = *((_QWORD *)this + 23);
    v56 = v46->top;
    v57 = (*((_QWORD *)this + 24) - v55) >> 4;
    for ( n = 0; ; ++n )
    {
      if ( n >= v57 )
        goto LABEL_62;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v55 + 16LL * n) - v56) & v22) <= 0.0000011920929 )
        break;
      if ( *(float *)(v55 + 16LL * n) > v56 )
        goto LABEL_61;
    }
    if ( *(_DWORD *)(v55 + 16LL * n + 12) )
    {
LABEL_61:
      LODWORD(v57) = n;
LABEL_62:
      v59 = detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
              (char *)this + 184,
              (unsigned int)v57);
      *(float *)v59 = v56;
      *(FLOAT *)(v59 + 4) = v54;
      *(FLOAT *)(v59 + 8) = v54;
      *(_DWORD *)(v59 + 12) = 0;
      goto LABEL_63;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5Bu, 0LL);
    v87 = 372;
    goto LABEL_135;
  }
  if ( v28 )
  {
    v53 = v95;
  }
  else
  {
LABEL_63:
    v60 = v18 + a5->top;
    v53 = v95;
    v61 = *((_QWORD *)this + 23);
    v62 = 0;
    v63 = (*((_QWORD *)this + 24) - v61) >> 4;
    for ( ii = 0; ii < v63; ++ii )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v61 + 16LL * ii) - v95) & v22) <= 0.0000011920929 )
      {
        v62 = *(_DWORD *)(v61 + 16LL * ii + 12) == 0;
LABEL_69:
        LODWORD(v63) = ii;
        break;
      }
      if ( *(float *)(v61 + 16LL * ii) > v95 )
        goto LABEL_69;
    }
    if ( v62 )
    {
      *(float *)(v61 + 16LL * (unsigned int)v63 + 8) = v60;
    }
    else
    {
      v65 = detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
              (char *)this + 184,
              (unsigned int)v63);
      *(float *)v65 = v95;
      *(float *)(v65 + 4) = v60;
      *(float *)(v65 + 8) = v60;
      *(_DWORD *)(v65 + 12) = 0;
    }
  }
  if ( v30 || !v28 )
  {
    v66 = *((_QWORD *)this + 23);
    v67 = 0;
    v68 = a5->bottom - v96;
    v69 = (*((_QWORD *)this + 24) - v66) >> 4;
    for ( jj = 0; jj < v69; ++jj )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v66 + 16LL * jj) - v32) & v22) <= 0.0000011920929 )
      {
        v67 = *(_DWORD *)(v66 + 16LL * jj + 12) == 0;
LABEL_79:
        LODWORD(v69) = jj;
        break;
      }
      if ( *(float *)(v66 + 16LL * jj) > v32 )
        goto LABEL_79;
    }
    if ( v67 )
    {
      *(float *)(v66 + 16LL * (unsigned int)v69 + 8) = v68;
    }
    else
    {
      v71 = detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
              (char *)this + 184,
              (unsigned int)v69);
      *(float *)v71 = v32;
      *(float *)(v71 + 4) = v68;
      *(float *)(v71 + 8) = v68;
      *(_DWORD *)(v71 + 12) = 0;
    }
    if ( v30 )
    {
      v72 = a5->bottom;
      v73 = *((_QWORD *)this + 23);
      v74 = v46->bottom;
      v75 = (*((_QWORD *)this + 24) - v73) >> 4;
      for ( kk = 0; ; ++kk )
      {
        if ( kk >= v75 )
          goto LABEL_90;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v73 + 16LL * kk) - v74) & v22) <= 0.0000011920929 )
          break;
        if ( *(float *)(v73 + 16LL * kk) > v74 )
          goto LABEL_89;
      }
      if ( *(_DWORD *)(v73 + 16LL * kk + 12) )
      {
LABEL_89:
        LODWORD(v75) = kk;
LABEL_90:
        v77 = detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
                (char *)this + 184,
                (unsigned int)v75);
        *(float *)v77 = v74;
        *(FLOAT *)(v77 + 4) = v72;
        *(FLOAT *)(v77 + 8) = v72;
        *(_DWORD *)(v77 + 12) = 0;
        goto LABEL_91;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x5Bu, 0LL);
      v87 = 391;
LABEL_135:
      v78 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, v87, 0LL);
      return v78;
    }
  }
LABEL_91:
  if ( v21 )
  {
    *(_QWORD *)&v91 = __PAIR64__(LODWORD(v53), LODWORD(v29));
    *((_QWORD *)&v91 + 1) = __PAIR64__(LODWORD(v32), LODWORD(v92));
    *(_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                 (char *)this + 368,
                 (__int64)(*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) >> 4) = v91;
  }
  return 0;
}
