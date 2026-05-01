/*
 * XREFs of ?put_SystemBackdrop@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK4@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x18044FAB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SystemBackdrop@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x18044F2A4 (-SystemBackdrop@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4>::put_SystemBackdrop(
        __int64 a1,
        struct IInspectableVtbl *a2)
{
  struct IInspectable v3; // [rsp+20h] [rbp-18h] BYREF

  v3.lpVtbl = a2;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::SystemBackdrop(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *)((a1 - 40) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
