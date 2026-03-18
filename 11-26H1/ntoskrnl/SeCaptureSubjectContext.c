/*
 * XREFs of SeCaptureSubjectContext @ 0x140933620
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140215140 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByType @ 0x1402AAD98 (SeAccessCheckByType.c)
 *     RtlCheckTokenMembershipEx @ 0x140499FF0 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x1404AA440 (IoCheckRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x1404CFDA0 (RtlCheckTokenCapability.c)
 *     IoComputeRedirectionTrustLevel @ 0x1404E8B70 (IoComputeRedirectionTrustLevel.c)
 *     IoCheckRedirectionTrustLevel2 @ 0x1404FC050 (IoCheckRedirectionTrustLevel2.c)
 *     WdipAccessCheck @ 0x140513C6C (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406E2720 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     PnpGetCallerSessionId @ 0x1407A46F8 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1407A8310 (PiAuCheckTokenMembership.c)
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
 *     NtSetInformationKey @ 0x1408B0310 (NtSetInformationKey.c)
 *     CmpLogHiveFileInaccessible @ 0x1408B5990 (CmpLogHiveFileInaccessible.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1408F4B90 (RtlIsSandboxedToken.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     ObpParseSymbolicLinkEx @ 0x140900300 (ObpParseSymbolicLinkEx.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1409034B4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14092FDE0 (SepAdtAuditObjectAccessWithContext.c)
 *     EtwpAccessCheck @ 0x140931F90 (EtwpAccessCheck.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140932040 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x140932170 (PiAuVerifyAccessToObject.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     ObCreateObject @ 0x140932FB0 (ObCreateObject.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1409348B0 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     ExpWnfCheckCallerAccess @ 0x140948B9C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409490DC (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateName @ 0x140949660 (NtDeleteWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 *     PspIsContextAdmin @ 0x140958640 (PspIsContextAdmin.c)
 *     ObInitProcess @ 0x140971938 (ObInitProcess.c)
 *     CmpNotifyChangeKey @ 0x14097AF04 (CmpNotifyChangeKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     SeAuditProcessCreation @ 0x140983DEC (SeAuditProcessCreation.c)
 *     PiAuDoesClientHavePrivilege @ 0x14098CFD8 (PiAuDoesClientHavePrivilege.c)
 *     PiAuDoesClientHaveAccess @ 0x14098DE50 (PiAuDoesClientHaveAccess.c)
 *     PiDqQueryCreate @ 0x140990174 (PiDqQueryCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x1409920EC (PiDqOpenUserObjectRegKey.c)
 *     PiCMValidateDeviceInstance @ 0x14099A028 (PiCMValidateDeviceInstance.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14099AD00 (IopDeviceInterfaceFilterCallback.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     PiUEventHandleRegistration @ 0x1409D71F0 (PiUEventHandleRegistration.c)
 *     IoGetDeviceInterfaceAlias @ 0x1409DB140 (IoGetDeviceInterfaceAlias.c)
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
 *     PspSinglePrivCheck @ 0x140A48A88 (PspSinglePrivCheck.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140A651E0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140A6FAA4 (EtwpCheckLoggerControlAccess.c)
 *     SeCheckPrivilegedObject @ 0x140A7A93C (SeCheckPrivilegedObject.c)
 *     ExIsRestrictedCaller @ 0x140A8C678 (ExIsRestrictedCaller.c)
 *     NtCloseObjectAuditAlarm @ 0x140A97170 (NtCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x140AA01F0 (PiCMGetDeviceIdList.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 *     ObpGetIntegrityLevel @ 0x140AB5B6C (ObpGetIntegrityLevel.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     SepCheckCreateLowBox @ 0x140B095C4 (SepCheckCreateLowBox.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140B14300 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x140B32F14 (SeAuditPlugAndPlay.c)
 *     PopBootStatAccessCheck @ 0x140B50828 (PopBootStatAccessCheck.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     WmipInitializeSecurity @ 0x140CE0570 (WmipInitializeSecurity.c)
 *     CmFcInitSystem2 @ 0x140CEDB4C (CmFcInitSystem2.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  void *v12; // rcx
  _QWORD *v13; // rax

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
    KeLeaveCriticalRegionThread((__int64)v6, v10, v11);
    v12 = v9;
  }
  else
  {
    v12 = 0LL;
  }
  SubjectContext->ClientToken = v12;
  v13 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v1, v2);
  SubjectContext->PrimaryToken = v13;
  if ( SeTokenLeakTracking )
  {
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13[143] + 284LL));
      if ( SubjectContext->PrimaryToken == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
  }
}
