/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802C86C0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext_::_1_::dtor$1 @ 0x1806DDD2A (_winrt--Windows--Internal--Shell--implementation--PinManager--GetPinRequestContext_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller_::_1_::dtor$1 @ 0x1806DDD3C (_winrt--Windows--Internal--Shell--implementation--PinManager--CheckForTrustedCaller_--_1_--dtor$.c)
 *     _wil::GetProcessHandleForClientOfObject_::_1_::dtor$0 @ 0x1806DDD60 (_wil--GetProcessHandleForClientOfObject_--_1_--dtor$0.c)
 *     _ViewSizePreferenceHelpers::GetWindowingPolicy_::_1_::dtor$1 @ 0x1806E03D0 (_ViewSizePreferenceHelpers--GetWindowingPolicy_--_1_--dtor$1.c)
 *     __anonymous_namespace_::DoRequestorAndForegroundPublisherMatch_::_1_::dtor$1 @ 0x1806FE33B (__anonymous_namespace_--DoRequestorAndForegroundPublisherMatch_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemFromTrustedCaller_::_1_::dtor$7 @ 0x1806FE576 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemFromTrustedCal_ea_1806FE576.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::UpdatePinnedTaskbarItem_::_1_::dtor$1 @ 0x1806FECB2 (_winrt--Windows--Internal--Shell--implementation--PinManager--UpdatePinnedTaskbarIt_ea_1806FECB2.c)
 *     _CopilotHotkeyManager::TryGetAppUserModelForProcess_::_1_::dtor$0 @ 0x180702EE6 (_CopilotHotkeyManager--TryGetAppUserModelForProcess_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  return wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(a1);
}
