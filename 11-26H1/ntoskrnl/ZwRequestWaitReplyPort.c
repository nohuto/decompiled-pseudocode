/*
 * XREFs of ZwRequestWaitReplyPort @ 0x140723830
 * Callers:
 *     DifZwRequestWaitReplyPortWrapper @ 0x1406B7C80 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestWaitReplyPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
