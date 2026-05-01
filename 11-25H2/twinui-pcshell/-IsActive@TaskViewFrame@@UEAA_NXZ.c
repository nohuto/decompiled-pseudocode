/*
 * XREFs of ?IsActive@TaskViewFrame@@UEAA_NXZ @ 0x1806964E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall TaskViewFrame::IsActive(TaskViewFrame *this)
{
  return winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsActive((__int64 *)this + 9);
}
