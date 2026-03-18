/*
 * XREFs of KeAbPreWait @ 0x140278AE0
 * Callers:
 *     FsRtlAcquireEofLock @ 0x140204D50 (FsRtlAcquireEofLock.c)
 *     SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024B6A0 (SmHwAcceleratorPartitionMgrGetDescriptor.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     FsRtlAcquireHeaderMutex @ 0x1402778B0 (FsRtlAcquireHeaderMutex.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038B588 (MiWaitForCollidedFaultComplete.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1403C0E68 (KiWaitForAllObjects.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x140421AD0 (FsRtlReleaseEofLock.c)
 *     ExpAcquireFastMutexContended @ 0x1404A09B8 (ExpAcquireFastMutexContended.c)
 *     MiLockControlAreaSectionExtend @ 0x1404AEBB4 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForExtentDeletions @ 0x1406FAE6C (MiWaitForExtentDeletions.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1409B6E40 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B332E8 (CmpWaitOnHiveWriteQueue.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140B4C090 (PfpPrefetchSharedConflictNotifyStart.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140B50E94 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1402722CC (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     ?KiAbpPreWait@AutoBoost@@YAXPEAX@Z @ 0x14046DD60 (-KiAbpPreWait@AutoBoost@@YAXPEAX@Z.c)
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
