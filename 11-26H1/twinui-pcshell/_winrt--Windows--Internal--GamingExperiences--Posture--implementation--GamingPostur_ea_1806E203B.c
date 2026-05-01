/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::dtor$7 @ 0x1806E203B
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync__ResumeCoro_1_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a2 + 56) + 784LL;
  wil::ActivityThreadWatcher::~ActivityThreadWatcher(*(wil::ActivityThreadWatcher **)(a2 + 160));
}
