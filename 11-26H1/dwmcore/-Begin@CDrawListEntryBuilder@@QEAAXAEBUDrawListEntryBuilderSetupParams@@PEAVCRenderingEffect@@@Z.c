/*
 * XREFs of ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18000B410
 * Callers:
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180007D60 (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B7170 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListEntryBuilder::Begin(
        CDrawListEntryBuilder *this,
        const struct DrawListEntryBuilderSetupParams *a2,
        struct CRenderingEffect *a3)
{
  int v4; // eax
  __int64 v5; // rdi
  bool v6; // al
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ecx
  char v11; // al
  unsigned __int32 v12; // xmm4_4
  __m128 v13; // xmm7
  __m128 v14; // xmm8
  float v15; // xmm5_4
  float v16; // xmm6_4
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r8
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  __m128 v29; // xmm1
  __m128 v30; // xmm0
  float v31; // xmm0_4
  float v32; // xmm6_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm9_4
  float v36; // xmm0_4
  float v37; // xmm3_4
  __m128 v38; // xmm1
  float v39; // xmm0_4
  _OWORD v40[2]; // [rsp+20h] [rbp-68h] BYREF

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  v4 = 2;
  if ( *(_DWORD *)this > 2u )
    v4 = 4;
  *(_DWORD *)this = v4;
  v5 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(struct CRenderingEffect *))a3)(a3);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *((_WORD *)this + 2246) = 0;
  v6 = CCommonRegistryData::EnableMegaRects && (float)CCommonRegistryData::MegaRectSize > 0.0;
  v7 = *((_QWORD *)this + 2);
  v8 = *((_DWORD *)this + 6);
  *((_BYTE *)this + 4491) = v6;
  v9 = *(_DWORD *)(v7 + 104) | v8;
  *((_DWORD *)this + 6) = v9;
  if ( (*(_BYTE *)(v7 + 104) & 4) != 0 )
  {
    *((_BYTE *)this + 4490) = 1;
    v10 = v9 | 4;
    v11 = 1;
  }
  else
  {
    v10 = v9 & 0xFFFFFFFB;
    *((_BYTE *)this + 4490) = CCommonRegistryData::EnableCpuClipping;
    v11 = CCommonRegistryData::EnableCpuClipping;
  }
  *((_DWORD *)this + 6) = v10;
  if ( (v10 & 0x800) != 0 )
    *((_BYTE *)this + 28) = 0;
  v12 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v13 = 0LL;
  v14 = 0LL;
  if ( v11 && (*(_QWORD *)v7 || *(_QWORD *)(v7 + 16)) )
  {
    v31 = *(float *)(v7 + 60) * 0.0;
    v32 = *(float *)(v7 + 44) * 0.0;
    v33 = v32 - *(float *)(v7 + 36);
    v34 = v32 - *(float *)(v7 + 32);
    v35 = v31 - *(float *)(v7 + 52);
    v36 = v31 - *(float *)(v7 + 48);
    if ( (float)(v35 * v34) != (float)(v33 * v36) )
    {
      v37 = (float)(v35 * v34) - (float)(v33 * v36);
      v38 = (__m128)*(unsigned int *)(v7 + 92);
      v38.m128_f32[0] = v38.m128_f32[0] * 0.0;
      v14 = v38;
      v14.m128_f32[0] = v38.m128_f32[0] - *(float *)(v7 + 80);
      v38.m128_f32[0] = v38.m128_f32[0] - *(float *)(v7 + 84);
      v13 = v38;
      v13.m128_f32[0] = v38.m128_f32[0] * v36;
      v39 = v14.m128_f32[0] * v35;
      v14.m128_f32[0] = (float)((float)(v14.m128_f32[0] * v33) - (float)(v38.m128_f32[0] * v34)) / v37;
      v13.m128_f32[0] = (float)(v13.m128_f32[0] - v39) / v37;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13.m128_f32[0] - 0.0) & v12) <= 0.015625 )
      v13 = 0LL;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14.m128_f32[0] - 0.0) & v12) <= 0.015625 )
      v14 = 0LL;
  }
  v15 = *((float *)this + 1);
  if ( COERCE_FLOAT(LODWORD(v15) & v12) < 0.000081380211
    || (v16 = *((float *)this + 2), COERCE_FLOAT(LODWORD(v16) & v12) < 0.000081380211) )
  {
    *((_DWORD *)this + 1) = 1065353216;
    v15 = FLOAT_1_0;
    *((_DWORD *)this + 2) = 1065353216;
    v16 = FLOAT_1_0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & v12) <= 0.000081380211 )
    v15 = FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - 1.0) & v12) <= 0.000081380211 )
    v16 = FLOAT_1_0;
  v17 = 0LL;
  if ( v15 == 1.0 && v16 == 1.0 && v13.m128_f32[0] == 0.0 && v14.m128_f32[0] == 0.0 )
  {
    *((_BYTE *)this + 4489) = 0;
  }
  else
  {
    *(_QWORD *)((char *)v40 + 4) = 0LL;
    v27 = v13;
    v28 = (__m128)v40[0];
    *((_BYTE *)this + 4489) = 1;
    v27.m128_f32[0] = v13.m128_f32[0] * v15;
    v29 = v14;
    v28.m128_f32[0] = v15;
    v29.m128_f32[0] = v14.m128_f32[0] * v16;
    v30 = _mm_shuffle_ps(v28, v28, 147);
    v30.m128_f32[0] = v16;
    *((__m128 *)this + 2) = _mm_shuffle_ps(v30, v30, 57);
    *((_QWORD *)this + 6) = _mm_unpacklo_ps(_mm_xor_ps(v27, (__m128)_xmm), _mm_xor_ps(v29, (__m128)_xmm)).m128_u64[0];
    *((float *)this + 14) = 1.0 / v15;
    *(_QWORD *)((char *)this + 60) = 0LL;
    *((float *)this + 17) = 1.0 / v16;
    *((_DWORD *)this + 18) = v13.m128_i32[0];
    *((_DWORD *)this + 19) = v14.m128_i32[0];
  }
  v18 = *((_QWORD *)this + 22);
  v19 = (*((_QWORD *)this + 23) - v18) >> 4;
  if ( v19 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v40, v18, v19, 0LL);
    *((_QWORD *)this + 23) += -16 * v20;
  }
  v21 = *((_QWORD *)this + 266);
  v22 = (*((_QWORD *)this + 267) - v21) >> 4;
  if ( v22 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v40, v21, v22, v17);
    *((_QWORD *)this + 267) += -16 * v23;
  }
  v24 = *((_QWORD *)this + 511);
  v25 = (*((_QWORD *)this + 512) - v24) >> 1;
  if ( v25 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v40, v24, v25, v17);
    *((_QWORD *)this + 512) += -2 * v26;
  }
  *((_QWORD *)this + 558) = v17;
  *((_QWORD *)this + 510) = v17;
}
