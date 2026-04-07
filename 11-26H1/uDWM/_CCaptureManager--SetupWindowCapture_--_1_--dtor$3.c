/*
 * XREFs of _CCaptureManager::SetupWindowCapture_::_1_::dtor$3 @ 0x1800E8DD2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CCaptureManager::SetupWindowCapture_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 72));
}
