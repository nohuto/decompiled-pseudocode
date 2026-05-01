/*
 * XREFs of ?put_Position@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180025F40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002604C (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inte.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::put_Position(
        unsigned __int64 a1,
        float *a2)
{
  HWND *v3; // rbx

  v3 = (HWND *)((a1 - 8) & ((unsigned __int128)-(__int128)a1 >> 64));
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)v3);
  MoveWindow(v3[5], (int)*a2, (int)a2[1], (int)a2[2], (int)a2[3], 1);
  return 0LL;
}
