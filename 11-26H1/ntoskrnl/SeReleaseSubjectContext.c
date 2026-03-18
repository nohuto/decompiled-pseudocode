/*
 * XREFs of SeReleaseSubjectContext @ 0x1408CB2E0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140215140 (SeReportSecurityEventWithSubCategory.c)
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     MiLockVirtualMemoryCheckPrivilege @ 0x140317300 (MiLockVirtualMemoryCheckPrivilege.c)
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     RtlCheckTokenMembershipEx @ 0x140499FF0 (RtlCheckTokenMembershipEx.c)
 *     FsRtlCancelNotify @ 0x1404A3F80 (FsRtlCancelNotify.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404AA440 (IoCheckRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x1404CFDA0 (RtlCheckTokenCapability.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E7FA4 (ExCpuSetResourceManagerAccessCheck.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404E8B70 (IoComputeRedirectionTrustLevel.c)
 *     IoCheckRedirectionTrustLevel2 @ 0x1404FC050 (IoCheckRedirectionTrustLevel2.c)
 *     WdipAccessCheck @ 0x140513C6C (WdipAccessCheck.c)
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406E2720 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     FsRtlNotifyCleanupAll @ 0x140790910 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x1407A46F8 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1407A8310 (PiAuCheckTokenMembership.c)
 *     PspSetQuotaLimits @ 0x1407F0F9C (PspSetQuotaLimits.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspIumVerifyParentSd @ 0x1407FD3D0 (PspIumVerifyParentSd.c)
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     SeAuditBootConfiguration @ 0x14081232C (SeAuditBootConfiguration.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408127E0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140812B38 (SeAuditSystemTimeChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140813228 (SepAuditAssignPrimaryToken.c)
 *     NtDeleteObjectAuditAlarm @ 0x140813DA0 (NtDeleteObjectAuditAlarm.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     NtSetUuidSeed @ 0x1408411C0 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x140854CD4 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140854F40 (CmUpdateFeatureUsageSubscription.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     CmpLogHiveFileInaccessible @ 0x1408B5990 (CmpLogHiveFileInaccessible.c)
 *     CmpFlushNotify @ 0x1408BA228 (CmpFlushNotify.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1408E87A8 (ObpCaptureBoundaryDescriptor.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408E8E84 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1408F4B90 (RtlIsSandboxedToken.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     ObpParseSymbolicLinkEx @ 0x140900300 (ObpParseSymbolicLinkEx.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1409034B4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140920364 (MiIsUserQueryVmCallerTrusted.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14092FDE0 (SepAdtAuditObjectAccessWithContext.c)
 *     EtwpAccessCheck @ 0x140931F90 (EtwpAccessCheck.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140932040 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x140932170 (PiAuVerifyAccessToObject.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1409348B0 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     EtwpIsRegEntryAllowed @ 0x14093AFA4 (EtwpIsRegEntryAllowed.c)
 *     ExpWnfCheckCallerAccess @ 0x140948B9C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409490DC (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateName @ 0x140949660 (NtDeleteWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 *     PspIsContextAdmin @ 0x140958640 (PspIsContextAdmin.c)
 *     ObInitProcess @ 0x140971938 (ObInitProcess.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     SeAuditProcessCreation @ 0x140983DEC (SeAuditProcessCreation.c)
 *     PiAuDoesClientHavePrivilege @ 0x14098CFD8 (PiAuDoesClientHavePrivilege.c)
 *     PiAuDoesClientHaveAccess @ 0x14098DE50 (PiAuDoesClientHaveAccess.c)
 *     PiDqQueryRelease @ 0x14098FF78 (PiDqQueryRelease.c)
 *     PiDqOpenUserObjectRegKey @ 0x1409920EC (PiDqOpenUserObjectRegKey.c)
 *     PiCMValidateDeviceInstance @ 0x14099A028 (PiCMValidateDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14099AD00 (IopDeviceInterfaceFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectEventRelease @ 0x1409A7DD4 (PiPnpRtlObjectEventRelease.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1409D80BC (PiUEventFreeClientRegistrationContext.c)
 *     IoGetDeviceInterfaceAlias @ 0x1409DB140 (IoGetDeviceInterfaceAlias.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409E78E0 (ExCheckFullProcessInformationAccess.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1409F51E0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1409F7550 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1409F8190 (NtPrivilegeObjectAuditAlarm.c)
 *     SeAuditTransactionStateChange @ 0x1409F8C00 (SeAuditTransactionStateChange.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1409F8EF4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1409F91A0 (SeCloseObjectAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1409F9428 (SeAuditHandleDuplication.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1409F966C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409FA110 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     SeOperationAuditAlarm @ 0x1409FA6B0 (SeOperationAuditAlarm.c)
 *     SPCall2ServerInternal @ 0x140A1AE00 (SPCall2ServerInternal.c)
 *     SeAssignPrimaryToken @ 0x140A2C3D0 (SeAssignPrimaryToken.c)
 *     SepAdtTokenRightAdjusted @ 0x140A4325C (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140A435C0 (SeAuditingWithTokenForSubcategory.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140A651E0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140A6FAA4 (EtwpCheckLoggerControlAccess.c)
 *     SeCheckPrivilegedObject @ 0x140A7A93C (SeCheckPrivilegedObject.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A85310 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x140A85640 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A860F0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     ExIsRestrictedCaller @ 0x140A8C678 (ExIsRestrictedCaller.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A967F0 (ObpVerifyCreatorAccessCheck.c)
 *     NtCloseObjectAuditAlarm @ 0x140A97170 (NtCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x140AA01F0 (PiCMGetDeviceIdList.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 *     ObpGetIntegrityLevel @ 0x140AB5B6C (ObpGetIntegrityLevel.c)
 *     ExpCheckWakeTimerAccess @ 0x140ABD2E0 (ExpCheckWakeTimerAccess.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     SepCheckCreateLowBox @ 0x140B095C4 (SepCheckCreateLowBox.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140B14300 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x140B32F14 (SeAuditPlugAndPlay.c)
 *     PopBootStatAccessCheck @ 0x140B50828 (PopBootStatAccessCheck.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     VfUtilIsLocalSystem @ 0x140C21924 (VfUtilIsLocalSystem.c)
 *     CmFcInitSystem2 @ 0x140CEDB4C (CmFcInitSystem2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
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
      if ( SubjectContext->PrimaryToken == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == RtlpBootStatHandleLock.TrapFrame )
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
