/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800B3C80
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18005E3C4 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18005F520 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005FDD0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1BF0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B38B0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B5B10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        char a4)
{
  CTransform3D **v5; // r13
  int v9; // esi
  __int64 v10; // r8
  _DWORD *v11; // rdx
  float v12; // xmm6_4
  __m128 *v13; // rdi
  float v14; // xmm0_4
  __int32 v15; // xmm6_4
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // xmm4_4
  int v19; // xmm5_4
  _DWORD *v20; // rdx
  CGeometry *v21; // rcx
  _DWORD *v22; // rdx
  unsigned int v23; // r8d
  _BYTE *v24; // rax
  __int64 j; // rcx
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  float v30; // xmm1_4
  float v31; // xmm0_4
  int v32; // ecx
  unsigned int v33; // eax
  float v34; // xmm1_4
  __m128 *v35; // rdi
  float *v36; // rdx
  char v37; // cl
  __int32 v38; // r11d
  __m128 v39; // xmm11
  __m128 v40; // xmm14
  __m128 v41; // xmm10
  __m128 v42; // xmm13
  char v43; // di
  float v44; // xmm9_4
  __m128 v45; // xmm3
  __m128 v46; // xmm2
  __m128 v47; // xmm12
  __m128 v48; // xmm4
  float v49; // xmm15_4
  __m128 v50; // xmm5
  __m128 v51; // xmm2
  __m128 v52; // xmm12
  float v53; // xmm12_4
  float v54; // xmm15_4
  float v55; // xmm14_4
  float v56; // xmm12_4
  float v57; // xmm10_4
  float v58; // xmm3_4
  float v59; // xmm5_4
  float v60; // xmm15_4
  float v61; // xmm13_4
  float v62; // xmm11_4
  float v63; // xmm4_4
  char v64; // al
  float v65; // xmm2_4
  float v66; // xmm1_4
  char v67; // dl
  char v68; // cl
  float v69; // xmm3_4
  float v70; // xmm5_4
  int ShapeData; // eax
  void (__fastcall ***v73)(_QWORD, __int64); // rcx
  int v74; // r13d
  int v75; // eax
  float v76; // xmm1_4
  float v77; // xmm5_4
  float v78; // xmm0_4
  float v79; // xmm4_4
  float v80; // xmm0_4
  float v81; // xmm3_4
  float v82; // xmm0_4
  int v83; // ecx
  unsigned int v84; // eax
  char v85; // r11
  char v86; // al
  float v87; // xmm0_4
  float v88; // xmm15_4
  unsigned int v89; // r8d
  _BYTE *v90; // rax
  __int64 i; // rcx
  __int64 v92; // rax
  CTransform3D *v93; // r13
  float v94; // xmm4_4
  float v95; // xmm5_4
  int v96; // xmm0_4
  float v97; // xmm15_4
  float v98; // xmm12_4
  float v99; // xmm3_4
  float v100; // xmm1_4
  float v101; // xmm5_4
  float v102; // xmm3_4
  char v103; // al
  float v104; // edx
  float *v105; // rcx
  __m128 v106; // xmm14
  __m128 v107; // xmm13
  __m128 v108; // xmm14
  __m128 v109; // xmm11
  __m128 v110; // xmm13
  __m128 v111; // xmm11
  __m128 v112; // xmm10
  __m128 v113; // xmm13
  __int64 v114; // rax
  _BYTE *v115; // r8
  __int64 v116; // rcx
  float **v117; // rdi
  float *v118; // rdi
  char v119; // cl
  char v120; // al
  char IsTranslateAndScaleIgnore; // al
  char v122; // dl
  char v123; // al
  __m128 v124; // xmm14
  __m128 v125; // xmm14
  __m128 v126; // xmm14
  __m128 v127; // xmm10
  __m128 v128; // xmm11
  __m128 v129; // xmm10
  __m128 v130; // xmm11
  __m128 v131; // xmm10
  __m128 v132; // xmm11
  char v133; // r8
  char v134; // cl
  char v135; // al
  CVisual *v136; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v137; // r8
  bool v138; // al
  char v139; // cl
  char v140; // al
  __m128 v141; // xmm13
  const struct CMILMatrix *Matrix; // rax
  __m128 v143; // [rsp+38h] [rbp-D0h] BYREF
  __m256i v144; // [rsp+48h] [rbp-C0h]
  _BYTE v145[20]; // [rsp+68h] [rbp-A0h]
  char v146; // [rsp+88h] [rbp-80h]
  __m128 v147; // [rsp+98h] [rbp-70h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v149; // [rsp+B8h] [rbp-50h]
  __m128i v150; // [rsp+C8h] [rbp-40h]
  __m128 v151; // [rsp+D8h] [rbp-30h]
  int v152; // [rsp+E8h] [rbp-20h]
  __m128 v153; // [rsp+F8h] [rbp-10h]
  __m128 v154; // [rsp+108h] [rbp+0h]
  __m128 v155; // [rsp+118h] [rbp+10h]
  __m128 v156; // [rsp+128h] [rbp+20h]
  float v157; // [rsp+138h] [rbp+30h]
  __m128 v158; // [rsp+148h] [rbp+40h]
  __m128 v159; // [rsp+158h] [rbp+50h]
  __m128 v160; // [rsp+168h] [rbp+60h]
  __m128 v161; // [rsp+178h] [rbp+70h]
  __m128 v162[4]; // [rsp+188h] [rbp+80h] BYREF
  int v163; // [rsp+1C8h] [rbp+C0h]
  __m128i v164; // [rsp+1D8h] [rbp+D0h] BYREF
  __m128 v165; // [rsp+1E8h] [rbp+E0h] BYREF
  __m128 v166; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v167; // [rsp+208h] [rbp+100h]

  v5 = 0LL;
  v9 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 64LL))(this, 71LL)
    && (*((_QWORD *)this + 85) || *((_QWORD *)this + 84))
    && !*((_BYTE *)this + 696) )
  {
    *((_DWORD *)this + 45) = *((_DWORD *)this + 35);
    *((_DWORD *)this + 46) = *((_DWORD *)this + 36);
    *(_QWORD *)((char *)this + 172) = 0LL;
  }
  v11 = (_DWORD *)*((_QWORD *)this + 28);
  v12 = FLOAT_1_0;
  if ( (*v11 & 0x1000000) != 0 )
  {
    v114 = (unsigned int)v11[1];
    v115 = v11 + 2;
    v116 = 0LL;
    if ( (_DWORD)v114 )
    {
      while ( *v115 != 8 )
      {
        v116 = (unsigned int)(v116 + 1);
        ++v115;
        if ( (unsigned int)v116 >= (unsigned int)v114 )
          goto LABEL_208;
      }
    }
    else
    {
LABEL_208:
      if ( (unsigned int)v116 >= (unsigned int)v114 )
      {
        v117 = 0LL;
LABEL_149:
        v118 = *v117;
        if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v118 + 64LL))(v118, 48LL) )
          v12 = v118[20];
        goto LABEL_3;
      }
    }
    v117 = (float **)((char *)&v11[2 * v116] + ((v114 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_149;
  }
LABEL_3:
  v13 = (__m128 *)((char *)this + 148);
  v14 = fminf(1.0, fmaxf(v12, 0.0));
  COERCE_FLOAT(v15 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(LODWORD(v14) & v15) < 0.0000011920929 )
  {
    *(_QWORD *)((char *)this + 164) = 0LL;
    *(_QWORD *)((char *)this + 156) = 0LL;
    v13->m128_u64[0] = 0LL;
    goto LABEL_7;
  }
  v16 = *(_QWORD *)this;
  v146 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64, __int64, __int64))(v16 + 64))(this, 71LL, v10, 1LL)
    && (*((_QWORD *)this + 85) || *((_QWORD *)this + 84))
    && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(this) )
  {
    v146 = 1;
  }
  v17 = *(_QWORD *)this;
  v165 = 0LL;
  (*(void (__fastcall **)(CVisual *, char *, __m128 *))(v17 + 320))(this, (char *)this + 172, &v165);
  v18 = *((_DWORD *)this + 47);
  v19 = *((_DWORD *)this + 48);
  *v13 = v165;
  *((_DWORD *)this + 41) = v18;
  *((_DWORD *)this + 42) = v19;
  v20 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v20 & 0x1000000) != 0 )
  {
    v89 = v20[1];
    v90 = v20 + 2;
    for ( i = 0LL; (unsigned int)i < v89; ++v90 )
    {
      if ( *v90 == 8 )
        break;
      i = (unsigned int)(i + 1);
    }
    v92 = (unsigned int)v20[1];
    if ( (unsigned int)i < (unsigned int)v92 )
      v5 = (CTransform3D **)((char *)&v20[2 * i] + ((v92 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    v93 = *v5;
    if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)v93 + 64LL))(v93, 148LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)v93 + 64LL))(v93, 48LL) )
        goto LABEL_6;
      v93 = (CTransform3D *)*((_QWORD *)v93 + 11);
    }
    if ( v93 )
    {
      Matrix = CTransform3D::GetMatrix(v93, (const struct D2D_SIZE_F *)((char *)this + 140));
      v143 = *(__m128 *)Matrix;
      v144 = *(__m256i *)((char *)Matrix + 16);
      *(_OWORD *)v145 = *((_OWORD *)Matrix + 3);
      *(_DWORD *)&v145[16] = *((_DWORD *)Matrix + 16);
      if ( v146 || !*((_DWORD *)this + 27) )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v151 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        v150 = 0LL;
        v149 = _mm_load_si128((const __m128i *)&_xmm);
        v152 = 10657;
        CMILMatrix::Multiply((CMILMatrix *)&v143, (const struct CMILMatrix *)&si128);
      }
      CMILMatrix::Transform3DBoundsHelper<0>(&v143, (char *)this + 148, (char *)this + 148);
    }
  }
