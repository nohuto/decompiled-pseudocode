/*
 * XREFs of ??1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180040048
 * Callers:
 *     ??_G?$heap_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18003FF34 (--_G-$heap_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@i.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800400A8 (-StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040100 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::~AnimatedTransitionVisualWrapper(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this)
{
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>'};
  *((_QWORD *)this + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable';
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::StopAnimation(this);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)this + 6);
  wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((char *)this + 40);
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::~root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>();
}
