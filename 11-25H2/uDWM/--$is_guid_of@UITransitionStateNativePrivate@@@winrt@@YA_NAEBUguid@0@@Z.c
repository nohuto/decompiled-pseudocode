/*
 * XREFs of ??$is_guid_of@UITransitionStateNativePrivate@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DBC30
 * Callers:
 *     ??$find@U?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800DBBBC (--$find@U-$find_iid_traits@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<ITransitionStateNativePrivate>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<ITransitionStateNativePrivate>;
  if ( *a1 == winrt::impl::guid_v<ITransitionStateNativePrivate> )
    v1 = a1[1] - 0x1424D6F75F502F8ALL;
  return v1 == 0;
}
