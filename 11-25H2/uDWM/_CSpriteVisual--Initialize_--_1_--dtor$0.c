/*
 * XREFs of _CSpriteVisual::Initialize_::_1_::dtor$0 @ 0x1800EBAD6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSpriteVisual::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(a2 + 184));
}
