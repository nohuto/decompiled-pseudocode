/*
 * XREFs of ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@Uauto_revoke_t@5@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x180670780
 * Callers:
 *     ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180670888 (-RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?RAEBUINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@_lambda_d11a1cc1197c110a4224db306cbbec58_@@QEBA?A_PAEBUINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@Z @ 0x18066FFC0 (--$-RAEBUINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@_lambda_d11a1cc1197c.c)
 *     ??$call@AEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@Z @ 0x18066FFEC (--$call@AEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@-$factory_cache_entry@UNetworkInformatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged(
        __int64 *a1,
        char a2,
        void (__fastcall ***a3)(_QWORD, __int64 *, __int64 *))
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  int v9; // [rsp+28h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int64 *v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v12) = a2;
  v11 = a1;
  _InterlockedIncrement64(&qword_1808DD6B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics> )
  {
    _lambda_d11a1cc1197c110a4224db306cbbec58_::operator()<winrt::Windows::Networking::Connectivity::INetworkInformationStatics const &>(
      (__int64)a1,
      (__int64 *)&v11);
    _InterlockedDecrement64(&qword_1808DD6B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DD6B8);
    winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<_lambda_d11a1cc1197c110a4224db306cbbec58_ &>(
      (__int64)a1,
      (__int64 *)&v11,
      a3);
  }
  v13 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v5 = (__int64)v11;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v11 + 96))(v11, *a3, &v13);
  winrt::check_hresult(&v12, v6, (__int64)&v9);
  v7 = v13;
  *a1 = v5;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = v7;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a1;
}
