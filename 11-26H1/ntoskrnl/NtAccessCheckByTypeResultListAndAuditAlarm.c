/*
 * XREFs of NtAccessCheckByTypeResultListAndAuditAlarm @ 0x140819A90
 * Callers:
 *     DifNtAccessCheckByTypeResultListAndAuditAlarmWrapper @ 0x14066D0E0 (DifNtAccessCheckByTypeResultListAndAuditAlarmWrapper.c)
 * Callees:
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 */

NTSTATUS __stdcall NtAccessCheckByTypeResultListAndAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        ACCESS_MASK DesiredAccess,
        AUDIT_EVENT_TYPE AuditType,
        ULONG Flags,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeListLength,
        PGENERIC_MAPPING GenericMapping,
        BOOLEAN ObjectCreation,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus,
        PBOOLEAN GenerateOnClose)
{
  return SepAccessCheckAndAuditAlarm(
           (int)SubsystemName,
           (int)HandleId,
           0,
           (int)ObjectTypeName,
           (__int64)ObjectName,
           SecurityDescriptor,
           (__int64)PrincipalSelfSid,
           DesiredAccess,
           AuditType,
           Flags,
           (__int64)ObjectTypeList,
           ObjectTypeListLength,
           GenericMapping,
           (__int64)GrantedAccess,
           (__int64)AccessStatus,
           (__int64)GenerateOnClose,
           1);
}
