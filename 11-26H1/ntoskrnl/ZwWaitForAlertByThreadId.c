/*
 * XREFs of ZwWaitForAlertByThreadId @ 0x140727070
 * Callers:
 *     DifZwWaitForAlertByThreadIdWrapper @ 0x1406BF010 (DifZwWaitForAlertByThreadIdWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForAlertByThreadId(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
