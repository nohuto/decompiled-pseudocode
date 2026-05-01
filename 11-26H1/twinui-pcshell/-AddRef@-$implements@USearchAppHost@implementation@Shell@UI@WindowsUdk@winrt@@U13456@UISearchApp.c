/*
 * XREFs of ?AddRef@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@winrt@@QEAAKXZ @ 0x18029D8F8
 * Callers:
 *     ?AddRef@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@3456@X@impl@winrt@@UEAAIXZ @ 0x1802124C0 (-AddRef@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost@.c)
 *     ?AddRef@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2@3456@X@impl@winrt@@UEAAIXZ @ 0x18029D8E0 (-AddRef@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2.c)
 *     ?AddRef@?$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAIXZ @ 0x18029D9C0 (-AddRef@-$produce_base@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@.c)
 *     ?AddRef@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@3456@X@impl@winrt@@UEAAIXZ @ 0x1803B0000 (-AddRef@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3.c)
 *     ?AddRef@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@X@impl@winrt@@UEAAIXZ @ 0x1803B0020 (-AddRef@-$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4.c)
 *     ?s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x18044FC00 (-s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Wind.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::AddRef(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef(a1, a2, a3, a4);
}
