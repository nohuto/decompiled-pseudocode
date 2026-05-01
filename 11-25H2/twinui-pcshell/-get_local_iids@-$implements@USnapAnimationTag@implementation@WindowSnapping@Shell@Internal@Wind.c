/*
 * XREFs of ?get_local_iids@?$implements@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180585A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag,winrt::Windows::Internal::Shell::WindowSnapping::SnapAnimationTag>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::guid_v<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAnimationTag>;
  return a2;
}
