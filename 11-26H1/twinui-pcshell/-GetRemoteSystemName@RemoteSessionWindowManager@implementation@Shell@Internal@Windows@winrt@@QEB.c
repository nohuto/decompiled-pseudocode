/*
 * XREFs of ?GetRemoteSystemName@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBA?AUhstring@6@XZ @ 0x18065A94C
 * Callers:
 *     ?GetRemoteSystemName@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18065A900 (-GetRemoteSystemName@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows.c)
 * Callees:
 *     ?GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180660E58 (-GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA-AUhst.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::GetRemoteSystemName(
        __int64 a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::GetRemoteDesktopName(a2);
  return a2;
}
