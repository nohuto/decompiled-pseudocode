/*
 * XREFs of _CWindowData::EnsureClientAreaVisualProxy_::_1_::dtor$0 @ 0x1800EDA53
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CWindowData::EnsureClientAreaVisualProxy_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 48));
}
