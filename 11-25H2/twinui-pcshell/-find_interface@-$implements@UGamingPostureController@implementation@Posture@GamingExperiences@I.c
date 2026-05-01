/*
 * XREFs of ?find_interface@?$implements@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@U134567@Uimmersive_shell_component@7@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803323A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@Uimmersive_shell_component@winrt@@@12@@Z @ 0x1802DF884 (--$find@U-$find_iid_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@-$interface_list@UIOb.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController,winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureController,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 - 32;
  v3 = *a2 == winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureController>>::value;
  v6[0] = v2;
  v6[1] = (__int64)a2;
  if ( v3 && a2[1] == 0xC83DF06CC31AFCBDuLL )
    return (v2 + 88) & -(__int64)(v2 != 0);
  else
    return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::immersive_shell_component>>(v6);
}
