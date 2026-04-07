/*
 * XREFs of ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180040124
 * Callers:
 *     ??_GTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x18003FF70 (--_GTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z.c)
 *     ??_G?$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180040008 (--_G-$heap_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winr.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ @ 0x1800401B0 (-UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x1800416AC (-SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::~TopLevelWindow3DWrapper(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  CBaseObject **v2; // rdi
  __int64 v3; // rcx
  CTopLevelWindow *v4; // rcx

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>'};
  v2 = (CBaseObject **)((char *)this + 32);
  CTopLevelWindow3D::UnregisterAnimationCompletedHandler(*((CTopLevelWindow3D **)this + 4));
  v3 = *((_QWORD *)*v2 + 29);
  if ( v3 )
  {
    v4 = *(CTopLevelWindow **)(v3 + 440);
    if ( v4 )
      CTopLevelWindow::SetSuppressBorderUpdates(v4, 0);
  }
  if ( *((_QWORD *)this + 5) )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)this + 5);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(v2);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::~root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>();
}
