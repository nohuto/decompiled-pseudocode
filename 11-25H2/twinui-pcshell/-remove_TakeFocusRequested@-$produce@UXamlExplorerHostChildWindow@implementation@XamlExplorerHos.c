/*
 * XREFs of ?remove_TakeFocusRequested@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180440D70
 * Callers:
 *     <none>
 * Callees:
 *     ?TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@7@@Z @ 0x18044084C (-TakeFocusRequested@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@She_ea_18044084C.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::remove_TakeFocusRequested(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::TakeFocusRequested(
    (winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *)((a1 - 16) & -(__int64)(a1 != 0)),
    (const struct winrt::event_token *)&v3);
  return 0LL;
}
