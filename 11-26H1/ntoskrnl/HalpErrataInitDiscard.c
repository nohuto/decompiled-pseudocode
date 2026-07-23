/*
 * XREFs of HalpErrataInitDiscard @ 0x140CB52CC
 * Callers:
 *     HalpErrataInitSystem @ 0x140BF11F0 (HalpErrataInitSystem.c)
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
