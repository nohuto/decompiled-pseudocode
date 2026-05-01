/*
 * XREFs of _CreatePlaceholderPidl_::_1_::dtor$6 @ 0x1806B242C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreatePlaceholderPidl_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 64);
}
