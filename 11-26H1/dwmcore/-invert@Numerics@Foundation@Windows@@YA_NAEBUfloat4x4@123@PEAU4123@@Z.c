/*
 * XREFs of ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0
 * Callers:
 *     TryFillRenderState @ 0x1800139C4 (TryFillRenderState.c)
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18001661C (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18005EA58 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180063680 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180063A00 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x1800643C8 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x180064D98 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBV-$CCommonTran.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x180075000 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800B3C80 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800CAB74 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800CC140 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180128124 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x18015DE78 (-EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18017C16C (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x1801A0388 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801A20A0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18020B724 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Foundation::Numerics::invert(
        Windows::Foundation::Numerics *this,
        __m128 *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  float v3; // xmm1_4
  float v4; // xmm11_4
  float v5; // xmm13_4
  float v6; // xmm15_4
  float v7; // xmm14_4
  float v8; // xmm9_4
  float v9; // xmm8_4
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm9_4
  float v24; // xmm7_4
  float v25; // xmm8_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm7_4
  float v31; // xmm15_4
  float v32; // xmm14_4
  bool result; // al
  __m128 v34; // xmm0
  float v35; // [rsp+0h] [rbp-118h]
  float v36; // [rsp+4h] [rbp-114h]
  float v37; // [rsp+8h] [rbp-110h]
  float v38; // [rsp+Ch] [rbp-10Ch]
  float v39; // [rsp+10h] [rbp-108h]
  float v40; // [rsp+14h] [rbp-104h]
  float v41; // [rsp+18h] [rbp-100h]
  float v42; // [rsp+1Ch] [rbp-FCh]
  float v43; // [rsp+20h] [rbp-F8h]
  float v44; // [rsp+28h] [rbp-F0h]
  float v45; // [rsp+120h] [rbp+8h]
  float v46; // [rsp+130h] [rbp+18h]
  float v47; // [rsp+138h] [rbp+20h]

  v3 = *((float *)this + 11);
  v35 = *(float *)this;
  v47 = *((float *)this + 1);
  v45 = *((float *)this + 2);
  v46 = *((float *)this + 3);
  v4 = *((float *)this + 15);
  v5 = *((float *)this + 13);
  v6 = *((float *)this + 10);
  v7 = *((float *)this + 9);
  v43 = *((float *)this + 12);
  v8 = (float)(v4 * v6) - (float)(*((float *)this + 14) * v3);
  v44 = *((float *)this + 8);
  v38 = v4;
  v9 = (float)(v4 * v7) - (float)(v5 * v3);
  v39 = *((float *)this + 14);
  v10 = (float)(v39 * v7) - (float)(v5 * v6);
  v41 = v5;
  v11 = (float)(v4 * v44) - (float)(v43 * v3);
  v42 = *((float *)this + 4);
  v40 = *((float *)this + 5);
  v36 = *((float *)this + 6);
  v12 = (float)(v39 * v44) - (float)(v43 * v6);
  v37 = *((float *)this + 7);
  v13 = (float)(v5 * v44) - (float)(v43 * v7);
  v14 = (float)((float)(v8 * v40) - (float)(v9 * v36)) + (float)(v10 * v37);
  LODWORD(v15) = COERCE_UNSIGNED_INT((float)((float)(v8 * v42) - (float)(v11 * v36)) + (float)(v12 * v37)) ^ _xmm;
  v16 = (float)((float)(v9 * v42) - (float)(v11 * v40)) + (float)(v13 * v37);
  LODWORD(v17) = COERCE_UNSIGNED_INT((float)((float)(v10 * v42) - (float)(v12 * v40)) + (float)(v13 * v36)) ^ _xmm;
  v18 = (float)((float)((float)(v15 * v47) + (float)(v14 * *(float *)this)) + (float)(v16 * v45)) + (float)(v17 * v46);
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18) & _xmm) < 0.0000001192092895507812 )
  {
    result = 0;
    v34 = _mm_shuffle_ps(DirectX::g_XMQNaN, DirectX::g_XMQNaN, 0);
    *a2 = v34;
    a2[1] = v34;
    a2[2] = v34;
    a2[3] = v34;
  }
  else
  {
    v19 = 1.0 / v18;
    a2->m128_f32[0] = (float)(1.0 / v18) * v14;
    a2[2].m128_f32[0] = (float)(1.0 / v18) * v16;
    a2[1].m128_f32[0] = (float)(1.0 / v18) * v15;
    a2[3].m128_f32[0] = (float)(1.0 / v18) * v17;
    a2->m128_f32[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v8 * v47) - (float)(v9 * v45)) + (float)(v10 * v46)) ^ _xmm)
                    * (float)(1.0 / v18);
    a2[1].m128_f32[1] = (float)((float)((float)(v8 * v35) - (float)(v11 * v45)) + (float)(v12 * v46))
                      * (float)(1.0 / v18);
    a2[2].m128_f32[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v9 * v35) - (float)(v11 * v47)) + (float)(v13 * v46)) ^ _xmm)
                      * (float)(1.0 / v18);
    v20 = (float)(v38 * v36) - (float)(v39 * v37);
    a2[3].m128_f32[1] = (float)((float)((float)(v10 * v35) - (float)(v12 * v47)) + (float)(v13 * v45))
                      * (float)(1.0 / v18);
    v21 = (float)(v38 * v40) - (float)(v41 * v37);
    v22 = (float)(v39 * v40) - (float)(v41 * v36);
    v23 = (float)(v38 * v42) - (float)(v43 * v37);
    v24 = (float)(v41 * v42) - (float)(v43 * v40);
    v25 = (float)(v39 * v42) - (float)(v43 * v36);
    v26 = (float)((float)(v20 * v47) - (float)(v21 * v45)) + (float)(v22 * v46);
    a2[1].m128_f32[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v20 * v35) - (float)(v23 * v45)) + (float)(v25 * v46)) ^ _xmm)
                      * v19;
    a2[2].m128_f32[2] = (float)((float)((float)(v21 * v35) - (float)(v23 * v47)) + (float)(v24 * v46)) * v19;
    a2[3].m128_f32[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v22 * v35) - (float)(v25 * v47)) + (float)(v24 * v45)) ^ _xmm)
                      * v19;
    v27 = (float)(v3 * v36) - (float)(v6 * v37);
    a2->m128_f32[2] = v26 * v19;
    v28 = (float)(v3 * v40) - (float)(v7 * v37);
    v29 = (float)(v6 * v40) - (float)(v7 * v36);
    v30 = (float)(v3 * v42) - (float)(v44 * v37);
    v31 = (float)(v6 * v42) - (float)(v44 * v36);
    v32 = (float)(v7 * v42) - (float)(v44 * v40);
    result = 1;
    a2->m128_f32[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v27 * v47) - (float)(v28 * v45)) + (float)(v29 * v46)) ^ _xmm)
                    * v19;
    a2[3].m128_f32[3] = (float)((float)((float)(v29 * v35) - (float)(v31 * v47)) + (float)(v32 * v45)) * v19;
    a2[2].m128_f32[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v28 * v35) - (float)(v30 * v47)) + (float)(v32 * v46)) ^ _xmm)
                      * v19;
    a2[1].m128_f32[3] = (float)((float)((float)(v27 * v35) - (float)(v30 * v45)) + (float)(v31 * v46)) * v19;
  }
  return result;
}
