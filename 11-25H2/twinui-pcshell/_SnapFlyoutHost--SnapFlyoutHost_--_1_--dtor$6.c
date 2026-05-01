/*
 * XREFs of _SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor$6 @ 0x1806B7511
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall SnapFlyoutHost::SnapFlyoutHost_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(*(_QWORD *)(a2 + 224) + 88LL));
}
