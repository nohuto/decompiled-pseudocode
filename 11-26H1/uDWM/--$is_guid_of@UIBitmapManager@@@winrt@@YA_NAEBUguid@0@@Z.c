/*
 * XREFs of ??$is_guid_of@UIBitmapManager@@@winrt@@YA_NAEBUguid@0@@Z @ 0x1800D6B08
 * Callers:
 *     ??$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_PPEBUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@AEBUguid@1@@Z @ 0x1800D68F4 (--$find_iid@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@wi.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::is_guid_of<IBitmapManager>(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = *a1 - winrt::impl::guid_v<IBitmapManager>;
  if ( *a1 == winrt::impl::guid_v<IBitmapManager> )
    v1 = a1[1] + 0x43C31C528C50EF4ALL;
  return v1 == 0;
}
