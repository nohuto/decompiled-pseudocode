/*
 * XREFs of ZwCreateProcessEx @ 0x140723D90
 * Callers:
 *     DifZwCreateProcessExWrapper @ 0x1406A0D30 (DifZwCreateProcessExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateProcessEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
