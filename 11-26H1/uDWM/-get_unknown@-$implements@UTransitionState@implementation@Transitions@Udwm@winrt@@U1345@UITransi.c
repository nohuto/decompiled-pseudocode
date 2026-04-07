/*
 * XREFs of ?get_unknown@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@EEBAPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x1800D9710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>::get_unknown(
        __int64 a1)
{
  return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((a1 - 8) & -(__int64)(a1 != 24));
}
