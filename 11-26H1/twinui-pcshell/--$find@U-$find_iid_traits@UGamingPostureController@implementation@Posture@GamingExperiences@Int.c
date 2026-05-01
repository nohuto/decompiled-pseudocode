/*
 * XREFs of ??$find@U?$find_iid_traits@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@12@@Z @ 0x1802D8544
 * Callers:
 *     ??$find@U?$find_iid_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Uimmersive_shell_component@winrt@@@12@@Z @ 0x1802D85A0 (--$find@U-$find_iid_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@-$interface_list@UIOb.c)
 *     ?find_interface@?$implements@VRdpShellExtensionHost@@Uimmersive_shell_component@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180674F90 (-find_interface@-$implements@VRdpShellExtensionHost@@Uimmersive_shell_component@winrt@@@winrt@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IImmersiveShellComponent> && v1[1] == 0xC45FA8EF5C7AA582uLL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
