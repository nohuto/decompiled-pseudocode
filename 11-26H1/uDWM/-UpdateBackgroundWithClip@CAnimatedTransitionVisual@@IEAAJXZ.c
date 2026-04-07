/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096DCC
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089430 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800528DC (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?ApplyViewportTransformForClippedView@CSurfaceBrush@@QEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18009B228 (-ApplyViewportTransformForClippedView@CSurfaceBrush@@QEAAJAEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdx
  struct tagRECT rc; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  rc = *(struct tagRECT *)((char *)this + 792);
  v2 = RoundToNearestInt(*((float *)this + 173));
  v3 = RoundToNearestInt(*((float *)this + 172));
  OffsetRect(&rc, v3, v2);
  v4 = CSurfaceBrush::ApplyViewportTransformForClippedView(
         (CAnimatedTransitionVisual *)((char *)this + 520),
         (const struct tagRECT *)((char *)this + 776),
         &rc);
  if ( v4 < 0 )
  {
    v5 = 1017LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
         (__int64)this + 8,
         *((_QWORD *)this + 65));
  if ( v4 < 0 )
  {
    v5 = 1018LL;
    goto LABEL_3;
  }
  CRectangleVisual::SetRect((CAnimatedTransitionVisual *)((char *)this + 8), &rc);
  return 0LL;
}
