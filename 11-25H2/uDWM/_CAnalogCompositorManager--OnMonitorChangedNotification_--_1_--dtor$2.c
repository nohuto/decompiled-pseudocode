/*
 * XREFs of _CAnalogCompositorManager::OnMonitorChangedNotification_::_1_::dtor$2 @ 0x1800ED049
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogCompositorManager::OnMonitorChangedNotification_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>::~vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Devices::Display::Core::DisplayTarget *>>(a2 + 104);
}
