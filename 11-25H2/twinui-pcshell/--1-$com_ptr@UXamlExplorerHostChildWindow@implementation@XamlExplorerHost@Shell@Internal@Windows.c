/*
 * XREFs of ??1?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802B7570
 * Callers:
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::s_WndProc_::_1_::dtor$0 @ 0x1806C5834 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExplorerHos_ea_1806C5834.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802B758C (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::~com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::unconditional_release_ref();
  return result;
}
