/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$42 @ 0x1806E2A03
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$FailedToLaunchGamingAppForContract@PEBGAEAJ@GamingPostureCoreTelemetryProvider@@SAX$$QEAPEBGAEAJ@Z @ 0x1803259B0 (--$FailedToLaunchGamingAppForContract@PEBGAEAJ@GamingPostureCoreTelemetryProvider@@SAX$$QEAPEBGA.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync__ResumeCoro_1_::_1_::catch_42(
        wil *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // r8
  const unsigned __int16 *v5; // rax
  __int64 v6; // r8

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 352);
  *(_DWORD *)(v4 + 160) = v3;
  v5 = winrt::hstring::c_str((winrt::hstring *)(v4 + 144));
  *(_QWORD *)(v6 + 296) = v5;
  GamingPostureCoreTelemetryProvider::FailedToLaunchGamingAppForContract<unsigned short const *,long &>((_QWORD *)(v6 + 296));
  return 0LL;
}
