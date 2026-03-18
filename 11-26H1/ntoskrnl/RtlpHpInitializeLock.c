/*
 * XREFs of RtlpHpInitializeLock @ 0x14034B490
 * Callers:
 *     RtlpHpLfhBucketInitialize @ 0x140345F70 (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhOwnerInitialize @ 0x140346490 (RtlpHpLfhOwnerInitialize.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x14034B4F0 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpFixedHeapCreate @ 0x1404E3BF0 (RtlpHpFixedHeapCreate.c)
 *     RtlpHpVsSlotCreate @ 0x140504EA8 (RtlpHpVsSlotCreate.c)
 *     RtlHpGlobalsInitialize @ 0x1406254D0 (RtlHpGlobalsInitialize.c)
 *     RtlpHpHeapCreate @ 0x140638298 (RtlpHpHeapCreate.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140638CBC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpSegContextInitialize @ 0x140639184 (RtlpHpSegContextInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpInitializeLock(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    result = 0LL;
  *a1 = 0LL;
  return result;
}
