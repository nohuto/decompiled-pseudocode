/*
 * XREFs of ??$find@U?$find_iid_traits@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UWindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x180099FF0
 * Callers:
 *     ??$find_iid@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180099FCC (--$find_iid@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     ??$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008AED0 (--$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::find<winrt::impl::find_iid_traits<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition>>(
        __int64 a1)
{
  _QWORD *v1; // rdx

  if ( winrt::is_guid_of<winrt::Udwm::Transitions::ITransition>(*(_QWORD **)(a1 + 8)) )
    return winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((*v1 + 16LL) & -(__int64)(*v1 != 0LL));
  else
    return 0LL;
}
