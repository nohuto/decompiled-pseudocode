/*
 * XREFs of ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800974E4
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008A46C (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800055E8 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800056D8 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A88C (-Width@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18000A898 (-Height@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??DMatrix4x4F@D2D1@@QEBA?AV01@AEBV01@@Z @ 0x180095E0C (--DMatrix4x4F@D2D1@@QEBA-AV01@AEBV01@@Z.c)
 *     ?GetCurrentBrush@CAnimatedTransitionVisual@@IEAAPEAVCSurfaceBrush@@XZ @ 0x180096304 (-GetCurrentBrush@CAnimatedTransitionVisual@@IEAAPEAVCSurfaceBrush@@XZ.c)
 *     ?GetMonitorRectFromRect@CTransitionVisualController@@SAXPEBUtagRECT@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180096348 (-GetMonitorRectFromRect@CTransitionVisualController@@SAXPEBUtagRECT@@PEAV-$TMilRect_@MUD2D_RECT_.c)
 *     ?PerspectiveProjection@Matrix4x4F@D2D1@@SA?AV12@M@Z @ 0x1800963F0 (-PerspectiveProjection@Matrix4x4F@D2D1@@SA-AV12@M@Z.c)
 *     ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800BB9FC (-Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 *     ?Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z @ 0x1800CE024 (-Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z.c)
 *     ??0D2DMatrix@@QEAA@AEBU_D3DMATRIX@@@Z @ 0x1800E5AAC (--0D2DMatrix@@QEAA@AEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Update3DResources(CAnimatedTransitionVisual *this)
{
  CSurfaceBrush *CurrentBrush; // rdi
  int v3; // eax
  unsigned int v4; // esi
  int v6; // edi
  __int64 v7; // rdx
  double v8; // xmm0_8
  float v9; // xmm7_4
  double v10; // xmm0_8
  float v11; // xmm6_4
  __int128 *v12; // rax
  __int128 v13; // xmm4
  __int128 v14; // xmm2
  __int128 v15; // xmm0
  float v16; // xmm5_4
  const struct D2D1::Matrix4x4F *v17; // rax
  __int128 *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm4
  __int128 v21; // xmm0
  __m128 *v22; // rax
  __m128 v23; // xmm4
  __m128 v24; // xmm2
  __m128 v25; // xmm3
  __m128 v26; // xmm5
  unsigned int v27; // r8d
  CTransform3dGroupProxy *v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  unsigned int v31; // ebx
  struct _D3DMATRIX v32; // [rsp+28h] [rbp-E0h] BYREF
  int v33; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+6Ch] [rbp-9Ch]
  int v35; // [rsp+7Ch] [rbp-8Ch]
  __int128 v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+90h] [rbp-78h]
  float v38; // [rsp+98h] [rbp-70h]
  float v39; // [rsp+9Ch] [rbp-6Ch]
  int v40; // [rsp+A0h] [rbp-68h]
  int v41; // [rsp+A4h] [rbp-64h]
  _BYTE v42[64]; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT v43; // [rsp+E8h] [rbp-20h] BYREF
  struct _D3DMATRIX v44; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  CurrentBrush = CAnimatedTransitionVisual::GetCurrentBrush(this);
  if ( CurrentBrush )
  {
    v43.right = *((_DWORD *)this + 222);
    v43.bottom = *((_DWORD *)this + 223);
    *(_QWORD *)&v43.left = 0LL;
    CRectangleVisual::SetRect((CAnimatedTransitionVisual *)((char *)this + 8), &v43);
    v3 = CSurfaceBrush::ApplyViewportTransformForView(CurrentBrush, &v43);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5FF,
        (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    v6 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
           (__int64)this + 8,
           *(_QWORD *)CurrentBrush);
    if ( v6 < 0 )
    {
      v7 = 1536LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  v43 = 0LL;
  CTransitionVisualController::GetMonitorRectFromRect((const struct tagRECT *)((char *)this + 792), (__int64)&v43);
  v8 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Width((__int64)&v43);
  v9 = (float)(*(float *)&v8 * 0.5) + *(float *)&v43.left;
  v10 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Height((__int64)&v43);
  *(__m128i *)&v32._21 = _mm_load_si128((const __m128i *)&_xmm);
  v33 = 1065353216;
  v35 = 1065353216;
  v11 = (float)(*(float *)&v10 * 0.5) + *(float *)&v43.top;
  *(__m128i *)&v32._11 = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v32._31 = _mm_load_si128((const __m128i *)&_xmm);
  *(__m128i *)&v32._41 = _mm_load_si128((const __m128i *)&_xmm);
  v34 = 0LL;
  v37 = 1065353216LL;
  v36 = 0LL;
  v40 = 0;
  v41 = 1065353216;
  LODWORD(v39) = LODWORD(v11) ^ _xmm;
  LODWORD(v38) = LODWORD(v9) ^ _xmm;
  D2D1::Matrix4x4F::operator*(
    (struct D2D1::Matrix4x4F *)&v32,
    (D2D1::Matrix4x4F *)v42,
    (const struct D2D1::Matrix4x4F *)&v33);
  v13 = *v12;
  v14 = v12[2];
  *(_OWORD *)&v32._21 = v12[1];
  v15 = v12[3];
  *(_OWORD *)&v32._11 = v13;
  *(_OWORD *)&v32._41 = v15;
  *(_OWORD *)&v32._31 = v14;
  v17 = (const struct D2D1::Matrix4x4F *)D2D1::Matrix4x4F::PerspectiveProjection((__int64)v42, v16);
  D2D1::Matrix4x4F::operator*((struct D2D1::Matrix4x4F *)&v32, (D2D1::Matrix4x4F *)&v33, v17);
  v19 = v18[2];
  v20 = *v18;
  *(_OWORD *)&v32._21 = v18[1];
  v21 = v18[3];
  v33 = 1065353216;
  *(_OWORD *)&v32._31 = v19;
  *(_OWORD *)&v32._41 = v21;
  v34 = 0LL;
  v35 = 1065353216;
  v38 = v9;
  v39 = v11;
  *(_OWORD *)&v32._11 = v20;
  v36 = 0LL;
  v37 = 1065353216LL;
  v40 = 0;
  v41 = 1065353216;
  D2D1::Matrix4x4F::operator*(
    (struct D2D1::Matrix4x4F *)&v32,
    (D2D1::Matrix4x4F *)v42,
    (const struct D2D1::Matrix4x4F *)&v33);
  v23 = *v22;
  v24 = v22[1];
  v25 = v22[2];
  v26 = v22[3];
  LODWORD(v32._11) = *(__m128 *)v22->m128_f32;
  LODWORD(v32._12) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
  LODWORD(v32._13) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
  LODWORD(v32._22) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
  LODWORD(v32._23) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
  LODWORD(v32._32) = _mm_shuffle_ps(v25, v25, 85).m128_u32[0];
  LODWORD(v32._33) = _mm_shuffle_ps(v25, v25, 170).m128_u32[0];
  LODWORD(v32._21) = v24.m128_i32[0];
  LODWORD(v32._31) = v25.m128_i32[0];
  LODWORD(v32._41) = v26.m128_i32[0];
  LODWORD(v32._44) = _mm_shuffle_ps(v26, v26, 255).m128_u32[0];
  LODWORD(v32._14) = _mm_shuffle_ps(v23, v23, 255).m128_u32[0];
  LODWORD(v32._24) = _mm_shuffle_ps(v24, v24, 255).m128_u32[0];
  LODWORD(v32._34) = _mm_shuffle_ps(v25, v25, 255).m128_u32[0];
  LODWORD(v32._42) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
  LODWORD(v32._43) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
  D2DMatrix::D2DMatrix((D2DMatrix *)&v44, &v32);
  v6 = CMatrixTransform3dProxy::Update(*((CMatrixTransform3dProxy **)this + 31), &v44);
  if ( v6 < 0 )
  {
    v7 = 1569LL;
    goto LABEL_6;
  }
  v28 = (CTransform3dGroupProxy *)*((_QWORD *)this + 32);
  v43 = (struct tagRECT)*((_OWORD *)this + 15);
  v6 = CTransform3dGroupProxy::Update(v28, (struct CMatrixTransform3dProxy **)&v43, v27);
  if ( v6 < 0 )
  {
    v7 = 1576LL;
    goto LABEL_6;
  }
  v6 = CEffectGroupProxy::Update(
         *((CEffectGroupProxy **)this + 33),
         *((float *)this + 170),
         v29,
         *((const struct CTransform3dGroupProxy **)this + 32));
  if ( v6 < 0 )
  {
    v7 = 1579LL;
    goto LABEL_6;
  }
  v30 = CVisualProxy::SetEffect(*((CVisualProxy **)this + 3), *((struct CResourceProxy **)this + 33));
  v31 = v30;
  if ( v30 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62C,
    (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v30);
  return v31;
}
