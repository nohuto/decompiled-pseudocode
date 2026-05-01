/*
 * XREFs of ?get_local_iids@?$implements@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@U134567@Uimmersive_shell_component@7@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180331CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController,winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureController,winrt::immersive_shell_component>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureController>>::value;
  return a2;
}
