/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140201320
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404932FC (ExpSaPageGroupDescriptorAllocate.c)
 *     PnpSetDeviceAffinityThread @ 0x14049B304 (PnpSetDeviceAffinityThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404E0B10 (ExAllocateCacheAwarePushLock.c)
 *     EtwpProcessorRundown @ 0x140835E28 (EtwpProcessorRundown.c)
 *     ExpPartitionStart @ 0x140846088 (ExpPartitionStart.c)
 *     ExpWorkQueueManagerInitialize @ 0x1408464F8 (ExpWorkQueueManagerInitialize.c)
 *     ExpNodeCreateSystemThread @ 0x140A78BB8 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x140AF8958 (ExpQueryNumaProcessorMap.c)
 *     KiComputeNumaCosts @ 0x140CCF47C (KiComputeNumaCosts.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140D037E8 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeQueryNodeGroupAffinity @ 0x14020183C (KeQueryNodeGroupAffinity.c)
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 v5; // rcx
  unsigned __int64 NodeGroupAffinity; // rax
  _GROUP_AFFINITY v7; // [rsp+20h] [rbp-18h]

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    _mm_lfence();
    v5 = KeNodeBlock[NodeNumber];
    if ( v5 )
    {
      *(_QWORD *)&v7.Group = *(unsigned __int8 *)(v5 + 12);
      NodeGroupAffinity = KeQueryNodeGroupAffinity(v5, *(_QWORD *)&v7.Group);
      v7.Mask = NodeGroupAffinity;
      if ( Affinity )
        *Affinity = v7;
      if ( Count )
        *Count = __popcnt(NodeGroupAffinity);
    }
  }
}
