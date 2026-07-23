/*
 * XREFs of CmpAcquireShutdownRundown @ 0x140C5EAB0
 * Callers:
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140854980 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpAcceptBoot @ 0x140854B2C (CmpAcceptBoot.c)
 *     NtCompactKeys @ 0x140854C00 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140854EB0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x140855410 (NtLockRegistryKey.c)
 *     NtOpenRegistryTransaction @ 0x1408554F0 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x140855630 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140855850 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     NtRollbackRegistryTransaction @ 0x140856380 (NtRollbackRegistryTransaction.c)
 *     NtSaveMergedKeys @ 0x1408564A0 (NtSaveMergedKeys.c)
 *     CmReconcileAndValidateAllHives @ 0x14085CFC0 (CmReconcileAndValidateAllHives.c)
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     CmpAssignKeySecurity @ 0x140860E54 (CmpAssignKeySecurity.c)
 *     NtCommitRegistryTransaction @ 0x1408B30A0 (NtCommitRegistryTransaction.c)
 *     CmpCloseLightWeightTransaction @ 0x1408B42B0 (CmpCloseLightWeightTransaction.c)
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 *     CmpDoLocalizeNextHive @ 0x1408B76E0 (CmpDoLocalizeNextHive.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1408C6620 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpConstructNameWithStatus @ 0x1408C7C30 (CmpConstructNameWithStatus.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpQueryKeySecurity @ 0x1408F3D50 (CmpQueryKeySecurity.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     NtCreateKeyTransacted @ 0x1409363A0 (NtCreateKeyTransacted.c)
 *     NtOpenKeyTransactedEx @ 0x140936740 (NtOpenKeyTransactedEx.c)
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14093F350 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     NtSaveKeyEx @ 0x140A7E1F0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A7FCE0 (NtRestoreKey.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     CmFreezeRegistry @ 0x140AE0F10 (CmFreezeRegistry.c)
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 *     CmpForceFlushWorker @ 0x140AEFE70 (CmpForceFlushWorker.c)
 *     NtCreateRegistryTransaction @ 0x140AFFEB0 (NtCreateRegistryTransaction.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 *     CmpHandlePageFileOpenNotification @ 0x140B5F650 (CmpHandlePageFileOpenNotification.c)
 *     CmSaveKeyToBuffer @ 0x140C5E010 (CmSaveKeyToBuffer.c)
 *     CmGetSystemDriverList @ 0x140D0A9F0 (CmGetSystemDriverList.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

BOOLEAN CmpAcquireShutdownRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // rtt
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v1 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v1 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    return 1;
  result = ExfAcquireRundownProtection(&CmpShutdownRundown);
  if ( !result )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0;
  }
  return result;
}
