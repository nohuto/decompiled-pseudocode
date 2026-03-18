/*
 * XREFs of ZwPrivilegeObjectAuditAlarm @ 0x140725C70
 * Callers:
 *     DifZwPrivilegeObjectAuditAlarmWrapper @ 0x1406AEEA0 (DifZwPrivilegeObjectAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPrivilegeObjectAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
