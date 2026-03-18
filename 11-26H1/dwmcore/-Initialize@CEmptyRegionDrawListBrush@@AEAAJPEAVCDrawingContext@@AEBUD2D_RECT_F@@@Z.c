/*
 * XREFs of ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18009DB08
 * Callers:
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x18009E138 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18003731C (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180037348 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180038840 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18009CCB0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009DE60 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18009DECC (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18009DFF0 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRe.c)
 *     ?Transparent@CDrawListBitmap@@SA?AV1@XZ @ 0x1800D2E3C (-Transparent@CDrawListBitmap@@SA-AV1@XZ.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1800E9F54 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEmptyRegionDrawListBrush::Initialize(
        CEmptyRegionDrawListBrush *this,
        struct CDrawingContext *a2,
        struct D2D_RECT_F *a3)
{
  __int64 v3; // rax
  FastRegion::CRegion *v4; // rdi
  int v7; // esi
  __int64 v8; // xmm1_8
  struct D2D_RECT_F *v9; // r9
  float v10; // xmm0_4
  float v11; // edx
  float v12; // xmm0_4
  int v13; // r8d
  float v14; // xmm0_4
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  __int128 v18; // xmm2
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rcx
  CSurfaceDrawListBrush *v22; // rdx
  CSurfaceDrawListBrush *v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rdx
  const struct FastRegion::Internal::CRgnData **ContentRegion; // rax
  float v28; // [rsp+30h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v29; // [rsp+40h] [rbp-59h] BYREF
  struct D2D_MATRIX_3X2_F v30; // [rsp+48h] [rbp-51h] BYREF
  float v31; // [rsp+60h] [rbp-39h]
  float v32; // [rsp+64h] [rbp-35h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+68h] [rbp-31h] BYREF
  FastRegion::CRegion *v34; // [rsp+80h] [rbp-19h] BYREF
  _DWORD v35[18]; // [rsp+88h] [rbp-11h] BYREF

  v3 = *((_QWORD *)this + 9);
  v4 = (CEmptyRegionDrawListBrush *)((char *)this + 88);
  v7 = 0;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v3 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v3 + 24);
  v8 = *(_QWORD *)(v3 + 24);
  *(_OWORD *)&matrix.m11 = *(_OWORD *)(v3 + 8);
  *(_QWORD *)&matrix.m[2][0] = v8;
  D2D1InvertMatrix(&matrix);
  *(_OWORD *)&v30.m11 = 0LL;
  D2DMatrixHelper::TransformRectConservative((D2DMatrixHelper *)a3, (const struct D2D_RECT_F *)&matrix, &v30, v9);
  v10 = v30.m11 + 6291456.25;
  *(float *)&v29 = v10;
  v11 = v10;
  v12 = v30.m12 + 6291456.25;
  v32 = v12;
  v13 = (int)(LODWORD(v12) << 10) >> 11;
  v14 = v30.m21 + 6291456.25;
  v31 = v14;
  v28 = v30.m22 + 6291456.25;
  FastRegion::CRegion::SetRectangle(
    v4,
    (int)(LODWORD(v11) << 10) >> 11,
    v13,
    (int)(LODWORD(v14) << 10) >> 11,
    (int)(LODWORD(v28) << 10) >> 11);
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9), 4LL);
  v16 = *((_QWORD *)this + 9);
  if ( v15 )
  {
    ContentRegion = (const struct FastRegion::Internal::CRgnData **)CPrimitiveGroupDrawListGenerator::GetContentRegion(*(CPrimitiveGroupDrawListGenerator **)(v16 + 72));
    if ( ContentRegion )
      CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)v4, ContentRegion);
  }
  else
  {
    if ( *(_BYTE *)(v16 + 52) )
    {
      v35[0] = 0;
      v34 = (FastRegion::CRegion *)v35;
      v17 = CMilRectLFromD2D_RECT_F(&v30, v16 + 32);
      v18 = *(_OWORD *)v17;
      v19 = *(_QWORD *)(v17 + 8);
      if ( (int)*(_OWORD *)v17 < (int)v19 && SDWORD1(v18) < SHIDWORD(v19) )
      {
        v35[3] = HIDWORD(*(_QWORD *)v17);
        v35[4] = 16;
        v35[6] = 16;
        v35[0] = 2;
        v35[1] = v18;
        v35[2] = v19;
        v35[7] = v18;
        v35[5] = HIDWORD(v19);
        v35[8] = v19;
      }
      CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)v4, &v34);
      FastRegion::CRegion::FreeMemory(&v34);
    }
    else
    {
      **(_DWORD **)v4 = 0;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 8LL))(
           *((_QWORD *)this + 9),
           5LL) )
    {
      v26 = (*((_QWORD *)this + 9) + 552LL) & -(__int64)(*(_BYTE *)(*((_QWORD *)this + 9) + 569LL) != 0);
      if ( v26 )
      {
        *(_OWORD *)&v30.m11 = *(_OWORD *)CMilRectLFromD2D_RECT_F(&v30, v26);
        CRegion::AddRectangle(v4, (const struct tagRECT *)&v30);
      }
    }
  }
  if ( **(_DWORD **)v4 )
  {
    *(_QWORD *)&v30.m11 = &v29;
    v29 = 0LL;
    *(_QWORD *)&v30.m[1][0] = 0LL;
    LOBYTE(v30.m[2][0]) = 1;
    v20 = (__int64 *)CDrawListBitmap::Transparent(&matrix);
    LOWORD(v28) = SamplerMode::k_ClampClampLinear;
    BYTE2(v28) = 1;
    v7 = CSurfaceDrawListBrush::CreateWithTextureTransform(v20, (__int16 *)&v28, Matrix3x3::Zero, v30.m[1]);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)matrix.m[1]);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&matrix);
    if ( LOBYTE(v30.m[2][0]) )
    {
      v21 = *(_QWORD *)&v30.m[1][0];
      v22 = **(CSurfaceDrawListBrush ***)&v30.m11;
      **(_QWORD **)&v30.m11 = *(_QWORD *)&v30.m[1][0];
      if ( v22 )
        std::default_delete<CSurfaceDrawListBrush>::operator()(v21, v22);
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x6Du, 0LL);
      std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v29);
    }
    else
    {
      v23 = v29;
      v29 = 0LL;
      std::unique_ptr<CShape>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))this + 10,
        (__int64 (__fastcall ***)(_QWORD, __int64))v23);
      if ( v29 )
        std::default_delete<CSurfaceDrawListBrush>::operator()(v24, v29);
    }
  }
  return (unsigned int)v7;
}
