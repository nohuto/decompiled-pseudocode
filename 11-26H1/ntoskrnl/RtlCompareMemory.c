/*
 * XREFs of RtlCompareMemory @ 0x140735960
 * Callers:
 *     MmReportParkedProcessors @ 0x1402F528C (MmReportParkedProcessors.c)
 *     EtwpTraceStackKey @ 0x14032E770 (EtwpTraceStackKey.c)
 *     PopWriteBsdPoInfo @ 0x140425088 (PopWriteBsdPoInfo.c)
 *     SepIsPackageSid @ 0x1404591B0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140461B10 (SepIsCapabilitySid.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140483470 (PpmPerfCalculateQosClassPolicies.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14049DEB0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     EtwpGetCrimsonStackKey @ 0x1404FF248 (EtwpGetCrimsonStackKey.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140517458 (PpmHeteroUpdateHgsConfiguration.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140591444 (WheaGetErrPacketFromErrRecord.c)
 *     HalpGenericErrorSourceRecovery @ 0x140591650 (HalpGenericErrorSourceRecovery.c)
 *     HalpHpetDiscover @ 0x14059B0A8 (HalpHpetDiscover.c)
 *     SecureDump_ValidateAmeCertChain @ 0x1405D9C14 (SecureDump_ValidateAmeCertChain.c)
 *     RtlpStdLogCapturedStackTrace @ 0x14061C128 (RtlpStdLogCapturedStackTrace.c)
 *     AccelpSubmitWorkToCpu @ 0x1406E4BE4 (AccelpSubmitWorkToCpu.c)
 *     DsaSubmitWorkToCpu @ 0x1406E54B0 (DsaSubmitWorkToCpu.c)
 *     MinCrypK_ParseRevocationList @ 0x1407216F8 (MinCrypK_ParseRevocationList.c)
 *     MinCryptIsKeyPresent @ 0x140721A5C (MinCryptIsKeyPresent.c)
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 *     PipMatchPersistentMemory @ 0x1407A07C4 (PipMatchPersistentMemory.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1407A4944 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1407B9500 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PpmHeteroReinitializeWpsProcessors @ 0x1407DA9A8 (PpmHeteroReinitializeWpsProcessors.c)
 *     CompareNamesCaseSensitive @ 0x1408083AC (CompareNamesCaseSensitive.c)
 *     SepCheckCapabilities @ 0x14081AEC4 (SepCheckCapabilities.c)
 *     WmipParseSysIdTable @ 0x1408290D4 (WmipParseSysIdTable.c)
 *     SLUpdateLicenseDataInternal @ 0x14083F9C8 (SLUpdateLicenseDataInternal.c)
 *     CmpFilterAcpiDockingState @ 0x140858F34 (CmpFilterAcpiDockingState.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140875ABC (MiCompareUserSidHotPatchNodes.c)
 *     SdbpMergeAreTagValuesEqual @ 0x14088DFAC (SdbpMergeAreTagValuesEqual.c)
 *     MinCryptDecodeOid @ 0x1408A6814 (MinCryptDecodeOid.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x1408A6B84 (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByKey @ 0x1408A6C74 (I_MinCryptFindRootByKey.c)
 *     I_MinCryptFindRootByName @ 0x1408A6CF4 (I_MinCryptFindRootByName.c)
 *     I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408A8668 (I_MinCryptFindSignerCertificateByIssuerAndSerialNumber.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408A8BD4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1408D65E0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140912F1C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x140915B30 (EtwpCalculateUpdateNotification.c)
 *     EtwpTrackBinaryForSession @ 0x1409180A8 (EtwpTrackBinaryForSession.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140920410 (SepAdtClassifyObjectIntoSubCategory.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     VrpPreOpenOrCreate @ 0x140937770 (VrpPreOpenOrCreate.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     PnpIsNullGuid @ 0x140950904 (PnpIsNullGuid.c)
 *     _CmIsRootDevice @ 0x1409529E4 (_CmIsRootDevice.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     RtlCompareString @ 0x14097C2A0 (RtlCompareString.c)
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1409AF85C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1409C17C0 (PpmCompareAndApplyPolicySettings.c)
 *     PnpBusTypeGuidGetIndex @ 0x1409DBC34 (PnpBusTypeGuidGetIndex.c)
 *     RtlCompareUnicodeString @ 0x1409DE5A0 (RtlCompareUnicodeString.c)
 *     ObpLookupDirectoryEntry @ 0x1409DF360 (ObpLookupDirectoryEntry.c)
 *     sub_1409EB1E8 @ 0x1409EB1E8 (sub_1409EB1E8.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PopArePowerSettingsEqual @ 0x1409FBB38 (PopArePowerSettingsEqual.c)
 *     PnpNotifyDeviceClassChange @ 0x140A19910 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x140A1A56C (PnpNotifyTargetDeviceChange.c)
 *     sub_140A23D94 @ 0x140A23D94 (sub_140A23D94.c)
 *     RtlGetAppContainerSidType @ 0x140A3D0C0 (RtlGetAppContainerSidType.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     EtwpTrackDebugIdForSession @ 0x140A899DC (EtwpTrackDebugIdForSession.c)
 *     SshpCacheDatabaseCompare @ 0x140A89C50 (SshpCacheDatabaseCompare.c)
 *     IopPnPDispatch @ 0x140AA13D0 (IopPnPDispatch.c)
 *     ObpCompareEntryLevel2 @ 0x140AA9110 (ObpCompareEntryLevel2.c)
 *     RtlIsPackageSid @ 0x140AD1F2C (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140ADB034 (RtlIsCapabilitySid.c)
 *     SepIsAclEqual @ 0x140AE29D8 (SepIsAclEqual.c)
 *     IoReportTargetDeviceChange @ 0x140AE42C0 (IoReportTargetDeviceChange.c)
 *     PnpCompareInterruptInformation @ 0x140AE5CBC (PnpCompareInterruptInformation.c)
 *     PipGenerateContainerID @ 0x140B10C0C (PipGenerateContainerID.c)
 *     PnpNotifyHwProfileChange @ 0x140B6D3FC (PnpNotifyHwProfileChange.c)
 *     sub_140B6F720 @ 0x140B6F720 (sub_140B6F720.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 *     VfUtilEqualUnicodeString @ 0x140C262F4 (VfUtilEqualUnicodeString.c)
 *     ViCheckTag @ 0x140C2C728 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x140C2C874 (ViCopyBackModifiedBuffer.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x140C48E04 (ViDdiDispatchWmiQueryAllData.c)
 *     HalpAuditSlicTables @ 0x140CBA464 (HalpAuditSlicTables.c)
 *     PipMigratePnpState @ 0x140CC8770 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140D092A0 (VhdiInitializeBootDisk.c)
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
