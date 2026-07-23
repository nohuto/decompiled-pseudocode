/*
 * XREFs of ZwAlertMultipleThreadByThreadId @ 0x140728D80
 * Callers:
 *     DifZwAlertMultipleThreadByThreadIdWrapper @ 0x14069CD00 (DifZwAlertMultipleThreadByThreadIdWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlertMultipleThreadByThreadId(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
