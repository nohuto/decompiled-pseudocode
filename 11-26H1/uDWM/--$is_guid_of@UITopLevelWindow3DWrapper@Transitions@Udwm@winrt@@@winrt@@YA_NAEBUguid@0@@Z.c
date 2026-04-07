/*
 * XREFs of ??$is_guid_of@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800623BC
 * Callers:
 *     ??$find_iid@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUTopLevelWindow3DWrapper@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x180062360 (--$find_iid@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_PP.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>;
  if ( *a1 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper> )
    v1 = a1[1] + 0x53820372FAC41874LL;
  return v1 == 0;
}
