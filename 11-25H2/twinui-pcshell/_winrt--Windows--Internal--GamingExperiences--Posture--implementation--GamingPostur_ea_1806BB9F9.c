/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::catch$5 @ 0x1806BB9F9
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802E0404 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$HandledUnexpectedException@AEAY0DK@$$CBGJ@GamingPostureCoreTelemetryProvider@@SAXAEAY0DK@$$CBG$$QEAJ@Z @ 0x180329300 (--$HandledUnexpectedException@AEAY0DK@$$CBGJ@GamingPostureCoreTelemetryProvider@@SAXAEAY0DK@$$CB.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::catch_5(
        wil *a1,
        __int64 a2)
{
  *(_WORD *)(a2 + 32) = 256;
  *(_WORD *)(a2 + 32) = *(_WORD *)(a2 + 32);
  *(_DWORD *)(a2 + 40) = wil::ResultFromCaughtException(a1);
  GamingPostureCoreTelemetryProvider::HandledUnexpectedException<unsigned short const (&)[58],long>();
  return 0LL;
}
