/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x1404BC6DC
 * Callers:
 *     PnpSetDevicePropertyData @ 0x140A18AE4 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1404BC6F8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
