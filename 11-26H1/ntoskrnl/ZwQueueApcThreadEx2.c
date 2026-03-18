/*
 * XREFs of ZwQueueApcThreadEx2 @ 0x140726270
 * Callers:
 *     DifZwQueueApcThreadEx2Wrapper @ 0x1406B5350 (DifZwQueueApcThreadEx2Wrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueueApcThreadEx2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
