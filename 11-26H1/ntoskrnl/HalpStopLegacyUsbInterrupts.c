/*
 * XREFs of HalpStopLegacyUsbInterrupts @ 0x140C0EA70
 * Callers:
 *     <none>
 * Callees:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140BF4CEC (HalpStopLegacyUsbInterruptsInternal.c)
 */

char __fastcall HalpStopLegacyUsbInterrupts(int a1)
{
  char result; // al

  if ( a1 < 5 )
    return HalpStopLegacyUsbInterruptsInternal(a1);
  return result;
}
