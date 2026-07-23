/*
 * XREFs of PsReferencePartitionSafe @ 0x14025A030
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402074A8 (MiCheckTrimUnusedPageFileRegions.c)
 *     PsGetNextPartition @ 0x1402598D8 (PsGetNextPartition.c)
 *     MiWakeLargePageRebuild @ 0x140259E64 (MiWakeLargePageRebuild.c)
 *     PfLogForegroundProcess @ 0x140259F3C (PfLogForegroundProcess.c)
 *     MiScanPagefiles @ 0x1402A72EC (MiScanPagefiles.c)
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     CcGetPartitionWithCreate @ 0x1403E5118 (CcGetPartitionWithCreate.c)
 *     MiCheckZeroFreeRebalance @ 0x14049AF4C (MiCheckZeroFreeRebalance.c)
 *     MiDoParentWork @ 0x1404FD268 (MiDoParentWork.c)
 *     MiLaunchChildWorkers @ 0x140510D28 (MiLaunchChildWorkers.c)
 *     MiObtainFreePages @ 0x140533DBC (MiObtainFreePages.c)
 *     MiReferencePagePartition @ 0x1406F56DC (MiReferencePagePartition.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140884A24 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 *     MiContractWsSwapPageFile @ 0x140AF687C (MiContractWsSwapPageFile.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

char __fastcall PsReferencePartitionSafe(__int64 a1)
{
  signed __int64 v1; // rax
  signed __int64 v2; // rtt

  _m_prefetchw((const void *)(a1 + 40));
  v1 = *(_QWORD *)(a1 + 40);
  while ( (unsigned __int64)(v1 + 1) > 1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  if ( v1 )
    __fastfail(0xEu);
  return 0;
}
