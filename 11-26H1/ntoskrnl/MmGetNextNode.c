/*
 * XREFs of MmGetNextNode @ 0x14045D380
 * Callers:
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024B6A0 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ExpQueueWorkItem @ 0x140381D74 (ExpQueueWorkItem.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x1403822A8 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14063CAB0 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     MmAllocateMemoryRanges @ 0x140867D80 (MmAllocateMemoryRanges.c)
 *     KeInitializeProcess @ 0x140963BE4 (KeInitializeProcess.c)
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
    return *(unsigned int *)(qword_140E2D690 + 4LL * (unsigned int)(v3 + v2 * a1));
}
