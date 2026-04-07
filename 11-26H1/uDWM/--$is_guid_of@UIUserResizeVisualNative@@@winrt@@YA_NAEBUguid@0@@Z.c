/*
 * XREFs of ??$is_guid_of@UIUserResizeVisualNative@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800DA254
 * Callers:
 *     ??$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUUserResizeVisual@implementation@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800DA0F4 (--$find_iid@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_PPEBUUser.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<IUserResizeVisualNative>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<IUserResizeVisualNative>;
  if ( *a1 == winrt::impl::guid_v<IUserResizeVisualNative> )
    v1 = a1[1] + 0x43C31C528C50EF4ALL;
  return v1 == 0;
}
