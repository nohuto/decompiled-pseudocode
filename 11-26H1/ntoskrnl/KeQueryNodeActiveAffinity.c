/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140201320
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x1404997AC (ExpSaPageGroupDescriptorAllocate.c)
 *     PnpSetDeviceAffinityThread @ 0x1404A17D4 (PnpSetDeviceAffinityThread.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404E7750 (ExAllocateCacheAwarePushLock.c)
 *     EtwpProcessorRundown @ 0x14082FBE8 (EtwpProcessorRundown.c)
 *     ExpPartitionStart @ 0x14083FE48 (ExpPartitionStart.c)
 *     ExpWorkQueueManagerInitialize @ 0x1408402B8 (ExpWorkQueueManagerInitialize.c)
 *     ExpNodeCreateSystemThread @ 0x140A03568 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x140AF62B8 (ExpQueryNumaProcessorMap.c)
 *     KiComputeNumaCosts @ 0x140CC93EC (KiComputeNumaCosts.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140CFD468 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeQueryNodeGroupAffinity @ 0x14020183C (KeQueryNodeGroupAffinity.c)
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 v5; // rcx
  unsigned __int64 NodeGroupAffinity; // rax
  struct _GROUP_AFFINITY v7; // [rsp+20h] [rbp-18h]

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
