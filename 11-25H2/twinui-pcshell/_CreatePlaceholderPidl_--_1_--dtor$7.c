/*
 * XREFs of _CreatePlaceholderPidl_::_1_::dtor$7 @ 0x1806D61E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreatePlaceholderPidl_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 112));
}