LABEL_6:
  v21 = (CGeometry *)*((_QWORD *)this + 30);
  if ( !v21 || (*((_BYTE *)this + 101) & 0x40) != 0 || *((_DWORD *)this + 27) )
    goto LABEL_7;
  v147.m128_u64[0] = 0LL;
  v147.m128_i8[8] = 0;
  v164 = 0LL;
  ShapeData = CGeometry::GetShapeData(v21, (const struct D2D_SIZE_F *)((char *)this + 140), (struct CShapePtr *)&v147);
  v9 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x62u, 0LL);
    v73 = (void (__fastcall ***)(_QWORD, __int64))v147.m128_u64[0];
  }
  else
  {
    v73 = (void (__fastcall ***)(_QWORD, __int64))v147.m128_u64[0];
    v74 = -2003304309;
    if ( v147.m128_u64[0] )
    {
      v75 = (*(__int64 (__fastcall **)(unsigned __int64, __m128i *, _QWORD))(*(_QWORD *)v147.m128_u64[0] + 48LL))(
              v147.m128_u64[0],
              &v164,
              0LL);
      v74 = v75;
      v9 = v75;
      if ( v75 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v75, 0x137u, 0LL);
LABEL_82:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v74, 0x63u, 0LL);
        v73 = (void (__fastcall ***)(_QWORD, __int64))v147.m128_u64[0];
        goto LABEL_83;
      }
      v73 = (void (__fastcall ***)(_QWORD, __int64))v147.m128_u64[0];
    }
    v9 = v74;
    if ( v74 < 0 )
      goto LABEL_82;
  }
LABEL_83:
  if ( v9 == -2003304438 || v9 == -2003304309 )
  {
    v9 = 0;
    v164 = _mm_load_si128((const __m128i *)&_xmm);
  }
  if ( v147.m128_i8[8] && v73 )
    (**v73)(v73, 1LL);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x5D5u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x53Cu, 0LL);
    return (unsigned int)v9;
  }
  v76 = *((float *)this + 41);
  if ( *(float *)v164.m128i_i32 > v13->m128_f32[0] )
    v13->m128_i32[0] = v164.m128i_i32[0];
  v77 = *((float *)this + 38);
  v78 = *(float *)&v164.m128i_i32[1];
  if ( *(float *)&v164.m128i_i32[1] > v77 )
  {
    *((_DWORD *)this + 38) = v164.m128i_i32[1];
    v77 = v78;
  }
  v79 = *((float *)this + 39);
  v80 = *(float *)&v164.m128i_i32[2];
  if ( v79 > *(float *)&v164.m128i_i32[2] )
  {
    *((_DWORD *)this + 39) = v164.m128i_i32[2];
    v79 = v80;
  }
  v81 = *((float *)this + 40);
  v82 = *(float *)&v164.m128i_i32[3];
  if ( v81 > *(float *)&v164.m128i_i32[3] )
  {
    *((_DWORD *)this + 40) = v164.m128i_i32[3];
    v81 = v82;
  }
  v83 = (*((float *)this + 42) <= v76) + 1;
  if ( v79 > v13->m128_f32[0] )
    v83 = *((float *)this + 42) <= v76;
  v84 = v83 + 1;
  if ( v81 > v77 )
    v84 = v83;
  if ( v84 > 1 )
  {
    *(_QWORD *)((char *)this + 164) = 0LL;
    *(_QWORD *)((char *)this + 156) = 0LL;
    v13->m128_u64[0] = 0LL;
  }
