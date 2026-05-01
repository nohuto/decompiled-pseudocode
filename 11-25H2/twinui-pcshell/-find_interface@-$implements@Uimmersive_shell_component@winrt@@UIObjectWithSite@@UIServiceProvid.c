/*
 * XREFs of ?find_interface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802E0520
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Uimmersive_shell_component@winrt@@@12@@Z @ 0x1802DF884 (--$find@U-$find_iid_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@-$interface_list@UIOb.c)
 */

__int64 __fastcall winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 32;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::immersive_shell_component>>(v3);
}
