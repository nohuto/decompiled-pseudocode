/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1_::_1_::catch$9 @ 0x1806E0C83
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802D8F60 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802D91F4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x180685104 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__ResumeCoro_1_::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r9
  wil *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rcx

  v3 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v3 + 48) = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
    (__int64 *)(*(_QWORD *)(v3 + 104) + 96LL),
    (__int64 *)(v3 + 48));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v3 + 48));
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x38,
    (int)"pcshell\\twinui\\focussessioncomponent\\lib\\focussessioncomponent.cpp",
    v4);
  v6 = wil::ResultFromCaughtException(v5);
  MicrosoftTelemetryAssertTriggeredArgs(v7, v6);
  return 0LL;
}
