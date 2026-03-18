/*
 * XREFs of ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x140249DB0 (RtlpHpVsContextAllocate.c)
 *     MiGetPerfectColorHeadPage @ 0x140289A30 (MiGetPerfectColorHeadPage.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiSynchronizeFastPageInsert @ 0x1402CE960 (MiSynchronizeFastPageInsert.c)
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1403FFAC0 (MmDoesFileHaveUserWritableReferences.c)
 *     PspIumReplenishPartitionPages @ 0x140416E68 (PspIumReplenishPartitionPages.c)
 *     MiLockSectionControlArea @ 0x14044FAD0 (MiLockSectionControlArea.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiComputeFlushRange @ 0x140464F90 (MiComputeFlushRange.c)
 *     MiReferenceControlArea @ 0x14046FD70 (MiReferenceControlArea.c)
 *     MiPruneUnusedList @ 0x14048F610 (MiPruneUnusedList.c)
 *     MmFlushImageSection @ 0x14049AE20 (MmFlushImageSection.c)
 *     MiCanFileBeTruncatedInternal @ 0x1404ABAD4 (MiCanFileBeTruncatedInternal.c)
 *     MiReferencePfBackedSection @ 0x1404D1764 (MiReferencePfBackedSection.c)
 *     CcBcbProfiler @ 0x140540030 (CcBcbProfiler.c)
 *     HalpIommuReportIommuFault @ 0x1405A02C0 (HalpIommuReportIommuFault.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x1406E74F0 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406E7694 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiPrepareDeleteOnClose @ 0x1406E7884 (MiPrepareDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1406E7900 (MiProcessDeleteOnClose.c)
 *     MiFreezeIoPfnNode @ 0x1406F40F0 (MiFreezeIoPfnNode.c)
 *     MiDbgMarkPfnModified @ 0x1406FE520 (MiDbgMarkPfnModified.c)
 *     MiConvertWorkingSetLockSharedToExclusive @ 0x140703584 (MiConvertWorkingSetLockSharedToExclusive.c)
 *     sub_14077F830 @ 0x14077F830 (sub_14077F830.c)
 *     KiForceSymbolReferences @ 0x140CC9AA0 (KiForceSymbolReferences.c)
 * Callees:
 *     ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140417030 (ExpTryAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockExclusiveAtDpcLevel(volatile signed __int32 *a1)
{
  unsigned int v2; // ecx
  signed __int32 v3; // r8d
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
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
