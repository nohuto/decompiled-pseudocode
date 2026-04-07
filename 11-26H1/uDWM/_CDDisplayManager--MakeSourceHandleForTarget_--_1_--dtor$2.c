/*
 * XREFs of _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$2 @ 0x1800E8052
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 96));
}
