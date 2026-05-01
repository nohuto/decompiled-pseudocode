/*
 * XREFs of ??1?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802C5ED8
 * Callers:
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::s_WndProc_::_1_::dtor$0 @ 0x1806C58C9 (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExplorerHos_ea_1806C58C9.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802C5EF4 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK>::~com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK>::unconditional_release_ref();
  return result;
}
