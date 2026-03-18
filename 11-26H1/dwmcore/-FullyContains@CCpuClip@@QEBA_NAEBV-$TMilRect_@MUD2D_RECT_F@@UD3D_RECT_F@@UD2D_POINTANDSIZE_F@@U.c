/*
 * XREFs of ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CCC30
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800105E0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800E96D0 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180012DC0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800CD210 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCpuClip::FullyContains(_QWORD *a1, __m128 *a2, float *a3)
{
  _OWORD *v3; // rsi
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  int v9; // xmm1_4
  __int32 v10; // xmm0_4
  __int32 v11; // xmm1_4
  int v12; // xmm0_4
  unsigned int v13; // xmm1_4
  char v15; // di
  void (__fastcall *v16)(__int64 *, __int128 *, _QWORD); // rax
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  __m128 v21; // xmm3
  float x; // xmm5_4
  float y; // xmm10_4
  float v24; // xmm4_4
  CMILMatrix *v25; // rcx
  float v26; // xmm11_4
  __int32 v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  float v32; // xmm5_4
  float v33; // xmm6_4
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  __m128 v37; // xmm1
  __m128 v38; // xmm1
  __m128 v39; // xmm1
  unsigned __int64 v40; // rax
  float v41; // xmm1_4
  float v42; // xmm0_4
  int v43; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v44; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v45; // [rsp+2Ch] [rbp-D4h]
  __m256i v46; // [rsp+34h] [rbp-CCh]
  _BYTE v47[20]; // [rsp+54h] [rbp-ACh]
  _OWORD v48[4]; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+B0h] [rbp-50h]
  __int128 v50; // [rsp+C0h] [rbp-40h] BYREF
  struct D2D_POINT_2F v51[4]; // [rsp+D0h] [rbp-30h] BYREF

  v3 = 0LL;
  v49 = 0;
  if ( *((_BYTE *)a1 + 108) )
  {
    if ( !CShapePtr::IsAxisAlignedRectangle((__int64 **)a1 + 2)
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)a1[2] + 8LL))(a1[2]) )
    {
      return 0;
    }
    v8 = (__int64 *)a1[2];
    if ( a3 )
    {
      v28 = *a3;
      v29 = a3[2];
      v30 = a3[3];
      v31 = a3[1];
      v32 = a3[4];
      v33 = a3[5];
      *(_OWORD *)&v46.m256i_u64[1] = 0LL;
      *(_QWORD *)&v47[12] = 0x28083F800000LL;
      v45 = 0LL;
      v34 = (__m128)v44;
      *(_DWORD *)&v47[8] = 0;
      v46.m256i_i64[3] = 1065353216LL;
      v3 = v48;
      v34.m128_f32[0] = v28;
      v35 = *(__m128 *)v46.m256i_i8;
      v35.m128_f32[0] = v29;
      v36 = _mm_shuffle_ps(v34, v34, 225);
      v37 = _mm_shuffle_ps(v35, v35, 225);
      v36.m128_f32[0] = v31;
      v37.m128_f32[0] = v30;
      v48[1] = _mm_shuffle_ps(v37, v37, 225);
      v38 = *(__m128 *)v47;
      v49 = 10248;
      v48[0] = _mm_shuffle_ps(v36, v36, 225);
      v38.m128_f32[0] = v32;
      v39 = _mm_shuffle_ps(v38, v38, 225);
      v39.m128_f32[0] = v33;
      v48[2] = *(_OWORD *)&v46.m256i_u64[2];
      v48[3] = _mm_shuffle_ps(v39, v39, 225);
    }
  }
  else
  {
    v7 = (__int64 *)*a1;
    v43 = 0;
    if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *, int *))(*v7 + 64))(v7, &v43) || v43 != 1)
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1) )
    {
      return 0;
    }
    v8 = (__int64 *)*a1;
    if ( a3 )
    {
      v9 = *((_DWORD *)a3 + 1);
      *(float *)&v44 = *a3;
      v10 = *((_DWORD *)a3 + 2);
      *(_QWORD *)&v47[12] = 1065353216LL;
      v46.m256i_i32[0] = v10;
      HIDWORD(v44) = v9;
      v11 = *((_DWORD *)a3 + 3);
      *(_OWORD *)&v46.m256i_u64[1] = 0LL;
      v45 = 0LL;
      v12 = *((_DWORD *)a3 + 4);
      v46.m256i_i32[1] = v11;
      v13 = *((_DWORD *)a3 + 5);
      *(_DWORD *)v47 = v12;
      *(_QWORD *)&v47[4] = v13;
      v46.m256i_i64[3] = 1065353216LL;
      v47[16] = 8;
      v47[17] = 40;
      CMILMatrix::Multiply((const struct CMILMatrix *)&v44, (__m128 *)a1 + 2, (struct CMILMatrix *)v48);
      v3 = v48;
    }
    else
    {
      v3 = a1 + 4;
    }
  }
  if ( !v8 )
    return 0;
  if ( !(*(unsigned int (__fastcall **)(__int64 *))(*v8 + 8))(v8) )
    return CRoundedRectangleGeometryData::FillContainsRect(v8[2] + 16, a2, v3);
  v15 = 0;
  v16 = *(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(*v8 + 48);
  v50 = 0LL;
  v16(v8, &v50, 0LL);
  if ( *((float *)&v50 + 2) <= *(float *)&v50 || *((float *)&v50 + 3) <= *((float *)&v50 + 1) )
    return v15;
  if ( *(float *)&v50 <= -3.4028235e38 )
  {
    *(float *)&v50 = FLOAT_N3_4028235e38;
    v17 = FLOAT_N3_4028235e38;
  }
  else
  {
    v17 = *(float *)&v50 + -0.015625;
    *(float *)&v50 = *(float *)&v50 + -0.015625;
  }
  if ( *((float *)&v50 + 1) <= -3.4028235e38 )
  {
    *((float *)&v50 + 1) = FLOAT_N3_4028235e38;
    v18 = FLOAT_N3_4028235e38;
  }
  else
  {
    v18 = *((float *)&v50 + 1) + -0.015625;
    *((float *)&v50 + 1) = *((float *)&v50 + 1) + -0.015625;
  }
  if ( *((float *)&v50 + 2) >= 3.4028235e38 )
  {
    *((float *)&v50 + 2) = FLOAT_3_4028235e38;
    v19 = FLOAT_3_4028235e38;
  }
  else
  {
    v19 = *((float *)&v50 + 2) + 0.015625;
    *((float *)&v50 + 2) = *((float *)&v50 + 2) + 0.015625;
  }
  if ( *((float *)&v50 + 3) >= 3.4028235e38 )
  {
    *((float *)&v50 + 3) = FLOAT_3_4028235e38;
    v20 = FLOAT_3_4028235e38;
  }
  else
  {
    v20 = *((float *)&v50 + 3) + 0.015625;
    *((float *)&v50 + 3) = *((float *)&v50 + 3) + 0.015625;
  }
  if ( !v3 )
  {
    v21 = *a2;
    LODWORD(v24) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
    LODWORD(x) = _mm_shuffle_ps(*a2, *a2, 170).m128_u32[0];
    LODWORD(y) = _mm_shuffle_ps(*a2, *a2, 85).m128_u32[0];
    goto LABEL_26;
  }
  if ( (char)(4 * *((_BYTE *)v3 + 64)) >> 6 == 1 )
    goto LABEL_35;
  if ( (char)(4 * *((_BYTE *)v3 + 64)) >> 6 >= 0 )
  {
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v3) )
    {
      COERCE_FLOAT(v27 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v3 - 1.0) & v27) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v3 + 5) - 1.0) & v27) < 0.000081380211 )
      {
        *((_BYTE *)v3 + 64) = v3[4] & 0xCF ^ 0x30;
        goto LABEL_25;
      }
    }
    *((_BYTE *)v3 + 64) = v3[4] & 0xCF ^ 0x10;
LABEL_35:
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)v3) )
    {
      v26 = *((float *)v3 + 5);
      v21.m128_f32[0] = (float)(*(float *)v3 * a2->m128_f32[0]) + *((float *)v3 + 12);
      y = (float)(v26 * a2->m128_f32[1]) + *((float *)v3 + 13);
      v24 = (float)(v26 * a2->m128_f32[3]) + *((float *)v3 + 13);
      x = (float)(*(float *)v3 * a2->m128_f32[2]) + *((float *)v3 + 12);
      if ( *(float *)v3 <= 0.0 || v26 <= 0.0 )
      {
        if ( v21.m128_f32[0] > x )
        {
          v21.m128_f32[0] = (float)(*(float *)v3 * a2->m128_f32[2]) + *((float *)v3 + 12);
          x = (float)(*(float *)v3 * a2->m128_f32[0]) + *((float *)v3 + 12);
        }
        if ( y > v24 )
        {
          y = (float)(v26 * a2->m128_f32[3]) + *((float *)v3 + 13);
          v24 = (float)(*((float *)v3 + 5) * a2->m128_f32[1]) + *((float *)v3 + 13);
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective(v25, (const struct D2D_RECT_F *)a2, v51);
      v21.m128_i32[0] = LODWORD(v51[0].x);
      v40 = 1LL;
      y = v51[0].y;
      x = v51[0].x;
      v24 = v51[0].y;
      do
      {
        v41 = v51[v40].x;
        v42 = v51[v40].y;
        v21.m128_f32[0] = fminf(v21.m128_f32[0], v41);
        ++v40;
        y = fminf(y, v42);
        x = fmaxf(x, v41);
        v24 = fmaxf(v24, v42);
      }
      while ( v40 < 4 );
    }
    goto LABEL_26;
  }
LABEL_25:
  v21.m128_f32[0] = *((float *)v3 + 12) + a2->m128_f32[0];
  x = *((float *)v3 + 12) + a2->m128_f32[2];
  y = *((float *)v3 + 13) + a2->m128_f32[1];
  v24 = *((float *)v3 + 13) + a2->m128_f32[3];
LABEL_26:
  if ( x <= v21.m128_f32[0] || v24 <= y || v21.m128_f32[0] >= v17 && y >= v18 && v19 >= x && v20 >= v24 )
    return 1;
  return v15;
}
