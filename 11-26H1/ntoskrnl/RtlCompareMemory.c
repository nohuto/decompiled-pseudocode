/*
 * XREFs of RtlCompareMemory @ 0x140730D90
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x14025B888 (PpmHeteroUpdateHgsConfiguration.c)
 *     SepIsCapabilitySid @ 0x1402B0010 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x1402B0080 (SepIsPackageSid.c)
 *     SepNormalAccessCheck @ 0x1402B0BC0 (SepNormalAccessCheck.c)
 *     EtwpTraceStackKey @ 0x14032C740 (EtwpTraceStackKey.c)
 *     MmReportParkedProcessors @ 0x1403E83AC (MmReportParkedProcessors.c)
 *     PopWriteBsdPoInfo @ 0x140435F08 (PopWriteBsdPoInfo.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140489930 (PpmPerfCalculateQosClassPolicies.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1404A4820 (IoReportTargetDeviceChangeAsynchronous.c)
 *     EtwpGetCrimsonStackKey @ 0x140505998 (EtwpGetCrimsonStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14058ECC4 (WheaGetErrPacketFromErrRecord.c)
 *     HalpGenericErrorSourceRecovery @ 0x14058EED0 (HalpGenericErrorSourceRecovery.c)
 *     HalpHpetDiscover @ 0x140598928 (HalpHpetDiscover.c)
 *     SecureDump_ValidateAmeCertChain @ 0x1405D7424 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1406190D8 (RtlpStdLogCapturedStackTrace.c)
 *     AccelpSubmitWorkToCpu @ 0x1406E0964 (AccelpSubmitWorkToCpu.c)
 *     DsaSubmitWorkToCpu @ 0x1406E1230 (DsaSubmitWorkToCpu.c)
 *     MinCrypK_ParseRevocationList @ 0x14071CA68 (MinCrypK_ParseRevocationList.c)
 *     MinCryptIsKeyPresent @ 0x14071CDCC (MinCryptIsKeyPresent.c)
 *     CmpTransUowIsEqual @ 0x140776F48 (CmpTransUowIsEqual.c)
 *     PipMatchPersistentMemory @ 0x14079DC84 (PipMatchPersistentMemory.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407A1E04 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1407B64A0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     CompareNamesCaseSensitive @ 0x14080290C (CompareNamesCaseSensitive.c)
 *     SepCheckCapabilities @ 0x140814DD4 (SepCheckCapabilities.c)
 *     WmipParseSysIdTable @ 0x140822EC4 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 *     CmpFilterAcpiDockingState @ 0x140852C24 (CmpFilterAcpiDockingState.c)
 *     MiCompareUserSidHotPatchNodes @ 0x14086F6EC (MiCompareUserSidHotPatchNodes.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140887BB0 (SdbpMergeAreTagValuesEqual.c)
 *     MinCryptDecodeOid @ 0x1408A0404 (MinCryptDecodeOid.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x1408A0774 (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByKey @ 0x1408A0864 (I_MinCryptFindRootByKey.c)
 *     I_MinCryptFindRootByName @ 0x1408A08E4 (I_MinCryptFindRootByName.c)
 *     I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408A2258 (I_MinCryptFindSignerCertificateByIssuerAndSerialNumber.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408A27C4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A2AC4 (MinCrypK_VerifySignedDataKModeEx.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408D001C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14090D72C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14092FDE0 (SepAdtAuditObjectAccessWithContext.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14093737C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x140939F90 (EtwpCalculateUpdateNotification.c)
 *     EtwpTrackBinaryForSession @ 0x14093C508 (EtwpTrackBinaryForSession.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140945E50 (PpmCompareAndApplyPolicySettings.c)
 *     RtlCompareString @ 0x14096B960 (RtlCompareString.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 *     RtlCompareUnicodeStrings @ 0x140981100 (RtlCompareUnicodeStrings.c)
 *     PnpIsNullGuid @ 0x14098FEA4 (PnpIsNullGuid.c)
 *     _CmIsRootDevice @ 0x140991F84 (_CmIsRootDevice.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PnpNotifyDeviceClassChange @ 0x1409DC660 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409DD2BC (PnpNotifyTargetDeviceChange.c)
 *     RtlCompareUnicodeString @ 0x1409E1590 (RtlCompareUnicodeString.c)
 *     ObpLookupDirectoryEntry @ 0x1409E2350 (ObpLookupDirectoryEntry.c)
 *     sub_1409EEA18 @ 0x1409EEA18 (sub_1409EEA18.c)
 *     SepIsAclEqual @ 0x1409F9158 (SepIsAclEqual.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1409F966C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1409FB810 (SepAdtClassifyObjectIntoSubCategory.c)
 *     sub_140A1A764 @ 0x140A1A764 (sub_140A1A764.c)
 *     RtlGetAppContainerSidType @ 0x140A2A020 (RtlGetAppContainerSidType.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopArePowerSettingsEqual @ 0x140A40118 (PopArePowerSettingsEqual.c)
 *     EtwpTrackDebugIdForSession @ 0x140A8465C (EtwpTrackDebugIdForSession.c)
 *     SshpCacheDatabaseCompare @ 0x140A848D0 (SshpCacheDatabaseCompare.c)
 *     PopInitializeHeteroProcessors @ 0x140A9DA10 (PopInitializeHeteroProcessors.c)
 *     IopPnPDispatch @ 0x140A9FA40 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x140AA8700 (PnpBusTypeGuidGetIndex.c)
 *     ObpCompareEntryLevel2 @ 0x140AABB60 (ObpCompareEntryLevel2.c)
 *     RtlIsPackageSid @ 0x140AD4ACC (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140ADE2C4 (RtlIsCapabilitySid.c)
 *     IoReportTargetDeviceChange @ 0x140AE6500 (IoReportTargetDeviceChange.c)
 *     PnpCompareInterruptInformation @ 0x140AE7E0C (PnpCompareInterruptInformation.c)
 *     PipGenerateContainerID @ 0x140B0F3DC (PipGenerateContainerID.c)
 *     PnpNotifyHwProfileChange @ 0x140B6A1EC (PnpNotifyHwProfileChange.c)
 *     sub_140B6C624 @ 0x140B6C624 (sub_140B6C624.c)
 *     VfUtilEqualUnicodeString @ 0x140C202E8 (VfUtilEqualUnicodeString.c)
 *     ViCheckTag @ 0x140C26718 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140C26864 (ViCopyBackModifiedBuffer.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140C42DF4 (ViDdiDispatchWmiQueryAllData.c)
 *     HalpAuditSlicTables @ 0x140CB4424 (HalpAuditSlicTables.c)
 *     PipMigratePnpState @ 0x140CC26A0 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140D02F00 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
