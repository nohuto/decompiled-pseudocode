/*
 * XREFs of ?get_unknown@?$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@winrt@@EEBAPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x1800D15F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::get_unknown(
        __int64 a1)
{
  return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((a1 - 8) & -(__int64)(a1 != 16));
}
