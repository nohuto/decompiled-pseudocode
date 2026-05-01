/*
 * XREFs of _CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1_::_1_::dtor$18 @ 0x1807031E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__ResumeCoro_1_::_1_::dtor_18(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 264) = *(_QWORD *)(a2 + 72) + 424LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 264));
}
