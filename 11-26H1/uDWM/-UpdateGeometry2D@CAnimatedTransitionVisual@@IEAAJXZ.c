/*
 * XREFs of ?UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096EB8
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089430 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180022470 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x180022900 (-D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180060C40 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180060E50 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18007E84C (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?GetCurrentBrush@CAnimatedTransitionVisual@@IEAAPEAVCSurfaceBrush@@XZ @ 0x180096304 (-GetCurrentBrush@CAnimatedTransitionVisual@@IEAAPEAVCSurfaceBrush@@XZ.c)
 *     ?SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009BC60 (-SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2D(CAnimatedTransitionVisual *this)
{
  unsigned __int32 v1; // xmm4_4
  signed int v3; // ecx
  char v4; // r14
  char v5; // di
  char v6; // si
  signed int v7; // edx
  int v8; // r15d
  float v9; // xmm10_4
  int v10; // r12d
  __m128i v11; // xmm6
  __m128i v12; // xmm7
  float v13; // xmm6_4
  _DWORD *v14; // rax
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  int v22; // xmm3_4
  int v23; // xmm1_4
  int v24; // xmm4_4
  float v25; // xmm5_4
  char v26; // si
  float v27; // xmm0_4
  int *v28; // r8
  CMatrixTransformProxy *v29; // rcx
  int v30; // eax
  unsigned int v31; // edi
  CSurfaceBrush *CurrentBrush; // rdi
  char *v34; // rsi
  __m128i v35; // xmm1
  float v36; // xmm0_4
  int v37; // ebx
  __int64 v38; // rdx
  struct D2D_MATRIX_3X2_F v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v43[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v44[64]; // [rsp+B0h] [rbp-50h] BYREF
  struct D2D_MATRIX_3X2_F v45; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v1 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v3 = *((_DWORD *)this + 198);
  v4 = 0;
  v5 = 0;
  *(_QWORD *)&v39.m11 = 0LL;
  v6 = 0;
  v7 = *((_DWORD *)this + 199);
  v8 = 0;
  v9 = *((float *)this + 175);
  v10 = 0;
  v42 = 0LL;
  *(_QWORD *)v41 = 0LL;
  v40 = 0LL;
  v11 = _mm_cvtsi32_si128(v3);
  v12 = _mm_cvtsi32_si128(v7);
  if ( *((_DWORD *)this + 200) - v3 >= 0 )
    v8 = *((_DWORD *)this + 200) - v3;
  LODWORD(v13) = _mm_cvtepi32_ps(v11).m128_u32[0];
  if ( *((_DWORD *)this + 201) - v7 >= 0 )
    v10 = *((_DWORD *)this + 201) - v7;
  v14 = (_DWORD *)((char *)this + 704);
  v15 = (float)v10;
  v16 = (float)v8;
  v17 = _mm_cvtepi32_ps(v12).m128_f32[0];
  v18 = (float)((float)v8 * 0.5) + v13;
  v19 = (float)((float)v10 * 0.5) + v17;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 - 1.0) & v1) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v14 - 1.0) & v1) >= 0.0000011920929 )
  {
    v20 = v16 * *((float *)this + 178);
    v5 = 1;
    HIDWORD(v42) = *v14;
    v21 = v15 * *((float *)this + 179);
    *(float *)&v42 = v9;
    v39.m11 = v20 + v13;
    v39.m12 = v21 + v17;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 181) & v1) >= 0.0000011920929 )
  {
    v4 = 1;
    *(float *)&v22 = (float)(v15 * *((float *)this + 185)) + v17;
    *(float *)v41 = (float)(v16 * *((float *)this + 184)) + v13;
    v41[1] = v22;
  }
  v23 = *((_DWORD *)this + 172);
  if ( COERCE_FLOAT(v23 & v1) >= 0.0000011920929 || COERCE_FLOAT(*((_DWORD *)this + 173) & v1) >= 0.0000011920929 )
  {
    v6 = 1;
    HIDWORD(v40) = *((_DWORD *)this + 173);
    LODWORD(v40) = v23;
  }
  D2DMatrixTranslation((struct D2DMatrix *)v43, (float)v3, (float)v7, 0.0);
  if ( v25 <= COERCE_FLOAT(*((_DWORD *)this + 219) & v24) )
  {
    D2DMatrixTranslation(
      (struct D2DMatrix *)v44,
      COERCE_FLOAT(LODWORD(v18) ^ _xmm),
      COERCE_FLOAT(LODWORD(v19) ^ _xmm),
      0.0);
    D2DMatrixMultiply((struct D2DMatrix *)v43, (const struct D2DMatrix *)v43, (const struct D2DMatrix *)v44);
    D2DMatrixRotationZ((struct D2DMatrix *)v44, *((float *)this + 219) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)v43, (const struct D2DMatrix *)v43, (const struct D2DMatrix *)v44);
    D2DMatrixTranslation((struct D2DMatrix *)v44, v18, v19, 0.0);
    D2DMatrixMultiply((struct D2DMatrix *)v43, (const struct D2DMatrix *)v43, (const struct D2DMatrix *)v44);
  }
  if ( v5 || v4 || v6 )
  {
    v26 = -v6;
    if ( v4 )
    {
      v27 = *((float *)this + 181);
      v28 = v41;
    }
    else
    {
      v27 = 0.0;
      v28 = 0LL;
    }
    D2DMatrixTransformation2D(
      (struct D2DMatrix *)v44,
      (const struct D2DVector2 *)((unsigned __int64)&v39 & -(__int64)(v5 != 0)),
      0.0,
      (const struct D2DVector2 *)((unsigned __int64)&v42 & -(__int64)(v5 != 0)),
      (const struct D2DVector2 *)v28,
      v27,
      (const struct D2DVector2 *)((unsigned __int64)&v40 & -(__int64)(v26 != 0)));
    D2DMatrixMultiply((struct D2DMatrix *)v43, (const struct D2DMatrix *)v43, (const struct D2DMatrix *)v44);
  }
  v29 = (CMatrixTransformProxy *)*((_QWORD *)this + 34);
  *(_QWORD *)&v45.m[1][0] = v43[2];
  *(_QWORD *)&v45.m11 = v43[0];
  *(_QWORD *)&v45.m[2][0] = v43[6];
  v30 = CMatrixTransformProxy::Update(v29, &v45);
  v31 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x494,
      (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v30);
    return v31;
  }
  CurrentBrush = CAnimatedTransitionVisual::GetCurrentBrush(this);
  if ( CurrentBrush )
  {
    v34 = (char *)this + 8;
    *(_QWORD *)&v39.m11 = 0LL;
    *(_QWORD *)&v39.m[1][0] = __PAIR64__(v10, v8);
    CRectangleVisual::SetRect((CAnimatedTransitionVisual *)((char *)this + 8), (const struct tagRECT *)&v39);
    v35 = _mm_cvtsi32_si128(*((_DWORD *)this + 220));
    v39.m11 = *((FLOAT *)this + 187);
    v39.m22 = *((FLOAT *)this + 188);
    v36 = (float)*((int *)this + 221);
    *(_QWORD *)&v39.m[0][1] = 0LL;
    LODWORD(v39.dy) = LODWORD(v36) ^ _xmm;
    LODWORD(v39.dx) = _mm_cvtepi32_ps(v35).m128_u32[0] ^ _xmm;
    v37 = CSurfaceBrush::SetViewportTransform(CurrentBrush, &v39);
    if ( v37 < 0 )
    {
      v38 = 1189LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v37);
      return (unsigned int)v37;
    }
    v37 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
            (__int64)v34,
            *(_QWORD *)CurrentBrush);
    if ( v37 < 0 )
    {
      v38 = 1190LL;
      goto LABEL_27;
    }
  }
  return 0LL;
}
