/*
 * XREFs of ?GamingAppAumid@GamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@SA@XZ @ 0x180360FE8
 * Callers:
 *     ?GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ @ 0x180361060 (-GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ.c)
 *     XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1 @ 0x1806A0E50 (XamlGamingTaskViewHost--CreateGamingTaskBarViewModelAsync$_ResumeCoro$1.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806ACFE4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BCC9C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??$call@P6A?AUhstring@winrt@@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@2@@Z@?$factory_cache_entry@UGamingPostureConfiguration@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@2@@Z@Z @ 0x180360A34 (--$call@P6A-AUhstring@winrt@@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@In.c)
 *     ??R_lambda_3713f2cc47e7ca018a3d61bf2a8e4f15_@@QEBA@AEBUIGamingPostureConfigurationStatics@Posture@GamingExperiences@Internal@Windows@winrt@@@Z @ 0x180360D54 (--R_lambda_3713f2cc47e7ca018a3d61bf2a8e4f15_@@QEBA@AEBUIGamingPostureConfigurationStatics@Postur.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration::GamingAppAumid(
        _QWORD *a1)
{
  const struct winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics *, __int64); // [rsp+40h] [rbp+8h] BYREF

  v3 = (const struct winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics *(__fastcall *)(const struct winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics *, __int64))&qword_1808DB848;
  _InterlockedIncrement64(&qword_1808DB848);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics> )
  {
    _lambda_3713f2cc47e7ca018a3d61bf2a8e4f15_::operator()(
      (__int64)a1,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>);
    _InterlockedDecrement64(&qword_1808DB848);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB848);
    v3 = _lambda_3713f2cc47e7ca018a3d61bf2a8e4f15_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::call<winrt::hstring (*)(winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
