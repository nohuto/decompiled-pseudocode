/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14069B580
 * Callers:
 *     DifZwRequestWaitReplyPortWrapper @ 0x14063B460 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestWaitReplyPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