LABEL_7:
  v22 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v22 & 0x8000000) != 0 )
  {
    v23 = v22[1];
    v24 = v22 + 2;
    for ( j = 0LL; (unsigned int)j < v23; ++v24 )
    {
      if ( *v24 == 5 )
        break;
      j = (unsigned int)(j + 1);
    }
    v26 = (unsigned int)v22[1];
    if ( (unsigned int)j >= (unsigned int)v26 )
      v27 = 0LL;
    else
      v27 = (__int64 *)((char *)&v22[2 * j] + ((v26 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    v28 = *v27;
    if ( v28 )
    {
      *(_OWORD *)(v28 + 80) = *(_OWORD *)((char *)this + 148);
      *(_QWORD *)(v28 + 96) = *(_QWORD *)((char *)this + 164);
    }
  }
  v29 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v29 + 4) & 0x8000000) != 0 )
  {
    v104 = *(float *)(v29 + 12);
    v105 = (float *)(v29 + 12);
    if ( (LODWORD(v104) & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v105 = (float *)((char *)v105 + (LODWORD(v104) & 0xFFFFFF) + 4);
        v104 = *v105;
      }
      while ( (*(_DWORD *)v105 & 0x7F000000) != 0x5000000 );
    }
    v30 = v105[1];
  }
  else
  {
    v30 = FLOAT_1_0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v30, 0.0))) & v15) >= 0.0000011920929 )
  {
    v31 = *((float *)this + 42);
    v32 = (v31 <= *((float *)this + 41)) + 1;
    if ( *((float *)this + 39) > *((float *)this + 37) )
      v32 = v31 <= *((float *)this + 41);
    v33 = v32 + 1;
    if ( *((float *)this + 40) > *((float *)this + 38) )
      v33 = v32;
    if ( v33 > 1 )
      goto LABEL_65;
    if ( a4 )
    {
LABEL_74:
      *(_OWORD *)((char *)this + 148) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *(_QWORD *)((char *)this + 164) = 0x7F7FFFFFFF7FFFFFLL;
      goto LABEL_65;
    }
    v152 = 0;
    v149 = _mm_load_si128((const __m128i *)&_xmm);
    v151 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    v34 = *((float *)this + 31);
    LOBYTE(v152) = -86;
    *(_WORD *)((char *)&v152 + 1) = 41;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v150 = _mm_load_si128((const __m128i *)&_xmm);
    if ( v34 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      a4 = 1;
      v151.m128_u64[0] = __PAIR64__(*((_DWORD *)this + 32), LODWORD(v34));
      v151.m128_i32[2] = *((_DWORD *)this + 30);
      LOBYTE(v152) = -88;
    }
    v35 = (__m128 *)*((_QWORD *)this + 29);
    if ( !v35 )
    {
LABEL_62:
      if ( !a3 )
      {
        if ( a4 )
          CMILMatrix::Transform3DBoundsHelper<0>(&si128, (char *)this + 148, (char *)this + 148);
        goto LABEL_65;
      }
      v136 = (CVisual *)*((_QWORD *)this + 11);
      *(_DWORD *)&v145[16] = 0;
      CVisual::GetWorldTransform(v136, a2, (struct CMILMatrix *)&v143, 0LL, 0LL);
      v138 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v143, &v143, v137);
      v145[16] &= 3u;
      v145[17] &= 0xC0u;
      if ( v138 )
      {
        v163 = 0;
        CVisual::GetWorldTransform(a3, a2, (struct CMILMatrix *)v162, 0LL, 0LL);
        if ( a4 )
          CMILMatrix::Multiply((const struct CMILMatrix *)&si128, v162, (struct CMILMatrix *)v162);
        v167 = 0LL;
        v166 = 0LL;
        CMILMatrix::Transform3DBoundsHelper<0>(v162, (char *)this + 148, &v166);
        CMILMatrix::Transform3DBoundsHelper<0>(&v143, &v166, (char *)this + 148);
        goto LABEL_65;
      }
      goto LABEL_74;
    }
    v36 = (float *)((char *)this + 140);
    v37 = v35[2].m128_i8[8] & 1;
    if ( this != (CVisual *)-140LL )
    {
      if ( (v35[2].m128_i8[8] & 1) == 0
        && v35[9].m128_i8[12]
        && (v35[9].m128_f32[1] != *v36 || v35[9].m128_f32[2] != *((float *)this + 36)) )
      {
        v37 = 1;
      }
      *(unsigned __int64 *)((char *)v35[9].m128_u64 + 4) = *(_QWORD *)v36;
    }
    if ( v37 )
    {
      (*(void (__fastcall **)(__m128 *, float *, __m128 *, __int64))(v35->m128_u64[0] + 208))(v35, v36, v35 + 5, 1LL);
      v35[2].m128_i32[2] &= ~1u;
    }
    v38 = v35[9].m128_i32[0];
    v39 = v35[5];
    v40 = v35[6];
    v143 = v39;
    *(__m128 *)v144.m256i_i8 = v40;
    *(_DWORD *)&v145[16] = v38;
    v41 = v35[7];
    v42 = v35[8];
    *(__m128 *)&v144.m256i_u64[2] = v41;
    *(__m128 *)v145 = v42;
    if ( (char)((_BYTE)v38 << 6) >> 6 == 1 )
    {
      v44 = *(float *)&FLOAT_0_000081380211;
      v43 = v145[17];
      v165.m128_i32[0] = _mm_shuffle_ps(v42, v42, 255).m128_u32[0];
      v53 = v42.m128_f32[0];
      v153.m128_i32[0] = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
      v164.m128i_i32[0] = _mm_shuffle_ps(v41, v41, 255).m128_u32[0];
      v166.m128_i32[0] = _mm_shuffle_ps(v41, v41, 85).m128_u32[0];
      v160.m128_i32[0] = _mm_shuffle_ps(v40, v40, 255).m128_u32[0];
      v147.m128_i32[0] = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
      v155.m128_i32[0] = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
      v156.m128_i32[0] = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
      v158.m128_i32[0] = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
      v161.m128_i32[0] = v41.m128_i32[0];
      v159.m128_i32[0] = _mm_shuffle_ps(v39, v39, 255).m128_u32[0];
      v154.m128_i32[0] = v39.m128_i32[0];
      LODWORD(v54) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
      goto LABEL_102;
    }
    if ( (char)((_BYTE)v38 << 6) >> 6 < 0 )
      goto LABEL_119;
    v43 = v145[17];
    v44 = *(float *)&FLOAT_0_000081380211;
    if ( (char)(16 * v145[17]) >> 6 == 1 )
    {
      v161 = v41;
      v165.m128_i32[0] = _mm_shuffle_ps(v42, v42, 255).m128_u32[0];
      v153.m128_i32[0] = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
      v164.m128i_i32[0] = _mm_shuffle_ps(v41, v41, 255).m128_u32[0];
      v166.m128_i32[0] = _mm_shuffle_ps(v41, v41, 85).m128_u32[0];
      v160.m128_i32[0] = _mm_shuffle_ps(v40, v40, 255).m128_u32[0];
      v147.m128_i32[0] = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
      v155.m128_i32[0] = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
      v156.m128_i32[0] = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
      v158.m128_i32[0] = _mm_shuffle_ps(v39, v39, 170).m128_u32[0];
      v159.m128_i32[0] = _mm_shuffle_ps(v39, v39, 255).m128_u32[0];
      goto LABEL_139;
    }
    v45 = _mm_shuffle_ps(v42, v42, 255);
    v46 = _mm_shuffle_ps(v41, v41, 255);
    v47 = _mm_shuffle_ps(v41, v41, 85);
    v48 = _mm_shuffle_ps(v40, v40, 255);
    v49 = v41.m128_f32[0];
    v50 = _mm_shuffle_ps(v39, v39, 255);
    v165 = v45;
    v164 = (__m128i)v46;
    v166 = v47;
    v160 = v48;
    v159 = v50;
    v161 = v41;
    if ( (char)(16 * v145[17]) >> 6 >= 0 )
    {
      if ( (char)(4 * v145[17]) >> 6 == 1
        || ((char)(4 * v145[17]) >> 6 >= 0
          ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(v48.m128_i32[0] & v15) * 61440.0)
                                          + (float)(COERCE_FLOAT(v50.m128_i32[0] & v15) * 61440.0))
                                  + COERCE_FLOAT(v45.m128_i32[0] & v15))
                          - 1.0) & v15) >= 0.000081380211
           ? (v139 = 0, v140 = 16)
           : (v139 = 1, v140 = 48),
             v43 = v140 | v145[17] & 0xCF,
             v49 = v161.m128_f32[0],
             v135 = v139 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v46.m128_i32[0] & v15) * 61440.0) - 0.0) & v15) < 0.000081380211))
          : (v135 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v46.m128_i32[0] & v15) * 61440.0) - 0.0) & v15) < 0.000081380211),
            !v135
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(v49 - 0.0) & v15) >= 0.000081380211
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(v47.m128_f32[0] - 0.0) & v15) >= 0.000081380211) )
      {
        v153 = _mm_shuffle_ps(v42, v42, 85);
        v43 = v43 & 0xF3 | 4;
        v156 = _mm_shuffle_ps(v40, v40, 170);
        v53 = v42.m128_f32[0];
        v145[17] = v43;
        v155 = _mm_shuffle_ps(v40, v40, 85);
        v158 = _mm_shuffle_ps(v39, v39, 170);
        v154 = v39;
        v147 = _mm_shuffle_ps(v41, v41, 170);
        LODWORD(v54) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
        goto LABEL_47;
      }
      v43 |= 0xCu;
      v145[17] = v43;
    }
    if ( (char)(16 * v38) >> 6 == 1 )
    {
      v153 = _mm_shuffle_ps(v42, v42, 85);
      v53 = v42.m128_f32[0];
      v147 = _mm_shuffle_ps(v41, v41, 170);
      v156 = _mm_shuffle_ps(v40, v40, 170);
      v155 = _mm_shuffle_ps(v40, v40, 85);
      v158 = _mm_shuffle_ps(v39, v39, 170);
      v154 = v39;
      LODWORD(v54) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
      goto LABEL_47;
    }
    v51 = _mm_shuffle_ps(v40, v40, 170);
    v52 = _mm_shuffle_ps(v39, v39, 170);
    v156 = v51;
    v158 = v52;
    if ( (char)(16 * v38) >> 6 < 0 )
    {
LABEL_41:
      if ( (char)(4 * v38) >> 6 != 1 )
      {
        if ( (char)(4 * v38) >> 6 >= 0 )
        {
          IsTranslateAndScaleIgnore = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)&v143);
          v155 = (__m128)v144.m256i_u32[1];
          v154 = (__m128)v143.m128_u32[0];
          if ( !IsTranslateAndScaleIgnore
            || COERCE_FLOAT(COERCE_UNSIGNED_INT(v143.m128_f32[0] - 1.0) & v15) >= 0.000081380211
            || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v144.m256i_i32[1] - 1.0) & v15) >= 0.000081380211 )
          {
            v43 = v145[17];
            v54 = *(float *)&v145[8];
            v53 = *(float *)v145;
            v42 = *(__m128 *)v145;
            v41 = *(__m128 *)&v144.m256i_u64[2];
            v40 = *(__m128 *)v144.m256i_i8;
            v39 = v143;
            v165 = (__m128)*(unsigned int *)&v145[12];
            v164 = (__m128i)v144.m256i_u32[7];
            v153 = (__m128)*(unsigned int *)&v145[4];
            v147 = (__m128)v144.m256i_u32[6];
            v166 = (__m128)v144.m256i_u32[5];
            v160 = (__m128)v144.m256i_u32[3];
            v156 = (__m128)v144.m256i_u32[2];
            v159 = (__m128)v143.m128_u32[3];
            v161 = (__m128)v144.m256i_u32[4];
            v158 = (__m128)v143.m128_u32[2];
            v145[16] = v145[16] & 0xCC | 0x11;
            goto LABEL_102;
          }
          LOBYTE(v38) = v145[16] | 0x30;
          v43 = v145[17];
          v42 = *(__m128 *)v145;
          v41 = *(__m128 *)&v144.m256i_u64[2];
          v40 = *(__m128 *)v144.m256i_i8;
          v39 = v143;
          v165 = (__m128)*(unsigned int *)&v145[12];
          v164 = (__m128i)v144.m256i_u32[7];
          v166 = (__m128)v144.m256i_u32[5];
          v160 = (__m128)v144.m256i_u32[3];
          v156 = (__m128)v144.m256i_u32[2];
          v159 = (__m128)v143.m128_u32[3];
          v161 = (__m128)v144.m256i_u32[4];
          v158 = (__m128)v143.m128_u32[2];
        }
        else
        {
          v155 = _mm_shuffle_ps(v40, v40, 85);
          v154 = v39;
        }
        v53 = v42.m128_f32[0];
        v147 = _mm_shuffle_ps(v41, v41, 170);
        LODWORD(v54) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v147.m128_f32[0] - 1.0) & v15) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v42.m128_f32[0] - 0.0) & v15) >= 0.000081380211 )
        {
          v153.m128_i32[0] = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
LABEL_47:
          v145[16] = v38 & 0xFC | 1;
LABEL_102:
          if ( !CMILMatrix::IsIdentity<1>((__int64)&si128) )
          {
            if ( CMILMatrix::IsTranslate<1>((__int64)&si128) )
            {
              if ( v44 <= COERCE_FLOAT(v151.m128_i32[0] & v15)
                || v44 <= COERCE_FLOAT(v151.m128_i32[1] & v15)
                || v44 <= COERCE_FLOAT(v151.m128_i32[2] & v15) )
              {
                if ( (char)(4 * v43) >> 6 == 1
                  || ((char)(4 * v43) >> 6 >= 0
                    ? (v44 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                             (float)((float)((float)(COERCE_FLOAT(v160.m128_i32[0] & v15) * 61440.0)
                                                           + (float)(COERCE_FLOAT(v159.m128_i32[0] & v15) * 61440.0))
                                                   + COERCE_FLOAT(v165.m128_i32[0] & v15))
                                           - 1.0) & v15)
                     ? (v119 = 0, v120 = 16)
                     : (v119 = 1, v120 = 48),
                       v43 = v120 | v43 & 0xCF,
                       v145[17] = v43,
                       v86 = v119 & (v44 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v164.m128i_i32[0] & v15)
                                                                                  * 61440.0) - 0.0) & v15)))
                    : (v86 = v44 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v164.m128i_i32[0] & v15)
                                                                          * 61440.0) - 0.0) & v15)),
                      !v86) )
                {
                  v124 = *(__m128 *)v144.m256i_i8;
                  v145[17] = v43 & 0xF3;
                  v124.m128_f32[0] = *(float *)v144.m256i_i32 + (float)(v151.m128_f32[0] * v160.m128_f32[0]);
                  v125 = _mm_shuffle_ps(v124, v124, 225);
                  v125.m128_f32[0] = v155.m128_f32[0] + (float)(v151.m128_f32[1] * v160.m128_f32[0]);
                  v126 = _mm_shuffle_ps(v125, v125, 198);
                  v126.m128_f32[0] = v156.m128_f32[0] + (float)(v151.m128_f32[2] * v160.m128_f32[0]);
                  v88 = v54 + (float)(v151.m128_f32[2] * v165.m128_f32[0]);
                  v127 = *(__m128 *)&v144.m256i_u64[2];
                  v128 = v143;
                  v127.m128_f32[0] = v161.m128_f32[0] + (float)(v151.m128_f32[0] * *(float *)v164.m128i_i32);
                  v128.m128_f32[0] = v154.m128_f32[0] + (float)(v151.m128_f32[0] * v159.m128_f32[0]);
                  v129 = _mm_shuffle_ps(v127, v127, 225);
                  v87 = v153.m128_f32[0] + (float)(v151.m128_f32[1] * v165.m128_f32[0]);
                  v130 = _mm_shuffle_ps(v128, v128, 225);
                  v129.m128_f32[0] = v166.m128_f32[0] + (float)(v151.m128_f32[1] * *(float *)v164.m128i_i32);
                  v130.m128_f32[0] = v143.m128_f32[1] + (float)(v151.m128_f32[1] * v159.m128_f32[0]);
                  v131 = _mm_shuffle_ps(v129, v129, 198);
                  v132 = _mm_shuffle_ps(v130, v130, 198);
                  v131.m128_f32[0] = v147.m128_f32[0] + (float)(v151.m128_f32[2] * *(float *)v164.m128i_i32);
                  v132.m128_f32[0] = v158.m128_f32[0] + (float)(v151.m128_f32[2] * v159.m128_f32[0]);
                  v41 = _mm_shuffle_ps(v131, v131, 201);
                  v39 = _mm_shuffle_ps(v132, v132, 201);
                  v40 = _mm_shuffle_ps(v126, v126, 201);
                  *(__m128 *)&v144.m256i_u64[2] = v41;
                  v143 = v39;
                  *(float *)v145 = v53 + (float)(v151.m128_f32[0] * v165.m128_f32[0]);
                  *(__m128 *)v144.m256i_i8 = v40;
                }
                else
                {
                  v87 = v153.m128_f32[0] + v151.m128_f32[1];
                  v88 = v54 + v151.m128_f32[2];
                  *(float *)v145 = v53 + v151.m128_f32[0];
                }
                *(float *)&v145[8] = v88;
                *(float *)&v145[4] = v87;
                v42 = *(__m128 *)v145;
                v145[16] = v85 & 0xFC;
              }
              goto LABEL_61;
            }
            if ( !CMILMatrix::IsTranslate<1>((__int64)&v143) )
            {
              if ( CMILMatrix::IsTranslateAndScale<1>((__int64)&si128) )
              {
                if ( v44 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)si128.m128i_i32 - 1.0) & v15)
                  || v44 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v149.m128i_i32[1] - 1.0) & v15)
                  || v44 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v150.m128i_i32[2] - 1.0) & v15) )
                {
                  v55 = v143.m128_f32[1] * *(float *)&v149.m128i_i32[1];
                  v56 = *(float *)&v144.m256i_i32[1] * *(float *)&v149.m128i_i32[1];
                  v57 = *(float *)&v144.m256i_i32[5] * *(float *)&v149.m128i_i32[1];
                  v58 = *(float *)&v145[4] * *(float *)&v149.m128i_i32[1];
                  v59 = *(float *)&v145[8];
                  v60 = v143.m128_f32[0] * *(float *)si128.m128i_i32;
                  v61 = *(float *)v144.m256i_i32 * *(float *)si128.m128i_i32;
                  v62 = *(float *)&v144.m256i_i32[4] * *(float *)si128.m128i_i32;
                  v63 = *(float *)v145 * *(float *)si128.m128i_i32;
                  v143.m128_f32[0] = v143.m128_f32[0] * *(float *)si128.m128i_i32;
                  *(float *)v144.m256i_i32 = *(float *)v144.m256i_i32 * *(float *)si128.m128i_i32;
                  *(float *)&v144.m256i_i32[4] = *(float *)&v144.m256i_i32[4] * *(float *)si128.m128i_i32;
                  *(float *)v145 = *(float *)v145 * *(float *)si128.m128i_i32;
                  v143.m128_f32[1] = v143.m128_f32[1] * *(float *)&v149.m128i_i32[1];
                  *(float *)&v144.m256i_i32[1] = *(float *)&v144.m256i_i32[1] * *(float *)&v149.m128i_i32[1];
                  *(float *)&v144.m256i_i32[5] = *(float *)&v144.m256i_i32[5] * *(float *)&v149.m128i_i32[1];
                  *(float *)&v145[4] = *(float *)&v145[4] * *(float *)&v149.m128i_i32[1];
                  if ( v44 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v150.m128i_i32[2] - 1.0) & v15) )
                  {
                    v143.m128_f32[2] = v143.m128_f32[2] * *(float *)&v150.m128i_i32[2];
                    v59 = *(float *)&v145[8] * *(float *)&v150.m128i_i32[2];
                    *(float *)&v144.m256i_i32[6] = *(float *)&v144.m256i_i32[6] * *(float *)&v150.m128i_i32[2];
                    *(float *)&v144.m256i_i32[2] = *(float *)&v144.m256i_i32[2] * *(float *)&v150.m128i_i32[2];
                    *(float *)&v145[8] = *(float *)&v145[8] * *(float *)&v150.m128i_i32[2];
                  }
                  v64 = v145[16] & 0xCC;
                  v145[16] &= 0xCCu;
                }
                else
                {
                  v64 = v145[16];
                  v59 = *(float *)&v145[8];
                  v58 = *(float *)&v145[4];
                  v63 = *(float *)v145;
                  v57 = *(float *)&v144.m256i_i32[5];
                  v62 = *(float *)&v144.m256i_i32[4];
                  v56 = *(float *)&v144.m256i_i32[1];
                  v61 = *(float *)v144.m256i_i32;
                  v55 = v143.m128_f32[1];
                  v60 = v143.m128_f32[0];
                }
                v65 = v151.m128_f32[0];
                v66 = v151.m128_f32[2];
                if ( COERCE_FLOAT(v151.m128_i32[0] & v15) >= 0.000081380211
                  || COERCE_FLOAT(v151.m128_i32[1] & v15) >= 0.000081380211
                  || COERCE_FLOAT(v151.m128_i32[2] & v15) >= 0.000081380211 )
                {
                  v67 = v145[17];
                  if ( (char)(4 * v145[17]) >> 6 == 1 )
                    goto LABEL_201;
                  if ( (char)(4 * v145[17]) >> 6 >= 0 )
                  {
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                        (float)((float)((float)(COERCE_FLOAT(v144.m256i_i32[3] & v15) * 61440.0)
                                                      + (float)(COERCE_FLOAT(v143.m128_i32[3] & v15) * 61440.0))
                                              + COERCE_FLOAT(*(_DWORD *)&v145[12] & v15))
                                      - 1.0) & v15) >= 0.000081380211 )
                    {
                      v133 = 0;
                      v134 = 16;
                    }
                    else
                    {
                      v133 = 1;
                      v134 = 48;
                    }
                    v66 = v151.m128_f32[2];
                    v67 = v134 | v145[17] & 0xCF;
                    v145[17] = v67;
                    v65 = v151.m128_f32[0];
                    v68 = v133 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v144.m256i_i32[7] & v15)
                                                                         * 61440.0) - 0.0) & v15) < 0.000081380211);
                  }
                  else
                  {
                    v68 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v144.m256i_i32[7] & v15) * 61440.0) - 0.0) & v15) < 0.000081380211;
                  }
                  if ( !v68 )
                  {
LABEL_201:
                    v145[17] = v67 & 0xF3;
                    v143.m128_f32[0] = v60 + (float)(v65 * v143.m128_f32[3]);
                    v143.m128_f32[1] = v55 + (float)(v151.m128_f32[1] * v143.m128_f32[3]);
                    v143.m128_f32[2] = v143.m128_f32[2] + (float)(v151.m128_f32[2] * v143.m128_f32[3]);
                    *(float *)v144.m256i_i32 = v61 + (float)(v65 * *(float *)&v144.m256i_i32[3]);
                    *(float *)&v144.m256i_i32[1] = v56 + (float)(v151.m128_f32[1] * *(float *)&v144.m256i_i32[3]);
                    *(float *)&v144.m256i_i32[2] = *(float *)&v144.m256i_i32[2]
                                                 + (float)(v151.m128_f32[2] * *(float *)&v144.m256i_i32[3]);
                    *(float *)&v144.m256i_i32[4] = v62 + (float)(v65 * *(float *)&v144.m256i_i32[7]);
                    v69 = v58 + (float)(v151.m128_f32[1] * *(float *)&v145[12]);
                    *(float *)&v144.m256i_i32[5] = v57 + (float)(v151.m128_f32[1] * *(float *)&v144.m256i_i32[7]);
                    *(float *)&v144.m256i_i32[6] = *(float *)&v144.m256i_i32[6]
                                                 + (float)(v151.m128_f32[2] * *(float *)&v144.m256i_i32[7]);
                    v70 = v59 + (float)(v151.m128_f32[2] * *(float *)&v145[12]);
                    v65 = v65 * *(float *)&v145[12];
                  }
                  else
                  {
                    v69 = v58 + v151.m128_f32[1];
                    v70 = v59 + v66;
                  }
                  *(float *)&v145[8] = v70;
                  *(float *)&v145[4] = v69;
                  v145[16] = v64 & 0xFC;
                  *(float *)v145 = v63 + v65;
                }
                v42 = *(__m128 *)v145;
                v41 = *(__m128 *)&v144.m256i_u64[2];
                v40 = *(__m128 *)v144.m256i_i8;
                v39 = v143;
              }
              else if ( CMILMatrix::IsPure2DUniformZ<1>((__int64)&v143)
                     && CMILMatrix::IsPure2DUniformZ<1>((__int64)&si128) )
              {
                *(_QWORD *)&v145[12] = 0x28083F800000LL;
                *(_OWORD *)&v144.m256i_u64[1] = 0uLL;
                v106 = *(__m128 *)v144.m256i_i8;
                v107 = *(__m128 *)v145;
                v144.m256i_i32[7] = 0;
                v106.m128_f32[0] = (float)(*(float *)si128.m128i_i32 * *(float *)v144.m256i_i32)
                                 + (float)(*(float *)v149.m128i_i32 * *(float *)&v144.m256i_i32[1]);
                v108 = _mm_shuffle_ps(v106, v106, 225);
                v108.m128_f32[0] = (float)(*(float *)&si128.m128i_i32[1] * *(float *)v144.m256i_i32)
                                 + (float)(*(float *)&v149.m128i_i32[1] * *(float *)&v144.m256i_i32[1]);
                v109 = (__m128)v143.m128_u64[0];
                v107.m128_f32[0] = (float)((float)(*(float *)v149.m128i_i32 * *(float *)&v145[4])
                                         + (float)(*(float *)si128.m128i_i32 * *(float *)v145))
                                 + v151.m128_f32[0];
                v40 = _mm_shuffle_ps(v108, v108, 225);
                v110 = _mm_shuffle_ps(v107, v107, 225);
                v109.m128_f32[0] = (float)(*(float *)v149.m128i_i32 * v143.m128_f32[1])
                                 + (float)(*(float *)si128.m128i_i32 * v143.m128_f32[0]);
                v110.m128_f32[0] = (float)((float)(*(float *)&v149.m128i_i32[1] * *(float *)&v145[4])
                                         + (float)(*(float *)&si128.m128i_i32[1] * *(float *)v145))
                                 + v151.m128_f32[1];
                v111 = _mm_shuffle_ps(v109, v109, 225);
                v111.m128_f32[0] = (float)(*(float *)&v149.m128i_i32[1] * v143.m128_f32[1])
                                 + (float)(*(float *)&si128.m128i_i32[1] * v143.m128_f32[0]);
                v112 = _mm_shuffle_ps(*(__m128 *)&v144.m256i_u64[2], *(__m128 *)&v144.m256i_u64[2], 210);
                v113 = _mm_shuffle_ps(v110, v110, 198);
                v112.m128_f32[0] = *(float *)&v144.m256i_i32[6] * *(float *)&v150.m128i_i32[2];
                v113.m128_f32[0] = (float)(*(float *)&v150.m128i_i32[2] * *(float *)&v145[8]) + v151.m128_f32[2];
                v41 = _mm_shuffle_ps(v112, v112, 201);
                v42 = _mm_shuffle_ps(v113, v113, 201);
                v39 = _mm_shuffle_ps(v111, v111, 225);
                *(__m128 *)&v144.m256i_u64[2] = v41;
                *(__m128 *)v145 = v42;
                *(__m128 *)v144.m256i_i8 = v40;
                v143 = v39;
              }
              else
              {
                *(_DWORD *)&v145[16] = 0;
                v39 = _mm_add_ps(
                        _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps(v143, v143, 255), v151),
                          _mm_mul_ps(_mm_shuffle_ps(v143, v143, 85), (__m128)v149)),
                        _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps(v143, v143, 170), (__m128)v150),
                          _mm_mul_ps(_mm_shuffle_ps(v143, v143, 0), (__m128)si128)));
                v40 = _mm_add_ps(
                        _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v144.m256i_i8, *(__m128 *)v144.m256i_i8, 255), v151),
                          _mm_mul_ps(
                            _mm_shuffle_ps(*(__m128 *)v144.m256i_i8, *(__m128 *)v144.m256i_i8, 85),
                            (__m128)v149)),
                        _mm_add_ps(
                          _mm_mul_ps(
                            _mm_shuffle_ps(*(__m128 *)v144.m256i_i8, *(__m128 *)v144.m256i_i8, 170),
                            (__m128)v150),
                          _mm_mul_ps(
                            _mm_shuffle_ps(*(__m128 *)v144.m256i_i8, *(__m128 *)v144.m256i_i8, 0),
                            (__m128)si128)));
                v41 = _mm_add_ps(
                        _mm_add_ps(
                          _mm_mul_ps(
                            _mm_shuffle_ps(*(__m128 *)&v144.m256i_u64[2], *(__m128 *)&v144.m256i_u64[2], 255),
                            v151),
                          _mm_mul_ps(
                            _mm_shuffle_ps(*(__m128 *)&v144.m256i_u64[2], *(__m128 *)&v144.m256i_u64[2], 85),
                            (__m128)v149)),
                        _mm_add_ps(
                          _mm_mul_ps(
                            _mm_shuffle_ps(*(__m128 *)&v144.m256i_u64[2], *(__m128 *)&v144.m256i_u64[2], 170),
                            (__m128)v150),
                          _mm_mul_ps(
                            _mm_shuffle_ps(*(__m128 *)&v144.m256i_u64[2], *(__m128 *)&v144.m256i_u64[2], 0),
                            (__m128)si128)));
                v42 = _mm_add_ps(
                        _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v145, *(__m128 *)v145, 255), v151),
                          _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v145, *(__m128 *)v145, 85), (__m128)v149)),
                        _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v145, *(__m128 *)v145, 170), (__m128)v150),
                          _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v145, *(__m128 *)v145, 0), (__m128)si128)));
              }
              goto LABEL_61;
            }
            v94 = *(float *)v145;
            v95 = *(float *)&v145[8];
            v42 = v151;
            v96 = *(_DWORD *)v145 & v15;
            *(_DWORD *)&v145[16] = v152;
            v97 = *(float *)&v145[4];
            v39 = (__m128)si128;
            v40 = (__m128)v149;
            v41 = (__m128)v150;
            v157 = *(float *)&v145[8];
            *(__m128 *)v145 = v151;
            if ( v44 <= *(float *)&v96
              || v44 <= COERCE_FLOAT(LODWORD(v97) & v15)
              || v44 <= COERCE_FLOAT(LODWORD(v95) & v15) )
            {
              LODWORD(v98) = _mm_shuffle_ps((__m128)si128, (__m128)si128, 255).m128_u32[0];
              *(float *)v145 = (float)((float)((float)(v97 * *(float *)v149.m128i_i32)
                                             + (float)(v94 * *(float *)si128.m128i_i32))
                                     + (float)(v95 * *(float *)v150.m128i_i32))
                             + v151.m128_f32[0];
              v99 = (float)((float)(v94 * _mm_shuffle_ps((__m128)si128, (__m128)si128, 85).m128_f32[0])
                          + (float)(v97 * _mm_shuffle_ps((__m128)v149, (__m128)v149, 85).m128_f32[0]))
                  + (float)(v95 * _mm_shuffle_ps((__m128)v150, (__m128)v150, 85).m128_f32[0]);
              v100 = v95;
              LODWORD(v101) = _mm_shuffle_ps((__m128)v149, (__m128)v149, 255).m128_u32[0];
              *(float *)&v145[4] = *(float *)&v145[4] + v99;
              *(float *)&v145[8] = *(float *)&v145[8]
                                 + (float)((float)((float)(v97
                                                         * _mm_shuffle_ps((__m128)v149, (__m128)v149, 170).m128_f32[0])
                                                 + (float)(v94
                                                         * _mm_shuffle_ps((__m128)si128, (__m128)si128, 170).m128_f32[0]))
                                         + (float)(v100 * _mm_shuffle_ps((__m128)v150, (__m128)v150, 170).m128_f32[0]));
              if ( (char)(4 * v145[17]) >> 6 == 1 )
              {
                LODWORD(v102) = _mm_shuffle_ps((__m128)v150, (__m128)v150, 255).m128_u32[0];
              }
              else
              {
                if ( (char)(4 * v145[17]) >> 6 >= 0 )
                {
                  if ( v44 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                             (float)((float)((float)(COERCE_FLOAT(LODWORD(v101) & v15) * 61440.0)
                                                           + (float)(COERCE_FLOAT(LODWORD(v98) & v15) * 61440.0))
                                                   + COERCE_FLOAT(*(_DWORD *)&v145[12] & v15))
                                           - 1.0) & v15) )
                  {
                    v122 = 0;
                    v123 = 16;
                  }
                  else
                  {
                    v122 = 1;
                    v123 = 48;
                  }
                  v145[17] = v123 | v145[17] & 0xCF;
                  LODWORD(v102) = _mm_shuffle_ps((__m128)v150, (__m128)v150, 255).m128_u32[0];
                  v103 = v122 & (v44 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v102) & v15)
                                                                              * 61440.0) - 0.0) & v15));
                }
                else
                {
                  v102 = _mm_shuffle_ps((__m128)v150, (__m128)v150, 255).m128_f32[0];
                  v103 = v44 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v102) & v15) * 61440.0) - 0.0) & v15);
                }
                if ( v103 )
                {
                  v145[16] &= 0xFCu;
                  v42 = *(__m128 *)v145;
                  goto LABEL_61;
                }
              }
              *(_DWORD *)&v145[16] = 0;
              v141 = _mm_shuffle_ps(*(__m128 *)v145, *(__m128 *)v145, 147);
              v141.m128_f32[0] = *(float *)&v145[12]
                               + (float)((float)((float)(v97 * v101) + (float)(v94 * v98)) + (float)(v157 * v102));
              v42 = _mm_shuffle_ps(v141, v141, 57);
              *(__m128 *)v145 = v42;
            }
          }
