/*
 * XREFs of ZwQueueApcThread @ 0x140723C90
 * Callers:
 *     DifZwQueueApcThreadWrapper @ 0x1406B56D0 (DifZwQueueApcThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueueApcThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
