/*
 * XREFs of _HapticDeviceManager::TryAttachHapticMouse_::_1_::dtor$0 @ 0x1801DC57C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HapticDeviceManager::TryAttachHapticMouse_::_1_::dtor_0()
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>();
}
