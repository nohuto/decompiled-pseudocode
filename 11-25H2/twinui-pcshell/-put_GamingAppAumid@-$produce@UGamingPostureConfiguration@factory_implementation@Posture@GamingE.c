/*
 * XREFs of ?put_GamingAppAumid@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x1803376A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x1803361CC (-GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences_ea_1803361CC.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::factory_implementation::GamingPostureConfiguration,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureConfigurationStatics>::put_GamingAppAumid(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a1;
  try
  {
    winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::GamingAppAumid((const struct winrt::hstring *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
