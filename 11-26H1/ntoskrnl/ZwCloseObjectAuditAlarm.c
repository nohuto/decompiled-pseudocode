/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x140723B50
 * Callers:
 *     DifZwCloseObjectAuditAlarmWrapper @ 0x14069D110 (DifZwCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCloseObjectAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
