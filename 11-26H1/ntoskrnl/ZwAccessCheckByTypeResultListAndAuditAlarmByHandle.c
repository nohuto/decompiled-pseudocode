/*
 * XREFs of ZwAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x1407240B0
 * Callers:
 *     DifZwAccessCheckByTypeResultListAndAuditAlarmByHandleWrapper @ 0x140697740 (DifZwAccessCheckByTypeResultListAndAuditAlarmByHandleWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckByTypeResultListAndAuditAlarmByHandle(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
