/*
 * XREFs of KeAbPreWait @ 0x140278050
 * Callers:
 *     FsRtlAcquireEofLock @ 0x140204E30 (FsRtlAcquireEofLock.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024D000 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     FsRtlAcquireHeaderMutex @ 0x140276E20 (FsRtlAcquireHeaderMutex.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x140419310 (FsRtlReleaseEofLock.c)
 *     ExpAcquireFastMutexContended @ 0x14049A508 (ExpAcquireFastMutexContended.c)
 *     MiLockControlAreaSectionExtend @ 0x1404A8244 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForExtentDeletions @ 0x1406FFB3C (MiWaitForExtentDeletions.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140987E24 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B35738 (CmpWaitOnHiveWriteQueue.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140B4DE20 (PfpPrefetchSharedConflictNotifyStart.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140B5372C (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbpPreWait@AutoBoost@@YAXPEAX@Z @ 0x1404674E0 (-KiAbpPreWait@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall KeAbPreWait(AutoBoost *a1, struct _KLOCK_ENTRY *a2)
{
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    AutoBoost::KiAbpPreWait(a1, a2);
  }
  else
  {
    *(_BYTE *)a1 |= 2u;
    if ( *(__int64 *)a1 < 0 )
      LegacyAutoBoost::KiAbEntryRemoveFromTree((__int64)a1, a2);
    *((_BYTE *)a1 + 9) = 1;
    *(_BYTE *)a1 &= ~2u;
  }
}
