/*
 * XREFs of HalpErrataInitDiscard @ 0x140CAF28C
 * Callers:
 *     HalpErrataInitSystem @ 0x140BEB1F0 (HalpErrataInitSystem.c)
 * Callees:
 *     <none>
 */

char (__fastcall *HalpErrataInitDiscard())(int a1)
{
  char (__fastcall *result)(int); // rax

  result = HalpStopLegacyUsbInterrupts;
  off_140E00920[0] = (__int64 (__fastcall *)())HalpStopLegacyUsbInterrupts;
  return result;
}
