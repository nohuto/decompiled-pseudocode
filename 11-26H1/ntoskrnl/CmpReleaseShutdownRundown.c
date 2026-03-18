/*
 * XREFs of CmpReleaseShutdownRundown @ 0x140C58900
 * Callers:
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14084E670 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpAcceptBoot @ 0x14084E81C (CmpAcceptBoot.c)
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x14084F100 (NtLockRegistryKey.c)
 *     NtOpenRegistryTransaction @ 0x14084F1E0 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x14084F320 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14084F540 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     NtRollbackRegistryTransaction @ 0x140850070 (NtRollbackRegistryTransaction.c)
 *     NtSaveMergedKeys @ 0x140850190 (NtSaveMergedKeys.c)
 *     CmReconcileAndValidateAllHives @ 0x140856C28 (CmReconcileAndValidateAllHives.c)
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 *     NtCommitRegistryTransaction @ 0x1408ACC60 (NtCommitRegistryTransaction.c)
 *     CmpCloseLightWeightTransaction @ 0x1408ADE70 (CmpCloseLightWeightTransaction.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1408C0050 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpConstructNameWithStatus @ 0x1408C1660 (CmpConstructNameWithStatus.c)
 *     CmpConstructName @ 0x1408C53A0 (CmpConstructName.c)
 *     CmpQueryKeySecurity @ 0x1408ED790 (CmpQueryKeySecurity.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     NtCreateKeyTransacted @ 0x140974390 (NtCreateKeyTransacted.c)
 *     NtOpenKeyTransactedEx @ 0x140974730 (NtOpenKeyTransactedEx.c)
 *     CmCreateKey @ 0x1409748F0 (CmCreateKey.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14097D340 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A76FC0 (NtRestoreKey.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     CmpDoLocalizeNextHive @ 0x140AD63C0 (CmpDoLocalizeNextHive.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmpReorganizeHive @ 0x140AE35CC (CmpReorganizeHive.c)
 *     CmpForceFlushWorker @ 0x140AECE60 (CmpForceFlushWorker.c)
 *     NtCreateRegistryTransaction @ 0x140AFDE40 (NtCreateRegistryTransaction.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     CmpHandlePageFileOpenNotification @ 0x140B57D54 (CmpHandlePageFileOpenNotification.c)
 *     CmSaveKeyToBuffer @ 0x140C58010 (CmSaveKeyToBuffer.c)
 *     CmGetSystemDriverList @ 0x140D04720 (CmGetSystemDriverList.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 CmpReleaseShutdownRundown()
{
  __int64 v0; // rdx
  __int64 v1; // r8

  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1);
}
