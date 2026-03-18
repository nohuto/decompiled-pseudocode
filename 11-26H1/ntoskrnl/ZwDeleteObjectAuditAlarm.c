/*
 * XREFs of ZwDeleteObjectAuditAlarm @ 0x140724F90
 * Callers:
 *     DifZwDeleteObjectAuditAlarmWrapper @ 0x1406A41E0 (DifZwDeleteObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteObjectAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
