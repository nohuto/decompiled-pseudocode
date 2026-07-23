/*
 * XREFs of SeCaptureSubjectContext @ 0x14090F1D0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140215470 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404A3AD0 (IoCheckRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x1404C97D0 (RtlCheckTokenCapability.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404E1F30 (IoComputeRedirectionTrustLevel.c)
 *     IoCheckRedirectionTrustLevel2 @ 0x1404F5590 (IoCheckRedirectionTrustLevel2.c)
 *     WdipAccessCheck @ 0x14050D6DC (WdipAccessCheck.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406E6A00 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     PnpGetCallerSessionId @ 0x1407A7238 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1407AAEC0 (PiAuCheckTokenMembership.c)
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
 *     NtSetInformationKey @ 0x1408B6800 (NtSetInformationKey.c)
 *     CmpLogHiveFileInaccessible @ 0x1408BBF64 (CmpLogHiveFileInaccessible.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     EtwpAccessCheck @ 0x14090DB60 (EtwpAccessCheck.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14090DC10 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x14090DD40 (PiAuVerifyAccessToObject.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     ObCreateObject @ 0x14090EB60 (ObCreateObject.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140910460 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14091ED10 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     ObpParseSymbolicLinkEx @ 0x140930290 (ObpParseSymbolicLinkEx.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140933444 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     CmpNotifyChangeKey @ 0x14093CF14 (CmpNotifyChangeKey.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     SeAuditProcessCreation @ 0x140945DFC (SeAuditProcessCreation.c)
 *     PiAuDoesClientHavePrivilege @ 0x14094DA38 (PiAuDoesClientHavePrivilege.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiDqQueryCreate @ 0x140950BD4 (PiDqQueryCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     PiCMValidateDeviceInstance @ 0x14095AA88 (PiCMValidateDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14095B760 (IopDeviceInterfaceFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 *     ExpWnfCheckCallerAccess @ 0x1409C450C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 *     ExIsRestrictedCaller @ 0x1409DDEE0 (ExIsRestrictedCaller.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     SepAdtTokenRightAdjusted @ 0x1409FDFBC (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 *     PspSinglePrivCheck @ 0x140A51D78 (PspSinglePrivCheck.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140A5DD30 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140A60090 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140A60CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140A721B0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeAssignPrimaryToken @ 0x140A7BF34 (SeAssignPrimaryToken.c)
 *     SeCheckPrivilegedObject @ 0x140A8287C (SeCheckPrivilegedObject.c)
 *     NtCloseObjectAuditAlarm @ 0x140A9B2F0 (NtCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x140A9EDC0 (SeCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 *     ObpGetIntegrityLevel @ 0x140AB6F0C (ObpGetIntegrityLevel.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     PspIsContextAdmin @ 0x140AEF084 (PspIsContextAdmin.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140B16400 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditHandleDuplication @ 0x140B2A79C (SeAuditHandleDuplication.c)
 *     SeAuditTransactionStateChange @ 0x140B33F70 (SeAuditTransactionStateChange.c)
 *     SeAuditPlugAndPlay @ 0x140B35364 (SeAuditPlugAndPlay.c)
 *     PopBootStatAccessCheck @ 0x140B530B8 (PopBootStatAccessCheck.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     WmipInitializeSecurity @ 0x140CE6910 (WmipInitializeSecurity.c)
 *     CmFcInitSystem2 @ 0x140CF3EC8 (CmFcInitSystem2.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  __int64 v1; // r8
  struct _KLOCK_ENTRIES *v2; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rsi
  struct _KTHREAD *v6; // r15
  void *v7; // rdx
  LegacyAutoBoost *v8; // rbp
  void *v9; // rbp
  void *v10; // rcx
  _QWORD *v11; // rax

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = *(PVOID *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v8,
        (struct _KTHREAD *)((char *)CurrentThread + 1424));
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v7);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v9 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v9, 0x75536553u);
      SubjectContext->ImpersonationLevel = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v9 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v6);
    v10 = v9;
  }
  else
  {
    v10 = 0LL;
  }
  SubjectContext->ClientToken = v10;
  v11 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v1, v2);
  SubjectContext->PrimaryToken = v11;
  if ( SeTokenLeakTracking )
  {
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11[143] + 284LL));
      if ( SubjectContext->PrimaryToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
}
