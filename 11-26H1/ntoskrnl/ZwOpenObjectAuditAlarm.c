/*
 * XREFs of ZwOpenObjectAuditAlarm @ 0x140725A10
 * Callers:
 *     DifZwOpenObjectAuditAlarmWrapper @ 0x1406AC7A0 (DifZwOpenObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenObjectAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
