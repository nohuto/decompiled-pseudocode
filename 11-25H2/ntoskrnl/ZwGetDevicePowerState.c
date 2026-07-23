/*
 * XREFs of ZwGetDevicePowerState @ 0x14069D100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE State)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Device);
}
