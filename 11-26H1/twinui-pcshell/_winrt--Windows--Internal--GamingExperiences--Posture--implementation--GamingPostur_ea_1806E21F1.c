/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E21F1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x180328F68 (--1-$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 224) = *(_QWORD *)(a2 + 56) + 32LL;
  std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>(*(wil::ActivityThreadWatcher **)(a2 + 224));
}
