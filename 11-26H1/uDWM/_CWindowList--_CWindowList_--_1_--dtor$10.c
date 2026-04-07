/*
 * XREFs of _CWindowList::_CWindowList_::_1_::dtor$10 @ 0x1800E9AEE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CWindowList::_CWindowList_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(*(_QWORD *)(a2 + 64) + 616LL));
}
