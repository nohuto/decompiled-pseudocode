/*
 * XREFs of ZwReplyWaitReplyPort @ 0x1407264B0
 * Callers:
 *     DifZwReplyWaitReplyPortWrapper @ 0x1406B79A0 (DifZwReplyWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplyWaitReplyPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
