/*
 * XREFs of PsReferencePartitionSafe @ 0x140258850
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x1402073C8 (MiCheckTrimUnusedPageFileRegions.c)
 *     PsGetNextPartition @ 0x1402580F8 (PsGetNextPartition.c)
 *     MiWakeLargePageRebuild @ 0x140258684 (MiWakeLargePageRebuild.c)
 *     PfLogForegroundProcess @ 0x14025875C (PfLogForegroundProcess.c)
 *     MiScanPagefiles @ 0x1402A7EDC (MiScanPagefiles.c)
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 *     MiPartitionObjectToPartition @ 0x1403486D4 (MiPartitionObjectToPartition.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     CcGetPartitionWithCreate @ 0x1403E1F28 (CcGetPartitionWithCreate.c)
 *     MiCheckZeroFreeRebalance @ 0x1404A141C (MiCheckZeroFreeRebalance.c)
 *     MiDoParentWork @ 0x140503998 (MiDoParentWork.c)
 *     MiLaunchChildWorkers @ 0x1405172B8 (MiLaunchChildWorkers.c)
 *     MiObtainFreePages @ 0x140531914 (MiObtainFreePages.c)
 *     MiReferencePagePartition @ 0x1406F0A6C (MiReferencePagePartition.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x14087E624 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     MiCreateImageOrDataSection @ 0x1409BAFEC (MiCreateImageOrDataSection.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     PsReferencePartitionByHandle @ 0x140A53F9C (PsReferencePartitionByHandle.c)
 *     MiContractWsSwapPageFile @ 0x140AF3E5C (MiContractWsSwapPageFile.c)
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
