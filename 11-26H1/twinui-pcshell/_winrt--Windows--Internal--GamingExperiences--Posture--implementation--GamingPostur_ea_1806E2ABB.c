/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$44 @ 0x1806E2ABB
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$HandledUnexpectedException@AEAY0DB@$$CBGJ@GamingPostureCoreTelemetryProvider@@SAXAEAY0DB@$$CBG$$QEAJ@Z @ 0x180325B78 (--$HandledUnexpectedException@AEAY0DB@$$CBGJ@GamingPostureCoreTelemetryProvider@@SAXAEAY0DB@$$CB.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync__ResumeCoro_1_::_1_::catch_44(
        wil *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbx

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 352);
  *(_DWORD *)(v4 + 424) = v3;
  GamingPostureCoreTelemetryProvider::HandledUnexpectedException<unsigned short const (&)[49],long>();
  *(_BYTE *)(v4 - 8) = 0;
  return 0LL;
}
