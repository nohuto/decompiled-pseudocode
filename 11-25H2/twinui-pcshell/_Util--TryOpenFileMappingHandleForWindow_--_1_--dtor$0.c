/*
 * XREFs of _Util::TryOpenFileMappingHandleForWindow_::_1_::dtor$0 @ 0x1806AA849
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Util::TryOpenFileMappingHandleForWindow_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 48));
}
