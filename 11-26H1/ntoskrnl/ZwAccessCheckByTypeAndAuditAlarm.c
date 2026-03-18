/*
 * XREFs of ZwAccessCheckByTypeAndAuditAlarm @ 0x140723F10
 * Callers:
 *     DifZwAccessCheckByTypeAndAuditAlarmWrapper @ 0x1406974C0 (DifZwAccessCheckByTypeAndAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckByTypeAndAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
