/*
 * XREFs of ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180087E70
 * Callers:
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18002E86C (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Complete@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHXZ @ 0x18007ACE0 (-Complete@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@34.c)
 *     wil::details::lambda_call__winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_2_::_lambda_1___::_lambda_call__winrt::Udwm::Transitions::implementation::TransitionState::TransferWindowVisuals_::_2_::_lambda_1___ @ 0x1800DA610 (wil--details--lambda_call__winrt--Udwm--Transitions--implementation--TransitionState--TransferWi.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800DC210 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800DC570 (-TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGl.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800DC890 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x18001B49C (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005DC2C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x18008C9C4 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::Complete(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  struct CVisual **v2; // rdi
  CContainerVisual *v3; // rcx
  CBaseObject *v4; // rcx
  int v5; // eax
  CBaseObject **v6; // rdx
  CBaseObject **v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  int v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct CVisual **)((char *)this + 48);
  v3 = (CContainerVisual *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CContainerVisual::RemoveAllChildren(v3);
    v4 = (CBaseObject *)*((_QWORD *)*v2 + 3);
    v15 = v4;
    if ( v4 )
      CBaseObject::AddRef(v4);
    if ( v4 )
    {
      v5 = CContainerVisual::RemoveChild(v4, *v2);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4B,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.transitionstate.cpp",
          (const char *)(unsigned int)v5,
          v12);
    }
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v2);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v15);
  }
  v6 = (CBaseObject **)*((_QWORD *)this + 8);
  v7 = (CBaseObject **)*((_QWORD *)this + 7);
  if ( v7 != v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v7, v6);
    *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  }
  v8 = *((_QWORD *)this + 11);
  v9 = *((_QWORD *)this + 10);
  if ( v9 != v8 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(v9, v8);
    *((_QWORD *)this + 11) = *((_QWORD *)this + 10);
  }
  v10 = (_QWORD *)((char *)this + 104);
  if ( (int *)((char *)this + 104) != &v12 )
  {
    if ( *v10 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)this + 13);
    *v10 = 0LL;
  }
  v11 = (_QWORD *)((char *)this + 112);
  if ( (char *)this + 112 != &v13 )
  {
    if ( *v11 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)this + 14);
    *v11 = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 672LL) = 0;
  *((_BYTE *)this + 120) = 1;
}
