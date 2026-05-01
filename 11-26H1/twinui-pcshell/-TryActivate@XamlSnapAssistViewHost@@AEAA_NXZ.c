/*
 * XREFs of ?TryActivate@XamlSnapAssistViewHost@@AEAA_NXZ @ 0x180210574
 * Callers:
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18021D9C0 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?TryActivate@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180210598 (-TryActivate@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 */

bool __fastcall XamlSnapAssistViewHost::TryActivate(XamlSnapAssistViewHost *this)
{
  char *v1; // rcx
  bool result; // al

  v1 = (char *)this + 296;
  try
  {
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::TryActivate(v1);
    result = 1;
  }
  catch ( ... )
  {
    return 0;
  }
  return result;
}
