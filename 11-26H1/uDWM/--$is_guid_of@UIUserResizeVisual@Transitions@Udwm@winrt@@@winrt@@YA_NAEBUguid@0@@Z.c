/*
 * XREFs of ??$is_guid_of@UIUserResizeVisual@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DA22C
 * Callers:
 *     ??$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUUserResizeVisual@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800DA0F4 (--$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_PPEBUUser.c)
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
