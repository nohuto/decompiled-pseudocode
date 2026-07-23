/*
 * XREFs of RtlpBreakPointHeap @ 0x180012A14
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x180010020 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlDebugAllocateHeap @ 0x180060070 (RtlDebugAllocateHeap.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     RtlpValidateHeapEntry @ 0x1800610A0 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x18006127C (RtlpCheckBusyBlockTail.c)
 *     RtlUnlockHeap @ 0x180061510 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180061700 (RtlLockHeap.c)
 *     RtlDebugFreeHeap @ 0x1800FEF68 (RtlDebugFreeHeap.c)
 *     RtlDebugCreateHeap @ 0x1801136E8 (RtlDebugCreateHeap.c)
 * Callees:
 *     <none>
 */

struct _PEB *RtlpBreakPointHeap()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return result;
}
