/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x1409AB1EC
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1404BC6F8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1404DC6F0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404DD860 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetBlockedDriverEvent @ 0x1407B09D4 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1407B0A44 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1407B0B50 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1407B0BF0 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1407B0CA8 (PnpSetPowerVetoEvent.c)
 *     PnpSetDeviceClassChange @ 0x1409AA9B0 (PnpSetDeviceClassChange.c)
 *     PnpInsertNoopEvent @ 0x1409AB01C (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1409AB088 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1409ABCFC (PnpSetPlugPlayEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1409B0330 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpShutdownDevices @ 0x140B6EEA4 (PnpShutdownDevices.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PnpCreateDeviceEventEntry()
{
  __int64 result; // rax

  result = ExAllocatePool2(0x100uLL);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
