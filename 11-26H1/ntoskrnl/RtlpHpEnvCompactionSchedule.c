/*
 * XREFs of RtlpHpEnvCompactionSchedule @ 0x14034D650
 * Callers:
 *     RtlpHpFreeHeap @ 0x140347010 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextCompact @ 0x140347628 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x140349D0C (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x14034BF30 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14034C570 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034C7D0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14034CDC0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14034D710 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14034D840 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpVsChunkFree @ 0x1403532B0 (RtlpHpVsChunkFree.c)
 *     RtlpHpLfhContextFree @ 0x140353D70 (RtlpHpLfhContextFree.c)
 *     RtlpHpAllocateHeap @ 0x140397A80 (RtlpHpAllocateHeap.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapInternal @ 0x140520DB8 (RtlpHpAllocateHeapInternal.c)
 *     ExConfigurePoolCommitCaching @ 0x1406D2710 (ExConfigurePoolCommitCaching.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1403A97B8 (ExpTimerSetParametersAreValid.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1403AA888 (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpEnvCompactionSchedule(_QWORD *a1)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdi
  ULONG_PTR v5; // r8
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( *((_DWORD *)&ExSaPageGroupDescriptorArrayLock.0 + 1) )
  {
    if ( BYTE1(*a1) == 1 )
    {
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.Tag, 1, 0);
      SchedulingGroup = ExSaPageGroupDescriptorArrayLock.SchedulingGroup;
    }
    else
    {
      v2 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock.SystemCallNumber,
             1,
             0);
      SchedulingGroup = *(_KSCHEDULING_GROUP *volatile *)&ExSaPageGroupDescriptorArrayLock.WaitRegister.Flags;
    }
    if ( !v2 )
    {
      BugCheckParameter3[0] = 0LL;
      BugCheckParameter3[1] = -1LL;
      if ( !(unsigned __int8)ExpTimerSetParametersAreValid(BugCheckParameter3) )
        KeBugCheckEx(0xC7u, 9uLL, v5, (ULONG_PTR)BugCheckParameter3, 0LL);
      ExpCheckForFreedEnhancedTimer((ULONG_PTR)SchedulingGroup);
      KeSetTimer2(SchedulingGroup, -10000000LL, 0LL, BugCheckParameter3);
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
