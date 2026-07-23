/*
 * XREFs of ZwOpenObjectAuditAlarm @ 0x14072A5E0
 * Callers:
 *     DifZwOpenObjectAuditAlarmWrapper @ 0x1406B0380 (DifZwOpenObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
