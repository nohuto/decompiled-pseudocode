/*
 * XREFs of _InputStateManager::OnDeviceQueryRemove_::_1_::dtor$1 @ 0x1801D951F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::OnDeviceQueryRemove_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<HapticDeviceCollection>::~ComPtr<HapticDeviceCollection>(a2 + 48);
}
