/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x1407ACE4C
 * Callers:
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     PnpWaitForDevicesToStart @ 0x140CC39C8 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D05030 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
