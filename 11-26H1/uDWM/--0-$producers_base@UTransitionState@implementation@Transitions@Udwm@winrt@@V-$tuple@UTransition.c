/*
 * XREFs of ??0?$producers_base@UTransitionState@implementation@Transitions@Udwm@winrt@@V?$tuple@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@std@@@impl@winrt@@QEAA@XZ @ 0x18002FC20
 * Callers:
 *     ??0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002F8A4 (--0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@X@impl@winrt@@QEAA@XZ @ 0x18002FC54 (--0-$producer_convert@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@X@impl@winrt.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionState,std::tuple<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>>::producers_base<winrt::Udwm::Transitions::implementation::TransitionState,std::tuple<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,void>::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,void>(
    a1 + 16,
    a2,
    a1);
  v2[1] = &winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>::`vftable';
  result = v2;
  *v2 = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionState,std::tuple<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNative,void>'};
  return result;
}
