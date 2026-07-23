/*
 * XREFs of SeReleaseSubjectContext @ 0x1408D1890
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140215470 (SeReportSecurityEventWithSubCategory.c)
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     MiLockVirtualMemoryCheckPrivilege @ 0x140319330 (MiLockVirtualMemoryCheckPrivilege.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     FsRtlCancelNotify @ 0x1403FB5E0 (FsRtlCancelNotify.c)
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404A3AD0 (IoCheckRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x1404C97D0 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E1364 (ExCpuSetResourceManagerAccessCheck.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404E1F30 (IoComputeRedirectionTrustLevel.c)
 *     IoCheckRedirectionTrustLevel2 @ 0x1404F5590 (IoCheckRedirectionTrustLevel2.c)
 *     WdipAccessCheck @ 0x14050D6DC (WdipAccessCheck.c)
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406E6A00 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     FsRtlNotifyCleanupAll @ 0x140793440 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x1407A7238 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1407AAEC0 (PiAuCheckTokenMembership.c)
 *     PspSetQuotaLimits @ 0x1407F6AFC (PspSetQuotaLimits.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspIumVerifyParentSd @ 0x140802E00 (PspIumVerifyParentSd.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SeAuditBootConfiguration @ 0x14081818C (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x140818640 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140818998 (SeAuditSystemTimeChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140819088 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x140819C00 (NtDeleteObjectAuditAlarm.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SepCheckCreateAppContainer @ 0x14081B0F4 (SepCheckCreateAppContainer.c)
 *     NtSetUuidSeed @ 0x140847400 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x14085AFF0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14085B25C (CmUpdateFeatureUsageSubscription.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 *     CmpLogHiveFileInaccessible @ 0x1408BBF64 (CmpLogHiveFileInaccessible.c)
 *     CmpFlushNotify @ 0x1408C07F8 (CmpFlushNotify.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1408EED68 (ObpCaptureBoundaryDescriptor.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408EF444 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     EtwpAccessCheck @ 0x14090DB60 (EtwpAccessCheck.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14090DC10 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x14090DD40 (PiAuVerifyAccessToObject.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140910460 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     EtwpIsRegEntryAllowed @ 0x140916B44 (EtwpIsRegEntryAllowed.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14091ED10 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140923720 (MiIsUserQueryVmCallerTrusted.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     ObpParseSymbolicLinkEx @ 0x140930290 (ObpParseSymbolicLinkEx.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140933444 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     SeAuditProcessCreation @ 0x140945DFC (SeAuditProcessCreation.c)
 *     PiAuDoesClientHavePrivilege @ 0x14094DA38 (PiAuDoesClientHavePrivilege.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiDqQueryRelease @ 0x1409509D8 (PiDqQueryRelease.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     PiCMValidateDeviceInstance @ 0x14095AA88 (PiCMValidateDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14095B760 (IopDeviceInterfaceFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectEventRelease @ 0x140968828 (PiPnpRtlObjectEventRelease.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409A8FAC (PiUEventFreeClientRegistrationContext.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     ExpWnfCheckCallerAccess @ 0x1409C450C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409D42F8 (ExCheckFullProcessInformationAccess.c)
 *     ExIsRestrictedCaller @ 0x1409DDEE0 (ExIsRestrictedCaller.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     SepAdtTokenRightAdjusted @ 0x1409FDFBC (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140A5DD30 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140A60CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140A721B0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeAssignPrimaryToken @ 0x140A7BF34 (SeAssignPrimaryToken.c)
 *     SeCheckPrivilegedObject @ 0x140A8287C (SeCheckPrivilegedObject.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A89F10 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x140A8A240 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A8ACF0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A9A970 (ObpVerifyCreatorAccessCheck.c)
 *     NtCloseObjectAuditAlarm @ 0x140A9B2F0 (NtCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x140A9EDC0 (SeCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 *     ObpGetIntegrityLevel @ 0x140AB6F0C (ObpGetIntegrityLevel.c)
 *     ExpCheckWakeTimerAccess @ 0x140ABF740 (ExpCheckWakeTimerAccess.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     PspIsContextAdmin @ 0x140AEF084 (PspIsContextAdmin.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140B16400 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditHandleDuplication @ 0x140B2A79C (SeAuditHandleDuplication.c)
 *     SeAuditTransactionStateChange @ 0x140B33F70 (SeAuditTransactionStateChange.c)
 *     SeAuditPlugAndPlay @ 0x140B35364 (SeAuditPlugAndPlay.c)
 *     PopBootStatAccessCheck @ 0x140B530B8 (PopBootStatAccessCheck.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     VfUtilIsLocalSystem @ 0x140C27934 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140CF3EC8 (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 */

void __stdcall SeReleaseSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  signed __int64 v2; // r8
  _KPROCESS *Process; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v5; // rtt
  PACCESS_TOKEN ClientToken; // rcx
  _QWORD *PrimaryToken; // rax

  if ( SeTokenLeakTracking )
  {
    PrimaryToken = SubjectContext->PrimaryToken;
    if ( PrimaryToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
      if ( SubjectContext->PrimaryToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
  v2 = (signed __int64)SubjectContext->PrimaryToken;
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&Process[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
  do
  {
    if ( (v2 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v2, 0x75536553u);
      goto LABEL_7;
    }
    v5 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&Process[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v5 != ActiveProcessors );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v2 - 48, -1, 0x75536553u);
LABEL_7:
  ClientToken = SubjectContext->ClientToken;
  SubjectContext->PrimaryToken = 0LL;
  if ( ClientToken )
    ObfDereferenceObjectWithTag(ClientToken, 0x75536553u);
  SubjectContext->ClientToken = 0LL;
}
