/*
 * XREFs of _CreatePlaceholderPidl_::_1_::dtor$5 @ 0x180705E55
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreatePlaceholderPidl_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 120);
}
