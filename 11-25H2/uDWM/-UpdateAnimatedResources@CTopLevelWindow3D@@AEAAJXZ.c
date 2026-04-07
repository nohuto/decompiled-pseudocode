/*
 * XREFs of ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180018D00
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800904A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x1800189C4 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z @ 0x180018B08 (-CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180018CD8 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18003E74C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F138 (-CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryPr.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ @ 0x18007DC28 (-GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::UpdateAnimatedResources(CTopLevelWindow3D *this)
{
  __int64 v2; // rax
  float v3; // xmm7_4
  __int64 v4; // rax
  float v5; // xmm8_4
  __int64 v6; // rax
  __int64 v7; // rax
  float v8; // xmm9_4
  __int64 v9; // rax
  float v10; // xmm10_4
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  double v16; // xmm0_8
  int v17; // eax
  unsigned int v18; // esi
  __int64 v20; // r10
  float v21; // xmm2_4
  float v22; // xmm3_4
  int v23; // eax
  float v24; // xmm4_4
  int v25; // eax
  float v26; // xmm5_4
  __int64 v27; // rax
  float v28; // xmm1_4
  LONG v29; // r15d
  __int64 v30; // rax
  float v31; // xmm1_4
  LONG v32; // r14d
  __int64 v33; // rax
  float v34; // xmm1_4
  LONG v35; // esi
  __int64 v36; // rax
  float v37; // xmm1_4
  LONG v38; // ebx
  float DpiAdjustedFloatCornerRadius; // xmm0_4
  float v40; // xmm1_4
  int v41; // eax
  int v42; // eax
  CBaseObject *v43; // rbx
  int v44; // eax
  __int64 v45; // rax
  float v46; // xmm0_4
  int v47; // eax
  CBaseObject *v48; // rcx
  CBaseObject *v49; // [rsp+48h] [rbp-C0h] BYREF
  float v50; // [rsp+50h] [rbp-B8h]
  struct tagRECT v51; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-A0h] BYREF
  float v53; // [rsp+70h] [rbp-98h]
  struct D2D_MATRIX_3X2_F v54; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v55[8]; // [rsp+98h] [rbp-70h] BYREF

  v52 = 0LL;
  v49 = 0LL;
  v2 = *((_QWORD *)this + 43);
  if ( v2 )
    v3 = *(double *)(v2 + 48);
  else
    v3 = 0.0;
  *(float *)&v52 = v3;
  v4 = *((_QWORD *)this + 44);
  if ( v4 )
    v5 = *(double *)(v4 + 48);
  else
    v5 = 0.0;
  *((float *)&v52 + 1) = v5;
  v6 = *((_QWORD *)this + 45);
  if ( v6 )
    v53 = *(double *)(v6 + 48);
  else
    v53 = 0.0;
  v7 = *((_QWORD *)this + 49);
  if ( v7 )
  {
    v8 = *(double *)(v7 + 48);
    *(float *)&v49 = v8;
  }
  else
  {
    v8 = FLOAT_1_0;
    *(float *)&v49 = FLOAT_1_0;
  }
  v9 = *((_QWORD *)this + 50);
  if ( v9 )
  {
    v10 = *(double *)(v9 + 48);
    *((float *)&v49 + 1) = v10;
  }
  else
  {
    v10 = FLOAT_1_0;
    *((float *)&v49 + 1) = FLOAT_1_0;
  }
  v11 = *((_QWORD *)this + 51);
  if ( v11 )
    v50 = *(double *)(v11 + 48);
  else
    v50 = 1.0;
  v12 = *((_QWORD *)this + 46);
  if ( v12 )
    *(float *)&v51.left = *(double *)(v12 + 48);
  else
    v51.left = 0;
  v13 = *((_QWORD *)this + 47);
  if ( v13 )
    *(float *)&v51.top = *(double *)(v13 + 48);
  else
    v51.top = 0;
  v14 = *((_QWORD *)this + 48);
  if ( v14 )
    *(float *)&v51.right = *(double *)(v14 + 48);
  else
    v51.right = 0;
  v15 = *((_QWORD *)this + 52);
  if ( v15 )
    v16 = *(double *)(v15 + 48);
  else
    v16 = *((double *)this + 15);
  CVisual::SetOpacity(this, (float)v16);
  if ( *((_BYTE *)this + 568) )
  {
    CSecondaryWindowRepresentation::GetRelativeWindowRect(*((CSecondaryWindowRepresentation **)this + 37), &v51);
    v20 = *((_QWORD *)this + 36);
    v21 = (float)(v51.left + *(_DWORD *)(v20 + 48));
    v22 = (float)(v51.top + *(_DWORD *)(v20 + 52));
    v23 = 0;
    if ( v51.right - v51.left >= 0 )
      v23 = v51.right - v51.left;
    v24 = (float)v23;
    v25 = 0;
    if ( v51.bottom - v51.top >= 0 )
      v25 = v51.bottom - v51.top;
    v26 = (float)v25;
    *(_QWORD *)&v54.m11 = LODWORD(v8);
    v54.m21 = 0.0;
    v54.m22 = v10;
    v54.dx = v21 + v3;
    v54.dy = v22 + v5;
    v51 = 0LL;
    v27 = *((_QWORD *)this + 53);
    if ( v27 )
      v28 = *(double *)(v27 + 48);
    else
      v28 = FLOAT_1_0;
    v29 = (int)(float)((float)((float)(1.0 - v28) * *((float *)this + 143)) + (float)(v21 * v28));
    v51.left = v29;
    v30 = *((_QWORD *)this + 54);
    if ( v30 )
      v31 = *(double *)(v30 + 48);
    else
      v31 = FLOAT_1_0;
    v32 = (int)(float)((float)((float)(1.0 - v31) * *((float *)this + 144)) + (float)(v22 * v31));
    v51.top = v32;
    v33 = *((_QWORD *)this + 55);
    if ( v33 )
      v34 = *(double *)(v33 + 48);
    else
      v34 = FLOAT_1_0;
    v35 = (int)(float)((float)((float)(1.0 - v34) * *((float *)this + 145)) + (float)(v24 * v34));
    v51.right = v35;
    v36 = *((_QWORD *)this + 56);
    if ( v36 )
      v37 = *(double *)(v36 + 48);
    else
      v37 = FLOAT_1_0;
    v38 = (int)(float)((float)((float)(1.0 - v37) * *((float *)this + 146)) + (float)(v26 * v37));
    v51.bottom = v38;
    v49 = 0LL;
    DpiAdjustedFloatCornerRadius = CTopLevelWindow::GetDpiAdjustedFloatCornerRadius(*(CTopLevelWindow **)(v20 + 440));
    v40 = DpiAdjustedFloatCornerRadius;
    v41 = *((_DWORD *)this + 84);
    if ( (v41 == 2 || v41 == 12) && DpiAdjustedFloatCornerRadius > 0.0 )
    {
      v45 = *((_QWORD *)this + 57);
      if ( v45 )
        v46 = *(double *)(v45 + 48);
      else
        v46 = FLOAT_1_0;
      v49 = 0LL;
      v47 = ResourceHelper::CreateRectangleGeometry(
              (const struct D2D_POINTANDSIZE_L *)&v51,
              (float)(int)(float)((float)((float)(1.0 - v46) * v40) + (float)(v46 * 0.0)),
              &v49);
      v18 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x436u, 0LL);
        v48 = v49;
        if ( !v49 )
          return v18;
        goto LABEL_67;
      }
    }
    else
    {
      v49 = 0LL;
      v42 = ResourceHelper::CreateRectangleGeometry(v29, v32, v35, v38, &v49);
      v18 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0x43Au, 0LL);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v49);
        return v18;
      }
    }
    v43 = v49;
    v44 = CVisualProxy::SetClip(*((CVisualProxy **)this + 2), v49);
    v18 = v44;
    if ( v44 >= 0 )
    {
      if ( v43 )
        CBaseObject::Release(v43);
      goto LABEL_23;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x43Du, 0LL);
    if ( !v43 )
      return v18;
    v48 = v43;
LABEL_67:
    CBaseObject::Release(v48);
    return v18;
  }
  CTopLevelWindow3D::CreateTransformMatrix(
    (CSecondaryWindowRepresentation **)this,
    (struct D2DMatrix *)v55,
    (CTopLevelWindow3D *)((char *)this + 464),
    (const struct D2D_POINT_3F *)&v51,
    (const struct D2D_POINT_3F *)&v52,
    (CTopLevelWindow3D *)((char *)this + 476),
    (const struct D2D_POINT_3F *)&v49);
  *(_QWORD *)&v54.m11 = v55[0];
  *(_QWORD *)&v54.m[1][0] = v55[2];
  *(_QWORD *)&v54.m[2][0] = v55[6];
LABEL_23:
  v17 = CMatrixTransformProxy::Update(*((CMatrixTransformProxy **)this + 38), &v54);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x451u, 0LL);
  return v18;
}