LABEL_61:
          a4 = 1;
          si128 = (__m128i)v39;
          v149 = (__m128i)v40;
          v150 = (__m128i)v41;
          v151 = v42;
          v152 = *(_DWORD *)&v145[16];
          goto LABEL_62;
        }
        v153 = _mm_shuffle_ps(v42, v42, 85);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v153.m128_f32[0] - 0.0) & v15) >= 0.000081380211 )
          goto LABEL_47;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v54 - 0.0) & v15) >= 0.000081380211 )
        {
          v145[16] = v38 & 0xFC | 1;
          goto LABEL_102;
        }
LABEL_119:
        v39 = (__m128)si128;
        v40 = (__m128)v149;
        v41 = (__m128)v150;
        v42 = v151;
        *(_DWORD *)&v145[16] = v152;
        goto LABEL_61;
      }
      v153.m128_i32[0] = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
      v155.m128_i32[0] = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
      v147.m128_i32[0] = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
LABEL_139:
      v154.m128_i32[0] = v39.m128_i32[0];
      LODWORD(v54) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
      v53 = v42.m128_f32[0];
      goto LABEL_47;
    }
    if ( (char)(4 * v43) >> 6 != 1 )
    {
      if ( (char)(4 * v43) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(v48.m128_i32[0] & v15) * 61440.0)
                                          + (float)(COERCE_FLOAT(v50.m128_i32[0] & v15) * 61440.0))
                                  + COERCE_FLOAT(v45.m128_i32[0] & v15))
                          - 1.0) & v15) >= 0.000081380211 )
        {
          v43 = v43 & 0xCF | 0x10;
          v145[17] = v43;
          goto LABEL_206;
        }
        v51.m128_i32[0] = v156.m128_i32[0];
        v43 |= 0x30u;
        v145[17] = v43;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v52.m128_f32[0] - 0.0) & v15) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v51.m128_f32[0] - 0.0) & v15) < 0.000081380211 )
      {
        LOBYTE(v38) = v38 | 0xC;
        v145[16] = v38;
        goto LABEL_41;
      }
    }
LABEL_206:
    v154 = v39;
    v147 = _mm_shuffle_ps(v41, v41, 170);
    v155 = _mm_shuffle_ps(v40, v40, 85);
    LOBYTE(v38) = v38 & 0xF3 | 4;
    v153 = _mm_shuffle_ps(v42, v42, 85);
    v53 = v42.m128_f32[0];
    LODWORD(v54) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
    goto LABEL_47;
  }
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
LABEL_65:
  if ( *((float *)this + 39) < *((float *)this + 37)
    || *((float *)this + 40) < *((float *)this + 38)
    || *((float *)this + 42) < *((float *)this + 41) )
  {
    *(_OWORD *)((char *)this + 148) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(_QWORD *)((char *)this + 164) = 0x7F7FFFFFFF7FFFFFLL;
  }
  return (unsigned int)v9;
}
