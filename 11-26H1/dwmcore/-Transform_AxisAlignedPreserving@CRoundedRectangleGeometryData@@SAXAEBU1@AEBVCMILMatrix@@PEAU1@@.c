/*
 * XREFs of ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800DD030
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180010850 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180011AF0 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800DB414 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
        const struct CRoundedRectangleGeometryData *a1,
        const struct CMILMatrix *a2,
        struct CRoundedRectangleGeometryData *a3)
{
  bool v3; // zf
  float v5; // xmm8_4
  const struct CRoundedRectangleGeometryData *v6; // r10
  struct CRoundedRectangleGeometryData *v7; // r11
  float v8; // xmm10_4
  float v9; // xmm5_4
  float v10; // xmm7_4
  char v11; // cl
  unsigned int v12; // edi
  __m128 si128; // xmm9
  float y; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm11_4
  float v17; // xmm5_4
  float x; // xmm11_4
  char v19; // al
  char v20; // cl
  __m128 v21; // xmm3
  char *v22; // rax
  char v23; // cl
  __m128 v24; // xmm3
  __m128 v25; // xmm4
  bool v26; // dl
  bool v27; // al
  __m128i v28; // xmm2
  unsigned int v29; // edx
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  const struct CRoundedRectangleGeometryData *v32; // rax
  __m128 v33; // xmm1
  __m128 v34; // xmm0
  const struct CRoundedRectangleGeometryData *v35; // rax
  __m128 v36; // xmm1
  __m128 v37; // xmm0
  const struct CRoundedRectangleGeometryData *v38; // rax
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  const struct CRoundedRectangleGeometryData *v41; // rax
  __m128 v42; // xmm1
  __m128 v43; // xmm0
  char v44; // al
  float v45; // xmm3_4
  float v46; // xmm0_4
  __m128 v47; // xmm1
  __m128 v48; // xmm0
  char v49; // al
  char v50; // dl
  unsigned __int64 v51; // rax
  float v52; // xmm1_4
  float v53; // xmm0_4
  char v54; // dl
  struct D2D_RECT_F v55; // [rsp+20h] [rbp-C8h] BYREF
  struct D2D_POINT_2F v56[4]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = *((_BYTE *)a1 + 52) == 0;
  v5 = *((float *)a1 + 1);
  v6 = a1;
  v7 = a3;
  v8 = *(float *)a1;
  v55.left = *(FLOAT *)a1;
  v55.top = v5;
  if ( v3 )
  {
    v9 = *((float *)a1 + 2);
    v10 = *((float *)a1 + 3);
  }
  else
  {
    v9 = v8 + *((float *)a1 + 2);
    v10 = v5 + *((float *)a1 + 3);
  }
  v11 = *((_BYTE *)a2 + 64);
  v12 = 1;
  si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v55.bottom = v10;
  v55.right = v9;
  if ( (char)(4 * v11) >> 6 != 1 )
  {
    if ( (char)(4 * v11) >> 6 < 0 )
    {
LABEL_5:
      y = v5 + *((float *)a2 + 13);
      v15 = v10 + *((float *)a2 + 13);
      v16 = *((float *)a2 + 12);
      v17 = v9 + v16;
      x = v16 + v8;
      goto LABEL_6;
    }
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a2)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - 1.0) & si128.m128_i32[0]) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - 1.0) & si128.m128_i32[0]) < 0.000081380211 )
    {
      *((_BYTE *)a2 + 64) = *((_BYTE *)a2 + 64) & 0xCF ^ 0x30;
      goto LABEL_5;
    }
    v11 = *((_BYTE *)a2 + 64) & 0xCF ^ 0x10;
    *((_BYTE *)a2 + 64) = v11;
  }
  if ( v11 >> 6 == 1 )
    goto LABEL_72;
  if ( v11 >> 6 >= 0 )
  {
    v50 = *((_BYTE *)a2 + 65);
    if ( (char)(4 * v50) >> 6 != 1 )
    {
      if ( (char)(4 * v50) >> 6 < 0 )
      {
LABEL_70:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 1) - 0.0) & si128.m128_i32[0]) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 4) - 0.0) & si128.m128_i32[0]) < 0.000081380211 )
        {
          *((_BYTE *)a2 + 64) = v11 | 0xC0;
          goto LABEL_52;
        }
        goto LABEL_71;
      }
      v54 = v50 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & si128.m128_i32[0]) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & si128.m128_i32[0]) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)a2 + 15) & si128.m128_i32[0]))
                        - 1.0) & si128.m128_i32[0]) < 0.000081380211 )
      {
        *((_BYTE *)a2 + 65) = v54 ^ 0x30;
        goto LABEL_70;
      }
      *((_BYTE *)a2 + 65) = v54 ^ 0x10;
    }
LABEL_71:
    *((_BYTE *)a2 + 64) = v11 & 0x3F | 0x40;
LABEL_72:
    CMILMatrix::Transform2DRectToPerspective(a2, &v55, v56);
    x = v56[0].x;
    v51 = 1LL;
    y = v56[0].y;
    v17 = v56[0].x;
    v15 = v56[0].y;
    do
    {
      v52 = v56[v51].x;
      v53 = v56[v51].y;
      x = fminf(x, v52);
      ++v51;
      y = fminf(y, v53);
      v17 = fmaxf(v17, v52);
      v15 = fmaxf(v15, v53);
    }
    while ( v51 < 4 );
    goto LABEL_6;
  }
LABEL_52:
  v45 = *((float *)a2 + 5);
  x = (float)(*(float *)a2 * v8) + *((float *)a2 + 12);
  y = (float)(v5 * v45) + *((float *)a2 + 13);
  v17 = (float)(v9 * *(float *)a2) + *((float *)a2 + 12);
  v15 = (float)(v10 * v45) + *((float *)a2 + 13);
  if ( *(float *)a2 <= 0.0 || v45 <= 0.0 )
  {
    if ( x > v17 )
    {
      x = v17;
      v17 = (float)(*(float *)a2 * v8) + *((float *)a2 + 12);
    }
    if ( y > v15 )
    {
      v46 = y;
      y = v15;
      v15 = v46;
    }
  }
LABEL_6:
  v19 = *((_BYTE *)a2 + 65);
  if ( (char)(v19 << 6) >> 6 == 1 )
  {
LABEL_12:
    v21 = (__m128)*(unsigned int *)a2;
    v22 = (char *)a2 + 20;
    v23 = 0;
    goto LABEL_13;
  }
  if ( (char)(v19 << 6) >> 6 >= 0 )
  {
    if ( (char)(4 * v19) >> 6 != 1 )
    {
      if ( (char)(4 * v19) >> 6 < 0 )
      {
LABEL_10:
        v20 = v19;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - 0.0) & si128.m128_i32[0]) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - 0.0) & si128.m128_i32[0]) < 0.000081380211 )
        {
          v49 = *((_BYTE *)a2 + 64) & 0xC | 0x51;
          *((_BYTE *)a2 + 65) = ~(~v20 & 0xFC);
          *((_BYTE *)a2 + 64) = v49;
          goto LABEL_63;
        }
        goto LABEL_11;
      }
      v44 = v19 & 0xCF;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & si128.m128_i32[0]) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & si128.m128_i32[0]) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)a2 + 15) & si128.m128_i32[0]))
                        - 1.0) & si128.m128_i32[0]) < 0.000081380211 )
      {
        v19 = v44 ^ 0x30;
        goto LABEL_10;
      }
      v19 = v44 ^ 0x10;
    }
LABEL_11:
    *((_BYTE *)a2 + 65) = v19 & 0xFC ^ 1;
    goto LABEL_12;
  }
LABEL_63:
  v21 = (__m128)*((unsigned int *)a2 + 1);
  v22 = (char *)a2 + 16;
  v23 = 1;
LABEL_13:
  v24 = _mm_and_ps(v21, si128);
  v25 = _mm_and_ps((__m128)*(unsigned int *)v22, si128);
  if ( *((_BYTE *)v6 + 52) )
  {
    v47 = v24;
    v47.m128_f32[0] = v24.m128_f32[0] * *((float *)v6 + 4);
    v48 = v25;
    v48.m128_f32[0] = v25.m128_f32[0] * *((float *)v6 + 5);
    *((_BYTE *)v7 + 52) = 1;
    *((float *)v7 + 2) = v17 - x;
    *((float *)v7 + 3) = v15 - y;
    *(float *)v7 = x;
    *((float *)v7 + 1) = y;
    if ( v23 )
    {
      v48 = _mm_unpacklo_ps(v48, v47);
      v47.m128_u64[0] = v48.m128_u64[0];
      v48.m128_i32[0] = _mm_shuffle_ps(v48, v48, 85).m128_u32[0];
      *(_QWORD *)&v55.left = v47.m128_u64[0];
    }
    *((_DWORD *)v7 + 4) = v47.m128_i32[0];
    *((_DWORD *)v7 + 5) = v48.m128_i32[0];
  }
  else
  {
    *(float *)v7 = x;
    *((float *)v7 + 1) = y;
    *((float *)v7 + 2) = v17;
    *((float *)v7 + 3) = v15;
    *((_BYTE *)v7 + 52) = 0;
    v26 = *(float *)a2 < 0.0 || *((float *)a2 + 1) < 0.0;
    v27 = *((float *)a2 + 4) < 0.0 || *((float *)a2 + 5) < 0.0;
    if ( v26 )
    {
      if ( v27 )
      {
        v29 = 2;
        v30 = 3;
        v31 = 0;
      }
      else
      {
        v29 = 1;
        v30 = 0;
        v12 = 2;
        v31 = 3;
      }
    }
    else if ( v27 )
    {
      v31 = 1;
      v29 = 3;
      v12 = 0;
      v30 = 2;
    }
    else
    {
      v28 = _mm_load_si128((const __m128i *)&_xmm);
      v29 = _mm_cvtsi128_si32(v28);
      v12 = _mm_cvtsi128_si32(_mm_srli_si128(v28, 12));
      v30 = _mm_cvtsi128_si32(_mm_srli_si128(v28, 4));
      v31 = _mm_cvtsi128_si32(_mm_srli_si128(v28, 8));
    }
    if ( v23 )
    {
      v12 = v30;
      v30 = 3;
    }
    if ( *((_BYTE *)v6 + 52) )
    {
      v32 = v6;
    }
    else
    {
      _mm_lfence();
      v32 = (const struct CRoundedRectangleGeometryData *)((char *)v6 + 8 * v29);
    }
    v33 = v24;
    v34 = v25;
    v33.m128_f32[0] = v24.m128_f32[0] * *((float *)v32 + 4);
    v34.m128_f32[0] = v25.m128_f32[0] * *((float *)v32 + 5);
    if ( v23 )
    {
      v34 = _mm_unpacklo_ps(v34, v33);
      v33.m128_u64[0] = v34.m128_u64[0];
      v34.m128_i32[0] = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
      *(_QWORD *)&v55.left = v33.m128_u64[0];
    }
    *((_DWORD *)v7 + 4) = v33.m128_i32[0];
    *((_DWORD *)v7 + 5) = v34.m128_i32[0];
    if ( *((_BYTE *)v6 + 52) )
    {
      v35 = v6;
    }
    else
    {
      _mm_lfence();
      v35 = (const struct CRoundedRectangleGeometryData *)((char *)v6 + 8 * v30);
    }
    v36 = v24;
    v37 = v25;
    v36.m128_f32[0] = v24.m128_f32[0] * *((float *)v35 + 4);
    v37.m128_f32[0] = v25.m128_f32[0] * *((float *)v35 + 5);
    if ( v23 )
    {
      v37 = _mm_unpacklo_ps(v37, v36);
      v36.m128_u64[0] = v37.m128_u64[0];
      v37.m128_i32[0] = _mm_shuffle_ps(v37, v37, 85).m128_u32[0];
      *(_QWORD *)&v55.left = v36.m128_u64[0];
    }
    *((_DWORD *)v7 + 6) = v36.m128_i32[0];
    *((_DWORD *)v7 + 7) = v37.m128_i32[0];
    if ( *((_BYTE *)v6 + 52) )
    {
      v38 = v6;
    }
    else
    {
      _mm_lfence();
      v38 = (const struct CRoundedRectangleGeometryData *)((char *)v6 + 8 * v31);
    }
    v39 = v24;
    v40 = v25;
    v39.m128_f32[0] = v24.m128_f32[0] * *((float *)v38 + 4);
    v40.m128_f32[0] = v25.m128_f32[0] * *((float *)v38 + 5);
    if ( v23 )
    {
      v40 = _mm_unpacklo_ps(v40, v39);
      v39.m128_u64[0] = v40.m128_u64[0];
      v40.m128_i32[0] = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
      *(_QWORD *)&v55.left = v39.m128_u64[0];
    }
    *((_DWORD *)v7 + 8) = v39.m128_i32[0];
    *((_DWORD *)v7 + 9) = v40.m128_i32[0];
    if ( *((_BYTE *)v6 + 52) )
    {
      v41 = v6;
    }
    else
    {
      _mm_lfence();
      v41 = (const struct CRoundedRectangleGeometryData *)((char *)v6 + 8 * v12);
    }
    v42 = v24;
    v43 = v25;
    v42.m128_f32[0] = v24.m128_f32[0] * *((float *)v41 + 4);
    v43.m128_f32[0] = v25.m128_f32[0] * *((float *)v41 + 5);
    if ( v23 )
    {
      v43 = _mm_unpacklo_ps(v43, v42);
      v42.m128_u64[0] = v43.m128_u64[0];
      v43.m128_i32[0] = _mm_shuffle_ps(v43, v43, 85).m128_u32[0];
      *(_QWORD *)&v55.left = v42.m128_u64[0];
    }
    *((_DWORD *)v7 + 10) = v42.m128_i32[0];
    *((_DWORD *)v7 + 11) = v43.m128_i32[0];
  }
  *((float *)v7 + 12) = fminf(v24.m128_f32[0], v25.m128_f32[0]) * *((float *)v6 + 12);
}
