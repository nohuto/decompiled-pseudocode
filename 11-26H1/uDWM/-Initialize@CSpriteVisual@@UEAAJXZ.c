/*
 * XREFs of ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180037E50
 * Callers:
 *     ?Create@CBorderSprite@@SAJPEAPEAV1@@Z @ 0x18000B99C (-Create@CBorderSprite@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180037A2C (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CButtonVisual@@MEAAJXZ @ 0x180037D10 (-Initialize@CButtonVisual@@MEAAJXZ.c)
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x180037D70 (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x180066BB0 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x180083310 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z @ 0x180088260 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?Initialize@CAccentAcrylicBlurBehind@@MEAAJXZ @ 0x180094410 (-Initialize@CAccentAcrylicBlurBehind@@MEAAJXZ.c)
 *     ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800CE520 (-Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJAEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800D0460 (-Initialize@CTransitionWindowSnapshot@@MEAAJAEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CIconicSprite@@MEAAJXZ @ 0x1800DE720 (-Initialize@CIconicSprite@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateSpriteVisualProxy@CCompositor@@QEAAJPEAPEAVCSpriteVisualProxy@@@Z @ 0x180082780 (-CreateSpriteVisualProxy@CCompositor@@QEAAJPEAPEAVCSpriteVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpriteVisual::Initialize(CSpriteVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = CCompositor::CreateSpriteVisualProxy(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6), &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\spritevisual.cpp",
      (const char *)(unsigned int)v2,
      v5);
    if ( v7 )
      CBaseObject::Release(v7);
    return v3;
  }
  else
  {
    *((_QWORD *)this + 2) = v7;
    return 0LL;
  }
}
