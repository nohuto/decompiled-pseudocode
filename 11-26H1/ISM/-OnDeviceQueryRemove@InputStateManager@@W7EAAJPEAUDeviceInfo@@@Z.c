/*
 * XREFs of ?OnDeviceQueryRemove@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x1800CCE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::OnDeviceQueryRemove(__int64 a1, struct DeviceInfo *a2)
{
  return InputStateManager::OnDeviceQueryRemove((InputStateManager *)(a1 - 8), a2);
}
