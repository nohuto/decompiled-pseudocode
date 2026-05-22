/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180098C18
 * Callers:
 *     _CompliantHapticInterface::CompliantHapticInterface_::_1_::dtor$0 @ 0x1801DC233 (_CompliantHapticInterface--CompliantHapticInterface_--_1_--dtor$0.c)
 *     _HapticDeviceManager::TryAttachHapticMouse_::_1_::dtor$0 @ 0x1801DC57C (_HapticDeviceManager--TryAttachHapticMouse_--_1_--dtor$0.c)
 *     _PenInterface::PenInterface_::_1_::dtor$3 @ 0x1801DC728 (_PenInterface--PenInterface_--_1_--dtor$3.c)
 *     _PTPProcessor::CheckForHapticTouchpadArrival_::_1_::dtor$0 @ 0x1801DD603 (_PTPProcessor--CheckForHapticTouchpadArrival_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>()
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>();
}
