/*
 * XREFs of ?WaitForOobeToComplete@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@XZ @ 0x18033159C
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032E5A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032E5A0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1 @ 0x180330A10 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180330A10.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete$_InitCoro$2 @ 0x180331164 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--W.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+1C8h] [rbp+10h] BYREF

  v4 = operator new(0x190uLL);
  v6 = 0;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::WaitForOobeToComplete__InitCoro_2(
    &v6,
    (__int64)v4 + 112,
    a2,
    a1);
  return a2;
}
