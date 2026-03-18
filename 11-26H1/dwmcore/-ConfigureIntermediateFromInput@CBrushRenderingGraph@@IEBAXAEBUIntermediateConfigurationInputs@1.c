/*
 * XREFs of ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800375A8
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x18001C13C (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800D907C (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001EDE4 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?PixelInflate@@YA?AUD2D_RECT_F@@AEBU1@@Z @ 0x1800368B4 (-PixelInflate@@YA-AUD2D_RECT_F@@AEBU1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180039A10 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800949F0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x180171B90 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromInput(
        CBrushRenderingGraph *this,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a2,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a3)
{
  float *v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // r15
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rax
  float *v11; // rdi
  struct D2D_RECT_F *v12; // r9
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  FLOAT v16; // xmm2_4
  float v17; // xmm0_4
  FLOAT v18; // xmm3_4
  FLOAT v19; // xmm1_4
  const struct D2D_RECT_F *v20; // r8
  __m128 v21; // xmm1
  float v22; // xmm2_4
  float v23; // xmm3_4
  D2D_RECT_F v24; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v25[8]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v26[40]; // [rsp+40h] [rbp-21h] BYREF
  struct D2D_RECT_F v27; // [rsp+68h] [rbp+7h] BYREF
  float v28; // [rsp+78h] [rbp+17h]
  float v29; // [rsp+7Ch] [rbp+1Bh]

  v3 = (float *)((char *)a3 + 24);
  v4 = *((_QWORD *)a2 + 2);
  v6 = *(_QWORD *)a3;
  v24.right = *(FLOAT *)a2;
  v8 = *(_BYTE *)(v4 + 44) == 0;
  v24.bottom = *((FLOAT *)a2 + 1);
  *(_QWORD *)&v24.left = 0LL;
  if ( v8 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 56) + 8LL))(*(_QWORD *)(v4 + 56), 2LL) )
    {
      v11 = v3 + 1;
      *(_QWORD *)v3 = *((_QWORD *)a2 + 1);
      goto LABEL_6;
    }
    CSurfaceDrawListBrush::ComputeLocalToSourceTransform(*(CSurfaceDrawListBrush **)(v4 + 56), (struct Matrix3x3 *)v26);
  }
  else
  {
    v9 = *(_QWORD *)(v4 + 8);
    v10 = 0LL;
    if ( v9 )
      v10 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 32LL))(v9, v25);
    *(_QWORD *)&v27.top = 0LL;
    v27.left = (float)(int)v10;
    v27.bottom = (float)SHIDWORD(v10);
    v28 = 0.0 - (float)((float)(int)v10 * 0.0);
    v29 = 0.0 - (float)((float)SHIDWORD(v10) * 0.0);
    Matrix3x3::operator*(v4 + 48, v26, &v27);
  }
  v11 = v3 + 1;
  Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v26, v3, v3 + 1, &v24.left);
LABEL_6:
  v13 = fminf(*((float *)a2 + 2), *v3);
  v14 = *((float *)a3 + 4);
  v15 = *((float *)a3 + 5);
  *(_QWORD *)&v24.left = 0LL;
  *(_QWORD *)&v27.top = 0LL;
  v16 = fmaxf(v14, v13);
  v17 = fminf(*((float *)a2 + 3), *v11);
  *((FLOAT *)a3 + 4) = v16;
  v18 = fmaxf(v15, v17);
  v27.left = v16;
  *((FLOAT *)a3 + 5) = v18;
  v19 = *((float *)a2 + 1);
  v24.right = *(FLOAT *)a2;
  v27.bottom = v18;
  v24.bottom = v19;
  v28 = 0.0 - (float)(v16 * 0.0);
  v29 = 0.0 - (float)(v18 * 0.0);
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
    (D2DMatrixHelper *)&v24,
    &v27,
    (const struct D2D_MATRIX_3X2_F *)(v6 + 84),
    v12);
  v21 = (__m128)_mm_loadu_si128((const __m128i *)PixelInflate(&v24, v20));
  *((_DWORD *)a3 + 2) = _mm_shuffle_ps(v21, v21, 170).m128_u32[0];
  *((_DWORD *)a3 + 3) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
  v22 = *((float *)a3 + 4);
  v23 = *((float *)a3 + 5);
  *(float *)(v6 + 48) = v22;
  *(float *)(v6 + 64) = v23;
  *(_QWORD *)(v6 + 52) = 0LL;
  *(_DWORD *)(v6 + 60) = 0;
  *(_DWORD *)(v6 + 68) = 0;
  *(_DWORD *)(v6 + 80) = 1065353216;
  *(float *)(v6 + 72) = 0.0 - (float)(v22 * 0.0);
  *(float *)(v6 + 76) = 0.0 - (float)(v23 * 0.0);
  *(_DWORD *)(v6 + 40) |= 0x10u;
}
