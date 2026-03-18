/*
 * XREFs of HalpBuildResumeStructures @ 0x140BEAFB0
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x1404FEE50 (HalpDispatchSystemStateTransition.c)
 *     HalpDpReplaceBegin @ 0x140785E10 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     HalpMmAllocCtxAlloc @ 0x140357FFC (HalpMmAllocCtxAlloc.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 HalpBuildResumeStructures()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  struct _LIST_ENTRY *v2; // rax

  v0 = 1504LL * KeQueryActiveProcessorCountEx(0xFFFFu);
  v2 = (struct _LIST_ENTRY *)HalpMmAllocCtxAlloc(v1, v0);
  HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink = v2;
  if ( !v2 )
    return 3221225626LL;
  memset_0(v2, 0, v0);
  return 0LL;
}
