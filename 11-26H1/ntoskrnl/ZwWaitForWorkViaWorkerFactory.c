/*
 * XREFs of ZwWaitForWorkViaWorkerFactory @ 0x1407270D0
 * Callers:
 *     DifZwWaitForWorkViaWorkerFactoryWrapper @ 0x1406BF960 (DifZwWaitForWorkViaWorkerFactoryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForWorkViaWorkerFactory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
