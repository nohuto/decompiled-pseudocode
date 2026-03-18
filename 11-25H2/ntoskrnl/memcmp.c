/*
 * XREFs of memcmp @ 0x1406B4C10
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x14020A380 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1402911A0 (AuthzBasepFindSecurityAttributeValue.c)
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1402A1F38 (IopIsKnownGoodLegacyFsFilter.c)
 *     RtlpIsNameInExpressionPrivate @ 0x14030F240 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x1403104F0 (RtlAreNamesEqual.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14035FC14 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     SepPotentialGlobalTableAttribute @ 0x140360FB8 (SepPotentialGlobalTableAttribute.c)
 *     SeComputeCreatorDeniedRights @ 0x140361760 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepNormalAccessCheck @ 0x140366DE0 (SepNormalAccessCheck.c)
 *     SepMatchPackage @ 0x140367B50 (SepMatchPackage.c)
 *     SepMaximumAccessCheck @ 0x140368FC0 (SepMaximumAccessCheck.c)
 *     RtlSidHashLookup @ 0x140369A50 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     RtlFindAceBySid @ 0x14036B330 (RtlFindAceBySid.c)
 *     CompareEventEntry @ 0x1403BB784 (CompareEventEntry.c)
 *     SepTokenIsOwner @ 0x1403CE170 (SepTokenIsOwner.c)
 *     RtlpOwnerAcesPresent @ 0x1403CEDE0 (RtlpOwnerAcesPresent.c)
 *     SepSidInToken @ 0x1403CF090 (SepSidInToken.c)
 *     SepSidInTokenSidHash @ 0x1403D1F20 (SepSidInTokenSidHash.c)
 *     RtlSidDominates @ 0x1403F2890 (RtlSidDominates.c)
 *     RtlOwnerAcesPresent @ 0x1403F7250 (RtlOwnerAcesPresent.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140413378 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x140413928 (HalpAcpiGetRsdt.c)
 *     KeUpdateSoftParkRankList @ 0x14047B798 (KeUpdateSoftParkRankList.c)
 *     IoRaiseInformationalHardError @ 0x1404AD170 (IoRaiseInformationalHardError.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404B35A8 (AuthzBasepCompareOctetStringOperands.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     SepValidateCAPID @ 0x1404F69D8 (SepValidateCAPID.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140526DE4 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x140526F7C (SymCryptEcDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x140527154 (SymCryptRsaSelftest.c)
 *     SymCryptFdefDecideModulusType @ 0x140532F18 (SymCryptFdefDecideModulusType.c)
 *     HalMatchAcpiOemTableId @ 0x14053A730 (HalMatchAcpiOemTableId.c)
 *     __asan_wrap_memcmp @ 0x1405A9BE0 (__asan_wrap_memcmp.c)
 *     KiDisplayBlueScreen @ 0x1405AFF14 (KiDisplayBlueScreen.c)
 *     RtlpComparePropertyEntry @ 0x1405DE170 (RtlpComparePropertyEntry.c)
 *     MiFindSpecialPurposeMemoryType @ 0x140682EC8 (MiFindSpecialPurposeMemoryType.c)
 *     MinCryptK_GetBootAppSvnFromRevocationList @ 0x140693F94 (MinCryptK_GetBootAppSvnFromRevocationList.c)
 *     MinCryptCheckCertsAndKeys @ 0x140694048 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x14069416C (MinCryptIsCertPresent.c)
 *     RtlSuffixUnicodeString @ 0x14076DE00 (RtlSuffixUnicodeString.c)
 *     RtlReplaceSidInSd @ 0x140771C10 (RtlReplaceSidInSd.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14077300C (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14077366C (RtlpUpdateDynamicTimeZones.c)
 *     SepSecureBootManifestCompareElements @ 0x140784D70 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140784F3C (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     SLQueryLicenseValueInternal @ 0x1407AA53C (SLQueryLicenseValueInternal.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     ExpKdPullRemoteFileForUser @ 0x1407B2BE4 (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1407F347C (SdbpCheckMatchingRegistryValue.c)
 *     I_MinCryptCheckEKU @ 0x140814D30 (I_MinCryptCheckEKU.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408150B4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1408159FC (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptHashSearchCompare @ 0x140815BB0 (I_MinCryptHashSearchCompare.c)
 *     I_MinCryptIsTimestampSignerTrusted @ 0x140815BD4 (I_MinCryptIsTimestampSignerTrusted.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x140816F1C (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x14081756C (MinAsn1ParseSingleExtensionValue.c)
 *     I_MinCryptCheckEKURequirements @ 0x14081772C (I_MinCryptCheckEKURequirements.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140826E00 (PfSnPrefetchCacheEntryGet.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140828764 (PfSnPrefetchCacheEntryUpdate.c)
 *     PiDmObjectProcessPropertyChange @ 0x140837338 (PiDmObjectProcessPropertyChange.c)
 *     ConstraintEval @ 0x140839B70 (ConstraintEval.c)
 *     RtlpInternEntryMatch @ 0x14083B6F8 (RtlpInternEntryMatch.c)
 *     ObpLookupDirectoryEntry @ 0x140846000 (ObpLookupDirectoryEntry.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     SshpCacheDatabaseCompare @ 0x140869290 (SshpCacheDatabaseCompare.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140894D8C (EtwpGetLoggerInfoFromContext.c)
 *     ObLogSecurityDescriptor @ 0x140899A00 (ObLogSecurityDescriptor.c)
 *     SeDefaultObjectMethod @ 0x1408A1150 (SeDefaultObjectMethod.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408AABCC (AlpcpEnterStateChangeEventMessageLog.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PropertyEval @ 0x1408D2D00 (PropertyEval.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     PfSnAsyncPrefetchWorker @ 0x1408EBF40 (PfSnAsyncPrefetchWorker.c)
 *     ObSetSecurityDescriptorInfo @ 0x140919920 (ObSetSecurityDescriptorInfo.c)
 *     RtlpNormalizeAcl @ 0x14091B380 (RtlpNormalizeAcl.c)
 *     PfSnAltProfileTreeCompareByProcess @ 0x14091D448 (PfSnAltProfileTreeCompareByProcess.c)
 *     PfSnEndProcessTrace @ 0x14091D474 (PfSnEndProcessTrace.c)
 *     SepExamineSaclEx @ 0x14092D558 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x14092EA20 (SeExamineSacl.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     MiComputeBadImageHeaderType @ 0x140940C80 (MiComputeBadImageHeaderType.c)
 *     PopEtAggregateFind @ 0x140962524 (PopEtAggregateFind.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14096AA90 (PiDmObjectUpdateCachedObjectProperty.c)
 *     CmpFindMatchingDescriptorCell @ 0x1409763A4 (CmpFindMatchingDescriptorCell.c)
 *     RtlFindUnicodeSubstring @ 0x140976ED0 (RtlFindUnicodeSubstring.c)
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 *     FsRtlIsDbcsInExpression @ 0x140994750 (FsRtlIsDbcsInExpression.c)
 *     SepSidInSidAndAttributes @ 0x140998F08 (SepSidInSidAndAttributes.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1409A52A0 (ObAssignObjectSecurityDescriptor.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409A913C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     EtwpCompareGuid @ 0x1409D8690 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409EE97C (EtwpUpdateDisallowedGuids.c)
 *     TraitsCompare @ 0x1409F59DC (TraitsCompare.c)
 *     ExpWnfFindScopeInstance @ 0x1409FE570 (ExpWnfFindScopeInstance.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A02350 (FsRtlNotifyFilterReportChange.c)
 *     PopApplyPolicy @ 0x140A0FFD0 (PopApplyPolicy.c)
 *     PnpProcessTargetDeviceEvent @ 0x140A1B0C8 (PnpProcessTargetDeviceEvent.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     PiDcCompareUpdateProperties @ 0x140A46980 (PiDcCompareUpdateProperties.c)
 *     RtlPrefixString @ 0x140A51520 (RtlPrefixString.c)
 *     EtwpGenerateFileName @ 0x140A7C3A0 (EtwpGenerateFileName.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8C530 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140A92448 (PiSwDoesCreateChangesRequireReEnum.c)
 *     ExpWnfInvalidateDataStores @ 0x140A9A1F8 (ExpWnfInvalidateDataStores.c)
 *     BiExportEfiBootManager @ 0x140AADFBC (BiExportEfiBootManager.c)
 *     BiAreBootEntriesEqual @ 0x140AB22A4 (BiAreBootEntriesEqual.c)
 *     IovpExamineIrpStackForwarding @ 0x140B7D670 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140B9209C (ViCtxEqualExtendedState.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140C0408C (HalpAcpiDetectMachineSpecificActions.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C0F108 (PipCheckSystemFirmwareUpdated.c)
 *     CmpGetBiosDate @ 0x140C37E94 (CmpGetBiosDate.c)
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
