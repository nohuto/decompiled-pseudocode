/*
 * XREFs of PsGetCurrentThreadProcess @ 0x1404A3C80
 * Callers:
 *     NtAlertMultipleThreadByThreadId @ 0x140804F30 (NtAlertMultipleThreadByThreadId.c)
 *     SeAuditFipsCryptoSelftests @ 0x140818640 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140818998 (SeAuditSystemTimeChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140819088 (SepAuditAssignPrimaryToken.c)
 *     CmpDoAccessCheckOnKCB @ 0x14085FB38 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140861774 (CmpReportAuditVirtualizationEvent.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091D6BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED80 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409202F8 (SepAdtStagingEvent.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140946274 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x14094CB6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x1409F42B8 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopDiagTracePowerSettingRegistration @ 0x1409F6F44 (PopDiagTracePowerSettingRegistration.c)
 *     SepAdtTokenRightAdjusted @ 0x1409FDFBC (SepAdtTokenRightAdjusted.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140A9EE24 (SepAdtCloseObjectAuditAlarm.c)
 *     CmpCheckExeOwnerForPca @ 0x140AA7384 (CmpCheckExeOwnerForPca.c)
 *     CmpPublishEventForPcaResolver @ 0x140ADAEC8 (CmpPublishEventForPcaResolver.c)
 *     SeAuditTransactionStateChange @ 0x140B33F70 (SeAuditTransactionStateChange.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B67B6C (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
