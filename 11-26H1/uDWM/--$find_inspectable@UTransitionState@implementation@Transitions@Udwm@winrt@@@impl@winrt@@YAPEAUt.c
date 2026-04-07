/*
 * XREFs of ??$find_inspectable@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@01@PEBUTransitionState@implementation@Transitions@Udwm@1@@Z @ 0x18008DBD0
 * Callers:
 *     ?find_inspectable@?$implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@winrt@@UEBAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x18008DBC0 (-find_inspectable@-$implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Trans.c)
 *     ?find_inspectable@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEBAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x1800D96D0 (-find_inspectable@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UIT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::find_inspectable<winrt::Udwm::Transitions::implementation::TransitionState>(__int64 a1)
{
  return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((a1 + 16) & -(__int64)(a1 != 0));
}
