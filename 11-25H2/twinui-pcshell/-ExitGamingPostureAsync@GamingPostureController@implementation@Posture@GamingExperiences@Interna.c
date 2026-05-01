/*
 * XREFs of ?ExitGamingPostureAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@XZ @ 0x18032DA50
 * Callers:
 *     ?ExitGamingPostureAsync@?$produce@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureController@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18032DA00 (-ExitGamingPostureAsync@-$produce@UGamingPostureController@implementation@Posture@GamingExperien.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_InitCoro$2 @ 0x18032D6D0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032D6D0.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+398h] [rbp+10h] BYREF

  v4 = operator new(0x360uLL);
  v6 = 0;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 112,
    a2,
    a1);
  return a2;
}
