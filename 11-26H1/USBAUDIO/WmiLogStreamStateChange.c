/*
 * XREFs of WmiLogStreamStateChange @ 0x1400068BC
 * Callers:
 *     PinSetDeviceState @ 0x14003D470 (PinSetDeviceState.c)
 * Callees:
 *     WmiLogEvent @ 0x1400068FC (WmiLogEvent.c)
 */

__int64 __fastcall WmiLogStreamStateChange(int a1, int a2, int a3)
{
  __int128 v4; // [rsp+40h] [rbp-18h] BYREF

  LOBYTE(a2) = a2 + 1;
  v4 = ExBus_PinState_GUID;
  return WmiLogEvent(a1, a2, (unsigned int)&v4, a1, a3, 0, 0);
}
