/*
 * XREFs of PnpWaitForDevicesToStart @ 0x140CC39C8
 * Callers:
 *     IopMountBootLayerCallout @ 0x140CBDC50 (IopMountBootLayerCallout.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 * Callees:
 *     IoInvalidateBusRelationsWorker @ 0x1404EEEC0 (IoInvalidateBusRelationsWorker.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407ACE4C (PnpWaitForEmptyDeviceActionQueue.c)
 */

_BOOL8 PnpWaitForDevicesToStart()
{
  IoInvalidateBusRelationsWorker();
  return PnpWaitForEmptyDeviceActionQueue() >= 0;
}
