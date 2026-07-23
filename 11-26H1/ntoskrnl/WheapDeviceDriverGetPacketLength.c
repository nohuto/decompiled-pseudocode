/*
 * XREFs of WheapDeviceDriverGetPacketLength @ 0x1406D9724
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x14084DEA0 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapDeviceDriverGetPacketLength(int a1, int a2)
{
  return a1 + 72 * a2 + 108 - (((_BYTE)a1 + 72 * (_BYTE)a2 + 108 - 1) & 7u) + 111;
}
