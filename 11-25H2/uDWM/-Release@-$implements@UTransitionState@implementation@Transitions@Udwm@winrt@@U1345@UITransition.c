/*
 * XREFs of ?Release@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAKXZ @ 0x18008F190
 * Callers:
 *     ?Release@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@W7EAAKXZ @ 0x1800DC350 (-Release@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345_ea_1800DC350.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>::Release(a1 + 24);
}
