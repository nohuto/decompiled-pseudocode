/*
 * XREFs of KeUpdateGroupSchedulingConstants @ 0x1405F9184
 * Callers:
 *     ?KiEnableGroupScheduling@@YAXXZ @ 0x1405F8E3C (-KiEnableGroupScheduling@@YAXXZ.c)
 *     PspReadDfssConfigurationValues @ 0x140614838 (PspReadDfssConfigurationValues.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     ?KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z @ 0x140445568 (-KiAssignSchedulingGroupWeights@@YAXW4_KSCHEDULING_GROUP_TYPE@@EPEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1404458E0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 */

void __fastcall KeUpdateGroupSchedulingConstants(char a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v3; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a1 )
    KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  Flink = KiSchedulingGroupList.Flink;
  v3 = 1000000 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[0] + 68) / 0x3E8;
  KiCycleDivisorShortTerm = v3 * (unsigned int)PsDfssShortTermSharingMS;
  KiCycleDivisorLongTerm = v3 * (unsigned int)PsDfssLongTermSharingMS;
  KiCyclesPerGeneration = v3 * (unsigned int)PsDfssGenerationLengthMS;
  KiGroupSchedulingNumerator = PsDfssLongTermFraction1024;
  KiGenerationTicks = 10000
                    * (unsigned __int64)(unsigned int)PsDfssGenerationLengthMS
                    / (unsigned int)KeMaximumIncrement;
  if ( KiSchedulingGroupList.Flink )
  {
    while ( Flink != &KiSchedulingGroupList )
    {
      if ( (HIDWORD(Flink[-4].Flink) & 1) != 0 )
        KiUpdateCpuTargetByRate((struct _KSCHEDULING_GROUP *)&Flink[-4], 1u);
      Flink = Flink->Flink;
    }
  }
  KiAssignSchedulingGroupWeights(0, 1u, 0LL);
  if ( !a1 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
