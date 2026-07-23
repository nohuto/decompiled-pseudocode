/*
 * XREFs of HalpBuildResumeStructures @ 0x140BF0FB0
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404F8640 (HalpDispatchSystemStateTransition.c)
 *     HalpDpReplaceBegin @ 0x140788940 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 HalpBuildResumeStructures()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  struct _KTHREAD *v2; // rax

  v0 = 1504LL * KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = (struct _KTHREAD *)HalpMmAllocCtxAlloc(v1, v0);
  HalpDeviceBlockUnblockPushLock.WaitBlock[3].Thread = v2;
  if ( !v2 )
    return 3221225626LL;
  memset_0(v2, 0, v0);
  return 0LL;
}
