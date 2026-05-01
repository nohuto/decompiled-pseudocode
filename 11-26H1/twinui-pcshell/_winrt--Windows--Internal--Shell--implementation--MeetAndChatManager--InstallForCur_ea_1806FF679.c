/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806FF679
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x180328F68 (--1-$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync__ResumeCoro_1_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 184) = *(_QWORD *)(a2 + 56) + 752LL;
  std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>(*(wil::ActivityThreadWatcher **)(a2 + 184));
}
