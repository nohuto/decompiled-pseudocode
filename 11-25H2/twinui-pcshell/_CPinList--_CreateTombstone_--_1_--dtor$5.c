/*
 * XREFs of _CPinList::_CreateTombstone_::_1_::dtor$5 @ 0x1806DD64B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinList::_CreateTombstone_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 40);
}
