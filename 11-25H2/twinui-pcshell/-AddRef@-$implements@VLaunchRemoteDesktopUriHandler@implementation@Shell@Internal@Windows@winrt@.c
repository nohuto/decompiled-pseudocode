/*
 * XREFs of ?AddRef@?$implements@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@UIExecuteCommand@@@winrt@@UEAAKXZ @ 0x1802CF8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef(a1 + 16);
}
