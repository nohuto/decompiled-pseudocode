/*
 * XREFs of ??$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18005C96C
 * Callers:
 *     ??$find@U?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x18005C90C (--$find@U-$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@win.c)
 *     ??$find_iid@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180088DBC (--$find_iid@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ??$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800D68F4 (--$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@wi.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Udwm::Transitions::ITransition>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITransition>;
  if ( *a1 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITransition> )
    v1 = a1[1] - 0x38EEEADDF9848791LL;
  return v1 == 0;
}
