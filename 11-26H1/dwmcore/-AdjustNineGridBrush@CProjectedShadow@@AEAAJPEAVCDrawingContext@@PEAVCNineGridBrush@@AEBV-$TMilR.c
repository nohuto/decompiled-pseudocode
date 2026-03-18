/*
 * XREFs of ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801988A4
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180198140 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x1800D8A20 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetScale@CComponentTransform2D@@QEAAJAEBUD2DVector2@@@Z @ 0x1801BA500 (-SetScale@CComponentTransform2D@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?SetOffset@CComponentTransform2D@@QEAAJAEBUD2DVector2@@@Z @ 0x1801BBD10 (-SetOffset@CComponentTransform2D@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801DB114 (-SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetTransform@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x18024EEE0 (-SetTransform@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCComponentTransform2.c)
 */

__int64 __fastcall CProjectedShadow::AdjustNineGridBrush(__int64 a1, __int64 a2, CNineGridBrush *a3, float *a4)
{
  FLOAT m12; // xmm7_4
  FLOAT m11; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  char *v17; // rax
  __int64 v18; // rcx
  CComponentTransform2D *v19; // rbx
  unsigned int v20; // edi
  int v21; // eax
  int v22; // eax
  struct D2D_MATRIX_3X2_F v24; // [rsp+30h] [rbp-50h] BYREF
  CComponentTransform2D *v25; // [rsp+A8h] [rbp+28h] BYREF
  float v26; // [rsp+B8h] [rbp+38h] BYREF
  float v27; // [rsp+BCh] [rbp+3Ch]

  CProjectedShadow::CalculateBounds(a1, (__int64)&v24, 0.0, *(_QWORD *)(a2 + 7944));
  m12 = v24.m12;
  m11 = v24.m11;
  v9 = v24.m22 - v24.m12;
  v10 = FLOAT_32_0;
  v11 = v24.m21 - v24.m11;
  v12 = FLOAT_32_0;
  if ( (float)(v24.m21 - v24.m11) < (float)(v24.m22 - v24.m12) )
  {
    v10 = (float)(v9 / v11) * 32.0;
    v9 = v24.m21 - v24.m11;
  }
  else
  {
    v12 = (float)(v11 / v9) * 32.0;
  }
  v13 = a4[2] - *a4;
  v14 = v9 * 0.03125;
  *(_QWORD *)&v24.m11 = 0xC2800000C2800000uLL;
  v15 = (float)(v12 + 128.0) / v13;
  v25 = 0LL;
  v16 = a4[3] - a4[1];
  v26 = v15;
  v27 = (float)(v10 + 128.0) / v16;
  v17 = (char *)DefaultHeap::AllocClear(0xE0uLL);
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 24);
    *((_DWORD *)v17 + 2) = 0;
    *((_QWORD *)v17 + 3) = v18;
    *((_QWORD *)v17 + 2) = 0LL;
    *((_QWORD *)v17 + 4) = 2LL;
    *((_QWORD *)v17 + 6) = 0LL;
    *((_DWORD *)v17 + 10) = 0;
    *((_DWORD *)v17 + 36) = 0;
    *((_DWORD *)v17 + 10) |= 1u;
    v17[156] = 0;
    *(_QWORD *)v17 = &CComponentTransform2D::`vftable';
    *((_DWORD *)v17 + 46) = 1065353216;
    *((_DWORD *)v17 + 47) = 1065353216;
    *(_OWORD *)(v17 + 196) = *(_OWORD *)&CComponentTransform2D::sc_defaultTransformMatrix.m11;
    *(_QWORD *)(v17 + 212) = 0LL;
  }
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v25, (__int64)v17);
  v19 = v25;
  if ( v25 )
  {
    v21 = CComponentTransform2D::SetScale(v25, (const struct D2DVector2 *)&v26);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x42Bu, 0LL);
    }
    else
    {
      v22 = CComponentTransform2D::SetOffset(v19, (const struct D2DVector2 *)&v24);
      v20 = v22;
      if ( v22 >= 0 )
      {
        CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetTransform(*((_QWORD *)a3 + 18), v19);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
        v24.m11 = v14;
        *(_QWORD *)&v24.m[1][1] = __PAIR64__(LODWORD(m11), LODWORD(v14));
        v24.dy = m12;
        *(_QWORD *)&v24.m[0][1] = 0LL;
        CNineGridBrush::SetTransform(a3, &v24);
        return v20;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x42Cu, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
    return v20;
  }
  v20 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x429u, 0LL);
  return v20;
}
