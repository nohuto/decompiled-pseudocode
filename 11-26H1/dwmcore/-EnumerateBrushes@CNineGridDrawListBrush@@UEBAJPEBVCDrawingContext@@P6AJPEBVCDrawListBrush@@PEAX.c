/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18003B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EDE4 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180038C0C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x18003AEBC (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18003AFAC (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??1?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18003C768 (--1-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QE.c)
 *     ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x18003CDE0 (--$GetAllPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@de.c)
 *     ?IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x18003D470 (-IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18003D4D0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x180064CE0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801B56B0 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  __int64 v4; // rax
  unsigned int v7; // r12d
  __int64 *v8; // rcx
  float v9; // xmm14_4
  float v10; // xmm13_4
  _QWORD *v11; // rbx
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r9d
  float v15; // xmm12_4
  __int64 v16; // rsi
  __int16 v17; // r12
  char v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm2_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  float v33; // xmm1_4
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  __m128 v37; // xmm1
  __m128 v38; // xmm1
  __m128 v39; // xmm1
  struct D2D_RECT_F v40; // xmm0
  bool v41; // dl
  int v42; // xmm0_4
  int v43; // ecx
  int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rax
  float v47; // xmm5_4
  unsigned int v48; // r10d
  _BYTE *v49; // rdx
  _BYTE *v50; // r8
  _BYTE *v51; // r9
  unsigned __int32 v52; // xmm11_4
  float v53; // xmm10_4
  __int64 v54; // r15
  __int64 v55; // r13
  float v56; // xmm0_4
  unsigned int i; // esi
  unsigned __int64 v58; // rcx
  float v59; // xmm7_4
  float v60; // xmm6_4
  float v61; // xmm8_4
  float v62; // xmm1_4
  float v63; // xmm9_4
  float v64; // xmm4_4
  float v65; // xmm3_4
  char v66; // r10
  float v67; // xmm2_4
  int v68; // eax
  int v69; // edx
  int v70; // edx
  int v71; // eax
  int v72; // edx
  int v73; // r9d
  struct D2D_MATRIX_3X2_F *v74; // r9
  float v75; // xmm4_4
  float *v76; // rax
  float v77; // xmm7_4
  float v78; // xmm8_4
  float v79; // xmm9_4
  float v80; // xmm6_4
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm8_4
  float v84; // xmm6_4
  float v85; // xmm10_4
  float v86; // xmm7_4
  float v87; // xmm11_4
  float v88; // xmm9_4
  float v89; // xmm12_4
  float v90; // xmm13_4
  float v91; // xmm14_4
  float v92; // xmm0_4
  float v93; // xmm2_4
  float v94; // xmm0_4
  float v95; // xmm1_4
  float v96; // xmm3_4
  float v97; // xmm2_4
  float v98; // xmm3_4
  float v99; // xmm3_4
  float v100; // xmm2_4
  struct D2D_RECT_F v101; // xmm0
  void *v102; // rdx
  int (*v103)(const struct CDrawListBrush *, void *); // rax
  int v104; // eax
  float v105; // xmm0_4
  float v106; // xmm0_4
  float v107; // xmm0_4
  float v108; // xmm0_4
  float v109; // xmm5_4
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rdx
  float v118; // xmm2_4
  float v119; // xmm0_4
  __int64 v120; // rcx
  struct D2D_RECT_F v121; // xmm0
  int v122; // r9d
  struct D2D_MATRIX_3X2_F *v123; // r9
  __int64 v124; // rax
  int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rax
  int v131; // eax
  float v132; // xmm2_4
  __int64 v133; // rax
  float v134; // xmm1_4
  float v135; // xmm3_4
  float v136; // xmm3_4
  char v137; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v138; // [rsp+4Ch] [rbp-BCh] BYREF
  float v139; // [rsp+54h] [rbp-B4h]
  float v140; // [rsp+58h] [rbp-B0h]
  float v141; // [rsp+5Ch] [rbp-ACh]
  float v142; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v143; // [rsp+64h] [rbp-A4h]
  struct D2D_RECT_F v144; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_RECT_F v145; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v146; // [rsp+98h] [rbp-70h]
  unsigned int v147; // [rsp+9Ch] [rbp-6Ch]
  struct D2D_RECT_F v148; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v149; // [rsp+B0h] [rbp-58h]
  _BYTE v150[48]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v151[20]; // [rsp+E8h] [rbp-20h]
  __m128i si128; // [rsp+108h] [rbp+0h] BYREF
  __m128i v153; // [rsp+118h] [rbp+10h]
  __m128i v154; // [rsp+128h] [rbp+20h]
  __m128i v155; // [rsp+138h] [rbp+30h]
  int v156; // [rsp+148h] [rbp+40h]
  void *v157; // [rsp+158h] [rbp+50h]
  int (*v158)(const struct CDrawListBrush *, void *); // [rsp+160h] [rbp+58h]
  __m128i v159; // [rsp+170h] [rbp+68h] BYREF
  __m128i v160; // [rsp+180h] [rbp+78h]
  __m128i v161; // [rsp+190h] [rbp+88h]
  __m128i v162; // [rsp+1A0h] [rbp+98h]
  int v163; // [rsp+1B0h] [rbp+A8h]
  _BYTE *v164; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE *v165; // [rsp+1C0h] [rbp+B8h]
  _BYTE **v166; // [rsp+1C8h] [rbp+C0h]
  _BYTE v167[24]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE *v168; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE *v169; // [rsp+1F0h] [rbp+E8h]
  __int64 *v170; // [rsp+1F8h] [rbp+F0h]
  _BYTE v171[24]; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v172[3]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v173[24]; // [rsp+230h] [rbp+128h] BYREF
  __int64 v174[3]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v175[24]; // [rsp+260h] [rbp+158h] BYREF
  __int64 v176; // [rsp+278h] [rbp+170h] BYREF

  v4 = *((_QWORD *)this + 15);
  v157 = a4;
  v158 = a3;
  v7 = 0;
  if ( v4 == *((_QWORD *)this + 14)
    && *((_QWORD *)this + 38) == *((_QWORD *)this + 37)
    && *((_QWORD *)this + 61) == *((_QWORD *)this + 60) )
  {
    v130 = *((_QWORD *)this + 9);
    *(_OWORD *)(v130 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v130 + 24) = *((_QWORD *)this + 3);
    v131 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 9), a4);
    v7 = v131;
    if ( v131 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v131, 0x90u, 0LL);
  }
  else
  {
    v8 = (__int64 *)*((_QWORD *)this + 9);
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0LL;
    v143 = 0LL;
    v12 = *v8;
    v138 = 0LL;
    v137 = 0;
    v15 = FLOAT_1_0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v12 + 8))(v8, 2LL) )
    {
      v16 = *((_QWORD *)this + 9);
      v17 = *(_WORD *)(v16 + 80);
      v18 = *(_BYTE *)(v16 + 82);
      v19 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
      v11 = v19;
      if ( !v19 )
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Au, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA2u, 0LL);
        return v7;
      }
      *((_DWORD *)v19 + 2) = 1065353216;
      *(_QWORD *)((char *)v19 + 12) = 0LL;
      *(_QWORD *)((char *)v19 + 20) = 1065353216LL;
      *((_DWORD *)v19 + 7) = 0;
      *((_BYTE *)v19 + 52) = 0;
      *v19 = &CSurfaceDrawListBrush::`vftable';
      v20 = *(_QWORD *)(v16 + 56);
      v19[7] = v20;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      v21 = *(_QWORD *)(v16 + 64);
      v11[8] = v21;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      *((_BYTE *)v11 + 72) = *(_BYTE *)(v16 + 72);
      *((_WORD *)v11 + 40) = v17;
      *((_BYTE *)v11 + 82) = v18;
      *(_QWORD *)((char *)v11 + 92) = 0LL;
      *(_QWORD *)((char *)v11 + 108) = 0LL;
      *(_QWORD *)((char *)v11 + 84) = 1065353216LL;
      *(_QWORD *)((char *)v11 + 100) = 1065353216LL;
      *((_DWORD *)v11 + 29) = 1065353216;
      *((_DWORD *)v11 + 36) = 0;
      *(struct D2D_RECT_F *)(v11 + 15) = CSurfaceDrawListBrush::k_rcfBoundless;
      v7 = 0;
      if ( !CSurfaceDrawListBrush::IsBoundless((CSurfaceDrawListBrush *)v16) )
        *(_OWORD *)(v11 + 15) = *(_OWORD *)(v16 + 120);
      *(_OWORD *)(v11 + 1) = *(_OWORD *)((char *)this + 8);
      v11[3] = *((_QWORD *)this + 3);
      if ( *((_BYTE *)this + 64) )
        CSurfaceDrawListBrush::SetSnapToPixelsReference(
          (CSurfaceDrawListBrush *)v11,
          (const struct D2D_VECTOR_2F *)this + 7);
      if ( *(_BYTE *)(v16 + 144) )
      {
        v22 = *((_DWORD *)a2 + 72);
        v137 = 1;
        v156 = 0;
        if ( v22 )
        {
          v23 = (unsigned int)(v22 - 1);
          v24 = *((_QWORD *)a2 + 35);
          v25 = *(__m128i *)(68 * v23 + v24 + 16);
          si128 = *(__m128i *)(68 * v23 + v24);
          v26 = *(__m128i *)(68 * v23 + v24 + 32);
          v153 = v25;
          v27 = *(__m128i *)(68 * v23 + v24 + 48);
          v156 = *(_DWORD *)(68 * v23 + v24 + 64);
        }
        else
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v26 = _mm_load_si128((const __m128i *)&_xmm);
          v153 = _mm_load_si128((const __m128i *)&_xmm);
          v27 = _mm_load_si128((const __m128i *)&_xmm);
          BYTE1(v156) = BYTE1(v156) & 0xC0 | 0x29;
          LOBYTE(v156) = -86;
        }
        v28 = *((float *)this + 4);
        v29 = *((float *)this + 5);
        v30 = *((float *)this + 3);
        v31 = *((float *)this + 6);
        v32 = *((float *)this + 7);
        v155 = v27;
        v33 = *((float *)this + 2);
        v154 = v26;
        *(_OWORD *)&v150[24] = 0LL;
        *(_QWORD *)&v151[12] = 0x28083F800000LL;
        v34 = (__m128)*(unsigned __int64 *)v150;
        *(_DWORD *)&v151[8] = 0;
        v34.m128_f32[0] = v33;
        *(_QWORD *)&v150[40] = 1065353216LL;
        v35 = *(__m128 *)&v150[16];
        v35.m128_f32[0] = v28;
        v36 = _mm_shuffle_ps(v34, v34, 225);
        v37 = _mm_shuffle_ps(v35, v35, 225);
        v36.m128_f32[0] = v30;
        v37.m128_f32[0] = v29;
        *(__m128 *)&v150[16] = _mm_shuffle_ps(v37, v37, 225);
        v163 = 10248;
        v160 = *(__m128i *)&v150[16];
        v38 = *(__m128 *)v151;
        *(__m128 *)v150 = _mm_shuffle_ps(v36, v36, 225);
        v38.m128_f32[0] = v31;
        v39 = _mm_shuffle_ps(v38, v38, 225);
        v159 = *(__m128i *)v150;
        v39.m128_f32[0] = v32;
        *(__m128 *)v151 = _mm_shuffle_ps(v39, v39, 225);
        v162 = *(__m128i *)v151;
        v161 = *(__m128i *)&v150[32];
        CMILMatrix::Multiply((CMILMatrix *)&v159, (const struct CMILMatrix *)&si128);
        v156 = v163;
        si128 = v159;
        v153 = v160;
        v154 = v161;
        v40 = (struct D2D_RECT_F)*((_OWORD *)this + 2);
        v155 = v162;
        v144 = v40;
        if ( CMILMatrix::Is2DAffineOrNaN((CMILMatrix *)&si128, v41) )
        {
          v9 = sqrtf_0(
                 (float)(*(float *)si128.m128i_i32 * *(float *)si128.m128i_i32)
               + (float)(*(float *)&si128.m128i_i32[1] * *(float *)&si128.m128i_i32[1]));
          v143 = __PAIR64__(
                   LODWORD(v9),
                   COERCE_UNSIGNED_INT(
                     sqrtf_0(
                       (float)(*(float *)v153.m128i_i32 * *(float *)v153.m128i_i32)
                     + (float)(*(float *)&v153.m128i_i32[1] * *(float *)&v153.m128i_i32[1]))));
          v10 = *(float *)&v143;
        }
        else
        {
          *(_QWORD *)v150 = si128.m128i_i64[0];
          *(_DWORD *)&v150[8] = si128.m128i_i32[3];
          *(_QWORD *)&v150[12] = v153.m128i_i64[0];
          *(_QWORD *)&v150[24] = v155.m128i_i64[0];
          *(_DWORD *)&v150[20] = v153.m128i_i32[3];
          *(_DWORD *)&v150[32] = v155.m128i_i32[3];
          Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v150, (float *)&v138 + 1, (float *)&v138, &v144.left);
          v9 = *((float *)&v138 + 1);
          v10 = *(float *)&v138;
          v143 = v138;
        }
        *((_BYTE *)v11 + 146) = 1;
      }
    }
    v42 = *((_DWORD *)this + 10);
    v168 = v171;
    v169 = v171;
    v170 = v172;
    v164 = v167;
    v165 = v167;
    v166 = &v168;
    CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
      v13,
      (_DWORD)this + 112,
      (unsigned int)&v168,
      v14,
      v42,
      LODWORD(FLOAT_1_1920929eN7));
    CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
      v43,
      (_DWORD)this + 296,
      (unsigned int)&v164,
      v44,
      *((_DWORD *)this + 11),
      LODWORD(FLOAT_1_1920929eN7));
    v172[0] = (__int64)v173;
    v45 = (v165 - v164) >> 2;
    v172[1] = (__int64)v173;
    v172[2] = (__int64)v174;
    v174[0] = (__int64)v175;
    v174[1] = (__int64)v175;
    v174[2] = (__int64)&v176;
    if ( v45 == -1 || !v164 && v45 || (v46 = (v169 - v168) >> 2, v46 == -1) || !v168 && v46 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    *(_QWORD *)&v145.left = (v169 - v168) >> 2;
    *(_QWORD *)&v144.right = v164;
    *(_QWORD *)&v145.right = v168;
    *(_QWORD *)&v144.left = (v165 - v164) >> 2;
    CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
      (CNineGridDrawListBrush *)((char *)this + 112),
      v45,
      (unsigned int *)&v145,
      (unsigned int *)&v144,
      v172,
      v174);
    v47 = FLOAT_0_0000011920929;
    v48 = 1;
    v49 = v168;
    v50 = v165;
    v51 = v164;
    v52 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v53 = FLOAT_0_5;
    v54 = v174[0];
    while ( 1 )
    {
      v55 = v48;
      v147 = v48;
      if ( v48 >= (unsigned __int64)((v50 - v51) >> 2) )
        break;
      v56 = *(float *)&v51[4 * v48 - 4] - *(float *)&v51[4 * v48];
      v146 = v48 - 1;
      if ( v47 < COERCE_FLOAT(LODWORD(v56) & v52) )
      {
        for ( i = 1; ; ++i )
        {
          v58 = (v169 - v49) >> 2;
          if ( i >= v58 )
          {
            v48 = v147;
            break;
          }
          v59 = *(float *)&v49[4 * i];
          v60 = *(float *)&v49[4 * i - 4];
          if ( v47 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v60 - v59) & v52) )
          {
            v61 = *(float *)&v51[4 * v55];
            v62 = *(float *)(v54 + 4 * v55);
            v63 = *(float *)&v51[4 * v146];
            v64 = *(float *)(v172[0] + 4LL * (i - 1));
            v65 = *(float *)(v54 + 4LL * v146);
            v66 = *((_BYTE *)this + 569);
            v67 = *(float *)(v172[0] + 4LL * i);
            v144.left = *(FLOAT *)&v49[4 * i - 4];
            v144.top = v63;
            v144.right = v59;
            v144.bottom = v61;
            v145.left = v64;
            v145.top = v65;
            v145.right = v67;
            v145.bottom = v62;
            if ( !v66
              || (float)(*((float *)this + 138) - v60) > v47
              || (float)(*((float *)this + 139) - v63) > v47
              || (float)(v59 - *((float *)this + 140)) > v47
              || (float)(v61 - *((float *)this + 141)) > v47 )
            {
              if ( i == 1 )
                v68 = *((_DWORD *)this + 12) & 0x3000000;
              else
                v68 = 0;
              if ( v146 )
                v69 = 0;
              else
                v69 = *((_DWORD *)this + 12) & 3;
              v70 = v68 | v69;
              if ( i == v58 - 1 )
                v71 = *((_DWORD *)this + 12) & 0x300;
              else
                v71 = 0;
              v72 = v71 | v70;
              if ( v55 == ((v50 - v51) >> 2) - 1 )
                v73 = *((_DWORD *)this + 12) & 0x30000;
              else
                v73 = 0;
              v74 = (struct D2D_MATRIX_3X2_F *)(v72 | (unsigned int)v73);
              if ( v66 && (_DWORD)v74 != 50529027 )
              {
                v109 = *((float *)this + 139);
                if ( v63 >= v109 && *((float *)this + 141) >= v61 )
                {
                  if ( v60 == *((float *)this + 140) )
                    v74 = (struct D2D_MATRIX_3X2_F *)((unsigned int)v74 | 0x3000000);
                  if ( v59 == *((float *)this + 138) )
                    v74 = (struct D2D_MATRIX_3X2_F *)((unsigned int)v74 | 0x300);
                }
                if ( v60 >= *((float *)this + 138) && *((float *)this + 140) >= v59 )
                {
                  if ( v63 == *((float *)this + 141) )
                    v74 = (struct D2D_MATRIX_3X2_F *)((unsigned int)v74 | 3);
                  if ( v61 == v109 )
                    v74 = (struct D2D_MATRIX_3X2_F *)((unsigned int)v74 | 0x30000);
                }
              }
              if ( v11 )
              {
                v76 = (float *)*((_QWORD *)this + 9);
                if ( v137 )
                {
                  if ( (float)(v67 - v64) > v53
                    && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v59 - v60) / (float)(v67 - v64)) * v9) - v15) & v52) >= 0.000081380211 )
                  {
                    if ( v64 <= v76[8] )
                      v107 = 0.0;
                    else
                      v107 = v53;
                    v64 = v107 + v64;
                    if ( v76[10] <= v67 )
                      v108 = 0.0;
                    else
                      v108 = v53;
                    v67 = v67 - v108;
                  }
                  if ( (float)(v62 - v65) > v53
                    && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v61 - v63) / (float)(v62 - v65)) * v10) - v15) & v52) >= 0.000081380211 )
                  {
                    if ( v65 <= v76[9] )
                      v105 = 0.0;
                    else
                      v105 = v53;
                    v65 = v105 + v65;
                    if ( v76[11] <= v62 )
                      v106 = 0.0;
                    else
                      v106 = v53;
                    v62 = v62 - v106;
                  }
                }
                v139 = 0.0;
                v140 = 0.0;
                v142 = 0.0;
                v141 = 0.0;
                v138 = 0LL;
                if ( v60 == v64 && v63 == v65 && v59 == v67 && v61 == v62 )
                {
                  v139 = v15;
                  v140 = 0.0;
                  v142 = 0.0;
                  v141 = v15;
                  v138 = 0LL;
                }
                else
                {
                  v77 = v59 - v60;
                  v78 = v61 - v63;
                  if ( v77 != 0.0 && v78 != 0.0 )
                  {
                    LODWORD(v79) = LODWORD(v63) ^ _xmm;
                    LODWORD(v80) = LODWORD(v60) ^ _xmm;
                    v81 = (float)(v67 - v64) / v77;
                    v82 = (float)(v62 - v65) / v78;
                    v139 = v81 + 0.0;
                    v140 = (float)(v82 * 0.0) + 0.0;
                    v142 = (float)(v81 * 0.0) + 0.0;
                    v141 = v82 + 0.0;
                    *(float *)&v138 = (float)((float)(v82 * v79) + (float)(v80 * 0.0)) + v65;
                    *((float *)&v138 + 1) = (float)((float)(v81 * v80) + (float)(v79 * 0.0)) + v64;
                  }
                }
                v83 = v76[21];
                v84 = v76[24];
                v85 = v76[22];
                v86 = v76[25];
                v87 = v76[23];
                v88 = v76[26];
                v89 = v76[27];
                v90 = v76[28];
                v91 = v76[29];
                v92 = v139 * v85;
                *((float *)v11 + 21) = (float)((float)(v140 * v84) + (float)(v139 * v83)) + (float)(v89 * 0.0);
                v93 = (float)(v140 * v86) + v92;
                v94 = v142 * v83;
                v95 = (float)((float)(v140 * v88) + (float)(v139 * v87)) + (float)(v91 * 0.0);
                *((float *)v11 + 22) = v93 + (float)(v90 * 0.0);
                *((float *)v11 + 23) = v95;
                v96 = v141 * v88;
                v97 = v141 * v86;
                *((float *)v11 + 24) = (float)((float)(v141 * v84) + v94) + (float)(v89 * 0.0);
                v98 = (float)(v96 + (float)(v142 * v87)) + (float)(v91 * 0.0);
                *((float *)v11 + 25) = (float)(v97 + (float)(v142 * v85)) + (float)(v90 * 0.0);
                *((float *)v11 + 26) = v98;
                v99 = (float)(*(float *)&v138 * v88) + (float)(*((float *)&v138 + 1) * v87);
                v100 = (float)((float)(*(float *)&v138 * v86) + (float)(*((float *)&v138 + 1) * v85)) + v90;
                *((float *)v11 + 27) = (float)((float)(*(float *)&v138 * v84) + (float)(*((float *)&v138 + 1) * v83))
                                     + v89;
                *((float *)v11 + 28) = v100;
                *((float *)v11 + 29) = v99 + v91;
                v101 = v144;
                *((_BYTE *)v11 + 52) = 1;
                *((struct D2D_RECT_F *)v11 + 2) = v101;
                v102 = v157;
                v103 = v158;
                *((_DWORD *)v11 + 12) = (_DWORD)v74;
                v104 = ((__int64 (__fastcall *)(_QWORD *, void *))v103)(v11, v102);
                v7 = v104;
                if ( v104 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v104, 0x18Eu, 0LL);
                  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
                    v174,
                    v114);
                  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
                    v172,
                    v115);
                  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
                    &v164,
                    v116);
                  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
                    &v168,
                    v117);
                  goto LABEL_89;
                }
                v53 = FLOAT_0_5;
                v52 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
                v15 = FLOAT_1_0;
              }
              else
              {
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v64 - v67) & v52) <= 0.0009765625 )
                {
                  v118 = v67 + v64;
                  v75 = FLOAT_0_00048828125;
                  v145.right = (float)(v118 * v53) + 0.00048828125;
                  v145.left = (float)(v118 * v53) - 0.00048828125;
                }
                else
                {
                  v75 = FLOAT_0_00048828125;
                }
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v65 - v62) & v52) <= 0.0009765625 )
                {
                  v119 = (float)(v62 + v65) * v53;
                  v145.bottom = v119 + v75;
                  v145.top = v119 - v75;
                }
                v149 = 0LL;
                v148 = 0LL;
                D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v145, &v144, &v148, v74);
                v120 = *((_QWORD *)this + 9);
                v121 = v145;
                *(_BYTE *)(v120 + 52) = 1;
                *(struct D2D_RECT_F *)(v120 + 32) = v121;
                *(_DWORD *)(v120 + 48) = v122;
                D2D1::Matrix3x2F::SetProduct(
                  (D2D1::Matrix3x2F *)v150,
                  (const struct D2D1::Matrix3x2F *)&v148,
                  (CNineGridDrawListBrush *)((char *)this + 8));
                v124 = *((_QWORD *)this + 9);
                *(_QWORD *)&v121.left = *(_QWORD *)&v150[16];
                *(_OWORD *)(v124 + 8) = *(_OWORD *)v150;
                *(_QWORD *)(v124 + 24) = *(_QWORD *)&v121.left;
                if ( *((_BYTE *)this + 64) )
                {
                  v149 = 0LL;
                  v148 = 0LL;
                  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v144, &v145, &v148, v123);
                  v132 = *((float *)this + 14);
                  v133 = *((_QWORD *)this + 9);
                  v134 = *((float *)this + 15) * v148.right;
                  v135 = *((float *)this + 15) * v148.bottom;
                  *(_BYTE *)(v133 + 64) = 1;
                  v136 = (float)(v135 + (float)(v132 * v148.top)) + *((float *)&v149 + 1);
                  *(float *)(v133 + 56) = (float)(v134 + (float)(v132 * v148.left)) + *(float *)&v149;
                  *(float *)(v133 + 60) = v136;
                }
                v125 = ((__int64 (__fastcall *)(_QWORD, void *))v158)(*((_QWORD *)this + 9), v157);
                v7 = v125;
                if ( v125 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v125, 0x1BFu, 0LL);
                  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
                    v174,
                    v126);
                  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
                    v172,
                    v127);
                  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
                    &v164,
                    v128);
                  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
                    &v168,
                    v129);
                  return v7;
                }
              }
              v49 = v168;
              v50 = v165;
              v51 = v164;
              v54 = v174[0];
              v47 = FLOAT_0_0000011920929;
            }
          }
          v10 = *(float *)&v143;
          v9 = *((float *)&v143 + 1);
        }
      }
      ++v48;
    }
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
      v174,
      v49);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
      v172,
      v110);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
      &v164,
      v111);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
      &v168,
      v112);
    if ( v11 )
LABEL_89:
      CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v11, 1u);
  }
  return v7;
}
