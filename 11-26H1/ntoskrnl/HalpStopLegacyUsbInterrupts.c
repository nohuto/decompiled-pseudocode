/*
 * XREFs of HalpStopLegacyUsbInterrupts @ 0x140C08860
 * Callers:
 *     <none>
 * Callees:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140BEECEC (HalpStopLegacyUsbInterruptsInternal.c)
 */

char __fastcall HalpStopLegacyUsbInterrupts(int a1)
{
  char result; // al

  if ( a1 < 5 )
    return HalpStopLegacyUsbInterruptsInternal(a1);
  return result;
}
