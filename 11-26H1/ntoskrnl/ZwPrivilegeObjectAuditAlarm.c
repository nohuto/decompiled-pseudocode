/*
 * XREFs of ZwPrivilegeObjectAuditAlarm @ 0x14072A840
 * Callers:
 *     DifZwPrivilegeObjectAuditAlarmWrapper @ 0x1406B2A80 (DifZwPrivilegeObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
