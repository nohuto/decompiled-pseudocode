/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E32D2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UWASDKInitializationWrapper@@@winrt@@QEAA@XZ @ 0x180328E10 (--1-$com_ptr@UWASDKInitializationWrapper@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 240) = *(_QWORD *)(a2 + 400) + 16LL;
  return winrt::com_ptr<WASDKInitializationWrapper>::~com_ptr<WASDKInitializationWrapper>(*(_QWORD **)(a2 + 240));
}
