/*
 * XREFs of ?AddRef@?$implements@VRdpShellExtensionHost@@Uimmersive_shell_component@winrt@@@winrt@@UEAAKXZ @ 0x1801DE9F0
 * Callers:
 *     ?AddRef@?$implements@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@U134567@Uimmersive_shell_component@7@@winrt@@W7EAAKXZ @ 0x1802D8CA0 (-AddRef@-$implements@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@.c)
 *     ?AddRef@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@WBA@EAAKXZ @ 0x1802D8CB0 (-AddRef@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIIm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<RdpShellExtensionHost,winrt::immersive_shell_component>::AddRef(__int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1 + 32);
}
