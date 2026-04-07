/*
 * XREFs of _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$7 @ 0x1800EC28E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 200));
}
