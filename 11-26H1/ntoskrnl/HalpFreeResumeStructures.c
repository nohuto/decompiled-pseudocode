/*
 * XREFs of HalpFreeResumeStructures @ 0x140BF1000
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404F8640 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpFreeResumeStructures(__int64 a1)
{
  if ( HalpDeviceBlockUnblockPushLock.WaitBlock[3].Thread )
  {
    HalpMmAllocCtxFree(a1, (__int64)HalpDeviceBlockUnblockPushLock.WaitBlock[3].Thread);
    HalpDeviceBlockUnblockPushLock.WaitBlock[3].Thread = 0LL;
  }
}
