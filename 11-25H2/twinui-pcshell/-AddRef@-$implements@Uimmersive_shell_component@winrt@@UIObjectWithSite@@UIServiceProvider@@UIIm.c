/*
 * XREFs of ?AddRef@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@WBA@EAAKXZ @ 0x1802DFEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef(
        __int64 a1)
{
  return winrt::implements<RdpShellExtensionHost,winrt::immersive_shell_component>::AddRef(a1 - 16);
}
