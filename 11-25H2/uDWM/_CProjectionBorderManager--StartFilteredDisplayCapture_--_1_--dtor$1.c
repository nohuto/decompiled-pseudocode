/*
 * XREFs of _CProjectionBorderManager::StartFilteredDisplayCapture_::_1_::dtor$1 @ 0x1800ED159
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CProjectionBorderManager::StartFilteredDisplayCapture_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 72));
}
