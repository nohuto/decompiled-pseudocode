/*
 * XREFs of ??$?RAEBUINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@_lambda_d11a1cc1197c110a4224db306cbbec58_@@QEBA?A_PAEBUINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@Z @ 0x18066FFC0
 * Callers:
 *     ??$call@AEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@Z @ 0x18066FFEC (--$call@AEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@-$factory_cache_entry@UNetworkInformatio.c)
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@Uauto_revoke_t@5@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x180670780 (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@Uauto_revoke_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall _lambda_d11a1cc1197c110a4224db306cbbec58_::operator()<winrt::Windows::Networking::Connectivity::INetworkInformationStatics const &>(
        __int64 a1,
        __int64 *a2)
{
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
