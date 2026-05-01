/*
 * XREFs of ?StoreSystemDialogResult@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAXI@Z @ 0x1803372A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StoreSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@K@Z @ 0x1803372D0 (-StoreSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Int.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::StoreSystemDialogResult(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::StoreSystemDialogResult(
    (const struct winrt::hstring *)&v4,
    a3);
  return 0LL;
}
