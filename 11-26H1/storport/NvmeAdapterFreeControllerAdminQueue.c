/*
 * XREFs of NvmeAdapterFreeControllerAdminQueue @ 0x1400E8D20
 * Callers:
 *     NvmeAdapterAllocateControllerAdminQueue @ 0x1400E4658 (NvmeAdapterAllocateControllerAdminQueue.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     NvmeFabricControllerQueueCleanupHostDHKey @ 0x1400FBF3C (NvmeFabricControllerQueueCleanupHostDHKey.c)
 */

void __fastcall NvmeAdapterFreeControllerAdminQueue(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 712);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 96) )
    {
      NvmeFabricControllerQueueCleanupHostDHKey();
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 712) + 96LL), 0x414E6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 712) + 96LL) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 712), 0x52436152u);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
}
