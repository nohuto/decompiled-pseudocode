/*
 * XREFs of SeAccessCheck @ 0x1402B6340
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1403BDDA0 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x1404A387C (IopCreateSecurityCheck.c)
 *     WdipAccessCheck @ 0x140513C6C (WdipAccessCheck.c)
 *     SeIsSystemContext @ 0x14063B870 (SeIsSystemContext.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406E2720 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     PspCheckJobAccessState @ 0x140778CD8 (PspCheckJobAccessState.c)
 *     PiAuCheckTokenMembership @ 0x1407A8310 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x1407FD3D0 (PspIumVerifyParentSd.c)
 *     NtSetUuidSeed @ 0x1408411C0 (NtSetUuidSeed.c)
 *     CMFCheckAccess @ 0x140842C28 (CMFCheckAccess.c)
 *     CmUpdateFeatureConfiguration @ 0x140854CD4 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140854F40 (CmUpdateFeatureUsageSubscription.c)
 *     CmpNotifyTriggerCheck @ 0x1408D0928 (CmpNotifyTriggerCheck.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408E8E84 (AlpcpCheckConnectionSecurity.c)
 *     ObCheckCreateObjectAccess @ 0x1408EE440 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1408EE834 (ObpCheckObjectReference.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1409034B4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckObjectAccess @ 0x140904A50 (ObCheckObjectAccess.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140930990 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     EtwpAccessCheck @ 0x140931F90 (EtwpAccessCheck.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140932040 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x140932170 (PiAuVerifyAccessToObject.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1409348B0 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x140934B00 (EtwpRegisterUMProvider.c)
 *     ObpCheckTraverseAccess @ 0x14093C7C8 (ObpCheckTraverseAccess.c)
 *     ExpWnfCheckCallerAccess @ 0x140948B9C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409490DC (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateName @ 0x140949660 (NtDeleteWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 *     CmpCheckCreateAccess @ 0x14098391C (CmpCheckCreateAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140984264 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PiAuDoesClientHaveAccess @ 0x14098DE50 (PiAuDoesClientHaveAccess.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14099AD00 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14099B1B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     SPCall2ServerInternal @ 0x140A1AE00 (SPCall2ServerInternal.c)
 *     EtwpCheckLoggerControlAccess @ 0x140A6FAA4 (EtwpCheckLoggerControlAccess.c)
 *     ExIsRestrictedCaller @ 0x140A8C678 (ExIsRestrictedCaller.c)
 *     PopBootStatAccessCheck @ 0x140B50828 (PopBootStatAccessCheck.c)
 *     VfUtilIsLocalSystem @ 0x140C21924 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 */

BOOLEAN __stdcall SeAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN SubjectContextLocked,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
