/*
 * XREFs of ZwFilterToken @ 0x140725190
 * Callers:
 *     DifZwFilterTokenWrapper @ 0x1406A6060 (DifZwFilterTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
