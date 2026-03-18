/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180039430
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x18001C13C (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800D907C (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EDE4 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180039A10 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // r13
  float v7; // xmm0_4
  __int64 v8; // rcx
  __int64 v9; // rax
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  __int32 v26; // xmm0_4
  __int32 v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm11_4
  float v33; // xmm0_4
  float v34; // xmm12_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm5_4
  float v41; // xmm11_4
  float v42; // xmm12_4
  float v43; // xmm6_4
  float v44; // xmm0_4
  float v45; // xmm8_4
  float v46; // xmm1_4
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm3_4
  __int64 v54; // rax
  __m128 v55; // [rsp+28h] [rbp-A9h] BYREF
  float v56; // [rsp+38h] [rbp-99h]
  float v57; // [rsp+3Ch] [rbp-95h]
  float v58; // [rsp+40h] [rbp-91h]
  float v59; // [rsp+44h] [rbp-8Dh]
  __int64 v60; // [rsp+48h] [rbp-89h]
  _BYTE v61[12]; // [rsp+50h] [rbp-81h] BYREF
  float v62; // [rsp+5Ch] [rbp-75h]
  float v63; // [rsp+60h] [rbp-71h]
  float v64; // [rsp+64h] [rbp-6Dh]
  __m128i si128; // [rsp+78h] [rbp-59h] BYREF
  unsigned int v66; // [rsp+88h] [rbp-49h]
  unsigned int v67; // [rsp+8Ch] [rbp-45h]
  _BYTE v68[120]; // [rsp+90h] [rbp-41h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)a2;
  *(_DWORD *)&v61[8] = *(_DWORD *)a1;
  v7 = *((float *)a1 + 1);
  v8 = *(_QWORD *)(v3 + 8);
  v9 = 0LL;
  v62 = v7;
  *(_QWORD *)v61 = 0LL;
  if ( v8 )
    v9 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v68);
  v10 = *(float *)(v3 + 48);
  v11 = *(float *)(v3 + 52);
  v55.m128_i32[2] = *(_DWORD *)(v3 + 56);
  v12 = (float)(int)v9;
  v13 = v11 * 0.0;
  v14 = v10;
  v15 = (float)(v11 * (float)SHIDWORD(v9)) + (float)(v10 * 0.0);
  v16 = *(float *)(v3 + 60);
  v57 = *(float *)(v3 + 68);
  v55.m128_f32[0] = (float)((float)(v14 * v12) + v13) + (float)((float)(0.0 - (float)(v12 * 0.0)) * v55.m128_f32[2]);
  v17 = v16;
  v55.m128_f32[1] = v15 + (float)((float)(0.0 - (float)((float)SHIDWORD(v9) * 0.0)) * v55.m128_f32[2]);
  v18 = *(float *)(v3 + 64);
  v19 = (float)(v18 * (float)SHIDWORD(v9)) + (float)(v16 * 0.0);
  v20 = *(float *)(v3 + 72);
  v21 = *(float *)(v3 + 80);
  v55.m128_f32[3] = (float)((float)(v17 * v12) + (float)(v18 * 0.0)) + (float)((float)(0.0 - (float)(v12 * 0.0)) * v57);
  v56 = v19 + (float)((float)(0.0 - (float)((float)SHIDWORD(v9) * 0.0)) * v57);
  v22 = *(float *)(v3 + 76);
  *(float *)&v60 = v21;
  v59 = (float)((float)(v22 * (float)SHIDWORD(v9)) + (float)(v20 * 0.0))
      + (float)((float)(0.0 - (float)((float)SHIDWORD(v9) * 0.0)) * v21);
  v58 = (float)((float)(v20 * v12) + (float)(v22 * 0.0)) + (float)((float)(0.0 - (float)(v12 * 0.0)) * v21);
  Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v55, (float *)a2 + 6, (float *)a2 + 7, (float *)v61);
  v23 = *(float *)a1;
  v24 = *((float *)a1 + 1);
  v25 = *(float *)(v3 + 84);
  if ( v25 == 0.0 && *(float *)(v3 + 88) == 0.0 && v23 == *(float *)(v3 + 92) && v24 == *(float *)(v3 + 96) )
  {
    v26 = LODWORD(FLOAT_1_0);
    v27 = LODWORD(FLOAT_1_0);
  }
  else
  {
    v28 = v23 - 0.0;
    v29 = v24 - 0.0;
    if ( v28 == 0.0 || v29 == 0.0 )
    {
      v27 = v55.m128_i32[3];
      v26 = v55.m128_i32[0];
    }
    else
    {
      v30 = *(float *)(v3 + 92) - v25;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v66 = 0x80000000;
      v31 = *(float *)(v3 + 96);
      v63 = v25;
      v67 = 0x80000000;
      *(_QWORD *)&v61[4] = 0LL;
      *(float *)v61 = v30 / v28;
      v64 = *(float *)(v3 + 88);
      v62 = (float)(v31 - v64) / v29;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v55,
        (const struct D2D1::Matrix3x2F *)&si128,
        (const struct D2D1::Matrix3x2F *)v61);
      v26 = v55.m128_i32[0];
      v27 = _mm_shuffle_ps(v55, v55, 255).m128_u32[0];
    }
  }
  *((_DWORD *)a2 + 4) = v26;
  *((_DWORD *)a2 + 5) = v27;
  v32 = *(float *)(v3 + 84);
  if ( COERCE_FLOAT(LODWORD(v32) & _xmm) < 8388608.0 )
    v32 = (float)(int)floorf_0(*(float *)(v3 + 84));
  v33 = ceilf_0(*(float *)(v3 + 92));
  v34 = *(float *)(v3 + 88);
  v35 = v33;
  if ( COERCE_FLOAT(LODWORD(v34) & _xmm) < 8388608.0 )
    v34 = (float)(int)floorf_0(*(float *)(v3 + 88));
  v36 = ceilf_0(*(float *)(v3 + 96));
  if ( v32 == v35 )
    v35 = v35 + 1.0;
  if ( v34 == v36 )
    v36 = v36 + 1.0;
  *((float *)a2 + 2) = v35 - v32;
  *((float *)a2 + 3) = v36 - v34;
  v37 = *(_QWORD *)(v3 + 8);
  if ( v37 )
    v2 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v37 + 32LL))(v37, v68);
  v38 = *(float *)(v3 + 48);
  v39 = *(float *)(v3 + 52);
  v40 = *(float *)(v3 + 68);
  LODWORD(v41) = LODWORD(v32) ^ _xmm;
  LODWORD(v42) = LODWORD(v34) ^ _xmm;
  v55.m128_i32[2] = *(_DWORD *)(v3 + 56);
  v57 = v40;
  v66 = LODWORD(v41);
  v67 = LODWORD(v42);
  v43 = 0.0 - (float)((float)(int)v2 * 0.0);
  v44 = v39 * 0.0;
  v45 = 0.0 - (float)((float)SHIDWORD(v2) * 0.0);
  v46 = v38;
  v47 = (float)(v39 * (float)SHIDWORD(v2)) + (float)(v38 * 0.0);
  v48 = *(float *)(v3 + 60);
  LODWORD(v60) = *(_DWORD *)(v3 + 80);
  v55.m128_f32[0] = (float)((float)(v46 * (float)(int)v2) + v44) + (float)(v55.m128_f32[2] * v43);
  v49 = v48 * (float)(int)v2;
  v55.m128_f32[1] = v47 + (float)(v55.m128_f32[2] * v45);
  v50 = *(float *)(v3 + 64);
  v51 = (float)(v50 * (float)SHIDWORD(v2)) + (float)(v48 * 0.0);
  v52 = *(float *)(v3 + 72);
  v55.m128_f32[3] = (float)(v49 + (float)(v50 * 0.0)) + (float)(v40 * v43);
  v56 = v51 + (float)(v40 * v45);
  v53 = *(float *)(v3 + 76);
  v58 = (float)((float)(v52 * (float)(int)v2) + (float)(v53 * 0.0)) + (float)(*(float *)&v60 * v43);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v59 = (float)((float)(v53 * (float)SHIDWORD(v2)) + (float)(v52 * 0.0)) + (float)(*(float *)&v60 * v45);
  v54 = Matrix3x3::operator*(&v55, v61, &si128);
  *(_OWORD *)(v5 + 48) = *(_OWORD *)v54;
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(v54 + 16);
  *(_DWORD *)(v5 + 80) = *(_DWORD *)(v54 + 32);
  *(float *)(v5 + 84) = v41 + *(float *)(v3 + 84);
  *(float *)(v5 + 88) = v42 + *(float *)(v3 + 88);
  *(float *)(v5 + 92) = v41 + *(float *)(v3 + 92);
  *(float *)(v5 + 96) = v42 + *(float *)(v3 + 96);
  *(_BYTE *)(v5 + 105) = 1;
  *(_BYTE *)(v5 + 106) = *(_BYTE *)(v3 + 106);
  *(_BYTE *)(v5 + 107) = *(_BYTE *)(v3 + 107);
}
