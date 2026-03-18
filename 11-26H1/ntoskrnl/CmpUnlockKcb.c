/*
 * XREFs of CmpUnlockKcb @ 0x140C582B0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140261160 (CmpDoQueryKeyName.c)
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x1404CC980 (CmpRemoveHiveFromNamespace.c)
 *     CmDumpKeyToFile @ 0x14084D1E8 (CmDumpKeyToFile.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmpReplicateKeyToVirtual @ 0x140859F40 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x14085BA00 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1408C0050 (CmCallbackGetKeyObjectIDEx.c)
 *     CmCallbackGetKeyObjectID @ 0x1408C0E90 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateKey @ 0x1408C21A0 (CmEnumerateKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408C6420 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpDelayCloseWorker @ 0x1408CE720 (CmpDelayCloseWorker.c)
 *     CmpEnlistKeyBody @ 0x1408CEBD0 (CmpEnlistKeyBody.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408D43A0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1408D88E0 (CmQueryValueKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408D9360 (CmpVEExecuteOpenLogic.c)
 *     CmpQueryKeySecurity @ 0x1408ED790 (CmpQueryKeySecurity.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmpUnlockTwoKcbs @ 0x14097E9E0 (CmpUnlockTwoKcbs.c)
 *     CmQueryMultipleValueKey @ 0x14097EB2C (CmQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A2E434 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmLockKeyForWrite @ 0x140A30B0C (CmLockKeyForWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A31298 (CmpStartSiloRegistryNamespace.c)
 *     CmpCloseKeyObject @ 0x140A59A10 (CmpCloseKeyObject.c)
 *     CmpVEExecuteCreateLogic @ 0x140A9F648 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB2878 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140AE0D24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 *     CmpDumpKeyToBuffer @ 0x140C5812C (CmpDumpKeyToBuffer.c)
 *     CmpCreateRegistryRoot @ 0x140CEA70C (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     CmpDecommisssionKcb @ 0x1408C6330 (CmpDecommisssionKcb.c)
 *     CmpIsKcbLockedExclusive @ 0x140A64F30 (CmpIsKcbLockedExclusive.c)
 */

void __fastcall CmpUnlockKcb(ULONG_PTR BugCheckParameter2)
{
  int v2; // esi
  signed __int64 v3; // rax
  signed __int64 v4; // rdx
  __int64 v5; // rtt

  v2 = *(_DWORD *)(BugCheckParameter2 + 8) & 0x80000;
  if ( CmpIsKcbLockedExclusive(BugCheckParameter2) )
    *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 56));
  _m_prefetchw((const void *)(BugCheckParameter2 + 48));
  v3 = *(_QWORD *)(BugCheckParameter2 + 48);
  v4 = v3 - 16;
  if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v4 = 0LL;
  if ( (v3 & 2) != 0
    || (v5 = *(_QWORD *)(BugCheckParameter2 + 48),
        v5 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 48), v4, v3)) )
  {
    ExfReleasePushLock((_QWORD *)(BugCheckParameter2 + 48));
  }
  KeAbPostRelease(BugCheckParameter2 + 48);
  if ( v2 )
    CmpDecommisssionKcb(BugCheckParameter2);
}
