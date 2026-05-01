/*
 * XREFs of ??1_parameters_@?7??LaunchCustomUriForResultsAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@ULauncherOptions@System@Windows@4@@Z@QEAA@XZ @ 0x180622D04
 * Callers:
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x1806328B0 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     _CopilotHotkeyManager::LaunchCustomUriForResultsAsync_::_1_::dtor$3 @ 0x180702C54 (_CopilotHotkeyManager--LaunchCustomUriForResultsAsync_--_1_--dtor$3.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall `CopilotHotkeyManager::LaunchCustomUriForResultsAsync'::`8'::_parameters_::~_parameters_(__int64 a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
  return std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 8));
}
