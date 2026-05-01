/*
 * XREFs of ??$get_activation_factory@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@winrt@@YA?AUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180360B78
 * Callers:
 *     ??$call@AEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@?$factory_cache_entry@UGamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@Z @ 0x180360924 (--$call@AEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@-$factory_cache_entry@UGamingPostureConf.c)
 *     ??$call@P6A?AUhstring@winrt@@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@2@@Z@?$factory_cache_entry@UGamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@2@@Z@Z @ 0x180360A34 (--$call@P6A-AUhstring@winrt@@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@In.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F1208 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  v5 = 0;
  v6 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>,
    (__int64)&v7);
  winrt::check_hresult(&v4, v4, (__int64)&v5);
  result = a1;
  *a1 = v7;
  return result;
}
