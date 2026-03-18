/*
 * XREFs of HalpFreeResumeStructures @ 0x140BEB000
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404FEE50 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140359004 (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpFreeResumeStructures(__int64 a1)
{
  if ( HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink )
  {
    HalpMmAllocCtxFree(a1, (__int64)HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink);
    HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink = 0LL;
  }
}
