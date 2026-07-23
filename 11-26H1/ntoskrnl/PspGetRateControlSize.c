/*
 * XREFs of PspGetRateControlSize @ 0x1409B9164
 * Callers:
 *     PspFreeRateControl @ 0x1409B8C78 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1409B90E0 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1404E4608 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
