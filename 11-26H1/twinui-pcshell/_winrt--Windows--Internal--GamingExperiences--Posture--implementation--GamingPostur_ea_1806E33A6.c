/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806E33A6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$map@Uhstring@winrt@@U12@@param@winrt@@QEAA@XZ @ 0x1802BE33C (--1-$map@Uhstring@winrt@@U12@@param@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync__ResumeCoro_1_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 400) + 200LL;
  winrt::param::map<winrt::hstring,winrt::hstring>::~map<winrt::hstring,winrt::hstring>(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 272));
}
