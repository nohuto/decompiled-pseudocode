/*
 * XREFs of NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140813CE0
 * Callers:
 *     DifNtAccessCheckByTypeResultListAndAuditAlarmByHandleWrapper @ 0x140669260 (DifNtAccessCheckByTypeResultListAndAuditAlarmByHandleWrapper.c)
 * Callees:
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 */

NTSTATUS __stdcall NtAccessCheckByTypeResultListAndAuditAlarmByHandle(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
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
  HANDLE v18; // [rsp+B0h] [rbp+18h] BYREF

  v18 = ClientToken;
  return SepAccessCheckAndAuditAlarm(
           (int)SubsystemName,
           (int)HandleId,
           (int)&v18,
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
