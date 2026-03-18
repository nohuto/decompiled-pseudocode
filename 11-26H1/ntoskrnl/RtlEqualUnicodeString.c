/*
 * XREFs of RtlEqualUnicodeString @ 0x14091F0E0
 * Callers:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402B2540 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403CA408 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403CBD00 (AuthzBasepEqualUnicodeString.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403CC900 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403CCDF0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403CD4D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403CD5A0 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403CF40C (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1404984A0 (RtlDeriveCapabilitySidsFromName.c)
 *     PopPepInitializeVetoMasks @ 0x1404E1A2C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404E21D8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     VfDriverLoadSucceeded @ 0x1404F4E4C (VfDriverLoadSucceeded.c)
 *     PnpMultiSzContainsString @ 0x1404FAAEC (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x140528E14 (PiDrvDbFindNode.c)
 *     PopEmModuleAddressMatchCallback @ 0x14060DD00 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x140611370 (PopEmUpdateDeviceConstraintCallback.c)
 *     VfDriverRemoveAllDifVerification @ 0x140641520 (VfDriverRemoveAllDifVerification.c)
 *     MiFindModuleBaseName @ 0x1406E6CD0 (MiFindModuleBaseName.c)
 *     IopIsReportedAlready @ 0x14079EF9C (IopIsReportedAlready.c)
 *     PipAddRequestToEdge @ 0x14079FBC4 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14079FE44 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407A8DA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407B7138 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407B7A4C (PiDrvDbResolveSystemFilePath.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407BC8B4 (KsepDbCacheQueryDeviceData.c)
 *     KseHookQueryValueKey @ 0x1407BFA40 (KseHookQueryValueKey.c)
 *     ExpFindArcName @ 0x14083B5E0 (ExpFindArcName.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140850E44 (CmpFindMachineHiveByMountPoint.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140870AAC (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     _PnpCtxFindNode @ 0x140895DC0 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140898610 (_CmClassFilterCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140898860 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmServiceFilterCallback @ 0x1408996C0 (_CmServiceFilterCallback.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408A5864 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     SepIsMinTCB @ 0x14091E9C8 (SepIsMinTCB.c)
 *     DrvDbFindDatabaseNode @ 0x14091ECB8 (DrvDbFindDatabaseNode.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14091ED40 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x14091EE28 (EtwpAcquireLoggerContext.c)
 *     AdtpLookupDriveLetter @ 0x14091F3E8 (AdtpLookupDriveLetter.c)
 *     AdtpBuildAccessesString @ 0x14096A1B4 (AdtpBuildAccessesString.c)
 *     VrpCreateNamespaceNode @ 0x1409787E0 (VrpCreateNamespaceNode.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140979AFC (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14099AD00 (IopDeviceInterfaceFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A27D00 (IopQueryRegistryKeySystemPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140A293B8 (SepValidateReferencedCachedHandles.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140A29EFC (SepFindMatchingCachedHandlesEntry.c)
 *     PspIdentityBasedJobBreakaway @ 0x140A2BC58 (PspIdentityBasedJobBreakaway.c)
 *     SLQueryLicenseValueInternal @ 0x140A6A758 (SLQueryLicenseValueInternal.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140A6FDA8 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpLookupLoggerIdByName @ 0x140A7099C (EtwpLookupLoggerIdByName.c)
 *     PiDevCfgResolveVariable @ 0x140A71BD0 (PiDevCfgResolveVariable.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A82F30 (PiPnpRtlServiceFilterCallback.c)
 *     SepIsImageInMinTcbList @ 0x140A88634 (SepIsImageInMinTcbList.c)
 *     PipFindDeviceOverrideEntry @ 0x140AA773C (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AD1378 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AD3638 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiFindDevInstMatch @ 0x140AD5814 (PiFindDevInstMatch.c)
 *     SepIsNgenImage @ 0x140ADC6EC (SepIsNgenImage.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 *     MiObtainSectionForDriver @ 0x140AEB960 (MiObtainSectionForDriver.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140AF8694 (IopCreateSecureDeviceClassSettings.c)
 *     PopBatteryDeviceState @ 0x140AFC434 (PopBatteryDeviceState.c)
 *     PiUEventCoalesceBroadcastEvents @ 0x140B03D90 (PiUEventCoalesceBroadcastEvents.c)
 *     PipQueryBindingResolution @ 0x140B085E8 (PipQueryBindingResolution.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140B320D4 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140B39974 (PiRemoveDeferredSetInterfaceState.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140B442E8 (PiDevCfgResolveMultiSzValue.c)
 *     ViSuspectDriversLookupEntry @ 0x140C20440 (ViSuspectDriversLookupEntry.c)
 *     ViIsDriverSuspectForVerifier @ 0x140C21D58 (ViIsDriverSuspectForVerifier.c)
 *     ViLogAndLoadXdv @ 0x140C21F34 (ViLogAndLoadXdv.c)
 *     VfDriverApplyDifVerification @ 0x140C28168 (VfDriverApplyDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140C28310 (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140C284F8 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x140C38A50 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140C38E64 (VfSuspectDriversUnloadCallback.c)
 *     ViFilterIsDeviceExcluded @ 0x140C3C470 (ViFilterIsDeviceExcluded.c)
 *     VfAddVerifierEntry @ 0x140C46698 (VfAddVerifierEntry.c)
 *     VfDriverEnableVerifier @ 0x140C46844 (VfDriverEnableVerifier.c)
 *     VfDriverLoadImage @ 0x140C46AD0 (VfDriverLoadImage.c)
 *     VfCheckUserHandle @ 0x140C47C38 (VfCheckUserHandle.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     PipLookupGroupName @ 0x140CC2440 (PipLookupGroupName.c)
 *     VfInitBootDriversLoaded @ 0x140CDE91C (VfInitBootDriversLoaded.c)
 *     ViInitSystemPhase0 @ 0x140CDEDA4 (ViInitSystemPhase0.c)
 *     ExpPrmInitialization @ 0x140CE4674 (ExpPrmInitialization.c)
 *     CmpCreateHardwareProfiles @ 0x140CE9D78 (CmpCreateHardwareProfiles.c)
 *     CmpDoSort @ 0x140CEECEC (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140CEF1F4 (CmpFindHiveSubKey.c)
 *     CmpGetKnownHivePathNode @ 0x140CEF6BC (CmpGetKnownHivePathNode.c)
 *     CmGetSystemDriverList @ 0x140D04720 (CmGetSystemDriverList.c)
 *     PpInitGetGroupOrderIndex @ 0x140D0AB0C (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140D0B274 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 v3; // rdx
  struct _LIST_ENTRY *Flink; // rbp
  char v5; // r8
  unsigned __int16 *v6; // r9
  __int64 v7; // rax
  char *v9; // rbx
  char *v10; // rdi
  size_t v11; // rsi
  unsigned __int16 *v12; // r14
  SIZE_T v13; // rax
  __int64 v14; // rax
  unsigned __int16 *v15; // rbx
  char *v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9

  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  v7 = *v6;
  if ( (_WORD)v7 != *(_WORD *)v3 )
    return 0;
  v9 = (char *)*((_QWORD *)v6 + 1);
  v10 = *(char **)(v3 + 8);
  v11 = *v6;
  v12 = (unsigned __int16 *)&v9[v7];
  if ( !v5 )
    return memcmp(v9, v10, v11) == 0;
  v13 = RtlCompareMemory(v9, v10, v11);
  if ( v13 != v11 )
  {
    v14 = 2 * (v13 >> 1);
    v15 = (unsigned __int16 *)&v9[v14];
    v16 = &v10[v14];
    while ( v15 < v12 )
    {
      v17 = *v15;
      v18 = *(unsigned __int16 *)v16;
      if ( (_WORD)v17 != (_WORD)v18 )
      {
        if ( (unsigned int)v17 >= 0x61 )
        {
          if ( (unsigned int)v17 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v17 >= 0xC0u )
              LOWORD(v17) = *((_WORD *)&Flink->Flink
                            + (v17 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v17 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v17 >> 8))))
                          + v17;
          }
          else
          {
            LOWORD(v17) = v17 - 32;
          }
        }
        if ( (unsigned int)v18 >= 0x61 )
        {
          if ( (unsigned int)v18 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v18 >= 0xC0u )
                LOWORD(v18) = *((_WORD *)&Flink->Flink
                              + (v18 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v18 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v18 >> 8))))
                            + v18;
            }
          }
          else
          {
            LOWORD(v18) = v18 - 32;
          }
        }
        if ( (_WORD)v17 != (_WORD)v18 )
          return 0;
      }
      ++v15;
      v16 += 2;
    }
  }
  return 1;
}
