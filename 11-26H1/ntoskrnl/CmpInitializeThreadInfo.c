/*
 * XREFs of CmpInitializeThreadInfo @ 0x14042F7B0
 * Callers:
 *     CmInitializeThreadInfo @ 0x14042F790 (CmInitializeThreadInfo.c)
 *     CmpLazyWriteWorker @ 0x1406E6AF0 (CmpLazyWriteWorker.c)
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x140777A94 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     PspDeleteExternalServerSiloState @ 0x1407F48B8 (PspDeleteExternalServerSiloState.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140854980 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140854C00 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140854EB0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1408550B0 (NtFreezeRegistry.c)
 *     NtInitializeRegistry @ 0x140855170 (NtInitializeRegistry.c)
 *     NtLockRegistryKey @ 0x140855410 (NtLockRegistryKey.c)
 *     NtOpenRegistryTransaction @ 0x1408554F0 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x140855630 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140855850 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140856030 (NtReplaceKey.c)
 *     NtRollbackRegistryTransaction @ 0x140856380 (NtRollbackRegistryTransaction.c)
 *     NtSaveMergedKeys @ 0x1408564A0 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140856750 (NtThawRegistry.c)
 *     CmUnRegisterCallback @ 0x1408568E0 (CmUnRegisterCallback.c)
 *     CmpCloneHwProfile @ 0x140858444 (CmpCloneHwProfile.c)
 *     CmShutdownSystem @ 0x14085A594 (CmShutdownSystem.c)
 *     CmInitServerSiloState @ 0x14085AEF4 (CmInitServerSiloState.c)
 *     CmReconcileAndValidateAllHives @ 0x14085CFC0 (CmReconcileAndValidateAllHives.c)
 *     CmpFreezeThawWorker @ 0x14085D6E0 (CmpFreezeThawWorker.c)
 *     CmpBuildMachineHiveCache @ 0x14085D9F4 (CmpBuildMachineHiveCache.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x14085DD0C (CmpMachineHiveCachePopulateEntry.c)
 *     CmpLazyCommitWorker @ 0x140861FB0 (CmpLazyCommitWorker.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1408683C0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 *     NtCommitRegistryTransaction @ 0x1408B30A0 (NtCommitRegistryTransaction.c)
 *     CmpCloseLightWeightTransaction @ 0x1408B42B0 (CmpCloseLightWeightTransaction.c)
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408B48C4 (CmpRollbackLightWeightTransaction.c)
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1408C6620 (CmCallbackGetKeyObjectIDEx.c)
 *     CmCallbackGetKeyObjectID @ 0x1408C7460 (CmCallbackGetKeyObjectID.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpParseKey @ 0x1408D19A0 (CmpParseKey.c)
 *     CmpDelayCloseWorker @ 0x1408D4CD0 (CmpDelayCloseWorker.c)
 *     CmpSecurityMethod @ 0x1408F39C0 (CmpSecurityMethod.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     NtCreateKeyTransacted @ 0x1409363A0 (NtCreateKeyTransacted.c)
 *     NtOpenKey @ 0x140936550 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140936630 (NtOpenKeyEx.c)
 *     NtOpenKeyTransactedEx @ 0x140936740 (NtOpenKeyTransactedEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14093F350 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     CmNotifyRunDown @ 0x14094BC20 (CmNotifyRunDown.c)
 *     CmpRegisterCallbackInternal @ 0x1409F085C (CmpRegisterCallbackInternal.c)
 *     CmpEnumerateCallback @ 0x1409F0A70 (CmpEnumerateCallback.c)
 *     NtUnloadKeyEx @ 0x140A3E7F0 (NtUnloadKeyEx.c)
 *     NtUnloadKey @ 0x140A3E840 (NtUnloadKey.c)
 *     NtUnloadKey2 @ 0x140A3FE10 (NtUnloadKey2.c)
 *     CmInitSiloNamespace @ 0x140A4B958 (CmInitSiloNamespace.c)
 *     CmSetCallbackObjectContext @ 0x140A4C490 (CmSetCallbackObjectContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x140A4C8D0 (CmGetRootKeyObjectForSilo.c)
 *     CmpCloseKeyObject @ 0x140A66980 (CmpCloseKeyObject.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     CmpFreeSiloContextCallback @ 0x140A745B0 (CmpFreeSiloContextCallback.c)
 *     NtSaveKeyEx @ 0x140A7E1F0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A7FCE0 (NtRestoreKey.c)
 *     NtCreateKey @ 0x140A88920 (NtCreateKey.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD1A90 (CmpLateUnloadHiveWorker.c)
 *     CmpForceFlushWorker @ 0x140AEFE70 (CmpForceFlushWorker.c)
 *     NtCreateRegistryTransaction @ 0x140AFFEB0 (NtCreateRegistryTransaction.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 *     CmEtwRunDown @ 0x140B07438 (CmEtwRunDown.c)
 *     CmpDelayFreeRMWorker @ 0x140B45480 (CmpDelayFreeRMWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 *     CmSaveKeyToBuffer @ 0x140C5E010 (CmSaveKeyToBuffer.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 *     CmpGetSystemControlValues @ 0x140CF26DC (CmpGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

_KAFFINITY_EX *__fastcall CmpInitializeThreadInfo(_KAFFINITY_EX *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  _KAFFINITY_EX *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].UserAffinity;
  if ( result )
  {
    *(_OWORD *)&a1->Count = *(_OWORD *)&result->Count;
    a1->StaticBitmap[1] = result->StaticBitmap[1];
  }
  else
  {
    a1->Bitmap[0] = 0LL;
    a1->StaticBitmap[1] = 0LL;
  }
  *(_QWORD *)&a1->Count = result;
  CurrentThread[1].UserAffinity = a1;
  return result;
}
