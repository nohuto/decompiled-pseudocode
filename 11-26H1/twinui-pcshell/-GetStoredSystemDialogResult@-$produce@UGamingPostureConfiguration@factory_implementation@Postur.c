/*
 * XREFs of ?GetStoredSystemDialogResult@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAXPEAI@Z @ 0x180335CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStoredSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAKAEBUhstring@7@@Z @ 0x180335D24 (-GetStoredSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::GetStoredSystemDialogResult(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  *a3 = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::GetStoredSystemDialogResult((const struct winrt::hstring *)&v4);
  return 0LL;
}
