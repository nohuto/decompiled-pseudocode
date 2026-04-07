/*
 * XREFs of ??1?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEAA@XZ @ 0x18009A3E0
 * Callers:
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18002B03C (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180079590 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18007961C (--1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1?$UserResizeVisual_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisualNative@@@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18009A58C (--1-$UserResizeVisual_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResize.c)
 *     ??1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D9E44 (--1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800E033C (--1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@IEAAIXZ @ 0x180033E70 (-subtract_final_reference@-$root_implements@UTransitionState@implementation@Transitions@Udwm@win.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>::~root_implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,ITransitionAnimationVisualNative>(
        __int64 a1)
{
  winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::subtract_final_reference(a1);
  return winrt::impl::atomic_ref_count::operator--((__int64)&`winrt::get_module_lock'::`2'::s_lock);
}
