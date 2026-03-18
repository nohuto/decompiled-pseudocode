/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x140779AF0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140D05030 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
