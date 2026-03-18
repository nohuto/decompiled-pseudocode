/*
 * XREFs of CmpLockRegistryExclusive @ 0x1408C2148
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406E24C0 (CmShutdownSystem2.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084C024 (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x14084F320 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14084F540 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpCommitLightWeightTransaction @ 0x1408AE64C (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408AECE8 (CmpCleanupLightWeightTransaction.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1408C21A0 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmEtwRunDown @ 0x140AFF0F8 (CmEtwRunDown.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmpDelayFreeRMWorker @ 0x140B43590 (CmpDelayFreeRMWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140D04720 (CmGetSystemDriverList.c)
 * Callees:
 *     CmpRecordRegistryLockExclusiveAcquire @ 0x140261008 (CmpRecordRegistryLockExclusiveAcquire.c)
 *     CmpTestRegistryLock @ 0x140261EB0 (CmpTestRegistryLock.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x14047CD00 (ExAcquireCacheAwarePushLockExclusive.c)
 */

__int64 CmpLockRegistryExclusive()
{
  bool v0; // bl
  __int64 v1; // r8
  struct _SINGLE_LIST_ENTRY *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  struct _KTHREAD *CurrentThread; // rcx

  v0 = CmpTestRegistryLock();
  PsBoostThreadIo((LegacyAutoBoost *)KeGetCurrentThread(), 0LL, v1, v2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !v0 )
    ExAcquireCacheAwarePushLockExclusive((volatile signed __int32 **)CmpRegistryLock, v3, v4, v5);
  return CmpRecordRegistryLockExclusiveAcquire();
}
