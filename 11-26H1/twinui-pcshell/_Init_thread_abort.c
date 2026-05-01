/*
 * XREFs of _Init_thread_abort @ 0x1802CDE80
 * Callers:
 *     _Platform::Box_Windows::Foundation::Size_::Box_Windows::Foundation::Size__::_1_::dtor$0 @ 0x1806D15DF (_Platform--Box_Windows--Foundation--Size_--Box_Windows--Foundation--Size__--_1_--dtor$0.c)
 *     _IsGamingOverlayExperienceManagerEnabled_::_1_::dtor$0 @ 0x1806D23C6 (_IsGamingOverlayExperienceManagerEnabled_--_1_--dtor$0.c)
 *     _AreVirtualDesktopsEnabled_::_1_::dtor$0 @ 0x1806D4A0B (_AreVirtualDesktopsEnabled_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$0 @ 0x1806D5F01 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$31 @ 0x1806D600F (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$31.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::dtor$3 @ 0x1806D89D1 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageUninstallEvent.c)
 *     __anonymous_namespace_::IsTrustedWindowsPinProcess_::_1_::dtor$2 @ 0x1806DDD4E (__anonymous_namespace_--IsTrustedWindowsPinProcess_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported_::_1_::dtor$0 @ 0x1807024C5 (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--IsMiracastSupported_--.c)
 *     _CopilotHotkeyManager::CreateHiddenOwnerHwnd_::_1_::dtor$0 @ 0x18070279A (_CopilotHotkeyManager--CreateHiddenOwnerHwnd_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&stru_1808D9728);
  *a1 = 0;
  LeaveCriticalSection(&stru_1808D9728);
  return Init_thread_notify();
}
