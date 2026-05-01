/*
 * XREFs of ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@Uauto_revoke_t@5@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x18064A82C
 * Callers:
 *     ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18064A938 (-RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?RAEBUINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@_lambda_d11a1cc1197c110a4224db306cbbec58_@@QEBA?A_PAEBUINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@Z @ 0x18064A018 (--$-RAEBUINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@_lambda_d11a1cc1197c.c)
 *     ??$call@AEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@Z @ 0x18064A044 (--$call@AEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@-$factory_cache_entry@UNetworkInformatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_18089D068);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics> )
  {
    _lambda_d11a1cc1197c110a4224db306cbbec58_::operator()<winrt::Windows::Networking::Connectivity::INetworkInformationStatics const &>(
      (__int64)a1,
      &v13);
    _InterlockedDecrement64(&qword_18089D068);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089D068);
    winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<_lambda_d11a1cc1197c110a4224db306cbbec58_ &>(
      (__int64)a1,
      &v13,
      a3);
  }
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v5 = v13;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 96LL))(v13, *a3, &v9);
  winrt::check_hresult(&v12, v6, (__int64)&v10);
  v7 = v9;
  *a1 = v5;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  a1[1] = v7;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  return a1;
}
