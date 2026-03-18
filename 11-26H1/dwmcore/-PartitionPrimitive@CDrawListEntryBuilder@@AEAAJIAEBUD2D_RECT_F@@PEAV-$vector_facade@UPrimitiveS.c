/*
 * XREFs of ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180011AF0
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800105E0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800112A0 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180012DC0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800DD030 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18021888C (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::PartitionPrimitive(__int64 a1, int a2, float *a3, __int64 *a4)
{
  int v6; // r9d
  __int64 v8; // r8
  __int64 v9; // r8
  float v10; // xmm1_4
  int v11; // edi
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  __int64 **v16; // r14
  CShapePtr *v17; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // r14
  unsigned int v22; // r13d
  unsigned int v23; // xmm1_4
  _QWORD *v24; // r12
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm1
  __m128i v30; // xmm0
  __m128 v31; // xmm1
  __m128 v32; // xmm1
  bool v33; // zf
  __int32 v34; // xmm1_4
  __int32 v35; // xmm0_4
  __int32 v36; // xmm1_4
  int v37; // xmm0_4
  int v38; // xmm1_4
  __int64 v39; // rcx
  int v40; // eax
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v42; // [rsp+38h] [rbp-C8h] BYREF
  __m256i v43; // [rsp+48h] [rbp-B8h]
  _BYTE v44[20]; // [rsp+68h] [rbp-98h]
  __m128i si128; // [rsp+80h] [rbp-80h] BYREF
  __m128i v46; // [rsp+90h] [rbp-70h]
  __m128i v47; // [rsp+A0h] [rbp-60h]
  __m128 v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+C0h] [rbp-40h]
  _QWORD v50[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]
  __int64 v55; // [rsp+10Ch] [rbp+Ch]
  D2D1_MATRIX_3X2_F matrix; // [rsp+118h] [rbp+18h] BYREF

  v6 = a2;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a4[1] - *a4) >> 3);
  if ( v8 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&matrix, *a4, v8);
    a4[1] += -24 * v9;
  }
  v10 = a3[2];
  v11 = 1;
  v12 = *a3;
  if ( v6 )
    v11 = v6;
  if ( v10 < v12 || (v13 = a3[1], v14 = a3[3], v14 < v13) )
    v15 = 0.0;
  else
    v15 = (float)(v10 - v12) * (float)(v14 - v13);
  if ( v15 < (float)v11 )
    return 0LL;
  v16 = *(__int64 ***)(a1 + 16);
  v17 = (CShapePtr *)(v16 + 2);
  if ( *v16 )
  {
    if ( !*(_QWORD *)v17 )
    {
      v19 = **v16;
      v20 = *v16;
      v41 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, int *))(v19 + 64))(v20, &v41)
        && v41 == 1
        && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(v16 + 4)) )
      {
        return 0LL;
      }
LABEL_17:
      v21 = *(_QWORD *)(a1 + 16);
      v22 = 0;
      v49 = 0;
      if ( *(_BYTE *)(v21 + 108) )
      {
        if ( !*(_QWORD *)(v21 + 16) )
        {
          v40 = CCpuClip::ConvertContextDependentClipToLocal((CCpuClip *)v21);
          v22 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x85u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x825u, 0LL);
            return v22;
          }
        }
        v24 = *(_QWORD **)(v21 + 16);
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v30 = _mm_load_si128((const __m128i *)&_xmm);
        v46 = _mm_load_si128((const __m128i *)&_xmm);
        v32 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
        BYTE1(v49) = BYTE1(v49) & 0xC0 | 0x29;
        LOBYTE(v49) = -86;
      }
      else
      {
        v23 = *(_DWORD *)(v21 + 36);
        v24 = *(_QWORD **)v21;
        matrix.m11 = *(FLOAT *)(v21 + 32);
        *(_QWORD *)&matrix.m[0][1] = __PAIR64__(*(_DWORD *)(v21 + 48), v23);
        *(_QWORD *)&matrix.m[1][1] = __PAIR64__(*(_DWORD *)(v21 + 80), *(_DWORD *)(v21 + 52));
        matrix.dy = *(FLOAT *)(v21 + 84);
        D2D1InvertMatrix(&matrix);
        *(_OWORD *)&v43.m256i_u64[1] = 0LL;
        *(_QWORD *)&v44[12] = 0x28083F800000LL;
        v25 = (__m128)v42.m128_u64[0];
        *(_DWORD *)&v44[8] = 0;
        v25.m128_f32[0] = matrix.m11;
        v26 = *(__m128 *)v43.m256i_i8;
        v27 = _mm_shuffle_ps(v25, v25, 225);
        v26.m128_f32[0] = matrix.m21;
        v43.m256i_i64[3] = 1065353216LL;
        v28 = _mm_shuffle_ps(v26, v26, 225);
        v27.m128_f32[0] = matrix.m12;
        v28.m128_f32[0] = matrix.m22;
        *(__m128 *)v43.m256i_i8 = _mm_shuffle_ps(v28, v28, 225);
        v49 = 10248;
        v46 = *(__m128i *)v43.m256i_i8;
        v29 = *(__m128 *)v44;
        v42 = _mm_shuffle_ps(v27, v27, 225);
        v29.m128_f32[0] = matrix.dx;
        si128 = (__m128i)v42;
        v30 = *(__m128i *)&v43.m256i_u64[2];
        v31 = _mm_shuffle_ps(v29, v29, 225);
        v31.m128_f32[0] = matrix.dy;
        v32 = _mm_shuffle_ps(v31, v31, 225);
        *(__m128 *)v44 = v32;
      }
      v33 = *(_BYTE *)(a1 + 4489) == 0;
      v48 = v32;
      v47 = v30;
      if ( !v33 )
      {
        v34 = *(_DWORD *)(a1 + 36);
        v42.m128_i32[0] = *(_DWORD *)(a1 + 32);
        v35 = *(_DWORD *)(a1 + 40);
        *(_QWORD *)&v44[12] = 1065353216LL;
        v43.m256i_i32[0] = v35;
        v42.m128_i32[1] = v34;
        v36 = *(_DWORD *)(a1 + 44);
        *(_OWORD *)&v43.m256i_u64[1] = 0LL;
        v42.m128_u64[1] = 0LL;
        v37 = *(_DWORD *)(a1 + 48);
        v43.m256i_i32[1] = v36;
        v38 = *(_DWORD *)(a1 + 52);
        *(_DWORD *)v44 = v37;
        *(_DWORD *)&v44[4] = v38;
        v43.m256i_i64[3] = 1065353216LL;
        *(_DWORD *)&v44[8] = 0;
        *(_WORD *)&v44[16] = 10248;
        CMILMatrix::Multiply((CMILMatrix *)&si128, (const struct CMILMatrix *)&v42);
      }
      if ( !(*(unsigned int (__fastcall **)(_QWORD *))(*v24 + 8LL))(v24) )
      {
        if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)&si128) )
        {
          v39 = v24[2];
          v50[0] = si128.m128i_i64[0];
          v55 = 0x28083F800000LL;
          v50[2] = v46.m128i_i64[0];
          v51 = 0LL;
          *(_DWORD *)v44 = 0;
          v53 = v48.m128_u64[0];
          v50[1] = 0LL;
          v52 = 1065353216LL;
          v54 = 0;
          CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
            (const struct CRoundedRectangleGeometryData *)(v39 + 16),
            (const struct CMILMatrix *)v50,
            (struct CRoundedRectangleGeometryData *)&v42);
          CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(v11, a3, 0x3030303u, (__int64)&v42, a4);
        }
      }
      return v22;
    }
LABEL_25:
    if ( CShapePtr::IsAxisAlignedRectangle(v17) )
      return 0LL;
    goto LABEL_17;
  }
  if ( *(_QWORD *)v17 )
    goto LABEL_25;
  return 0LL;
}
