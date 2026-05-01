/*
 * XREFs of ?get_EnabledAtStartup@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180336FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NXZ @ 0x180335958 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperienc_ea_180335958.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::get_EnabledAtStartup(
        __int64 a1,
        bool *a2,
        __int64 a3)
{
  *a2 = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::EnabledAtStartup(
          a1,
          (__int64)a2,
          a3);
  return 0LL;
}
