/*
 * XREFs of ZwQueueApcThreadEx @ 0x140726250
 * Callers:
 *     DifZwQueueApcThreadExWrapper @ 0x1406B5520 (DifZwQueueApcThreadExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueueApcThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
