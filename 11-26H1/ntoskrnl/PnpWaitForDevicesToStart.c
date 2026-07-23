/*
 * XREFs of PnpWaitForDevicesToStart @ 0x140CC9A9C
 * Callers:
 *     IopMountBootLayerCallout @ 0x140CC3D20 (IopMountBootLayerCallout.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 * Callees:
 *     IoInvalidateBusRelationsWorker @ 0x1404E84A0 (IoInvalidateBusRelationsWorker.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AFEB0 (PnpWaitForEmptyDeviceActionQueue.c)
 */

_BOOL8 PnpWaitForDevicesToStart()
{
  IoInvalidateBusRelationsWorker();
  return PnpWaitForEmptyDeviceActionQueue() >= 0;
}
