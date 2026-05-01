/*
 * XREFs of ??$find@U?$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIInputSwitchExperienceManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180638AA4
 * Callers:
 *     ?find_interface@?$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIInputSwitchExperienceManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18020DCF0 (-find_interface@-$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IInputSwitchExperienceManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  else
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IInputSwitchExperienceManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>();
}
