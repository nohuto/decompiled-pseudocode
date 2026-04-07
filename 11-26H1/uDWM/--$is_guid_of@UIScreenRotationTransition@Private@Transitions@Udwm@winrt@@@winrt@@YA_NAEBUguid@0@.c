/*
 * XREFs of ??$is_guid_of@UIScreenRotationTransition@Private@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x18005C994
 * Callers:
 *     ??$find@U?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@@12@@Z @ 0x18005C90C (--$find@U-$find_iid_traits@UScreenRotationTransition@implementation@Private@Transitions@Udwm@win.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Udwm::Transitions::Private::IScreenRotationTransition>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IScreenRotationTransition>;
  if ( *a1 == winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IScreenRotationTransition> )
    v1 = a1[1] + 0x404645DBF8122679LL;
  return v1 == 0;
}
