/*
 * XREFs of ?ConfigurationChanged@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@Uauto_revoke_t@6@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@@Z @ 0x180360E54
 * Callers:
 *     ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x1803619D8 (-SingletonInitialize@NexusPolicyManager@@QEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?ConfigurationChanged@?$consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigurationStatics@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180265520 (-ConfigurationChanged@-$consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigu.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@$MP8type@?$abi@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@2@Uevent_token@2@@Z @ 0x180335258 (--0-$factory_event_revoker@UIGamingPostureConfigurationStatics@Posture@GamingExperiences@Interna.c)
 *     ??$?RAEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@QEBA?A_PAEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@Z @ 0x180360658 (--$-RAEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@_.c)
 *     ??$call@AEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@?$factory_cache_entry@UGamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@Z @ 0x180360924 (--$call@AEAV_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_@@@-$factory_cache_entry@UGamingPostureConf.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration::ConfigurationChanged(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 *v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF

  _InterlockedIncrement64(&qword_1808DB848);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics> )
  {
    _lambda_d69b8f97a0a6bafd8dac42c3f97fb590_::operator()<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics const &>(
      (__int64)a1,
      (__int64 *)v7);
    _InterlockedDecrement64(&qword_1808DB848);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB848);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::call<_lambda_d69b8f97a0a6bafd8dac42c3f97fb590_ &>(
      (__int64)a1,
      (__int64 *)v7,
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a3);
  }
  v5 = winrt::impl::consume_Windows_Internal_GamingExperiences_Posture_IGamingPostureConfigurationStatics<winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::ConfigurationChanged(
         v7,
         &v8,
         a3);
  __0__factory_event_revoker_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt___MP8type___abi_UIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_AEBUIGamingPostureConfigurationStatics_Posture_GamingExperiences_Internal_Windows_2_Uevent_token_2__Z(
    a1,
    (__int64 *)v7,
    *v5);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7);
  return a1;
}
