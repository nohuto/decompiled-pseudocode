/*
 * XREFs of PinWaitForStarvation @ 0x14000BF3C
 * Callers:
 *     USBHwDataPipeReset @ 0x14002D724 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x140039FA0 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x140004FA8 (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}
