/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1404E4608
 * Callers:
 *     PspGetRateControlSize @ 0x1409B9164 (PspGetRateControlSize.c)
 *     PspSessionObjectCreate @ 0x140B2F734 (PspSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(464 * KeMaximumProcessors + 128);
}
