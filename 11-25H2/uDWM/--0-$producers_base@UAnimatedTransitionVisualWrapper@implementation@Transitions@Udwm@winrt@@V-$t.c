/*
 * XREFs of ??0?$producers_base@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@V?$tuple@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@@std@@@impl@winrt@@QEAA@XZ @ 0x180023B98
 * Callers:
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002397C (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 * Callees:
 *     ??0?$producer_convert@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@X@impl@winrt@@QEAA@XZ @ 0x180086C7C (--0-$producer_convert@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,void>::producer_convert<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,void>(
    a1 + 8,
    a2,
    a1);
  result = v2;
  *v2 = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>::`vftable';
  return result;
}
