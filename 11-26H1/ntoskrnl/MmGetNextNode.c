/*
 * XREFs of MmGetNextNode @ 0x140456D80
 * Callers:
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024D000 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ExpQueueWorkItem @ 0x140383B24 (ExpQueueWorkItem.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x140384058 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640690 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     MmAllocateMemoryRanges @ 0x14086E160 (MmAllocateMemoryRanges.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, int *a2)
{
  int v2; // eax
  int v3; // r8d

  v2 = (unsigned __int16)KeNumberNodes;
  v3 = *a2 + 1;
  *a2 = v3;
  if ( v3 == v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140E2D810 + 4LL * (unsigned int)(v3 + v2 * a1));
}
