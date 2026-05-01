/*
 * XREFs of ?StoreSystemDialogResult@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@K@Z @ 0x1803372D0
 * Callers:
 *     ?StoreSystemDialogResult@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAXI@Z @ 0x1803372A0 (-StoreSystemDialogResult@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@Ga.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x180339690 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180339690.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::StoreSystemDialogResult(
        const struct winrt::hstring *a1)
{
  const unsigned __int16 *v1; // rax
  unsigned int v2; // edx

  v1 = winrt::hstring::c_str(a1);
  anonymous_namespace_::SetConfigurationValue_unsigned_long_((__int64)v1, v2, L"SystemDialogResults");
}
