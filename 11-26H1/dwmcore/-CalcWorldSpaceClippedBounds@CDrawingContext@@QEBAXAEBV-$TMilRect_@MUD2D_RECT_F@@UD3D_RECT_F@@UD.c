/*
 * XREFs of ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180172B60
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18005E3F0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______CDrawingContext::AddTransientInkDirtyRegion_::_2_::_lambda_1___ @ 0x180172A74 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_tagRECT______std--back_.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::CalcWorldSpaceClippedBounds(__int64 a1, float *a2, float *a3)
{
  int v3; // eax
  float *v5; // r9
  float *v7; // rcx
  float *v8; // rsi
  char v9; // r11
  char v10; // r10
  struct D2D_POINT_2F *v11; // r8
  unsigned int v12; // edx
  unsigned int i; // ecx
  __int64 v14; // rcx
  int v15; // eax
  __m128 si128; // xmm2
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm4_4
  __m128 v20; // xmm6
  __int64 v21; // rcx
  int v22; // eax
  __m128 v23; // xmm0
  float v24; // xmm7_4
  float v25; // xmm1_4
  float v26; // xmm6_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float x; // xmm0_4
  unsigned __int64 v33; // rax
  float y; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  float *v37; // rcx
  const struct D2D_RECT_F *v38; // r9
  __int32 v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  __int128 v43; // [rsp+20h] [rbp-78h] BYREF
  struct D2D_POINT_2F v44[4]; // [rsp+30h] [rbp-68h] BYREF

  v3 = *(_DWORD *)(a1 + 288);
  v5 = a2;
  v43 = 0LL;
  if ( v3 )
    v7 = (float *)(*(_QWORD *)(a1 + 280) + 68LL * (unsigned int)(v3 - 1));
  else
    v7 = (float *)&CMILMatrix::Identity;
  if ( (char)(4 * *((_BYTE *)v7 + 64)) >> 6 != 1 )
  {
    if ( (char)(4 * *((_BYTE *)v7 + 64)) >> 6 < 0 )
    {
LABEL_5:
      v8 = a3 + 2;
      v9 = 1;
      *a3 = *v5 + v7[12];
      a3[1] = v5[1] + v7[13];
      a3[2] = v5[2] + v7[12];
      a3[3] = v5[3] + v7[13];
LABEL_6:
      v10 = 1;
      goto LABEL_7;
    }
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v7) )
    {
      COERCE_FLOAT(v39 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*v7 - 1.0) & v39) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v7[5] - 1.0) & v39) < 0.000081380211 )
      {
        *((_BYTE *)v7 + 64) = (_BYTE)v7[16] & 0xCF ^ 0x30;
        goto LABEL_5;
      }
    }
    *((_BYTE *)v7 + 64) = (_BYTE)v7[16] & 0xCF ^ 0x10;
  }
  if ( !CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v7) )
  {
    CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v37, v38, v44);
    v12 = 8;
    v11 = v44;
    v8 = a3 + 2;
    goto LABEL_8;
  }
  v8 = a3 + 2;
  v9 = 1;
  *a3 = (float)(v38->left * *v37) + v37[12];
  a3[1] = (float)(v38->top * v37[5]) + v37[13];
  a3[2] = (float)(v38->right * *v37) + v37[12];
  a3[3] = (float)(v38->bottom * v37[5]) + v37[13];
  if ( *v37 > 0.0 )
  {
    v8 = a3 + 2;
    if ( v37[5] > 0.0 )
    {
      v8 = a3 + 2;
      goto LABEL_6;
    }
  }
LABEL_7:
  v11 = (struct D2D_POINT_2F *)a3;
  v12 = 4;
LABEL_8:
  for ( i = 0; i < v12; ++i )
    ;
  if ( !v10 )
  {
    if ( v9 )
    {
      v40 = *a3;
      if ( *a3 > *v8 )
      {
        *a3 = *v8;
        *v8 = v40;
      }
      v41 = a3[3];
      v42 = a3[1];
      if ( v42 > v41 )
      {
        a3[1] = v41;
        a3[3] = v42;
      }
    }
    else
    {
      x = v44[0].x;
      v33 = 1LL;
      y = v44[0].y;
      v35 = v44[0].x;
      *a3 = v44[0].x;
      v36 = y;
      a3[1] = y;
      *v8 = v35;
      a3[3] = y;
      do
      {
        x = fminf(x, v44[v33].x);
        *a3 = x;
        y = fminf(y, v44[v33].y);
        a3[1] = y;
        v35 = fmaxf(v35, v44[v33].x);
        *v8 = v35;
        v36 = fmaxf(v36, v44[v33++].y);
        a3[3] = v36;
      }
      while ( v33 < 4 );
    }
  }
  v14 = *(_QWORD *)(a1 + 744);
  if ( v14 == *(_QWORD *)(a1 + 736) )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    LODWORD(v17) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
    LODWORD(v18) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
    LODWORD(v19) = _mm_shuffle_ps(si128, si128, 85).m128_u32[0];
    goto LABEL_30;
  }
  if ( *(_QWORD *)(v14 - 184) )
  {
    v15 = *(_DWORD *)(a1 + 3112);
    if ( !v15 )
    {
      v20 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      LODWORD(v17) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
      LODWORD(v18) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
      si128.m128_i32[0] = v20.m128_i32[0];
      LODWORD(v19) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
      goto LABEL_16;
    }
    si128 = *(__m128 *)(*(_QWORD *)(a1 + 3104) + 16LL * (unsigned int)(v15 - 1));
    LODWORD(v17) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
    LODWORD(v18) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
    LODWORD(v19) = _mm_shuffle_ps(si128, si128, 85).m128_u32[0];
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int128 *, struct D2D_POINT_2F *))(**(_QWORD **)(v14 - 192) + 88LL))(
      *(_QWORD *)(v14 - 192),
      &v43,
      v11);
    si128.m128_i32[0] = 0;
    v19 = 0.0;
    v18 = (float)(int)v43;
    v17 = (float)SDWORD1(v43);
  }
  v20 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
LABEL_16:
  v21 = *(_QWORD *)(a1 + 744);
  if ( v21 != *(_QWORD *)(a1 + 736) && *(_QWORD *)(v21 - 168) )
  {
    v22 = *(_DWORD *)(a1 + 3136);
    if ( v22 )
      v23 = *(__m128 *)(*(_QWORD *)(a1 + 3128) + 16LL * (unsigned int)(v22 - 1));
    else
      v23 = v20;
    if ( v23.m128_f32[0] > si128.m128_f32[0] )
      si128.m128_i32[0] = v23.m128_i32[0];
    v24 = v19;
    v25 = _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
    if ( v25 > v19 )
    {
      v19 = v25;
      v24 = v25;
    }
    v26 = v18;
    v27 = _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
    if ( v18 > v27 )
    {
      v18 = v27;
      v26 = v27;
    }
    v28 = _mm_shuffle_ps(v23, v23, 255).m128_f32[0];
    v29 = v17;
    if ( v17 > v28 )
    {
      v17 = v28;
      v29 = v28;
    }
    if ( v26 <= si128.m128_f32[0] || v29 <= v24 )
    {
      v17 = 0.0;
      v18 = 0.0;
      v19 = 0.0;
      si128.m128_i32[0] = 0;
    }
  }
LABEL_30:
  v30 = *a3;
  if ( si128.m128_f32[0] > *a3 )
  {
    *a3 = si128.m128_f32[0];
    v30 = si128.m128_f32[0];
  }
  if ( v19 > a3[1] )
    a3[1] = v19;
  if ( *v8 > v18 )
  {
    *v8 = v18;
    v30 = *a3;
  }
  v31 = a3[3];
  if ( v31 > v17 )
  {
    a3[3] = v17;
    v31 = v17;
  }
  if ( *v8 <= v30 || v31 <= a3[1] )
  {
    a3[3] = 0.0;
    *v8 = 0.0;
    *(_QWORD *)a3 = 0LL;
  }
}
