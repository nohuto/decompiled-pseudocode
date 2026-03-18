/*
 * XREFs of ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800D38D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F080 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x18003A0B8 (-GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResour.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800D3DB0 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180166FF0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurfaceRenderStrategy::GetBrushParameters(
        CVisualSurfaceRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CBrushDrawListGenerator *a3)
{
  CVisualSurface *v3; // r13
  __int64 v6; // rbx
  char v7; // r12
  char v8; // r15
  int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // r8
  float m21; // xmm6_4
  float m22; // xmm7_4
  float dx; // xmm8_4
  float dy; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm11_4
  __m128i si128; // xmm2
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // eax
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  int BrushParametersWorker; // eax
  __int64 v32; // rdi
  __int64 v34; // rax
  int CVIForRealizationSize; // eax
  CMatrixStack *v36; // rcx
  _QWORD v37[3]; // [rsp+30h] [rbp-D8h] BYREF
  struct D2D_MATRIX_3X2_F v38; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v39[5]; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v40; // [rsp+88h] [rbp-80h] BYREF
  __m128i v41; // [rsp+98h] [rbp-70h]
  _BYTE v42[20]; // [rsp+B8h] [rbp-50h]
  __m128i v43; // [rsp+D8h] [rbp-30h] BYREF
  __m128i v44; // [rsp+E8h] [rbp-20h]
  __m128i v45; // [rsp+F8h] [rbp-10h]
  __m128i v46; // [rsp+108h] [rbp+0h]
  int v47; // [rsp+118h] [rbp+10h]
  __m128i v48; // [rsp+128h] [rbp+20h] BYREF
  __m128i v49; // [rsp+138h] [rbp+30h]
  __m128i v50; // [rsp+148h] [rbp+40h]
  __m128i v51; // [rsp+158h] [rbp+50h]
  int v52; // [rsp+168h] [rbp+60h]
  struct D2D_VECTOR_2F v53; // [rsp+230h] [rbp+128h] BYREF
  float v54; // [rsp+238h] [rbp+130h] BYREF
  enum D2D1_INTERPOLATION_MODE v55; // [rsp+240h] [rbp+138h]

  v3 = (CVisualSurface *)*((_QWORD *)a2 + 23);
  v6 = 0LL;
  v7 = *((_BYTE *)v3 + 204);
  v8 = 0;
  v55 = *((_DWORD *)a2 + 45);
  memset(&v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  v9 = CSurfaceBrush::ComputeLayout(
         a2,
         (const struct D2D_SIZE_F *)((char *)a3 + 44),
         (struct CContent::LayoutData *)v38.m[1]);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x5B3u, 0LL);
    goto LABEL_12;
  }
  if ( v7 )
  {
    if ( *((_BYTE *)a2 + 141) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)&v48, (struct D2D_MATRIX_3X2_F *)v38.m[1]);
      v36 = (CMatrixStack *)(*(_QWORD *)a3 + 280LL);
      *(_DWORD *)&v42[16] = 0;
      *(_OWORD *)&v37[1] = *(_OWORD *)&v39[1];
      CMatrixStack::Top(v36, (struct CMILMatrix *)&v40);
      v45 = v50;
      v46 = v51;
      v43 = v48;
      v44 = v49;
      v47 = v52;
      CMILMatrix::Multiply((CMILMatrix *)&v43, (const struct CMILMatrix *)&v40);
      v53.x = 0.0;
      v54 = 1.0;
      if ( CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)&v43, (float *)&v53, &v54, (float *)&v37[1])
        && (v53.x < 1.0 || v54 < 1.0) )
      {
        v55 = D2D1_INTERPOLATION_MODE_MULTI_SAMPLE_LINEAR;
      }
      v8 = 1;
    }
    v34 = *(_QWORD *)a3;
    v53 = 0LL;
    CVIForRealizationSize = CVisualSurface::GetCVIForRealizationSize(
                              v3,
                              *(_DWORD *)(*(_QWORD *)(v34 + 32) + 968LL),
                              &v53,
                              &v53,
                              (struct CCachedVisualImage **)&v38);
    v10 = CVIForRealizationSize;
    if ( CVIForRealizationSize >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CVIForRealizationSize, 0x5D4u, 0LL);
LABEL_21:
    v6 = *(_QWORD *)&v38.m11;
    goto LABEL_12;
  }
  v11 = *(_QWORD *)a3;
  m21 = v38.m21;
  m22 = v38.m22;
  dx = v38.dx;
  dy = v38.dy;
  v16 = *(float *)v39;
  v17 = *((float *)v39 + 1);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)&v42[12] = 0x28003F800000LL;
  v40 = (__m128i)*(unsigned __int64 *)&v38.m[1][0];
  v19 = *(_DWORD *)(v11 + 288);
  v41 = (__m128i)*(unsigned __int64 *)&v38.m[2][0];
  *(_QWORD *)v42 = v39[0];
  *(_DWORD *)&v42[8] = 0;
  v42[16] = 8;
  v47 = 0;
  if ( v19 )
  {
    v20 = (unsigned int)(v19 - 1);
    v21 = *(_QWORD *)(v11 + 280);
    v22 = *(__m128i *)(68 * v20 + v21 + 16);
    v43 = *(__m128i *)(68 * v20 + v21);
    v23 = *(__m128i *)(68 * v20 + v21 + 32);
    v44 = v22;
    v24 = *(__m128i *)(68 * v20 + v21 + 48);
    LODWORD(v21) = *(_DWORD *)(68 * v20 + v21 + 64);
    v45 = v23;
    v46 = v24;
    v47 = v21;
  }
  else
  {
    v43 = _mm_load_si128((const __m128i *)&_xmm);
    BYTE1(v47) = BYTE1(v47) & 0xC0 | 0x29;
    v44 = _mm_load_si128((const __m128i *)&_xmm);
    v45 = si128;
    v46 = _mm_load_si128((const __m128i *)&_xmm);
    LOBYTE(v47) = -86;
  }
  v48 = v40;
  v51 = *(__m128i *)v42;
  v49 = v41;
  v50 = si128;
  v52 = *(_DWORD *)&v42[16];
  CMILMatrix::Multiply((CMILMatrix *)&v48, (const struct CMILMatrix *)&v43);
  v53.x = 0.0;
  v54 = 0.0;
  *(_OWORD *)&v37[1] = *(_OWORD *)&v39[1];
  CMILMatrix::Get2DScaleDimensionsWithPerspective((__int64)&v48, (float *)&v53, &v54, (float *)&v37[1]);
  v25 = *((_BYTE *)v3 + 204) != 0 ? 8 : 0;
  v26 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v37[1] = *(_QWORD *)((char *)v3 + v25 + 184);
  LODWORD(v26) = *(_DWORD *)(v26 + 968);
  *(float *)&v37[1] = *(float *)&v37[1] * v53.x;
  *((float *)&v37[1] + 1) = *((float *)&v37[1] + 1) * v54;
  v27 = CVisualSurface::GetCVIForRealizationSize(
          v3,
          v26,
          (const struct D2D_VECTOR_2F *)&v37[1],
          (struct D2D_VECTOR_2F *)&v37[1],
          (struct CCachedVisualImage **)&v38);
  v10 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x60Au, 0LL);
    goto LABEL_21;
  }
  v28 = *(float *)((char *)v3 + v25 + 184);
  v29 = *(float *)((char *)v3 + v25 + 188) / *((float *)&v37[1] + 1);
  v39[1] = 0LL;
  v30 = v28 / *(float *)&v37[1];
  v39[2] = v37[1];
  v38.dx = (float)(dx * v29) + (float)(m21 * 0.0);
  v38.dy = (float)(dy * v29) + (float)(m22 * 0.0);
  v38.m21 = (float)(m21 * v30) + (float)(dx * 0.0);
  *(float *)v39 = v16 + (float)((float)(m21 * 0.0) + (float)(dx * 0.0));
  v38.m22 = (float)(m22 * v30) + (float)(dy * 0.0);
  *((float *)v39 + 1) = v17 + (float)((float)(m22 * 0.0) + (float)(dy * 0.0));
LABEL_7:
  v6 = *(_QWORD *)&v38.m11;
  BrushParametersWorker = CBitmapResourceRenderStrategy::GetBrushParametersWorker(
                            a2,
                            (struct IBitmapResource *)((*(_QWORD *)&v38.m11 + 72LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)&v38.m11 >> 64)),
                            (struct CContent::LayoutData *)v38.m[1],
                            v55,
                            a3);
  v10 = BrushParametersWorker;
  if ( BrushParametersWorker < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BrushParametersWorker, 0x62Cu, 0LL);
  }
  else if ( *((_DWORD *)a3 + 10) )
  {
    v32 = *(_QWORD *)(*(_QWORD *)a3 + 7944LL);
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 208LL))(v6) == v32 )
    {
      *((_DWORD *)a3 + 13) |= 0x40u;
    }
    else if ( !v7 || v8 )
    {
      *((_DWORD *)a3 + 13) |= 0x10u;
    }
  }
LABEL_12:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v10;
}
