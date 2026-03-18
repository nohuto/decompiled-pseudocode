/*
 * XREFs of memcmp @ 0x14073D750
 * Callers:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwpTraceLostEvent @ 0x140257138 (EtwpTraceLostEvent.c)
 *     KeUpdateSoftParkRankList @ 0x14025B508 (KeUpdateSoftParkRankList.c)
 *     RtlFindAceBySid @ 0x14025F2B0 (RtlFindAceBySid.c)
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     RtlpOwnerAcesPresent @ 0x1402ACC70 (RtlpOwnerAcesPresent.c)
 *     SepTokenIsOwner @ 0x1402AE190 (SepTokenIsOwner.c)
 *     SepSidInToken @ 0x1402AFC70 (SepSidInToken.c)
 *     RtlSidHashLookup @ 0x1402AFED0 (RtlSidHashLookup.c)
 *     SepNormalAccessCheck @ 0x1402B0BC0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1402B1890 (SepMaximumAccessCheck.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5410 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     HalMatchAcpiOemTableId @ 0x140342810 (HalMatchAcpiOemTableId.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140342D10 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x140342E64 (HalpAcpiGetRsdt.c)
 *     IopProcessWorkItem @ 0x14037D550 (IopProcessWorkItem.c)
 *     CcInitializeVolumeCacheMap @ 0x14038538C (CcInitializeVolumeCacheMap.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140391240 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     SeComputeCreatorDeniedRights @ 0x1403BDDA0 (SeComputeCreatorDeniedRights.c)
 *     SepSidInTokenSidHash @ 0x1403C06B0 (SepSidInTokenSidHash.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403CA408 (AuthzBasepFindSecurityAttributeValue.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403CD380 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403CD668 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1403CF940 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x1403D0060 (RtlAreNamesEqual.c)
 *     RtlSidDominates @ 0x140418530 (RtlSidDominates.c)
 *     RtlOwnerAcesPresent @ 0x14041A340 (RtlOwnerAcesPresent.c)
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     RtlpStackDbEntryIsEqual @ 0x1404436F8 (RtlpStackDbEntryIsEqual.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x14044F210 (IopIsKnownGoodLegacyFsFilter.c)
 *     InsertEventEntryInLookUpTable @ 0x140459DC4 (InsertEventEntryInLookUpTable.c)
 *     SepMatchPackage @ 0x140468CC0 (SepMatchPackage.c)
 *     IopInitActivityIdIrp @ 0x140481F80 (IopInitActivityIdIrp.c)
 *     PnpDeviceActionWorker @ 0x140482AA0 (PnpDeviceActionWorker.c)
 *     IoRaiseInformationalHardError @ 0x1404DFC20 (IoRaiseInformationalHardError.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404F345C (AuthzBasepCompareOctetStringOperands.c)
 *     PopFxLowPowerEpochCallback @ 0x1404FF1C0 (PopFxLowPowerEpochCallback.c)
 *     PopDiagGetPowerSchemeInfo @ 0x140500EDC (PopDiagGetPowerSchemeInfo.c)
 *     SepValidateCAPID @ 0x14052D3A0 (SepValidateCAPID.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140530B10 (MiFindSpecialPurposeMemoryType.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140562DAC (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140562F44 (SymCryptEcDsaSelftest.c)
 *     SymCryptMlDsaSelftest @ 0x140563120 (SymCryptMlDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x1405632FC (SymCryptRsaSelftest.c)
 *     SymCryptFdefDecideModulusType @ 0x14056EF38 (SymCryptFdefDecideModulusType.c)
 *     SymCryptMlDsaSkDecode @ 0x140573AF4 (SymCryptMlDsaSkDecode.c)
 *     __asan_wrap_memcmp @ 0x1405E17C0 (__asan_wrap_memcmp.c)
 *     KiDisplayBlueScreen @ 0x1405E7FF4 (KiDisplayBlueScreen.c)
 *     KiMcheckAlternateReturn @ 0x1405FCD70 (KiMcheckAlternateReturn.c)
 *     RtlpComparePropertyEntry @ 0x14061A9D0 (RtlpComparePropertyEntry.c)
 *     RtlpStackDbSegmentComparitor @ 0x140623674 (RtlpStackDbSegmentComparitor.c)
 *     MinCryptK_GetBootAppSvnFromRevocationList @ 0x14071CB94 (MinCryptK_GetBootAppSvnFromRevocationList.c)
 *     MinCryptCheckCertsAndKeys @ 0x14071CC38 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x14071CD5C (MinCryptIsCertPresent.c)
 *     PopWnfEffectivePowerModeCallback @ 0x1407CF5B0 (PopWnfEffectivePowerModeCallback.c)
 *     PopWnfInSupCallback @ 0x1407D72D0 (PopWnfInSupCallback.c)
 *     PopNetLowPowerEpochCallback @ 0x1407DA660 (PopNetLowPowerEpochCallback.c)
 *     RtlReplaceSidInSd @ 0x140804260 (RtlReplaceSidInSd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140804D4C (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408054A0 (RtlpUpdateDynamicTimeZones.c)
 *     SepSecureBootManifestCompareElements @ 0x140816110 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408162F8 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     ExGetExpirationDate @ 0x140837BDC (ExGetExpirationDate.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14083EAA0 (NtSetSystemEnvironmentValueEx.c)
 *     ExpKdPullRemoteFileForUser @ 0x140845480 (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140882FC0 (SdbpCheckMatchingRegistryValue.c)
 *     BiResolveLocate @ 0x140892F3C (BiResolveLocate.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140894258 (BiUpdateObjectReferenceInEfiEntry.c)
 *     I_MinCryptCheckEKU @ 0x1408A0708 (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A0AA4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1408A1970 (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptHashSearchCompare @ 0x1408A1B20 (I_MinCryptHashSearchCompare.c)
 *     I_MinCryptIsTimestampSignerTrusted @ 0x1408A1B44 (I_MinCryptIsTimestampSignerTrusted.c)
 *     I_MinCryptVerifyHashSignerAuthenticatedAttributes @ 0x1408A2728 (I_MinCryptVerifyHashSignerAuthenticatedAttributes.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408A308C (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x1408A36E0 (MinAsn1ParseSingleExtensionValue.c)
 *     I_MinCryptCheckEKURequirements @ 0x1408A38A0 (I_MinCryptCheckEKURequirements.c)
 *     RtlFindUnicodeSubstring @ 0x1408BFA80 (RtlFindUnicodeSubstring.c)
 *     RtlpNormalizeAcl @ 0x1408E0CF0 (RtlpNormalizeAcl.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409119E4 (PnpProcessTargetDeviceEvent.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     ObLogSecurityDescriptor @ 0x1409211E0 (ObLogSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1409214E0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x140921C40 (SeDefaultObjectMethod.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     TraitsCompare @ 0x14093D888 (TraitsCompare.c)
 *     PopApplyPolicy @ 0x140944018 (PopApplyPolicy.c)
 *     ExpWnfResolveScopeInstance @ 0x14094B390 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x14094CC50 (ExpWnfFindScopeInstance.c)
 *     RtlpInternEntryMatch @ 0x14094F0E8 (RtlpInternEntryMatch.c)
 *     PopEtAggregateFind @ 0x140951D1C (PopEtAggregateFind.c)
 *     RtlPrefixString @ 0x14096D690 (RtlPrefixString.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140970220 (PfSnPrefetchCacheEntryGet.c)
 *     PiCMSetObjectProperty @ 0x14098DA68 (PiCMSetObjectProperty.c)
 *     ConstraintEval @ 0x14098E0C4 (ConstraintEval.c)
 *     PiDmObjectProcessPropertyChange @ 0x140991140 (PiDmObjectProcessPropertyChange.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140992EEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1409A47F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1409A60B0 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PropertyEval @ 0x1409A8E30 (PropertyEval.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409B77C0 (PfSnAsyncPrefetchWorker.c)
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 *     BiAreBootEntriesEqual @ 0x1409D0EEC (BiAreBootEntriesEqual.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 *     ObpLookupDirectoryEntry @ 0x1409E2350 (ObpLookupDirectoryEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x1409F3FA0 (FsRtlIsDbcsInExpression.c)
 *     SepExamineSaclEx @ 0x1409F7C30 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x1409F8430 (SeExamineSacl.c)
 *     EtwpGenerateFileName @ 0x140A1751C (EtwpGenerateFileName.c)
 *     SPCall2ServerInternal @ 0x140A1AE00 (SPCall2ServerInternal.c)
 *     RtlPrefixUnicodeString @ 0x140A29BF0 (RtlPrefixUnicodeString.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140A2FDF0 (ObAssignObjectSecurityDescriptor.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x140A43C88 (PfSnAltProfileTreeCompareByProcess.c)
 *     PfSnEndProcessTrace @ 0x140A43CB4 (PfSnEndProcessTrace.c)
 *     SepSidInSidAndAttributes @ 0x140A54C28 (SepSidInSidAndAttributes.c)
 *     MiComputeBadImageHeaderType @ 0x140A57E48 (MiComputeBadImageHeaderType.c)
 *     EtwpCompareGuid @ 0x140A5D820 (EtwpCompareGuid.c)
 *     SLQueryLicenseValueInternal @ 0x140A6A758 (SLQueryLicenseValueInternal.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A71F50 (PiDevCfgResolveVariableExpression.c)
 *     CmpFindMatchingDescriptorCell @ 0x140A81398 (CmpFindMatchingDescriptorCell.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     SshpCacheDatabaseCompare @ 0x140A848D0 (SshpCacheDatabaseCompare.c)
 *     PfSnParsePrefetchParam @ 0x140AB290C (PfSnParsePrefetchParam.c)
 *     PopAdaptivePowerSettingCallback @ 0x140ABC470 (PopAdaptivePowerSettingCallback.c)
 *     WheapPredictiveFailureAnalysis @ 0x140AC88D8 (WheapPredictiveFailureAnalysis.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140ACA3A4 (PfSnPrefetchCacheEntryUpdate.c)
 *     IopTrackLink @ 0x140ACE24C (IopTrackLink.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD7C68 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     PiDcCompareUpdateProperties @ 0x140ADD730 (PiDcCompareUpdateProperties.c)
 *     SiValidateSystemPartition @ 0x140AE13CC (SiValidateSystemPartition.c)
 *     EtwpUpdateDisallowedGuids @ 0x140AE39A8 (EtwpUpdateDisallowedGuids.c)
 *     RtlSuffixUnicodeString @ 0x140AE4280 (RtlSuffixUnicodeString.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF6420 (FsRtlNotifyFilterReportChange.c)
 *     PspHardenMitigationOptions @ 0x140AFD150 (PspHardenMitigationOptions.c)
 *     EtwpTrackDecodeGuidForSession @ 0x140AFD720 (EtwpTrackDecodeGuidForSession.c)
 *     ExpWnfInvalidateDataStores @ 0x140B31D6C (ExpWnfInvalidateDataStores.c)
 *     BiExportEfiBootManager @ 0x140B37EA8 (BiExportEfiBootManager.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140B3C214 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PopAdaptiveWnfCallback @ 0x140B4D470 (PopAdaptiveWnfCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140B55A60 (VslpConnectedStandbyWnfCallback.c)
 *     PopApplyAdminPolicy @ 0x140B5C748 (PopApplyAdminPolicy.c)
 *     IovpExamineIrpStackForwarding @ 0x140C2BC5C (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140C40EAC (ViCtxEqualExtendedState.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140CB517C (HalpAcpiDetectMachineSpecificActions.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140CC1338 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevice @ 0x140CC2E88 (PipResetDevice.c)
 *     CmpGetBiosDate @ 0x140CECAD4 (CmpGetBiosDate.c)
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
