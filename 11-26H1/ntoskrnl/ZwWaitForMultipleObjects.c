/*
 * XREFs of ZwWaitForMultipleObjects @ 0x140723F50
 * Callers:
 *     DifZwWaitForMultipleObjectsWrapper @ 0x1406BF640 (DifZwWaitForMultipleObjectsWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForMultipleObjects(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
