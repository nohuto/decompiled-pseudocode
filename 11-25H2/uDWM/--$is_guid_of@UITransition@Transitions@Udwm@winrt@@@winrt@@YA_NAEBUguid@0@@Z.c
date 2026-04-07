/*
 * XREFs of ??$is_guid_of@UITransition@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18008AED0
 * Callers:
 *     ??$find@U?$find_iid_traits@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UWindowMoveResizeCrossfadeTransition@Private@Transitions@Udwm@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x180099FF0 (--$find@U-$find_iid_traits@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitio.c)
 *     ??$find@U?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x1800D489C (--$find@U-$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@win.c)
 *     ??$find@U?$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UWindowJointResizeTransition@Private@Transitions@Udwm@winrt@@UIBitmapManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x1800D98D8 (--$find@U-$find_iid_traits@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@.c)
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
