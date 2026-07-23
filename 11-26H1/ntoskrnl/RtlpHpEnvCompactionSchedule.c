/*
 * XREFs of RtlpHpEnvCompactionSchedule @ 0x14034F6D0
 * Callers:
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextCompact @ 0x1403496A8 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x14034BD8C (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034DFB0 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14034E5F0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034E850 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14034EE40 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14034F790 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034F8C0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 *     RtlpHpLfhContextFree @ 0x140355DF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 *     ExConfigurePoolCommitCaching @ 0x1406D6740 (ExConfigurePoolCommitCaching.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1403B33C8 (ExpTimerSetParametersAreValid.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1403B4498 (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpEnvCompactionSchedule(_QWORD *a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax
  void *TrapFrame; // rdi
  ULONG_PTR v5; // r8
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( LODWORD(ExSaPageGroupDescriptorArrayLock.StackBase) )
  {
    if ( BYTE1(*a1) == 1 )
    {
      v2 = _InterlockedCompareExchange((_DWORD *)&ExSaPageGroupDescriptorArrayLock.StackBase + 1, 1, 0);
      TrapFrame = ExSaPageGroupDescriptorArrayLock.TrapFrame;
    }
    else
    {
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.ThreadLock, 1, 0);
      TrapFrame = ExSaPageGroupDescriptorArrayLock.StackLimit;
    }
    if ( !v2 )
    {
      BugCheckParameter3[0] = 0LL;
      BugCheckParameter3[1] = -1LL;
      if ( !(unsigned __int8)ExpTimerSetParametersAreValid(BugCheckParameter3) )
        KeBugCheckEx(0xC7u, 9uLL, v5, (ULONG_PTR)BugCheckParameter3, 0LL);
      ExpCheckForFreedEnhancedTimer((ULONG_PTR)TrapFrame);
      KeSetTimer2(TrapFrame, -10000000LL, 0LL, BugCheckParameter3);
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
