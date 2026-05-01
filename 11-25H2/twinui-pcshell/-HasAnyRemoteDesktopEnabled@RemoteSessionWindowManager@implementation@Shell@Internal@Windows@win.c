/*
 * XREFs of ?HasAnyRemoteDesktopEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180634C78
 * Callers:
 *     ?IsAnyRemoteSystemEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180635134 (-IsAnyRemoteSystemEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?get_HasAnyRemoteDesktopEnabled@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180637CA0 (-get_HasAnyRemoteDesktopEnabled@-$produce@URemoteSessionWindowManager@implementation@Shell@Inter.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::HasAnyRemoteDesktopEnabled(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  int v1; // eax
  _BOOL8 v2; // rbx
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = this;
  v7 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                     + 64LL))(
         winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
         &v7);
  winrt::check_hresult((int *)&v6, v1, (__int64)&v4);
  v6 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)v7;
  v2 = (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v6) != 0;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return v2;
}
