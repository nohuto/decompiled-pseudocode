/*
 * XREFs of RtlEqualUnicodeString @ 0x140979B40
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402FA444 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402FD210 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B1220 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403B1710 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403B1DF0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403B1EC0 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403B27DC (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140491FF0 (RtlDeriveCapabilitySidsFromName.c)
 *     PopPepInitializeVetoMasks @ 0x1404DB10C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404DB8B8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     VfDriverLoadSucceeded @ 0x1404EE42C (VfDriverLoadSucceeded.c)
 *     PnpMultiSzContainsString @ 0x1404F40FC (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x14052C028 (PiDrvDbFindNode.c)
 *     PopEmModuleAddressMatchCallback @ 0x140610E00 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1406141B0 (PopEmUpdateDeviceConstraintCallback.c)
 *     VfDriverRemoveAllDifVerification @ 0x140645100 (VfDriverRemoveAllDifVerification.c)
 *     MiFindModuleBaseName @ 0x1406EB980 (MiFindModuleBaseName.c)
 *     IopIsReportedAlready @ 0x1407A1ADC (IopIsReportedAlready.c)
 *     PipAddRequestToEdge @ 0x1407A2704 (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x1407A2984 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407BA198 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407BAAAC (PiDrvDbResolveSystemFilePath.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407BF914 (KsepDbCacheQueryDeviceData.c)
 *     KseHookQueryValueKey @ 0x1407C2AA0 (KseHookQueryValueKey.c)
 *     ExpFindArcName @ 0x140841820 (ExpFindArcName.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140857154 (CmpFindMachineHiveByMountPoint.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140876E0C (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     _PnpCtxFindNode @ 0x14089C1C0 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x14089EA10 (_CmClassFilterCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14089EC60 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmServiceFilterCallback @ 0x14089FAC0 (_CmServiceFilterCallback.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408ABCD4 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     VrpCreateNamespaceNode @ 0x14093A7F0 (VrpCreateNamespaceNode.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14093BB0C (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14095B760 (IopDeviceInterfaceFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     SepIsMinTCB @ 0x140979428 (SepIsMinTCB.c)
 *     DrvDbFindDatabaseNode @ 0x140979718 (DrvDbFindDatabaseNode.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1409797A0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContext @ 0x140979888 (EtwpAcquireLoggerContext.c)
 *     AdtpLookupDriveLetter @ 0x140979E48 (AdtpLookupDriveLetter.c)
 *     SepIsImageInMinTcbList @ 0x14097A150 (SepIsImageInMinTcbList.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14097A694 (EtwpGetLoggerInfoFromContext.c)
 *     AdtpBuildAccessesString @ 0x14097AAF4 (AdtpBuildAccessesString.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     PipFindDeviceOverrideEntry @ 0x1409DAC70 (PipFindDeviceOverrideEntry.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A3ADA0 (IopQueryRegistryKeySystemPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140A3C458 (SepValidateReferencedCachedHandles.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140A3CF9C (SepFindMatchingCachedHandlesEntry.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     SLQueryLicenseValueInternal @ 0x140A770F8 (SLQueryLicenseValueInternal.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A88DA0 (PiPnpRtlServiceFilterCallback.c)
 *     EtwpLookupLoggerIdByName @ 0x140AB2034 (EtwpLookupLoggerIdByName.c)
 *     PiFindDevInstMatch @ 0x140AD27C4 (PiFindDevInstMatch.c)
 *     SepIsNgenImage @ 0x140AD9C3C (SepIsNgenImage.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140AE8544 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AEA96C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     MiObtainSectionForDriver @ 0x140AEE86C (MiObtainSectionForDriver.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140AFAD74 (IopCreateSecureDeviceClassSettings.c)
 *     PopBatteryDeviceState @ 0x140AFDFA8 (PopBatteryDeviceState.c)
 *     PiUEventCoalesceBroadcastEvents @ 0x140B059A0 (PiUEventCoalesceBroadcastEvents.c)
 *     PipQueryBindingResolution @ 0x140B0A564 (PipQueryBindingResolution.c)
 *     PspIdentityBasedJobBreakaway @ 0x140B11760 (PspIdentityBasedJobBreakaway.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140B34528 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140B3BB84 (PiRemoveDeferredSetInterfaceState.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140B461D8 (PiDevCfgResolveMultiSzValue.c)
 *     ViSuspectDriversLookupEntry @ 0x140C2644C (ViSuspectDriversLookupEntry.c)
 *     ViIsDriverSuspectForVerifier @ 0x140C27D68 (ViIsDriverSuspectForVerifier.c)
 *     ViLogAndLoadXdv @ 0x140C27F44 (ViLogAndLoadXdv.c)
 *     VfDriverApplyDifVerification @ 0x140C2E174 (VfDriverApplyDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140C2E31C (VfDriverRemoveDifVerification.c)
 *     ViDriverReApplyVerifierForAll @ 0x140C2E500 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x140C3EA60 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140C3EE74 (VfSuspectDriversUnloadCallback.c)
 *     ViFilterIsDeviceExcluded @ 0x140C42480 (ViFilterIsDeviceExcluded.c)
 *     VfAddVerifierEntry @ 0x140C4C6A8 (VfAddVerifierEntry.c)
 *     VfDriverEnableVerifier @ 0x140C4C854 (VfDriverEnableVerifier.c)
 *     VfDriverLoadImage @ 0x140C4CAE0 (VfDriverLoadImage.c)
 *     VfCheckUserHandle @ 0x140C4DC48 (VfCheckUserHandle.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     PipLookupGroupName @ 0x140CC8510 (PipLookupGroupName.c)
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 *     ViInitSystemPhase0 @ 0x140CE513C (ViInitSystemPhase0.c)
 *     ExpPrmInitialization @ 0x140CEAA14 (ExpPrmInitialization.c)
 *     CmpCreateHardwareProfiles @ 0x140CF0118 (CmpCreateHardwareProfiles.c)
 *     CmpDoSort @ 0x140CF5068 (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140CF5570 (CmpFindHiveSubKey.c)
 *     CmpGetKnownHivePathNode @ 0x140CF5A38 (CmpGetKnownHivePathNode.c)
 *     CmGetSystemDriverList @ 0x140D0A9F0 (CmGetSystemDriverList.c)
 *     PpInitGetGroupOrderIndex @ 0x140D10DDC (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x140D11544 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memcmp @ 0x140742350 (memcmp.c)
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
