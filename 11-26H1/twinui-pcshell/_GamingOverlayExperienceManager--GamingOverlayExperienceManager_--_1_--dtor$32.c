/*
 * XREFs of _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$32 @ 0x1806E3CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor_32(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(*(_QWORD *)(a2 + 40) + 880LL));
}
