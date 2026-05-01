/*
 * XREFs of ??$find@U?$find_iid_traits@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UAppBackupListener@Shell@Internal@Windows@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802AB368
 * Callers:
 *     ?find_interface@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802AB340 (-find_interface@-$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::AppBackupListener,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::AppBackupListener>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IAppBackupListener> && v1[1] == 0x55410AEF01732E9DLL )
    return (*a1 + 88LL) & -(__int64)(*a1 != 0LL);
  else
    return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::immersive_shell_component>>();
}
