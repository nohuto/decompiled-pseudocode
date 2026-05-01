/*
 * XREFs of ??_G?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x18032966C
 * Callers:
 *     ??_E?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@WCA@EAAPEAXI@Z @ 0x180329520 (--_E-$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180328F08 (--1-$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Inte.c)
 */

winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>::`scalar deleting destructor'(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>::~module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xA8);
  return a1;
}
