/*
 * XREFs of ?IsAnyRemoteSystemEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180635134
 * Callers:
 *     ?IsAnyRemoteSystemEnabled@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180635100 (-IsAnyRemoteSystemEnabled@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Wi.c)
 * Callees:
 *     ?HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180634C78 (-HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 *     ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1806352D4 (-IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@_ea_1806352D4.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsAnyRemoteSystemEnabled(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveModeSupported(this) )
    return winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::HasAnyRemoteDesktopEnabled(v1);
  return v2;
}
