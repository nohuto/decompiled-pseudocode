/*
 * XREFs of _SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor$6 @ 0x1806DE898
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(*(_QWORD *)(a2 + 144) + 88LL));
}
