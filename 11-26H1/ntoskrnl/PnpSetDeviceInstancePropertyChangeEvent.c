/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x1404C2E8C
 * Callers:
 *     PnpSetDevicePropertyData @ 0x1409DB894 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1404C2EA8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
