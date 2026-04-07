/*
 * XREFs of ?get_local_iids@?$implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1800D91D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransition>;
  return a2;
}
