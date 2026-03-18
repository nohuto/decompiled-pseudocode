/*
 * XREFs of ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800AFF90
 * Callers:
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20 (-UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1800CF1A8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169C10 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255E28 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ @ 0x180286930 (-UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ.c)
 * Callees:
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005FDD0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800AFD90 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1930 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1BF0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::GetRootTransform(CVisual *this, struct CMILMatrix *a2, char a3, char a4)
{
  char v5; // r14
  char v8; // al
  float v9; // xmm2_4
  __int64 v10; // rdi
  float *v11; // rdx
  char v12; // cl
  __m128 v13; // xmm9
  char v14; // cl
  char v15; // dl
  unsigned __int32 v16; // xmm7_4
  float v17; // xmm11_4
  float v18; // xmm8_4
  float v19; // xmm10_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  int v22; // xmm0_4
  int v23; // xmm1_4
  char v24; // r8
  char v25; // al
  char v26; // al
  char v27; // cl
  float v28; // xmm5_4
  float v29; // xmm12_4
  float v30; // xmm13_4
  __m128 v31; // xmm4
  __m128 v32; // xmm3
  float v33; // xmm2_4
  float v34; // xmm3_4
  char v35; // al
  float v36; // xmm12_4
  float v37; // xmm13_4
  float v38; // xmm14_4
  char v39; // al
  float v40; // xmm0_4
  __m128 v42; // xmm8
  __m128 v43; // xmm6
  __m128 v44; // xmm7
  __m128 v45; // xmm5
  _DWORD *v46; // rdx
  _QWORD *v47; // rdi
  __int64 v48; // rax
  int v49; // r12d
  int v50; // r15d
  bool v51; // r13
  __int64 v52; // rax
  float *v53; // rdx
  char v54; // cl
  float v55; // xmm2_4
  float v56; // xmm5_4
  float v57; // xmm1_4
  float v58; // xmm4_4
  float v59; // xmm14_4
  float v60; // xmm12_4
  float v61; // xmm3_4
  float v62; // xmm15_4
  float v63; // xmm13_4
  float v64; // xmm9_4
  float v65; // xmm2_4
  char v66; // al
  float v67; // xmm5_4
  char v68; // dl
  float v69; // xmm10_4
  char v70; // cl
  float v71; // xmm2_4
  float v72; // xmm4_4
  float v73; // xmm3_4
  float v74; // xmm2_4
  float v75; // xmm3_4
  float v76; // xmm13_4
  float v77; // xmm12_4
  float v78; // xmm9_4
  float v79; // xmm11_4
  float v80; // xmm7_4
  float v81; // xmm5_4
  float v82; // xmm0_4
  char v83; // r8
  char v84; // al
  char IsTranslateAndScaleIgnore; // al
  char v86; // al
  char v87; // cl
  char v88; // dl
  __m128 v89; // xmm9
  __m128 v90; // xmm9
  __m128 v91; // xmm9
  char v92; // r8
  char v93; // cl
  char v94; // al
  char v95; // al
  char v96; // r8
  char v97; // cl
  unsigned int v98; // r8d
  _BYTE *v99; // rax
  __int64 i; // rcx
  __int64 v101; // rax
  _QWORD **v102; // r15
  _QWORD *v103; // r15
  char v104; // al
  char v105; // r8
  char v106; // al
  char v107; // dl
  char v108; // al
  char v109; // r8
  char v110; // al
  char v111; // r8
  struct CEffect *EffectInternal; // rax
  __m128 v113; // [rsp+20h] [rbp-E0h] BYREF
  __m128 v114; // [rsp+30h] [rbp-D0h]
  __m128 v115; // [rsp+40h] [rbp-C0h]
  _BYTE v116[20]; // [rsp+50h] [rbp-B0h]
  float v117; // [rsp+70h] [rbp-90h]
  float v118; // [rsp+74h] [rbp-8Ch]
  float v119; // [rsp+78h] [rbp-88h]

  *(_QWORD *)a2 = 1065353216LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  v5 = 0;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 9) = 0;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_BYTE *)a2 + 64) = -86;
  v8 = *((_BYTE *)a2 + 65) & 0xC0 | 0x29;
  *((_BYTE *)a2 + 65) = v8;
  if ( !a4 )
  {
    v9 = *((float *)this + 31);
    if ( v9 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      v22 = *((_DWORD *)this + 32);
      v23 = *((_DWORD *)this + 30);
      *((float *)a2 + 12) = v9;
      v5 = 1;
      *((_DWORD *)a2 + 13) = v22;
      *((_DWORD *)a2 + 14) = v23;
      *((_BYTE *)a2 + 64) = -88;
      *((_BYTE *)a2 + 65) = v8;
    }
    v10 = *((_QWORD *)this + 29);
    if ( v10 )
    {
      v11 = (float *)((char *)this + 140);
      v12 = *(_BYTE *)(v10 + 40) & 1;
      if ( this != (CVisual *)-140LL )
      {
        if ( (*(_BYTE *)(v10 + 40) & 1) == 0
          && *(_BYTE *)(v10 + 156)
          && (*(float *)(v10 + 148) != *v11 || *(float *)(v10 + 152) != v11[1]) )
        {
          v12 = 1;
        }
        *(_QWORD *)(v10 + 148) = *(_QWORD *)v11;
      }
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v10 + 208LL))(v10, v11, v10 + 80);
        *(_DWORD *)(v10 + 40) &= ~1u;
      }
      v13 = *(__m128 *)(v10 + 80);
      v113 = v13;
      v114 = *(__m128 *)(v10 + 96);
      v115 = *(__m128 *)(v10 + 112);
      *(_OWORD *)v116 = *(_OWORD *)(v10 + 128);
      *(_DWORD *)&v116[16] = *(_DWORD *)(v10 + 144);
      v14 = v116[16];
      if ( (char)(v116[16] << 6) >> 6 == 1 )
      {
        v15 = v116[17];
        v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
        v17 = FLOAT_61440_0;
        v21 = v13.m128_f32[0];
        v18 = *(float *)&FLOAT_0_000081380211;
        v19 = FLOAT_1_0;
        v113.m128_i32[2] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
        LODWORD(v20) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
        goto LABEL_28;
      }
      if ( (char)(v116[16] << 6) >> 6 < 0 )
      {
LABEL_88:
        v13 = *(__m128 *)a2;
        v113 = *(__m128 *)a2;
        v114 = *((__m128 *)a2 + 1);
        v115 = *((__m128 *)a2 + 2);
        *(_OWORD *)v116 = *((_OWORD *)a2 + 3);
        *(_DWORD *)&v116[16] = *((_DWORD *)a2 + 16);
        goto LABEL_60;
      }
      v15 = v116[17];
      v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      v17 = FLOAT_61440_0;
      v18 = *(float *)&FLOAT_0_000081380211;
      v19 = FLOAT_1_0;
      LODWORD(v20) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
      if ( (char)(16 * v116[17]) >> 6 == 1 )
      {
        v113.m128_i32[2] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
      }
      else
      {
        if ( (char)(16 * v116[17]) >> 6 >= 0 )
        {
          if ( (char)(4 * v116[17]) >> 6 == 1
            || ((char)(4 * v116[17]) >> 6 >= 0
              ? (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                (float)((float)((float)(COERCE_FLOAT(v114.m128_i32[3] & v16) * 61440.0)
                                              + (float)(COERCE_FLOAT(LODWORD(v20) & v16) * 61440.0))
                                      + COERCE_FLOAT(*(_DWORD *)&v116[12] & v16))
                              - 1.0) & v16) >= 0.000081380211
               ? (v105 = 0, v106 = 16)
               : (v105 = 1, v106 = 48),
                 v15 = v106 | v116[17] & 0xCF,
                 v94 = v105 & (COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v115.m128_i32[3] & v16) * 61440.0) - 0.0) & v16) < 0.000081380211))
              : (v94 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v115.m128_i32[3] & v16) * 61440.0) - 0.0) & v16) < 0.000081380211),
                !v94
             || COERCE_FLOAT(COERCE_UNSIGNED_INT(v115.m128_f32[0] - 0.0) & v16) >= 0.000081380211
             || COERCE_FLOAT(COERCE_UNSIGNED_INT(v115.m128_f32[1] - 0.0) & v16) >= 0.000081380211) )
          {
            v15 = v15 & 0xF3 | 4;
            v113.m128_i32[2] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
            v21 = v13.m128_f32[0];
            v116[17] = v15;
            goto LABEL_25;
          }
          v15 |= 0xCu;
          v116[17] = v15;
        }
        v113.m128_i32[2] = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
        if ( (char)(16 * v116[16]) >> 6 != 1 )
        {
          if ( (char)(16 * v116[16]) >> 6 < 0 )
            goto LABEL_20;
          if ( (char)(4 * v15) >> 6 != 1 )
          {
            if ( (char)(4 * v15) >> 6 >= 0 )
            {
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(v114.m128_i32[3] & v16) * 61440.0)
                                                + (float)(COERCE_FLOAT(LODWORD(v20) & v16) * 61440.0))
                                        + COERCE_FLOAT(*(_DWORD *)&v116[12] & v16))
                                - 1.0) & v16) >= 0.000081380211 )
              {
                v15 = v15 & 0xCF | 0x10;
                v116[17] = v15;
                goto LABEL_165;
              }
              v15 |= 0x30u;
              v116[17] = v15;
            }
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v113.m128_f32[2] - 0.0) & v16) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v114.m128_f32[2] - 0.0) & v16) < 0.000081380211 )
            {
              v14 = v116[16] | 0xC;
              v116[16] |= 0xCu;
LABEL_20:
              if ( (char)(4 * v14) >> 6 != 1 )
              {
                if ( (char)(4 * v14) >> 6 < 0 )
                {
                  v21 = v13.m128_f32[0];
LABEL_23:
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v115.m128_f32[2] - 1.0) & v16) < 0.000081380211
                    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v116 - 0.0) & v16) < 0.000081380211
                    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v116[4] - 0.0) & v16) < 0.000081380211
                    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v116[8] - 0.0) & v16) < 0.000081380211 )
                  {
                    v116[16] = v14 | 3;
                    goto LABEL_88;
                  }
                  goto LABEL_25;
                }
                IsTranslateAndScaleIgnore = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v113);
                v21 = v113.m128_f32[0];
                if ( IsTranslateAndScaleIgnore
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(v113.m128_f32[0] - 1.0) & v16) < 0.000081380211
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(v114.m128_f32[1] - 1.0) & v16) < 0.000081380211 )
                {
                  v15 = v116[17];
                  v14 = v116[16] | 0x30;
                  v20 = v113.m128_f32[3];
                  v13 = v113;
                  goto LABEL_23;
                }
                v15 = v116[17];
                v20 = v113.m128_f32[3];
                v13 = v113;
                v14 = v116[16] & 0xCC | 0x11;
                v116[16] = v14;
LABEL_28:
                if ( (char)(*((_BYTE *)a2 + 64) << 6) >> 6 != 1 )
                {
                  if ( (char)(*((_BYTE *)a2 + 64) << 6) >> 6 < 0 )
                  {
LABEL_60:
                    v5 = 1;
                    *(__m128 *)a2 = v13;
                    *((__m128 *)a2 + 1) = v114;
                    *((__m128 *)a2 + 2) = v115;
                    *((_OWORD *)a2 + 3) = *(_OWORD *)v116;
                    *((_DWORD *)a2 + 16) = *(_DWORD *)&v116[16];
                    goto LABEL_61;
                  }
                  if ( CMILMatrix::IsTranslate<1>((__int64)a2)
                    && v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 12) - 0.0) & v16)
                    && v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 13) - 0.0) & v16)
                    && v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 14) - 0.0) & v16) )
                  {
LABEL_105:
                    v13 = v113;
                    goto LABEL_60;
                  }
                  *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0xFC ^ 1;
                  v15 = v116[17];
                  v14 = v116[16];
                  v20 = v113.m128_f32[3];
                  v21 = v113.m128_f32[0];
                  v13 = v113;
                }
                v24 = *((_BYTE *)a2 + 65);
                if ( (v24 & 8) == 0 && 16 * (v24 & 0xFC) != 0 )
                {
LABEL_40:
                  if ( (char)(16 * v15) >> 6 == 1 )
                    goto LABEL_64;
                  if ( (char)(16 * v15) >> 6 >= 0 )
                  {
                    if ( (char)(4 * v15) >> 6 == 1
                      || ((char)(4 * v15) >> 6 >= 0
                        ? (v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                 (float)((float)((float)(COERCE_FLOAT(v114.m128_i32[3] & v16) * v17)
                                                               + (float)(COERCE_FLOAT(LODWORD(v20) & v16) * v17))
                                                       + COERCE_FLOAT(*(_DWORD *)&v116[12] & v16))
                                               - v19) & v16)
                         ? (v109 = 0, v110 = 16)
                         : (v109 = 1, v110 = 48),
                           v15 = v110 | v15 & 0xCF,
                           v104 = v109 & (v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v115.m128_i32[3] & v16)
                                                                                       * v17) - 0.0) & v16)))
                        : (v104 = v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v115.m128_i32[3] & v16)
                                                                               * v17) - 0.0) & v16)),
                          !v104
                       || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v115.m128_f32[0] - 0.0) & v16)
                       || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v115.m128_f32[1] - 0.0) & v16)) )
                    {
                      v116[17] = v15 & 0xF3 | 4;
                      goto LABEL_64;
                    }
                    v15 |= 0xCu;
                    v116[17] = v15;
                  }
                  if ( (char)(16 * v14) >> 6 == 1 )
                    goto LABEL_64;
                  if ( (char)(16 * v14) >> 6 >= 0 )
                  {
                    if ( (char)(4 * v15) >> 6 == 1 )
                      goto LABEL_192;
                    if ( (char)(4 * v15) >> 6 >= 0 )
                    {
                      if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                 (float)((float)((float)(COERCE_FLOAT(v114.m128_i32[3] & v16) * v17)
                                                               + (float)(COERCE_FLOAT(LODWORD(v20) & v16) * v17))
                                                       + COERCE_FLOAT(*(_DWORD *)&v116[12] & v16))
                                               - v19) & v16) )
                      {
                        v116[17] = v15 & 0xCF | 0x10;
                        v116[16] = v14 & 0xF3 | 4;
                        goto LABEL_64;
                      }
                      v116[17] = v15 | 0x30;
                    }
                    if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v113.m128_f32[2] - 0.0) & v16)
                      || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v114.m128_f32[2] - 0.0) & v16) )
                    {
LABEL_192:
                      v116[16] = v14 & 0xF3 | 4;
                      goto LABEL_64;
                    }
                    v14 |= 0xCu;
                    v116[16] = v14;
                  }
                  v27 = (char)(4 * v14) >> 6;
                  if ( v27 > 0 )
                    goto LABEL_64;
                  if ( v27 >= 0 )
                  {
                    if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v113)
                      || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v113.m128_f32[0] - v19) & v16)
                      || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v114.m128_f32[1] - v19) & v16) )
                    {
                      v116[16] = v116[16] & 0xCF | 0x10;
                      goto LABEL_64;
                    }
                    v116[16] |= 0x30u;
                  }
                  if ( v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT(v115.m128_f32[2] - v19) & v16) )
                  {
                    v13 = *(__m128 *)a2;
                    v28 = *(float *)v116;
                    v29 = *(float *)&v116[4];
                    v30 = *(float *)&v116[8];
                    v113 = *(__m128 *)a2;
                    v31 = *((__m128 *)a2 + 1);
                    v114 = v31;
                    v32 = *((__m128 *)a2 + 2);
                    v115 = v32;
                    *(_OWORD *)v116 = *((_OWORD *)a2 + 3);
                    *(_DWORD *)&v116[16] = *((_DWORD *)a2 + 16);
                    if ( v18 > COERCE_FLOAT(LODWORD(v28) & v16)
                      && v18 > COERCE_FLOAT(LODWORD(v29) & v16)
                      && v18 > COERCE_FLOAT(LODWORD(v30) & v16) )
                    {
                      goto LABEL_60;
                    }
                    *(float *)v116 = *(float *)v116
                                   + (float)((float)((float)(v31.m128_f32[0] * v29) + (float)(v13.m128_f32[0] * v28))
                                           + (float)(v32.m128_f32[0] * v30));
                    LODWORD(v33) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
                    *(float *)&v116[4] = *(float *)&v116[4]
                                       + (float)((float)((float)(_mm_shuffle_ps(v13, v13, 85).m128_f32[0] * v28)
                                                       + (float)(_mm_shuffle_ps(v31, v31, 85).m128_f32[0] * v29))
                                               + (float)(_mm_shuffle_ps(v32, v32, 85).m128_f32[0] * v30));
                    *(float *)&v116[8] = *(float *)&v116[8]
                                       + (float)((float)((float)(_mm_shuffle_ps(v31, v31, 170).m128_f32[0] * v29)
                                                       + (float)(_mm_shuffle_ps(v13, v13, 170).m128_f32[0] * v28))
                                               + (float)(_mm_shuffle_ps(v32, v32, 170).m128_f32[0] * v30));
                    if ( (char)(4 * v116[17]) >> 6 == 1 )
                    {
                      v34 = v115.m128_f32[3];
                    }
                    else
                    {
                      if ( (char)(4 * v116[17]) >> 6 >= 0 )
                      {
                        if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                   (float)((float)((float)(COERCE_FLOAT(v114.m128_i32[3] & v16) * v17)
                                                                 + (float)(COERCE_FLOAT(LODWORD(v33) & v16) * v17))
                                                         + COERCE_FLOAT(*(_DWORD *)&v116[12] & v16))
                                                 - v19) & v16) )
                        {
                          v87 = 0;
                          v88 = 16;
                        }
                        else
                        {
                          v87 = 1;
                          v88 = 48;
                        }
                        v116[17] = v88 | v116[17] & 0xCF;
                        LODWORD(v34) = _mm_shuffle_ps(v32, v32, 255).m128_u32[0];
                        v35 = v87 & (v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v34) & v16)
                                                                                  * v17) - 0.0) & v16));
                      }
                      else
                      {
                        v34 = _mm_shuffle_ps(v32, v32, 255).m128_f32[0];
                        v35 = v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(LODWORD(v34) & v16) * v17) - 0.0) & v16);
                      }
                      if ( v35 )
                      {
                        v116[16] &= 0xFCu;
                        goto LABEL_60;
                      }
                    }
                    *(_DWORD *)&v116[16] = 0;
                    *(float *)&v116[12] = *(float *)&v116[12]
                                        + (float)((float)((float)(v114.m128_f32[3] * v29) + (float)(v33 * v28))
                                                + (float)(v34 * v30));
                    goto LABEL_60;
                  }
LABEL_64:
                  if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a2) )
                  {
                    if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v113)
                      && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a2) )
                    {
                      v74 = *((float *)a2 + 1);
                      v75 = *((float *)a2 + 5);
                      v76 = *(float *)a2;
                      v77 = *((float *)a2 + 4);
                      v78 = (float)(v113.m128_f32[0] * v74) + (float)(v113.m128_f32[1] * v75);
                      v79 = (float)(v114.m128_f32[0] * v74) + (float)(v114.m128_f32[1] * v75);
                      v80 = (float)((float)(*(float *)&v116[4] * v77) + (float)(*(float *)v116 * *(float *)a2))
                          + *((float *)a2 + 12);
                      v81 = (float)((float)(*(float *)v116 * v74) + (float)(*(float *)&v116[4] * v75))
                          + *((float *)a2 + 13);
                      *(_QWORD *)&v116[12] = 0x28083F800000LL;
                      v113.m128_f32[0] = (float)(v113.m128_f32[1] * v77) + (float)(v113.m128_f32[0] * v76);
                      v113.m128_f32[1] = v78;
                      v113.m128_u64[1] = 0LL;
                      v13 = (__m128)v113.m128_u64[0];
                      v114.m128_f32[0] = (float)(v114.m128_f32[1] * v77) + (float)(v114.m128_f32[0] * v76);
                      v114.m128_f32[1] = v79;
                      *(float *)v116 = v80;
                      *(float *)&v116[4] = v81;
                      v114.m128_u64[1] = 0LL;
                      v115.m128_u64[0] = 0LL;
                      v115.m128_i32[3] = 0;
                      v82 = *((float *)a2 + 10);
                      v115.m128_f32[2] = v115.m128_f32[2] * v82;
                      *(float *)&v116[8] = (float)(*(float *)&v116[8] * v82) + *((float *)a2 + 14);
                    }
                    else
                    {
                      v42 = *(__m128 *)a2;
                      v43 = *((__m128 *)a2 + 1);
                      v44 = *((__m128 *)a2 + 2);
                      v45 = *((__m128 *)a2 + 3);
                      *(_DWORD *)&v116[16] = 0;
                      v13 = _mm_add_ps(
                              _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v113, v113, 255), v45),
                                _mm_mul_ps(_mm_shuffle_ps(v113, v113, 85), v43)),
                              _mm_add_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v113, v113, 170), v44),
                                _mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v42)));
                      v113 = v13;
                      v114 = _mm_add_ps(
                               _mm_add_ps(
                                 _mm_mul_ps(_mm_shuffle_ps(v114, v114, 255), v45),
                                 _mm_mul_ps(_mm_shuffle_ps(v114, v114, 85), v43)),
                               _mm_add_ps(
                                 _mm_mul_ps(_mm_shuffle_ps(v114, v114, 170), v44),
                                 _mm_mul_ps(_mm_shuffle_ps(v114, v114, 0), v42)));
                      v115 = _mm_add_ps(
                               _mm_add_ps(
                                 _mm_mul_ps(_mm_shuffle_ps(v115, v115, 255), v45),
                                 _mm_mul_ps(_mm_shuffle_ps(v115, v115, 85), v43)),
                               _mm_add_ps(
                                 _mm_mul_ps(_mm_shuffle_ps(v115, v115, 170), v44),
                                 _mm_mul_ps(_mm_shuffle_ps(v115, v115, 0), v42)));
                      *(__m128 *)v116 = _mm_add_ps(
                                          _mm_add_ps(
                                            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v116, *(__m128 *)v116, 255), v45),
                                            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v116, *(__m128 *)v116, 85), v43)),
                                          _mm_add_ps(
                                            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v116, *(__m128 *)v116, 170), v44),
                                            _mm_mul_ps(_mm_shuffle_ps(*(__m128 *)v116, *(__m128 *)v116, 0), v42)));
                    }
                    goto LABEL_60;
                  }
                  v55 = *(float *)a2;
                  v56 = *((float *)a2 + 10);
                  v57 = *((float *)a2 + 5);
                  v119 = *((float *)a2 + 12);
                  v117 = *((float *)a2 + 13);
                  v118 = *((float *)a2 + 14);
                  if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v55 - v19) & v16)
                    || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v57 - v19) & v16)
                    || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v56 - v19) & v16) )
                  {
                    v58 = *(float *)&v116[8];
                    v59 = v114.m128_f32[0] * v55;
                    v113.m128_f32[0] = v113.m128_f32[0] * v55;
                    v60 = v115.m128_f32[0] * v55;
                    v61 = *(float *)v116 * v55;
                    v62 = v113.m128_f32[1] * v57;
                    v63 = v114.m128_f32[1] * v57;
                    v64 = v115.m128_f32[1] * v57;
                    v65 = *(float *)&v116[4] * v57;
                    v114.m128_f32[0] = v59;
                    v115.m128_f32[0] = v60;
                    *(float *)v116 = v61;
                    v113.m128_f32[1] = v113.m128_f32[1] * v57;
                    v114.m128_f32[1] = v114.m128_f32[1] * v57;
                    v115.m128_f32[1] = v115.m128_f32[1] * v57;
                    *(float *)&v116[4] = *(float *)&v116[4] * v57;
                    if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(v56 - v19) & v16) )
                    {
                      v113.m128_f32[2] = v113.m128_f32[2] * v56;
                      v58 = *(float *)&v116[8] * v56;
                      v115.m128_f32[2] = v115.m128_f32[2] * v56;
                      v114.m128_f32[2] = v114.m128_f32[2] * v56;
                      *(float *)&v116[8] = *(float *)&v116[8] * v56;
                    }
                    v66 = v116[16] & 0xCC;
                    v116[16] &= 0xCCu;
                  }
                  else
                  {
                    v66 = v116[16];
                    v58 = *(float *)&v116[8];
                    v65 = *(float *)&v116[4];
                    v61 = *(float *)v116;
                    v64 = v115.m128_f32[1];
                    v60 = v115.m128_f32[0];
                    v63 = v114.m128_f32[1];
                    v59 = v114.m128_f32[0];
                    v62 = v113.m128_f32[1];
                  }
                  v67 = v119;
                  if ( v18 > COERCE_FLOAT(LODWORD(v119) & v16)
                    && v18 > COERCE_FLOAT(LODWORD(v117) & v16)
                    && v18 > COERCE_FLOAT(LODWORD(v118) & v16) )
                  {
                    goto LABEL_105;
                  }
                  v68 = v116[17];
                  if ( (char)(4 * v116[17]) >> 6 == 1 )
                  {
                    v69 = v115.m128_f32[3];
                  }
                  else
                  {
                    if ( (char)(4 * v116[17]) >> 6 >= 0 )
                    {
                      if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                 (float)((float)((float)(COERCE_FLOAT(v114.m128_i32[3] & v16) * v17)
                                                               + (float)(COERCE_FLOAT(v113.m128_i32[3] & v16) * v17))
                                                       + COERCE_FLOAT(*(_DWORD *)&v116[12] & v16))
                                               - v19) & v16) )
                      {
                        v92 = 0;
                        v93 = 16;
                      }
                      else
                      {
                        v92 = 1;
                        v93 = 48;
                      }
                      v69 = v115.m128_f32[3];
                      v68 = v93 | v116[17] & 0xCF;
                      v116[17] = v68;
                      v70 = v92 & (v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v115.m128_i32[3] & v16)
                                                                                * v17) - 0.0) & v16));
                    }
                    else
                    {
                      v69 = v115.m128_f32[3];
                      v70 = v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v115.m128_i32[3] & v16) * v17) - 0.0) & v16);
                    }
                    if ( v70 )
                    {
                      v71 = v65 + v117;
                      v72 = v58 + v118;
                      v73 = v61 + v119;
LABEL_102:
                      v13 = v113;
                      v116[16] = v66 & 0xFC;
                      *(float *)&v116[8] = v72;
                      *(float *)&v116[4] = v71;
                      *(float *)v116 = v73;
                      goto LABEL_60;
                    }
                  }
                  v116[17] = v68 & 0xF3;
                  v113.m128_f32[0] = v113.m128_f32[0] + (float)(v113.m128_f32[3] * v119);
                  v119 = v113.m128_f32[3] * v118;
                  v113.m128_f32[2] = v113.m128_f32[2] + (float)(v113.m128_f32[3] * v118);
                  v113.m128_f32[1] = v62 + (float)(v113.m128_f32[3] * v117);
                  v114.m128_f32[1] = v63 + (float)(v114.m128_f32[3] * v117);
                  v114.m128_f32[0] = v59 + (float)(v114.m128_f32[3] * v67);
                  v114.m128_f32[2] = v114.m128_f32[2] + (float)(v114.m128_f32[3] * v118);
                  v71 = v65 + (float)(*(float *)&v116[12] * v117);
                  v115.m128_f32[1] = v64 + (float)(v69 * v117);
                  v115.m128_f32[0] = v60 + (float)(v69 * v67);
                  v115.m128_f32[2] = v115.m128_f32[2] + (float)(v69 * v118);
                  v73 = v61 + (float)(*(float *)&v116[12] * v67);
                  v72 = v58 + (float)(*(float *)&v116[12] * v118);
                  goto LABEL_102;
                }
                if ( (v24 & 8) == 0 )
                {
                  v95 = *((_BYTE *)a2 + 65);
                  if ( (char)(4 * v24) >> 6 == 1
                    || ((char)(4 * v24) >> 6 >= 0
                      ? (v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                               (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & v16) * v17)
                                                             + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & v16) * v17))
                                                     + COERCE_FLOAT(*((_DWORD *)a2 + 15) & v16))
                                             - v19) & v16)
                       ? (v107 = 0, v108 = 16)
                       : (v107 = 1, v108 = -16),
                         v96 = v108 ^ (v108 ^ v24) & 0xCF,
                         v97 = v107 & (v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                            (float)(COERCE_FLOAT(*((_DWORD *)a2 + 11) & v16) * v17)
                                                          - 0.0) & v16)))
                      : (v96 = *((_BYTE *)a2 + 65),
                         v97 = v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a2 + 11) & v16)
                                                                            * v17) - 0.0) & v16)),
                        (v95 = v96, !v97)
                     || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 8) - 0.0) & v16)
                     || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 9) - 0.0) & v16)) )
                  {
                    *((_BYTE *)a2 + 65) = v95 & 0xF3 ^ 4;
                    v15 = v116[17];
                    v14 = v116[16];
                    v20 = v113.m128_f32[3];
                    goto LABEL_40;
                  }
                  v24 = v96 & 0xF3 ^ 0xC;
                  *((_BYTE *)a2 + 65) = v24;
                  v15 = v116[17];
                  v14 = v116[16];
                  v20 = v113.m128_f32[3];
                  v21 = v113.m128_f32[0];
                  v13 = v113;
                }
                v25 = *((_BYTE *)a2 + 64);
                if ( (char)(16 * v25) >> 6 == 1 )
                  goto LABEL_40;
                if ( (char)(16 * v25) >> 6 >= 0 )
                {
                  if ( (char)(4 * v24) >> 6 == 1 )
                    goto LABEL_184;
                  if ( (char)(4 * v24) >> 6 >= 0 )
                  {
                    v111 = v24 & 0xCF;
                    if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                               (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & v16) * v17)
                                                             + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & v16) * v17))
                                                     + COERCE_FLOAT(*((_DWORD *)a2 + 15) & v16))
                                             - v19) & v16) )
                    {
                      *((_BYTE *)a2 + 65) = v111 ^ 0x10;
                      v86 = *((_BYTE *)a2 + 64) & 0xF3 ^ 4;
                      goto LABEL_120;
                    }
                    *((_BYTE *)a2 + 65) = v111 ^ 0x30;
                  }
                  if ( v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 2) - 0.0) & v16)
                    || v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 6) - 0.0) & v16) )
                  {
LABEL_184:
                    v86 = *((_BYTE *)a2 + 64) & 0xF3 ^ 4;
                    goto LABEL_120;
                  }
                  v25 = *((_BYTE *)a2 + 64) & 0xF3 ^ 0xC;
                  *((_BYTE *)a2 + 64) = v25;
                  v15 = v116[17];
                  v14 = v116[16];
                  v20 = v113.m128_f32[3];
                  v21 = v113.m128_f32[0];
                  v13 = v113;
                }
                v26 = (char)(4 * v25) >> 6;
                if ( v26 > 0 )
                  goto LABEL_40;
                if ( v26 < 0 )
                  goto LABEL_39;
                if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a2)
                  && v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - v19) & v16)
                  && v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - v19) & v16) )
                {
                  *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0xCF ^ 0x30;
                  v15 = v116[17];
                  v14 = v116[16];
                  v20 = v113.m128_f32[3];
                  v21 = v113.m128_f32[0];
                  v13 = v113;
LABEL_39:
                  if ( v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 10) - v19) & v16) )
                  {
                    v36 = *((float *)a2 + 12);
                    v37 = *((float *)a2 + 14);
                    v38 = *((float *)a2 + 13);
                    if ( v18 <= COERCE_FLOAT(LODWORD(v36) & v16)
                      || v18 <= COERCE_FLOAT(LODWORD(v38) & v16)
                      || v18 <= COERCE_FLOAT(LODWORD(v37) & v16) )
                    {
                      if ( (char)(4 * v15) >> 6 == 1
                        || ((char)(4 * v15) >> 6 >= 0
                          ? (v18 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                   (float)((float)((float)(COERCE_FLOAT(v114.m128_i32[3] & v16) * v17)
                                                                 + (float)(COERCE_FLOAT(LODWORD(v20) & v16) * v17))
                                                         + COERCE_FLOAT(*(_DWORD *)&v116[12] & v16))
                                                 - v19) & v16)
                           ? (v83 = 0, v84 = 16)
                           : (v83 = 1, v84 = 48),
                             v15 = v84 | v15 & 0xCF,
                             v116[17] = v15,
                             v39 = v83 & (v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v115.m128_i32[3] & v16)
                                                                                       * v17) - 0.0) & v16)))
                          : (v39 = v18 > COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(v115.m128_i32[3] & v16)
                                                                                * v17) - 0.0) & v16)),
                            !v39) )
                      {
                        v89 = v113;
                        v116[17] = v15 & 0xF3;
                        v89.m128_f32[0] = v21 + (float)(v20 * v36);
                        v90 = _mm_shuffle_ps(v89, v89, 225);
                        v90.m128_f32[0] = v113.m128_f32[1] + (float)(v20 * v38);
                        v91 = _mm_shuffle_ps(v90, v90, 198);
                        v91.m128_f32[0] = v113.m128_f32[2] + (float)(v20 * v37);
                        v114.m128_f32[0] = v114.m128_f32[0] + (float)(v114.m128_f32[3] * v36);
                        v13 = _mm_shuffle_ps(v91, v91, 201);
                        v113 = v13;
                        v114.m128_f32[1] = v114.m128_f32[1] + (float)(v114.m128_f32[3] * v38);
                        v114.m128_f32[2] = v114.m128_f32[2] + (float)(v114.m128_f32[3] * v37);
                        v115.m128_f32[0] = v115.m128_f32[0] + (float)(v115.m128_f32[3] * v36);
                        v115.m128_f32[1] = v115.m128_f32[1] + (float)(v115.m128_f32[3] * v38);
                        v115.m128_f32[2] = v115.m128_f32[2] + (float)(v115.m128_f32[3] * v37);
                        *(float *)v116 = *(float *)v116 + (float)(*(float *)&v116[12] * v36);
                        *(float *)&v116[4] = *(float *)&v116[4] + (float)(*(float *)&v116[12] * v38);
                        v40 = *(float *)&v116[8] + (float)(*(float *)&v116[12] * v37);
                      }
                      else
                      {
                        *(float *)v116 = *(float *)v116 + v36;
                        v40 = *(float *)&v116[8] + v37;
                        *(float *)&v116[4] = *(float *)&v116[4] + v38;
                      }
                      *(float *)&v116[8] = v40;
                      v116[16] = v14 & 0xFC;
                    }
                    goto LABEL_60;
                  }
                  goto LABEL_40;
                }
                v86 = *((_BYTE *)a2 + 64) & 0xCF ^ 0x10;
LABEL_120:
                *((_BYTE *)a2 + 64) = v86;
                v15 = v116[17];
                v14 = v116[16];
                v20 = v113.m128_f32[3];
                goto LABEL_40;
              }
              goto LABEL_87;
            }
          }
LABEL_165:
          v21 = v13.m128_f32[0];
          v14 = v116[16] & 0xF0 | 5;
          v116[16] = v14;
          goto LABEL_28;
        }
      }
LABEL_87:
      v21 = v13.m128_f32[0];
LABEL_25:
      v14 = v14 & 0xFC | 1;
      v116[16] = v14;
      goto LABEL_28;
    }
  }
LABEL_61:
  if ( a3 )
    return v5;
  v46 = (_DWORD *)*((_QWORD *)this + 28);
  v47 = 0LL;
  if ( (*v46 & 0x1000000) != 0 )
  {
    v98 = v46[1];
    v99 = v46 + 2;
    for ( i = 0LL; (unsigned int)i < v98; ++v99 )
    {
      if ( *v99 == 8 )
        break;
      i = (unsigned int)(i + 1);
    }
    v101 = (unsigned int)v46[1];
    if ( (unsigned int)i >= (unsigned int)v101 )
      v102 = 0LL;
    else
      v102 = (_QWORD **)((char *)&v46[2 * i] + ((v101 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    v103 = *v102;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v103 + 64LL))(v103, 148LL) )
    {
      v47 = v103;
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v103 + 64LL))(v103, 48LL) )
        goto LABEL_68;
      v47 = (_QWORD *)v103[11];
    }
    if ( v47 )
      goto LABEL_75;
  }
LABEL_68:
  v48 = *((_QWORD *)this + 11);
  if ( !v48 || *(_DWORD *)(v48 + 108) != 1 )
    return v5;
  v49 = *((_DWORD *)this + 27);
  v50 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size((__int64 *)this + 10);
  v51 = 0;
  if ( (**((_DWORD **)this + 28) & 0x1000000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 64LL))(
           EffectInternal,
           51LL) )
    {
      v51 = 1;
    }
  }
  v52 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 232LL))(this);
  if ( (v49 == 1 || !v50) && !v51 && !v52 )
    return v5;
LABEL_75:
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0xF0 | 1;
  if ( v47 )
  {
    v53 = (float *)((char *)this + 140);
    v54 = v47[5] & 1;
    if ( this != (CVisual *)-140LL )
    {
      if ( (v47[5] & 1) == 0
        && *((_BYTE *)v47 + 156)
        && (*((float *)v47 + 37) != *v53 || *((float *)v47 + 38) != *((float *)this + 36)) )
      {
        v54 = 1;
      }
      *(_QWORD *)((char *)v47 + 148) = *(_QWORD *)v53;
    }
    if ( v54 )
    {
      (*(void (__fastcall **)(_QWORD *, float *, _QWORD *))(*v47 + 208LL))(v47, v53, v47 + 10);
      *((_DWORD *)v47 + 10) &= ~1u;
    }
    CMILMatrix::Multiply((const struct CMILMatrix *)(v47 + 10), (__m128 *)a2, a2);
  }
  return 1;
}
