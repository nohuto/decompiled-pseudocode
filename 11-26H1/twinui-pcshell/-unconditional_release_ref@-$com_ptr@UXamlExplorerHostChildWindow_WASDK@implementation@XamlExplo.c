/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802B6F20
 * Callers:
 *     ??1?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802B6F04 (--1-$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ?s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x18044FC00 (-s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK>::unconditional_release_ref(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK2,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK3,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK4,winrt::Windows::Foundation::IClosable,winrt::non_agile>::Release(v2);
}
