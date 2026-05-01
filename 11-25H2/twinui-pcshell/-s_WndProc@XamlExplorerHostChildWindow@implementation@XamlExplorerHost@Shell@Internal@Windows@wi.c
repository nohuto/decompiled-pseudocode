/*
 * XREFs of ?s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x180440DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801C7F30 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?unconditional_release_ref@?$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802B758C (-unconditional_release_ref@-$com_ptr@UXamlExplorerHostChildWindow@implementation@XamlExplorerHos.c)
 *     DefSubclassProc @ 0x1802DF494 (DefSubclassProc.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::s_WndProc(
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
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v7);
  if ( v9 == 33 && (*(_BYTE *)(v7 + 92) & 1) != 0 )
    v11 = 3LL;
  else
    v11 = DefSubclassProc(hWnd, v9, v10, v8);
  winrt::com_ptr<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow>::unconditional_release_ref((_QWORD **)&dwRefData);
  return v11;
}
