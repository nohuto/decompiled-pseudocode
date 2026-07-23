/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     MiGetPerfectColorHeadPage @ 0x140288F90 (MiGetPerfectColorHeadPage.c)
 *     MiSynchronizeFastPageInsert @ 0x1402B0720 (MiSynchronizeFastPageInsert.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     PspIumReplenishPartitionPages @ 0x14040B478 (PspIumReplenishPartitionPages.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1404581F0 (MmDoesFileHaveUserWritableReferences.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiComputeFlushRange @ 0x14045DF50 (MiComputeFlushRange.c)
 *     MiReferenceControlArea @ 0x1404694F0 (MiReferenceControlArea.c)
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MmFlushImageSection @ 0x140494970 (MmFlushImageSection.c)
 *     MiCanFileBeTruncatedInternal @ 0x1404A5164 (MiCanFileBeTruncatedInternal.c)
 *     MiReferencePfBackedSection @ 0x1404CB310 (MiReferencePfBackedSection.c)
 *     CcBcbProfiler @ 0x1405424B0 (CcBcbProfiler.c)
 *     HalpIommuReportIommuFault @ 0x1405A2AB0 (HalpIommuReportIommuFault.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x1406EC1A0 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406EC344 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiPrepareDeleteOnClose @ 0x1406EC534 (MiPrepareDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1406EC5B0 (MiProcessDeleteOnClose.c)
 *     MiFreezeIoPfnNode @ 0x1406F8D5C (MiFreezeIoPfnNode.c)
 *     MiDbgMarkPfnModified @ 0x1407031F0 (MiDbgMarkPfnModified.c)
 *     MiConvertWorkingSetLockSharedToExclusive @ 0x140708254 (MiConvertWorkingSetLockSharedToExclusive.c)
 *     sub_140782330 @ 0x140782330 (sub_140782330.c)
 *     KiForceSymbolReferences @ 0x140CCFB88 (KiForceSymbolReferences.c)
 * Callees:
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14040B640 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  unsigned int v2; // ecx
  signed __int32 v3; // r8d
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    return ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
  v2 = 0;
  v3 = 0x80000000;
  v4 = 0;
  while ( 1 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange(a1, v3, v4);
    if ( v5 == v4 )
      break;
    if ( v4 )
    {
      if ( v4 != 0x40000000 )
        return v2;
      v3 |= 0x40000000u;
    }
    else
    {
      v3 &= ~0x40000000u;
    }
  }
  return 1;
}
