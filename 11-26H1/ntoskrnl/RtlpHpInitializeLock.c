/*
 * XREFs of RtlpHpInitializeLock @ 0x14034D510
 * Callers:
 *     RtlpHpLfhBucketInitialize @ 0x140347FF0 (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhOwnerInitialize @ 0x140348510 (RtlpHpLfhOwnerInitialize.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x14034D570 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpFixedHeapCreate @ 0x1404DD190 (RtlpHpFixedHeapCreate.c)
 *     RtlpHpVsSlotCreate @ 0x1404FE7E8 (RtlpHpVsSlotCreate.c)
 *     RtlHpGlobalsInitialize @ 0x140628520 (RtlHpGlobalsInitialize.c)
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14063BCCC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpSegContextInitialize @ 0x14063C194 (RtlpHpSegContextInitialize.c)
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
