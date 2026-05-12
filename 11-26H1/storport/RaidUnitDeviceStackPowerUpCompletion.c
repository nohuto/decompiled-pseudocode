/*
 * XREFs of RaidUnitDeviceStackPowerUpCompletion @ 0x140050A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitDeviceStackPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _BYTE *Context)
{
  Context[504] &= ~0x80u;
}
