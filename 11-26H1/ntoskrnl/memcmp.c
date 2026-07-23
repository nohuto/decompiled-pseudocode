/*
 * XREFs of memcmp @ 0x140742350
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpTraceLostEvent @ 0x140258AC8 (EtwpTraceLostEvent.c)
 *     KeUpdateSoftParkRankList @ 0x14025CCE8 (KeUpdateSoftParkRankList.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1402FA970 (RtlpIsNameInExpressionPrivate.c)
 *     SepMatchPackage @ 0x1402FCF70 (SepMatchPackage.c)
 *     SepMandatoryIntegrityCheck @ 0x1403000E0 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     HalMatchAcpiOemTableId @ 0x140344890 (HalMatchAcpiOemTableId.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140344D90 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x140344EE4 (HalpAcpiGetRsdt.c)
 *     IopProcessWorkItem @ 0x14037F300 (IopProcessWorkItem.c)
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140392FD0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     SepTokenIsOwner @ 0x1403AE5D0 (SepTokenIsOwner.c)
 *     RtlpOwnerAcesPresent @ 0x1403AF640 (RtlpOwnerAcesPresent.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403B1CA0 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B1F88 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403B27DC (AuthzBasepFindSecurityAttributeValue.c)
 *     SeComputeCreatorDeniedRights @ 0x1403C7CA0 (SeComputeCreatorDeniedRights.c)
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     SepSidInToken @ 0x1403DB410 (SepSidInToken.c)
 *     RtlSidHashLookup @ 0x1403F15C0 (RtlSidHashLookup.c)
 *     RtlFindAceBySid @ 0x140405490 (RtlFindAceBySid.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x14040CB40 (RtlSidDominates.c)
 *     RtlOwnerAcesPresent @ 0x140411B90 (RtlOwnerAcesPresent.c)
 *     RtlAreNamesEqual @ 0x14041C900 (RtlAreNamesEqual.c)
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     RtlpStackDbEntryIsEqual @ 0x14043C208 (RtlpStackDbEntryIsEqual.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140447340 (IopIsKnownGoodLegacyFsFilter.c)
 *     InsertEventEntryInLookUpTable @ 0x140451644 (InsertEventEntryInLookUpTable.c)
 *     IopInitActivityIdIrp @ 0x14047B8F0 (IopInitActivityIdIrp.c)
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 *     IoRaiseInformationalHardError @ 0x1404D9300 (IoRaiseInformationalHardError.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404ECA3C (AuthzBasepCompareOctetStringOperands.c)
 *     PopFxLowPowerEpochCallback @ 0x1404F89B0 (PopFxLowPowerEpochCallback.c)
 *     PopDiagGetPowerSchemeInfo @ 0x1404FA6CC (PopDiagGetPowerSchemeInfo.c)
 *     SepValidateCAPID @ 0x14052F8C0 (SepValidateCAPID.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140533010 (MiFindSpecialPurposeMemoryType.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x1405652BC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 *     SymCryptMlDsaSelftest @ 0x140565630 (SymCryptMlDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x14056580C (SymCryptRsaSelftest.c)
 *     SymCryptFdefDecideModulusType @ 0x14056E118 (SymCryptFdefDecideModulusType.c)
 *     SymCryptMlDsaSkDecode @ 0x140572D4C (SymCryptMlDsaSkDecode.c)
 *     __asan_wrap_memcmp @ 0x1405E4130 (__asan_wrap_memcmp.c)
 *     KiDisplayBlueScreen @ 0x1405EA964 (KiDisplayBlueScreen.c)
 *     KiMcheckAlternateReturn @ 0x1405FF7C0 (KiMcheckAlternateReturn.c)
 *     RtlpComparePropertyEntry @ 0x14061DA20 (RtlpComparePropertyEntry.c)
 *     RtlpStackDbSegmentComparitor @ 0x1406266C4 (RtlpStackDbSegmentComparitor.c)
 *     MinCryptK_GetBootAppSvnFromRevocationList @ 0x140721824 (MinCryptK_GetBootAppSvnFromRevocationList.c)
 *     MinCryptCheckCertsAndKeys @ 0x1407218C8 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x1407219EC (MinCryptIsCertPresent.c)
 *     PopWnfEffectivePowerModeCallback @ 0x1407D2650 (PopWnfEffectivePowerModeCallback.c)
 *     PopWnfInSupCallback @ 0x1407DA670 (PopWnfInSupCallback.c)
 *     PopNetLowPowerEpochCallback @ 0x1407DE550 (PopNetLowPowerEpochCallback.c)
 *     RtlReplaceSidInSd @ 0x140809D00 (RtlReplaceSidInSd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14080A7EC (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14080AF40 (RtlpUpdateDynamicTimeZones.c)
 *     SepSecureBootManifestCompareElements @ 0x14081C320 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14081C508 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     ExGetExpirationDate @ 0x14083DE1C (ExGetExpirationDate.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140844CE0 (NtSetSystemEnvironmentValueEx.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084A4C4 (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408893C0 (SdbpCheckMatchingRegistryValue.c)
 *     BiResolveLocate @ 0x14089933C (BiResolveLocate.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14089A658 (BiUpdateObjectReferenceInEfiEntry.c)
 *     I_MinCryptCheckEKU @ 0x1408A6B18 (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A6EB4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1408A7D80 (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptHashSearchCompare @ 0x1408A7F30 (I_MinCryptHashSearchCompare.c)
 *     I_MinCryptIsTimestampSignerTrusted @ 0x1408A7F54 (I_MinCryptIsTimestampSignerTrusted.c)
 *     I_MinCryptVerifyHashSignerAuthenticatedAttributes @ 0x1408A8B38 (I_MinCryptVerifyHashSignerAuthenticatedAttributes.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408A949C (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x1408A9AF0 (MinAsn1ParseSingleExtensionValue.c)
 *     I_MinCryptCheckEKURequirements @ 0x1408A9CB0 (I_MinCryptCheckEKURequirements.c)
 *     RtlFindUnicodeSubstring @ 0x1408C6050 (RtlFindUnicodeSubstring.c)
 *     RtlpNormalizeAcl @ 0x1408E72B0 (RtlpNormalizeAcl.c)
 *     ObLogSecurityDescriptor @ 0x1408FCCF0 (ObLogSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408FCFF0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     TraitsCompare @ 0x140919428 (TraitsCompare.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     PiCMSetObjectProperty @ 0x14094E4C8 (PiCMSetObjectProperty.c)
 *     ConstraintEval @ 0x14094EB24 (ConstraintEval.c)
 *     PiDmObjectProcessPropertyChange @ 0x140951BA0 (PiDmObjectProcessPropertyChange.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140965250 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140966B10 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PropertyEval @ 0x140969840 (PropertyEval.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     RtlPrefixString @ 0x14097DFD0 (RtlPrefixString.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     BiAreBootEntriesEqual @ 0x1409A1ECC (BiAreBootEntriesEqual.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409B3AC4 (PnpProcessTargetDeviceEvent.c)
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1409C85C0 (ExpWnfFindScopeInstance.c)
 *     RtlpInternEntryMatch @ 0x1409CAA28 (RtlpInternEntryMatch.c)
 *     PopEtAggregateFind @ 0x1409CD65C (PopEtAggregateFind.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1409D2508 (PfSnPrefetchCacheEntryGet.c)
 *     ObpLookupDirectoryEntry @ 0x1409DF360 (ObpLookupDirectoryEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x1409DFCF0 (FsRtlIsDbcsInExpression.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140A41C70 (ObAssignObjectSecurityDescriptor.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A48420 (PiDevCfgResolveVariableExpression.c)
 *     SepExamineSaclEx @ 0x140A60770 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 *     SepSidInSidAndAttributes @ 0x140A621C8 (SepSidInSidAndAttributes.c)
 *     MiComputeBadImageHeaderType @ 0x140A653C8 (MiComputeBadImageHeaderType.c)
 *     EtwpCompareGuid @ 0x140A6A7E0 (EtwpCompareGuid.c)
 *     SLQueryLicenseValueInternal @ 0x140A770F8 (SLQueryLicenseValueInternal.c)
 *     CmpFindMatchingDescriptorCell @ 0x140A87208 (CmpFindMatchingDescriptorCell.c)
 *     SshpCacheDatabaseCompare @ 0x140A89C50 (SshpCacheDatabaseCompare.c)
 *     PfSnParsePrefetchParam @ 0x140AB05DC (PfSnParsePrefetchParam.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     PopAdaptivePowerSettingCallback @ 0x140ABE290 (PopAdaptivePowerSettingCallback.c)
 *     WheapPredictiveFailureAnalysis @ 0x140ACA4C8 (WheapPredictiveFailureAnalysis.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x140ACADFC (PfSnAltProfileTreeCompareByProcess.c)
 *     PfSnEndProcessTrace @ 0x140ACAE28 (PfSnEndProcessTrace.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140ACC4B4 (PfSnPrefetchCacheEntryUpdate.c)
 *     IopTrackLink @ 0x140AD048C (IopTrackLink.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD4710 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 *     PiDcCompareUpdateProperties @ 0x140ADA4A0 (PiDcCompareUpdateProperties.c)
 *     SiValidateSystemPartition @ 0x140ADE8BC (SiValidateSystemPartition.c)
 *     EtwpUpdateDisallowedGuids @ 0x140AE14B0 (EtwpUpdateDisallowedGuids.c)
 *     RtlSuffixUnicodeString @ 0x140AE1D90 (RtlSuffixUnicodeString.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF8AC0 (FsRtlNotifyFilterReportChange.c)
 *     PspHardenMitigationOptions @ 0x140AFECC0 (PspHardenMitigationOptions.c)
 *     EtwpTrackDecodeGuidForSession @ 0x140AFF290 (EtwpTrackDecodeGuidForSession.c)
 *     EtwpGenerateFileName @ 0x140B277B0 (EtwpGenerateFileName.c)
 *     ExpWnfInvalidateDataStores @ 0x140B341C0 (ExpWnfInvalidateDataStores.c)
 *     BiExportEfiBootManager @ 0x140B3A0B8 (BiExportEfiBootManager.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140B3E494 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PopAdaptiveWnfCallback @ 0x140B4F200 (PopAdaptiveWnfCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140B58300 (VslpConnectedStandbyWnfCallback.c)
 *     PopApplyAdminPolicy @ 0x140B5F580 (PopApplyAdminPolicy.c)
 *     IovpExamineIrpStackForwarding @ 0x140C31C6C (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140C46EBC (ViCtxEqualExtendedState.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140CBB1BC (HalpAcpiDetectMachineSpecificActions.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC7408 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevice @ 0x140CC8F58 (PipResetDevice.c)
 *     CmpGetBiosDate @ 0x140CF2DD8 (CmpGetBiosDate.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
