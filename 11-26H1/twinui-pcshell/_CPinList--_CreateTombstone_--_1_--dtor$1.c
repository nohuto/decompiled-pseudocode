/*
 * XREFs of _CPinList::_CreateTombstone_::_1_::dtor$1 @ 0x18070625A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPinList::_CreateTombstone_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 72);
}
