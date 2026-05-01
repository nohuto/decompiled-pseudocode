/*
 * XREFs of ?get_IsCloaked@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180450710
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCloaked@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180450290 (-IsCloaked@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::get_IsCloaked(
        __int64 a1,
        bool *a2)
{
  *a2 = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::IsCloaked((HWND *)((a1 - 8) & -(__int64)(a1 != 0)));
  return 0LL;
}
