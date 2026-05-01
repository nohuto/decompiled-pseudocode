/*
 * XREFs of _SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor$9 @ 0x180700BB9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)(*(_QWORD *)(a2 + 64) + 248LL));
}
