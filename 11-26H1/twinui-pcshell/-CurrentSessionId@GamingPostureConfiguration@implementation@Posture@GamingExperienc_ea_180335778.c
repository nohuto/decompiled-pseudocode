/*
 * XREFs of ?CurrentSessionId@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x180335778
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803322B0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     _anonymous_namespace_::SetConfigurationValue_winrt::hstring_ @ 0x180334204 (_anonymous_namespace_--SetConfigurationValue_winrt--hstring_.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::CurrentSessionId(
        const struct winrt::hstring *a1,
        __int64 a2,
        unsigned int a3)
{
  winrt::hstring *v3; // rax
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = winrt::hstring::hstring((winrt::hstring *)&v4, a1, a3);
  anonymous_namespace_::SetConfigurationValue_winrt::hstring_(L"CurrentSessionId", v3);
}
