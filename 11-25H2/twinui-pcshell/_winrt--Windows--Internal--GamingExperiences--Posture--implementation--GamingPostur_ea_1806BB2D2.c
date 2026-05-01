/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::dtor$16 @ 0x1806BB2D2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$optional@Uhstring@winrt@@@std@@QEAA@XZ @ 0x1802D1888 (--1-$optional@Uhstring@winrt@@@std@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync__ResumeCoro_1_::_1_::dtor_16(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 56) + 496LL;
  std::optional<winrt::hstring>::~optional<winrt::hstring>(*(_QWORD *)(a2 + 192));
}
