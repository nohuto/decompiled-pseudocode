/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x140728720
 * Callers:
 *     DifZwCloseObjectAuditAlarmWrapper @ 0x1406A0CF0 (DifZwCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
