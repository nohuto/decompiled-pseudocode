/*
 * XREFs of ZwAccessCheckByTypeResultListAndAuditAlarm @ 0x140728C60
 * Callers:
 *     DifZwAccessCheckByTypeResultListAndAuditAlarmWrapper @ 0x14069B5C0 (DifZwAccessCheckByTypeResultListAndAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAccessCheckByTypeResultListAndAuditAlarm(
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
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
