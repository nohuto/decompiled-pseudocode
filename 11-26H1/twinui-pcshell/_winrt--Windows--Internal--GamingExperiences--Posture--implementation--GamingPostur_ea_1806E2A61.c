/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync$_ResumeCoro$1_::_1_::catch$43 @ 0x1806E2A61
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::TryLaunchGamingAppAsync__ResumeCoro_1_::_1_::catch_43(
        wil *a1,
        __int64 a2)
{
  unsigned int v3; // eax

  v3 = wil::ResultFromCaughtException(a1);
  *(_DWORD *)(*(_QWORD *)(a2 + 352) + 160LL) = v3;
  *(_DWORD *)(a2 + 360) = v3;
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 344),
    (void *)0x324,
    (int)"pcshell\\twinui\\gamingposture\\lib\\gamingposturecontroller.cpp",
    (const char *)v3);
  return 0LL;
}
