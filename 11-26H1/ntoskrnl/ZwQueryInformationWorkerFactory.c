/*
 * XREFs of ZwQueryInformationWorkerFactory @ 0x140725F70
 * Callers:
 *     DifZwQueryInformationWorkerFactoryWrapper @ 0x1406B2130 (DifZwQueryInformationWorkerFactoryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationWorkerFactory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
