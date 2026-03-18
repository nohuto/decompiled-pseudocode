/*
 * XREFs of ZwAlertMultipleThreadByThreadId @ 0x1407241B0
 * Callers:
 *     DifZwAlertMultipleThreadByThreadIdWrapper @ 0x140699120 (DifZwAlertMultipleThreadByThreadIdWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlertMultipleThreadByThreadId(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
