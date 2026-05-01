/*
 * XREFs of _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$28 @ 0x1806BC927
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor_28(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(*(_QWORD *)(a2 + 48) + 824LL));
}
