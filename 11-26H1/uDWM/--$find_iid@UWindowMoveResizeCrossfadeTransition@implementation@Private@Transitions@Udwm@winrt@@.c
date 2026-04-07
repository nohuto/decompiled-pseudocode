/*
 * XREFs of ??$find_iid@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180088DBC
 * Callers:
 *     ?find_interface@?$implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180088DB0 (-find_interface@-$implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transit.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18005C96C (--$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::find_iid<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // al
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = winrt::is_guid_of<winrt::Udwm::Transitions::ITransition>(a2);
  v4 = 0LL;
  if ( v2 )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((v3 + 16) & -(__int64)(v3 != 0));
  return v4;
}
