/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x14069B8A0
 * Callers:
 *     DifZwCloseObjectAuditAlarmWrapper @ 0x140630E40 (DifZwCloseObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCloseObjectAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
