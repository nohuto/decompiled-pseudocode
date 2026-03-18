/*
 * XREFs of ZwReplyWaitReceivePortEx @ 0x140723950
 * Callers:
 *     DifZwReplyWaitReceivePortExWrapper @ 0x1406B7660 (DifZwReplyWaitReceivePortExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplyWaitReceivePortEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
