/*
 * XREFs of ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180086E2C
 * Callers:
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18002B03C (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Complete@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHXZ @ 0x180086E00 (-Complete@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@34.c)
 *     wil::details::lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___::_lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___ @ 0x1800DD8A0 (wil--details--lambda_call__lambda_f91e6c8f2a0df16026c4725aea205c89___--_lambda_call__lambda_f91e.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800DF280 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800DF5B0 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800DF8C0 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002A820 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004EA64 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18007B900 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1800990C0 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::Complete(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  CRenderDataVisual **v2; // rdi
  CContainerVisual *v3; // rcx
  int v4; // eax
  CBaseObject *v5; // rcx
  int v6; // eax
  CBaseObject **v7; // rcx
  CBaseObject **v8; // rdx
  winrt::Windows::Foundation::IUnknown *v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  int v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CRenderDataVisual **)((char *)this + 48);
  v3 = (CContainerVisual *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CContainerVisual::RemoveAllChildren(v3);
    v4 = CRenderDataVisual::ClearInstructions(*v2);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x48,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
        (const char *)(unsigned int)v4,
        v12);
    v5 = (CBaseObject *)*((_QWORD *)*v2 + 3);
    v15 = v5;
    if ( v5 )
      CMILRefCountBase::AddRef(v5);
    if ( v5 )
    {
      v6 = CContainerVisual::RemoveChild(v5, (struct CVisualProxy **)*v2);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4C,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
          (const char *)(unsigned int)v6,
          v12);
    }
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(v2);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v15);
  }
  v7 = (CBaseObject **)*((_QWORD *)this + 7);
  v8 = (CBaseObject **)*((_QWORD *)this + 8);
  if ( v7 != v8 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v7, v8);
    *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  }
  v9 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)this + 10);
  if ( v9 != *((winrt::Windows::Foundation::IUnknown **)this + 11) )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(v9);
    *((_QWORD *)this + 11) = *((_QWORD *)this + 10);
  }
  v10 = (_QWORD *)((char *)this + 104);
  if ( (int *)((char *)this + 104) != &v12 )
  {
    if ( *v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 104));
    *v10 = 0LL;
  }
  v11 = (_QWORD *)((char *)this + 112);
  if ( (char *)this + 112 != &v13 )
  {
    if ( *v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 112));
    *v11 = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 672LL) = 0;
  *((_BYTE *)this + 120) = 1;
}
