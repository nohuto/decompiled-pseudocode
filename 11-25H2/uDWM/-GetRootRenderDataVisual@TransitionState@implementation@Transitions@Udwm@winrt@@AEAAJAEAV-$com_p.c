/*
 * XREFs of ?GetRootRenderDataVisual@TransitionState@implementation@Transitions@Udwm@winrt@@AEAAJAEAV?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800DE394
 * Callers:
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800DF280 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800DF5B0 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800DF8C0 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180015B04 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180028C78 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800DD998 (--4-$com_ptr_t@VCGlobalTimeTrackVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z @ 0x1800DDC50 (-Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::GetRootRenderDataVisual(
        __int64 a1,
        CBaseObject **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CBaseObject *RenderTargetRootVisualForDesktop; // rcx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v11; // [rsp+40h] [rbp+18h] BYREF

  GetDesktopID(1LL);
  if ( *(_QWORD *)(a1 + 40) )
  {
    wil::com_ptr_t<CGlobalTimeTrackVisual,wil::err_returncode_policy>::operator=(a2, (CMILRefCountBase **)(a1 + 40));
  }
  else
  {
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(a2);
    v4 = CGlobalTimeTrackVisual::Create(a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                        + 53));
    v11 = RenderTargetRootVisualForDesktop;
    if ( RenderTargetRootVisualForDesktop )
      CMILRefCountBase::AddRef(RenderTargetRootVisualForDesktop);
    v8 = CContainerVisual::AddChild(RenderTargetRootVisualForDesktop, *a2);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 349LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
      return v5;
    }
    v8 = CVisual::MoveToFront(*a2, 1);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 350LL;
      goto LABEL_11;
    }
    wil::com_ptr_t<CGlobalTimeTrackVisual,wil::err_returncode_policy>::operator=((CBaseObject **)(a1 + 40), a2);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v11);
  }
  return 0LL;
}
