/*
 * XREFs of ??_GGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1803297EC
 * Callers:
 *     ??_EGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x180329560 (--_EGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@WCA.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAA@XZ @ 0x180329124 (--1GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAA.c)
 */

winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::`scalar deleting destructor'(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *this,
        char a2)
{
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::~GamingPostureController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
