/*
 * XREFs of WmiUnregisterProvider @ 0x14002E704
 * Callers:
 *     DeviceRemove @ 0x14000BF80 (DeviceRemove.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WmiUnregisterProvider(__int64 a1)
{
  return IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 24), 2u);
}
