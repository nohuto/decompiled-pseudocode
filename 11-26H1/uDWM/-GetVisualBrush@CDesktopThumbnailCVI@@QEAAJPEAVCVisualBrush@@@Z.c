/*
 * XREFs of ?GetVisualBrush@CDesktopThumbnailCVI@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800835F8
 * Callers:
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800834D4 (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CE8B0 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180083DA8 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 *     ?Clone@CVisualBrush@@QEBAJPEAV1@@Z @ 0x18009B2A0 (-Clone@CVisualBrush@@QEBAJPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::GetVisualBrush(CDesktopThumbnailCVI *this, struct CVisualBrush *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CDesktopThumbnailCVI::_EnsureResources(this);
  if ( v4 < 0 )
  {
    v5 = 602LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return (unsigned int)v4;
  }
  v4 = CVisualBrush::Clone((CDesktopThumbnailCVI *)((char *)this + 24), a2);
  if ( v4 < 0 )
  {
    v5 = 604LL;
    goto LABEL_3;
  }
  return 0LL;
}
