/*
 * XREFs of ?SetWindowRegion@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x180450530
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SetWindowRegion@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x180450580 (-SetWindowRegion@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDK>::SetWindowRegion(
        __int64 a1,
        struct IInspectableVtbl *a2)
{
  struct IInspectable v3; // [rsp+20h] [rbp-18h] BYREF

  v3.lpVtbl = a2;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::SetWindowRegion(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *)((a1 - 8) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
