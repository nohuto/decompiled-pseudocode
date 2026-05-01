/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@$$QEAV01@@Z @ 0x180328874
 * Callers:
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805F5640 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurrentUserAsync$.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x1800AE938 (--0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(__int64 a1, __int64 a2)
{
  wil::details::StoredCallContextInfo::StoredCallContextInfo(a1, a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  if ( *(_DWORD *)(a2 + 56) )
  {
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 32));
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 32));
  }
  *(_QWORD *)(a1 + 64) = a1;
  return a1;
}
