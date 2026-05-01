/*
 * XREFs of ?VirtualDesktopSwitcherHasFocus@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x180688880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VirtualDesktopSwitcherHost::VirtualDesktopSwitcherHasFocus(VirtualDesktopSwitcherHost *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 88);
  if ( *v1 )
    return winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsActive(v1);
  else
    return 0;
}
