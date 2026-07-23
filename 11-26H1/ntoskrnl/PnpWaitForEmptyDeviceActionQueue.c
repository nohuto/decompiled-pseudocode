/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x1407AFEB0
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     IopInitializeBootDrivers @ 0x140CC5374 (IopInitializeBootDrivers.c)
 *     PnpWaitForDevicesToStart @ 0x140CC9A9C (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D0B300 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
