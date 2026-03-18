/*
 * XREFs of CmpInitializeThreadInfo @ 0x14043CF00
 * Callers:
 *     CmInitializeThreadInfo @ 0x14043CEE0 (CmInitializeThreadInfo.c)
 *     CmpLazyWriteWorker @ 0x1406E2810 (CmpLazyWriteWorker.c)
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x140774A94 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     PspDeleteExternalServerSiloState @ 0x1407EED58 (PspDeleteExternalServerSiloState.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14084E670 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x14084EDA0 (NtFreezeRegistry.c)
 *     NtInitializeRegistry @ 0x14084EE60 (NtInitializeRegistry.c)
 *     NtLockRegistryKey @ 0x14084F100 (NtLockRegistryKey.c)
 *     NtOpenRegistryTransaction @ 0x14084F1E0 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x14084F320 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14084F540 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14084FD20 (NtReplaceKey.c)
 *     NtRollbackRegistryTransaction @ 0x140850070 (NtRollbackRegistryTransaction.c)
 *     NtSaveMergedKeys @ 0x140850190 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140850440 (NtThawRegistry.c)
 *     CmUnRegisterCallback @ 0x1408505D0 (CmUnRegisterCallback.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     CmShutdownSystem @ 0x140854284 (CmShutdownSystem.c)
 *     CmInitServerSiloState @ 0x140854BE4 (CmInitServerSiloState.c)
 *     CmReconcileAndValidateAllHives @ 0x140856C28 (CmReconcileAndValidateAllHives.c)
 *     CmpFreezeThawWorker @ 0x140857350 (CmpFreezeThawWorker.c)
 *     CmpBuildMachineHiveCache @ 0x140857664 (CmpBuildMachineHiveCache.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x14085797C (CmpMachineHiveCachePopulateEntry.c)
 *     CmpLazyCommitWorker @ 0x14085BCC0 (CmpLazyCommitWorker.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x140861FE0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140862230 (CmpHiveCachePopulateHiveEntryThread.c)
 *     NtCommitRegistryTransaction @ 0x1408ACC60 (NtCommitRegistryTransaction.c)
 *     CmpCloseLightWeightTransaction @ 0x1408ADE70 (CmpCloseLightWeightTransaction.c)
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408AE484 (CmpRollbackLightWeightTransaction.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1408C0050 (CmCallbackGetKeyObjectIDEx.c)
 *     CmCallbackGetKeyObjectID @ 0x1408C0E90 (CmCallbackGetKeyObjectID.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     CmpDelayCloseWorker @ 0x1408CE720 (CmpDelayCloseWorker.c)
 *     CmpSecurityMethod @ 0x1408ED400 (CmpSecurityMethod.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     NtCreateKeyTransacted @ 0x140974390 (NtCreateKeyTransacted.c)
 *     NtOpenKey @ 0x140974540 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140974620 (NtOpenKeyEx.c)
 *     NtOpenKeyTransactedEx @ 0x140974730 (NtOpenKeyTransactedEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14097D340 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     CmpRegisterCallbackInternal @ 0x140A0506C (CmpRegisterCallbackInternal.c)
 *     CmpEnumerateCallback @ 0x140A05280 (CmpEnumerateCallback.c)
 *     CmInitSiloNamespace @ 0x140A309F8 (CmInitSiloNamespace.c)
 *     CmSetCallbackObjectContext @ 0x140A31530 (CmSetCallbackObjectContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x140A31970 (CmGetRootKeyObjectForSilo.c)
 *     CmpCloseKeyObject @ 0x140A59A10 (CmpCloseKeyObject.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     CmpFreeSiloContextCallback @ 0x140A675E0 (CmpFreeSiloContextCallback.c)
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A76FC0 (NtRestoreKey.c)
 *     NtCreateKey @ 0x140A82AB0 (NtCreateKey.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     CmNotifyRunDown @ 0x140ABE29C (CmNotifyRunDown.c)
 *     CmpLateUnloadHiveWorker @ 0x140AD4630 (CmpLateUnloadHiveWorker.c)
 *     CmpForceFlushWorker @ 0x140AECE60 (CmpForceFlushWorker.c)
 *     NtCreateRegistryTransaction @ 0x140AFDE40 (NtCreateRegistryTransaction.c)
 *     CmEtwRunDown @ 0x140AFF0F8 (CmEtwRunDown.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     NtUnloadKey2 @ 0x140B0A550 (NtUnloadKey2.c)
 *     NtUnloadKeyEx @ 0x140B0A5A0 (NtUnloadKeyEx.c)
 *     NtUnloadKey @ 0x140B0A5F0 (NtUnloadKey.c)
 *     CmpDelayFreeRMWorker @ 0x140B43590 (CmpDelayFreeRMWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 *     CmSaveKeyToBuffer @ 0x140C58010 (CmSaveKeyToBuffer.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 *     CmpGetSystemControlValues @ 0x140CEC3D8 (CmpGetSystemControlValues.c)
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
