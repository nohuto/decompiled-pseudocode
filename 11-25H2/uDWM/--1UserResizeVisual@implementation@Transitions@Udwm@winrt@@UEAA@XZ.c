/*
 * XREFs of ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800E033C
 * Callers:
 *     ??_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800DDA38 (--_EUserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180038718 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E0AB0 (-Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::~UserResizeVisual(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>'};
  winrt::Udwm::Transitions::implementation::UserResizeVisual::Unload(this);
  std::_Func_class<void,>::_Tidy((__int64)this + 112, v2);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 10);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 9);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 8);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 7);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 6);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 5);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::~root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>((__int64)this + 16);
}
