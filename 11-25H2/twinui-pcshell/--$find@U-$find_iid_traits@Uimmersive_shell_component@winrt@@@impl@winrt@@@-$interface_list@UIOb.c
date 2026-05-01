/*
 * XREFs of ??$find@U?$find_iid_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Uimmersive_shell_component@winrt@@@12@@Z @ 0x1802DF884
 * Callers:
 *     ??$find@U?$find_iid_traits@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UAppBackupListener@Shell@Internal@Windows@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802AB368 (--$find@U-$find_iid_traits@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@impl.c)
 *     ?find_interface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802E0520 (-find_interface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvid.c)
 *     ?find_interface@?$implements@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@U134567@Uimmersive_shell_component@7@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803323A0 (-find_interface@-$implements@UGamingPostureController@implementation@Posture@GamingExperiences@I.c)
 *     ?find_interface@?$implements@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805B9D90 (-find_interface@-$implements@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Interna.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::immersive_shell_component>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IServiceProvider> && v1[1] == 0xFA096000AA003480uLL )
    return (*a1 + 8) & -(__int64)(*a1 != 0);
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>>(a1);
}
