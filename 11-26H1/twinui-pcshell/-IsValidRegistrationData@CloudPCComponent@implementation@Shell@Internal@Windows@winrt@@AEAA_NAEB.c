/*
 * XREFs of ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x18064137C
 * Callers:
 *     ?RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806415E0 (-RecoverRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18002E674 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x18029CB34 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?FindUriSchemeHandlersAsync@Launcher@System@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x180640110 (-FindUriSchemeHandlersAsync@Launcher@System@Windows@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@234@@impl@winrt@@QEBA@XZ @ 0x180642E74 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@U-$IVectorView@UAppInfo@App.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::IsValidRegistrationData(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        const struct winrt::hstring *a2)
{
  const struct winrt::param::hstring *UriSchemeHandlersAsync; // rax
  unsigned int v4; // r14d
  unsigned int v5; // esi
  struct IUnknown *v6; // rdx
  int NetworkConnectivityLevel; // r12d
  int v8; // r14d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, void **); // rdi
  void **v11; // rax
  int v12; // eax
  int v13; // eax
  winrt::hstring *v15; // rax
  const WCHAR *v16; // rax
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h]
  volatile signed __int32 *v22; // [rsp+90h] [rbp+40h] BYREF
  volatile signed __int32 *v23; // [rsp+A0h] [rbp+50h] BYREF
  int v24; // [rsp+A8h] [rbp+58h] BYREF

  HIDWORD(v22) = HIDWORD(this);
  LODWORD(v22) = 0;
  v20 = c_remoteSystemProviderUriScheme;
  UriSchemeHandlersAsync = winrt::Windows::System::Launcher::FindUriSchemeHandlersAsync(
                             (const struct winrt::param::hstring *)&v22,
                             (__int64)&v20);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::AppInfo>>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::AppInfo>>::get(
    UriSchemeHandlersAsync,
    &v19);
  v4 = 1;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  v5 = 0;
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v19);
  while ( v5 != NetworkConnectivityLevel )
  {
    v18 = 0LL;
    v8 = v4 | 4;
    LODWORD(v22) = v8;
    v9 = v19;
    LODWORD(v20) = 0;
    v21 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v19 + 48LL);
    v11 = winrt::put_abi((winrt *)&v18, v6);
    v12 = v10(v9, v5, v11);
    winrt::check_hresult((int *)&v23, v12, (__int64)&v20);
    v22 = 0LL;
    LODWORD(v20) = 0;
    v21 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v18 + 72LL))(v18, &v22);
    winrt::check_hresult(&v24, v13, (__int64)&v20);
    v4 = v8 & 0xFFFFFFF1 | 0xA;
    LOBYTE(v9) = winrt::operator==((__int64 *)a2, (__int64 *)&v22);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
    if ( (_BYTE)v9 )
    {
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
      return 1;
    }
    ++v5;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  LODWORD(v20) = 0;
  v21 = 0LL;
  v15 = (winrt::hstring *)winrt::operator+(
                            (volatile signed __int32 *)&v23,
                            &c_remoteSystemAvailabilityRegPath,
                            (__int64 *)a2);
  v16 = winrt::hstring::c_str(v15);
  v17 = RegDeleteTreeW(HKEY_CURRENT_USER, v16);
  if ( v17 > 0 )
    v17 = (unsigned __int16)v17 | 0x80070000;
  winrt::check_hresult((int *)&v22, v17, (__int64)&v20);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
  return 0;
}
