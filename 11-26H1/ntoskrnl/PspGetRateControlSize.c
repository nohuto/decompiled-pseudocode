/*
 * XREFs of PspGetRateControlSize @ 0x1409E0EF4
 * Callers:
 *     PspFreeRateControl @ 0x1409E0A08 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1409E0E70 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1404EB024 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
