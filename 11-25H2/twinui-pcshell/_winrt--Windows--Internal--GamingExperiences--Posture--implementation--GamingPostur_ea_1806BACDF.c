/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806BACDF
 * Callers:
 *     <none>
 * Callees:
 *     ??1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18032BDF0 (--1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 40) + 16LL;
  GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::~SetGamingPostureStateActivity(*(GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity **)(a2 + 64));
}
