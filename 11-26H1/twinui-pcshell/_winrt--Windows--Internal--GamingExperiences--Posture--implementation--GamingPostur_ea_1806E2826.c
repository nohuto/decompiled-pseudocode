/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806E2826
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ @ 0x18028CDD4 (--1-$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync__ResumeCoro_1_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 208) = *(_QWORD *)(a2 + 352) + 128LL;
  return winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
           *(_QWORD **)(a2 + 208),
           a2);
}
