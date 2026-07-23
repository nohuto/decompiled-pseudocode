/*
 * XREFs of PopSetupBluetoothChargingNotification @ 0x1407CB670
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupBluetoothChargingNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (unsigned int)&v1,
           (unsigned int)&WNF_BLTH_BLUETOOTH_DEVICE_DOCK_STATUS,
           1,
           0,
           (__int64)PopWnfBluetoothChargingCallback,
           0LL);
}
