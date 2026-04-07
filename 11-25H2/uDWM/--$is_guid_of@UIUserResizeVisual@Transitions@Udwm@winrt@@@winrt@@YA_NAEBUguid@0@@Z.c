/*
 * XREFs of ??$is_guid_of@UIUserResizeVisual@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DD4FC
 * Callers:
 *     ??$find@U?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@@?$interface_list@UUserResizeVisual@Transitions@Udwm@winrt@@UIUserResizeVisualNative@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@12@@Z @ 0x1800DD360 (--$find@U-$find_iid_traits@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Udwm::Transitions::IUserResizeVisual>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::Udwm::Transitions::IUserResizeVisual>;
  if ( *a1 == winrt::impl::guid_v<winrt::Udwm::Transitions::IUserResizeVisual> )
    v1 = a1[1] - 0x756FC6DD141E8D93LL;
  return v1 == 0;
}
