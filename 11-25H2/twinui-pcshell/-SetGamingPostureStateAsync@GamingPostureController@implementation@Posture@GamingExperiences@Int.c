/*
 * XREFs of ?SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@Z @ 0x180330354
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032D390 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032D390.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032D7D0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032D7D0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032E5A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032E5A0.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x180332DD0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18032BDF0 (--1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_InitCoro$2 @ 0x18032F63C (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync(
        __int64 a1,
        __int64 *a2,
        char a3,
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *a4)
{
  void *v7; // rax
  char v9[8]; // [rsp+30h] [rbp-5A8h] BYREF
  _DWORD v10[346]; // [rsp+38h] [rbp-5A0h] BYREF
  GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *v11; // [rsp+5A0h] [rbp-38h]

  v9[0] = a3;
  v11 = a4;
  v7 = operator new(0x560uLL);
  v10[0] = 0;
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync__InitCoro_2(
    v10,
    (__int64)v7 + 112,
    a2,
    v9,
    (__int64)a4,
    a1);
  GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::~SetGamingPostureStateActivity(a4);
  return a2;
}
