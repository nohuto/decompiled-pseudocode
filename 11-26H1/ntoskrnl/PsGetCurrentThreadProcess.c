/*
 * XREFs of PsGetCurrentThreadProcess @ 0x1404AA5F0
 * Callers:
 *     NtAlertMultipleThreadByThreadId @ 0x1407FF500 (NtAlertMultipleThreadByThreadId.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408127E0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x140812B38 (SeAuditSystemTimeChange.c)
 *     SepAuditAssignPrimaryToken @ 0x140813228 (SepAuditAssignPrimaryToken.c)
 *     CmpDoAccessCheckOnKCB @ 0x1408597A8 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14085B480 (CmpReportAuditVirtualizationEvent.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140984264 (CmpCheckKeySecurityDescriptorAccess.c)
 *     SeAuditTransactionStateChange @ 0x1409F8C00 (SeAuditTransactionStateChange.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409F9204 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409F9DCC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409FA180 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1409FA6B0 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409FB6F8 (SepAdtStagingEvent.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140A386F8 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140A3B524 (PopDiagTracePowerSettingRegistration.c)
 *     SepAdtTokenRightAdjusted @ 0x140A4325C (SepAdtTokenRightAdjusted.c)
 *     PspSchedulerSharedDataRegionSlotAllocate @ 0x140A83A6C (PspSchedulerSharedDataRegionSlotAllocate.c)
 *     CmpCheckExeOwnerForPca @ 0x140AAE3A0 (CmpCheckExeOwnerForPca.c)
 *     CmpPublishEventForPcaResolver @ 0x140ADE158 (CmpPublishEventForPcaResolver.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140B64ACC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
