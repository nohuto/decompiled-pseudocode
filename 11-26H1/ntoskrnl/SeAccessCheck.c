/*
 * XREFs of SeAccessCheck @ 0x140301000
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1403C7CA0 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x14049D38C (IopCreateSecurityCheck.c)
 *     WdipAccessCheck @ 0x14050D6DC (WdipAccessCheck.c)
 *     SeIsSystemContext @ 0x14063E9E0 (SeIsSystemContext.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406E6A00 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     PspCheckJobAccessState @ 0x14077BB78 (PspCheckJobAccessState.c)
 *     PiAuCheckTokenMembership @ 0x1407AAEC0 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x140802E00 (PspIumVerifyParentSd.c)
 *     NtSetUuidSeed @ 0x140847400 (NtSetUuidSeed.c)
 *     CMFCheckAccess @ 0x1408480B8 (CMFCheckAccess.c)
 *     CmUpdateFeatureConfiguration @ 0x14085AFF0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14085B25C (CmUpdateFeatureUsageSubscription.c)
 *     CmpNotifyTriggerCheck @ 0x1408D6EE8 (CmpNotifyTriggerCheck.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408EF444 (AlpcpCheckConnectionSecurity.c)
 *     ObCheckCreateObjectAccess @ 0x1408F4A00 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1408F4DF4 (ObpCheckObjectReference.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14090C4C0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     EtwpAccessCheck @ 0x14090DB60 (EtwpAccessCheck.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14090DC10 (ExpWnfValidatePubSubPreconditions.c)
 *     PiAuVerifyAccessToObject @ 0x14090DD40 (PiAuVerifyAccessToObject.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140910460 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpRegisterUMProvider @ 0x1409106B0 (EtwpRegisterUMProvider.c)
 *     ObpCheckTraverseAccess @ 0x140918368 (ObpCheckTraverseAccess.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140933444 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckObjectAccess @ 0x1409349E0 (ObCheckObjectAccess.c)
 *     CmpCheckCreateAccess @ 0x14094592C (CmpCheckCreateAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140946274 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14095B760 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     EtwpCheckLoggerControlAccess @ 0x14097A438 (EtwpCheckLoggerControlAccess.c)
 *     ExpWnfCheckCallerAccess @ 0x1409C450C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 *     ExIsRestrictedCaller @ 0x1409DDEE0 (ExIsRestrictedCaller.c)
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 *     PopBootStatAccessCheck @ 0x140B530B8 (PopBootStatAccessCheck.c)
 *     VfUtilIsLocalSystem @ 0x140C27934 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
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
