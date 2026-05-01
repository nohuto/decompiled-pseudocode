/*
 * XREFs of ?s_WndProc@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x180443550
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802C5EF4 (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplo.c)
 *     DefSubclassProc @ 0x1802DF494 (DefSubclassProc.c)
 *     ?AddRef@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@winrt@@QEAAKXZ @ 0x1803A6BF8 (-AddRef@-$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchApp.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::s_WndProc(
        HWND hWnd,
        UINT uMsg,
        WPARAM wParam,
        LPARAM lParam,
        UINT_PTR uIdSubclass,
        DWORD_PTR dwRefData)
{
  __int64 v7; // rbx
  LPARAM v8; // r9
  UINT v9; // r10d
  WPARAM v10; // r11
  LRESULT v11; // rdi

  v7 = dwRefData;
  dwRefData = 0LL;
  if ( !v7 )
    return 0LL;
  dwRefData = v7;
  winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::AddRef(v7);
  if ( v9 == 33 && (*(_BYTE *)(v7 + 108) & 1) != 0 )
    v11 = 3LL;
  else
    v11 = DefSubclassProc(hWnd, v9, v10, v8);
  winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK>::unconditional_release_ref((__int64 *)&dwRefData);
  return v11;
}
