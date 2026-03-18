/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1404EB024
 * Callers:
 *     PspGetRateControlSize @ 0x1409E0EF4 (PspGetRateControlSize.c)
 *     PspSessionObjectCreate @ 0x140B2D6B4 (PspSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(464 * KeMaximumProcessors + 128);
}
