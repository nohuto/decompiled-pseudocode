/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x14069B8A0
 * Callers:
 *     DifZwCloseObjectAuditAlarmWrapper @ 0x140630E40 (DifZwCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
