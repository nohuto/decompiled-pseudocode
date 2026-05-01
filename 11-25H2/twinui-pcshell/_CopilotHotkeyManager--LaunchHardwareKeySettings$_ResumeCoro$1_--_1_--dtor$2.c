/*
 * XREFs of _CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806DA0FF
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::LaunchHardwareKeySettings__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 240) + 72LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 152));
}
