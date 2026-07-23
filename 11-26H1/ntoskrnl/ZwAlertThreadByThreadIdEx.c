/*
 * XREFs of ZwAlertThreadByThreadIdEx @ 0x140728E00
 * Callers:
 *     DifZwAlertThreadByThreadIdExWrapper @ 0x14069D000 (DifZwAlertThreadByThreadIdExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlertThreadByThreadIdEx(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
