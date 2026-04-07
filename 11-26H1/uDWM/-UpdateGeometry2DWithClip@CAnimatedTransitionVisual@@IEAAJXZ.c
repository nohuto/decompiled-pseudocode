/*
 * XREFs of ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009734C
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089430 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800528DC (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009BC60 (-SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DWithClip(CAnimatedTransitionVisual *this)
{
  struct tagRECT v1; // xmm0
  LONG v3; // eax
  int v4; // edi
  int v5; // ebx
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  int v8; // ebx
  __int64 v9; // rdx
  struct D2D_MATRIX_3X2_F v11; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT rcDst; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v1 = *(struct tagRECT *)((char *)this + 760);
  rc.right = *((_DWORD *)this + 222);
  v3 = *((_DWORD *)this + 223);
  rcDst = v1;
  *(_QWORD *)&rc.left = 0LL;
  *(float *)&v1.left = (float)*((int *)this + 198);
  rc.bottom = v3;
  v4 = RoundToNearestInt(*(float *)&v1.left + *((float *)this + 172));
  v5 = RoundToNearestInt((float)*((int *)this + 199) + *((float *)this + 173));
  OffsetRect(&rc, v4, v5);
  OffsetRect(&rcDst, v4, v5);
  IntersectRect(&rcDst, &rcDst, (const RECT *)((char *)this + 776));
  v6 = (__m128)COERCE_UNSIGNED_INT((float)(rc.left - rcDst.left));
  v6.m128_f32[0] = v6.m128_f32[0] - (float)*((int *)this + 220);
  *(float *)&v1.left = (float)*((int *)this + 221);
  v7 = (__m128)COERCE_UNSIGNED_INT((float)(rc.top - rcDst.top));
  *(__m128i *)&v11.m11 = _mm_load_si128((const __m128i *)&_xmm);
  v7.m128_f32[0] = v7.m128_f32[0] - *(float *)&v1.left;
  *(_QWORD *)&v11.m[2][0] = _mm_unpacklo_ps(v6, v7).m128_u64[0];
  v8 = CSurfaceBrush::SetViewportTransform((CAnimatedTransitionVisual *)((char *)this + 520), &v11);
  if ( v8 < 0 )
  {
    v9 = 1055LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
         (__int64)this + 8,
         *((_QWORD *)this + 65));
  if ( v8 < 0 )
  {
    v9 = 1056LL;
    goto LABEL_3;
  }
  CRectangleVisual::SetRect((CAnimatedTransitionVisual *)((char *)this + 8), &rcDst);
  return 0LL;
}
