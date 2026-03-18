/*
 * XREFs of ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x18026267C
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180198140 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180038C0C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x1800D8A20 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801C48B8 (-SetTransform@CComponentTransform2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?SetTransform@?$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x18024EEE0 (-SetTransform@-$CSurfaceBrushGeneratedT@VCSurfaceBrush@@VCBrush@@@@QEAAJPEAVCComponentTransform2.c)
 */

__int64 __fastcall CProjectedShadow::AdjustSurfaceBrush(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct CSurfaceBrush *a3)
{
  unsigned __int64 v3; // r9
  float v5; // xmm2_4
  struct D2D_MATRIX_3X2_F *v7; // r9
  char *v8; // rax
  __int64 v9; // rcx
  struct CResource *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  struct D2D_RECT_F v14; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF
  struct D2D_MATRIX_3X2_F v16; // [rsp+50h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a2 + 993);
  v5 = *((float *)this + 24);
  v15 = *((_OWORD *)a3 + 15);
  CProjectedShadow::CalculateBounds((__int64)this, (__int64)&v14, v5, v3);
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v15, &v14, (const struct D2D_RECT_F *)&v16, v7);
  *(_QWORD *)&v14.left = 0LL;
  v8 = (char *)DefaultHeap::AllocClear(0xE0uLL);
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 3);
    *((_DWORD *)v8 + 2) = 0;
    *((_QWORD *)v8 + 3) = v9;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 4) = 2LL;
    *((_QWORD *)v8 + 6) = 0LL;
    *((_DWORD *)v8 + 10) = 0;
    *((_DWORD *)v8 + 36) = 0;
    *((_DWORD *)v8 + 10) |= 1u;
    v8[156] = 0;
    *(_QWORD *)v8 = &CComponentTransform2D::`vftable';
    *((_DWORD *)v8 + 46) = 1065353216;
    *((_DWORD *)v8 + 47) = 1065353216;
    *(_OWORD *)(v8 + 196) = *(_OWORD *)&CComponentTransform2D::sc_defaultTransformMatrix.m11;
    *(_QWORD *)(v8 + 212) = 0LL;
  }
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v14, (__int64)v8);
  v10 = *(struct CResource **)&v14.left;
  if ( *(_QWORD *)&v14.left )
  {
    v12 = CComponentTransform2D::SetTransform(*(CComponentTransform2D **)&v14.left, &v16);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x47Du, 0LL);
    else
      CSurfaceBrushGeneratedT<CSurfaceBrush,CBrush>::SetTransform((struct CResource **)a3, v10);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x47Bu, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v11;
}
