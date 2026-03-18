/*
 * XREFs of ZwAccessCheckByTypeResultListAndAuditAlarm @ 0x140724090
 * Callers:
 *     DifZwAccessCheckByTypeResultListAndAuditAlarmWrapper @ 0x1406979E0 (DifZwAccessCheckByTypeResultListAndAuditAlarmWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckByTypeResultListAndAuditAlarm(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
