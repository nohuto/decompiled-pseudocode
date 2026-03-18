/*
 * XREFs of ZwReplyPort @ 0x140723570
 * Callers:
 *     DifZwReplyPortWrapper @ 0x1406B74F0 (DifZwReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplyPort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
