/*
 * XREFs of ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180329BD0
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805D1010 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1805D1010.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x18032B58C (--0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?reset@?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ @ 0x180333778 (-reset@-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset();
  wil::ActivityThreadWatcher::ActivityThreadWatcher(a1, a2);
  result = a1;
  *(_BYTE *)(a1 + 72) = 1;
  return result;
}
