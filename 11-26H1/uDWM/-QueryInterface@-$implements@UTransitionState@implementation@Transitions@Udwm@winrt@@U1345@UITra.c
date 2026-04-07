/*
 * XREFs of ?QueryInterface@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008B0B0
 * Callers:
 *     ?QueryInterface@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8EE0 (-QueryInterface@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt_ea_1800D8EE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::query_interface(
           a1 + 24,
           a2,
           a3);
}
