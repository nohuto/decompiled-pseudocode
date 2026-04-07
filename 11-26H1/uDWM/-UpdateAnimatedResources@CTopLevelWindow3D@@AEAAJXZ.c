/*
 * XREFs of ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180045488
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800452B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FE00 (-CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryPr.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800119B4 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ @ 0x180028830 (-GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA-AUtagRECT@@XZ.c)
 *     ?GetCurrentTransformValue@CTopLevelWindow3D@@AEAAMW4WindowTransformAttribute@1@M@Z @ 0x180056DC4 (-GetCurrentTransformValue@CTopLevelWindow3D@@AEAAMW4WindowTransformAttribute@1@M@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180060C40 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ @ 0x18006FE00 (-GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::UpdateAnimatedResources(CVisual **this)
{
  double CurrentTransformValue; // xmm0_8
  float v3; // xmm10_4
  __int64 v4; // rcx
  double v5; // xmm0_8
  float v6; // xmm11_4
  __int64 v7; // rcx
  double v8; // xmm0_8
  FLOAT v9; // xmm12_4
  __int64 v10; // rcx
  double v11; // xmm0_8
  FLOAT v12; // xmm13_4
  __int64 v13; // rcx
  double v14; // xmm0_8
  __int64 v15; // rcx
  __int64 v16; // r8
  CVisual *v17; // rcx
  int v18; // r9d
  int v19; // ecx
  float v20; // xmm8_4
  float v21; // xmm9_4
  int v22; // eax
  float v23; // xmm14_4
  int v24; // eax
  float v25; // xmm15_4
  int v26; // eax
  unsigned int v27; // ebx
  double v28; // xmm0_8
  int v29; // ebx
  __int64 v30; // rcx
  double v31; // xmm0_8
  int v32; // esi
  __int64 v33; // rcx
  double v34; // xmm0_8
  int v35; // r14d
  __int64 v36; // rcx
  double v37; // xmm0_8
  int v38; // r15d
  float DpiAdjustedFloatCornerRadius; // xmm0_4
  float v40; // xmm1_4
  int v41; // eax
  double v42; // xmm0_8
  int RectangleGeometry; // eax
  int v44; // eax
  int v45; // eax
  struct tagRECT v47; // [rsp+38h] [rbp-99h] BYREF
  __int128 v48; // [rsp+48h] [rbp-89h] BYREF
  D2D_MATRIX_3X2_F v49; // [rsp+58h] [rbp-79h] BYREF

  CurrentTransformValue = CTopLevelWindow3D::GetCurrentTransformValue(this, 0LL);
  v3 = *(float *)&CurrentTransformValue;
  v5 = CTopLevelWindow3D::GetCurrentTransformValue(v4, 1LL);
  v6 = *(float *)&v5;
  v8 = CTopLevelWindow3D::GetCurrentTransformValue(v7, 2LL);
  v9 = *(float *)&v8;
  v11 = CTopLevelWindow3D::GetCurrentTransformValue(v10, 3LL);
  v12 = *(float *)&v11;
  v14 = CTopLevelWindow3D::GetCurrentTransformValue(v13, 4LL);
  CVisual::SetOpacity(this[32], *(float *)&v14 * *(double *)(*(_QWORD *)(*(_QWORD *)(v15 + 232) + 440LL) + 112LL), v16);
  CSecondaryWindowRepresentation::GetRelativeWindowRect(this[30], &v47);
  if ( *((_BYTE *)this + 424) )
  {
    v17 = this[29];
    v18 = *((_DWORD *)v17 + 13);
    v19 = *((_DWORD *)v17 + 12);
  }
  else
  {
    v18 = *((_DWORD *)this + 55);
    v19 = *((_DWORD *)this + 54);
  }
  v20 = (float)(v47.left + v19);
  v21 = (float)(v47.top + v18);
  v22 = 0;
  if ( v47.right - v47.left >= 0 )
    v22 = v47.right - v47.left;
  v23 = (float)v22;
  v24 = 0;
  if ( v47.bottom - v47.top >= 0 )
    v24 = v47.bottom - v47.top;
  v25 = (float)v24;
  v49.m11 = v9;
  *(_QWORD *)&v49.m[0][1] = 0LL;
  v49.m22 = v12;
  v49.dx = v20 + v3;
  v49.dy = v21 + v6;
  v26 = CMatrixTransformProxy::Update(this[31], &v49);
  v27 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x3E4u, 0LL);
    return v27;
  }
  if ( *((_BYTE *)this + 424) )
  {
    v48 = 0LL;
    v28 = CTopLevelWindow3D::GetCurrentTransformValue(this, 5LL);
    v29 = (int)(float)((float)((float)(1.0 - *(float *)&v28) * *((float *)this + 107)) + (float)(v20 * *(float *)&v28));
    LODWORD(v48) = v29;
    v31 = CTopLevelWindow3D::GetCurrentTransformValue(v30, 5LL);
    v32 = (int)(float)((float)((float)(1.0 - *(float *)&v31) * *((float *)this + 108)) + (float)(v21 * *(float *)&v31));
    DWORD1(v48) = v32;
    v34 = CTopLevelWindow3D::GetCurrentTransformValue(v33, 5LL);
    v35 = (int)(float)((float)((float)(1.0 - *(float *)&v34) * *((float *)this + 109)) + (float)(v23 * *(float *)&v34));
    DWORD2(v48) = v35;
    v37 = CTopLevelWindow3D::GetCurrentTransformValue(v36, 5LL);
    v38 = (int)(float)((float)((float)(1.0 - *(float *)&v37) * *((float *)this + 110)) + (float)(v25 * *(float *)&v37));
    HIDWORD(v48) = v38;
    *(_QWORD *)&v47.left = 0LL;
    DpiAdjustedFloatCornerRadius = CTopLevelWindow::GetDpiAdjustedFloatCornerRadius(*((CTopLevelWindow **)this[29] + 55));
    v40 = DpiAdjustedFloatCornerRadius;
    v41 = *((_DWORD *)this + 70);
    if ( (v41 == 2 || v41 == 12) && DpiAdjustedFloatCornerRadius > 0.0 )
    {
      v42 = CTopLevelWindow3D::GetCurrentTransformValue(this, 5LL);
      *(_QWORD *)&v47.left = 0LL;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            (const struct D2D_POINTANDSIZE_L *)&v48,
                            (float)(int)(float)((float)((float)(1.0 - *(float *)&v42) * v40)
                                              + (float)(*(float *)&v42 * 0.0)),
                            (struct CRectangleGeometryProxy **)&v47);
      v27 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x410u, 0LL);
LABEL_15:
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)&v47);
        return v27;
      }
    }
    else
    {
      *(_QWORD *)&v47.left = 0LL;
      v44 = ResourceHelper::CreateRectangleGeometry(v29, v32, v35, v38, (struct CRectangleGeometryProxy **)&v47);
      v27 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x414u, 0LL);
        goto LABEL_15;
      }
    }
    v45 = CVisualProxy::SetClip(this[2], *(struct CBaseGeometryProxy **)&v47.left);
    v27 = v45;
    if ( v45 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x417u, 0LL);
    goto LABEL_15;
  }
  return v27;
}
