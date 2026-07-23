/*
 * XREFs of ZwPrivilegedServiceAuditAlarm @ 0x14072A860
 * Callers:
 *     DifZwPrivilegedServiceAuditAlarmWrapper @ 0x1406B2C30 (DifZwPrivilegedServiceAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
