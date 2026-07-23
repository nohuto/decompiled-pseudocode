/*
 * XREFs of ZwGetDevicePowerState @ 0x140729F80
 * Callers:
 *     DifZwGetDevicePowerStateWrapper @ 0x1406AB3C0 (DifZwGetDevicePowerStateWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE State)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Device);
}
