/*
 * XREFs of ZwDeleteObjectAuditAlarm @ 0x140729B60
 * Callers:
 *     DifZwDeleteObjectAuditAlarmWrapper @ 0x1406A7DC0 (DifZwDeleteObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
