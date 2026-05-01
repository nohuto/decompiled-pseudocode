/*
 * XREFs of ?IsFrameWindowForHost@XamlGamingTaskViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x18067B0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall XamlGamingTaskViewHost::IsFrameWindowForHost(XamlGamingTaskViewHost *this, __int64 a2)
{
  return winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsEqual(
           (__int64 *)this + 13,
           a2);
}
