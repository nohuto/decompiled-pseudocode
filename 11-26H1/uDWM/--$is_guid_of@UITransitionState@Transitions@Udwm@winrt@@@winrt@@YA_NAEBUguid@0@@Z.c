/*
 * XREFs of ??$is_guid_of@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x180078804
 * Callers:
 *     ??$find@U?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x18008C0E0 (--$find@U-$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Udwm::Transitions::ITransitionState>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionState>;
  if ( *a1 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionState> )
    v1 = a1[1] - 0x6DEACEDF3B123EA2LL;
  return v1 == 0;
}
