/*
 * XREFs of _Init_thread_abort @ 0x1802D5860
 * Callers:
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$0 @ 0x1806A8F7F (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$31 @ 0x1806A908D (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$31.c)
 *     __lambda_120b110b9b84ba13734d7b16b46ad979_::operator()_::_1_::dtor$0 @ 0x1806ABA7D (__lambda_120b110b9b84ba13734d7b16b46ad979_--operator()_--_1_--dtor$0.c)
 *     _Platform::Box_Windows::Foundation::Size_::Box_Windows::Foundation::Size__::_1_::dtor$0 @ 0x1806AC021 (_Platform--Box_Windows--Foundation--Size_--Box_Windows--Foundation--Size__--_1_--dtor$0.c)
 *     _IsGamingOverlayExperienceManagerEnabled_::_1_::dtor$0 @ 0x1806AC77D (_IsGamingOverlayExperienceManagerEnabled_--_1_--dtor$0.c)
 *     _AreVirtualDesktopsEnabled_::_1_::dtor$0 @ 0x1806ADDC2 (_AreVirtualDesktopsEnabled_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::dtor$3 @ 0x1806B14B5 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageUninstallEvent.c)
 *     __anonymous_namespace_::IsTrustedWindowsPinProcess_::_1_::dtor$2 @ 0x1806B63F2 (__anonymous_namespace_--IsTrustedWindowsPinProcess_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported_::_1_::dtor$0 @ 0x1806D9CE2 (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--IsMiracastSupported_--.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&stru_1808990A8);
  *a1 = 0;
  LeaveCriticalSection(&stru_1808990A8);
  return Init_thread_notify();
}
