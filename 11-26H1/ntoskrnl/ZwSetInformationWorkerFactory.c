/*
 * XREFs of ZwSetInformationWorkerFactory @ 0x140726A30
 * Callers:
 *     DifZwSetInformationWorkerFactoryWrapper @ 0x1406BB2A0 (DifZwSetInformationWorkerFactoryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationWorkerFactory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
