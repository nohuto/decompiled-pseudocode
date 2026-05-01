/*
 * XREFs of winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_713f98e9637187737676d9e165c80457___ @ 0x180328A58
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_713f98e9637187737676d9e165c80457___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x18uLL);
  v5[2] = 1;
  *((_QWORD *)v5 + 2) = a2;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = off_180708338;
  *a1 = v5;
  return a1;
}
