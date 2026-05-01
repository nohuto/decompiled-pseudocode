/*
 * XREFs of ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804B9650
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x1804B8B44 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1804B983C (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x1802360C0 (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::_CreateDesktopBackgroundThumbnail(
        CMultitaskingViewFrameElement *this,
        const struct Geometry::CRect *a2,
        const struct tagSIZE *a3)
{
  __int128 v3; // xmm0
  struct ISwitchThumbnailFactory *v5; // rdx
  int DesktopBackgroundThumbnail; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_OWORD *)a2;
  v5 = (struct ISwitchThumbnailFactory *)*((_QWORD *)this + 62);
  *(_OWORD *)((char *)this + 552) = v3;
  DesktopBackgroundThumbnail = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
                                 *((DCompThumbnailHelpers **)this + 61),
                                 v5,
                                 a2,
                                 0LL,
                                 a3);
  v7 = DesktopBackgroundThumbnail;
  if ( DesktopBackgroundThumbnail < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x367,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)DesktopBackgroundThumbnail);
  return v7;
}
