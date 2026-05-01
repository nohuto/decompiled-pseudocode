/*
 * XREFs of ?find_interface@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802A3860
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UAppBackupListener@Shell@Internal@Windows@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802A3888 (--$find@U-$find_iid_traits@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@impl.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::AppBackupListener,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 32;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::AppBackupListener,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::AppBackupListener>>(v3);
}
