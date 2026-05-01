/*
 * XREFs of ??$?RAEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@QEBA?A_PAEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@Z @ 0x180360658
 * Callers:
 *     ??$call@AEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@?$factory_cache_entry@UGamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@Z @ 0x180360924 (--$call@AEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@-$factory_cache_entry@UGamingPostureConf.c)
 *     ?ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@@Z @ 0x180360E54 (-ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winr.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall _lambda_d69b8f97a0a6bafd8dac42c3f97fb590_::operator()<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics const &>(
        __int64 a1,
        __int64 *a2)
{
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
