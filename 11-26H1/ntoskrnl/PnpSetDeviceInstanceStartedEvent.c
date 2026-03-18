/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x1404E3140
 * Callers:
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1404E315C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance(a1 + 40);
}
