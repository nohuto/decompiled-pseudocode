/*
 * XREFs of ZwCreateWorkerFactory @ 0x140724E90
 * Callers:
 *     DifZwCreateWorkerFactoryWrapper @ 0x1406A38B0 (DifZwCreateWorkerFactoryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWorkerFactory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
