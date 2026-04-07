/*
 * XREFs of _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$1 @ 0x1800E8DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 120));
}
