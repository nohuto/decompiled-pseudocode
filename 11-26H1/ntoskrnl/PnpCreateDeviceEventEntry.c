/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x14090962C
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1404C2EA8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1404E315C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1404E42C0 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetBlockedDriverEvent @ 0x1407AD974 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1407AD9E4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1407ADAF0 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1407ADB90 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1407ADC48 (PnpSetPowerVetoEvent.c)
 *     PnpSetPlugPlayEvent @ 0x140908CAC (PnpSetPlugPlayEvent.c)
 *     PnpSetDeviceClassChange @ 0x140908DF4 (PnpSetDeviceClassChange.c)
 *     PnpInsertNoopEvent @ 0x14090945C (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1409094C8 (PnpSetCustomTargetEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14090E200 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpShutdownDevices @ 0x140B6BDA8 (PnpShutdownDevices.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PnpCreateDeviceEventEntry()
{
  __int64 result; // rax

  result = ExAllocatePool2(0x100uLL);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
