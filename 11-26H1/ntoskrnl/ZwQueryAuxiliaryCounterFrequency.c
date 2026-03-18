/*
 * XREFs of ZwQueryAuxiliaryCounterFrequency @ 0x140725D30
 * Callers:
 *     DifZwQueryAuxiliaryCounterFrequencyWrapper @ 0x1406AF9C0 (DifZwQueryAuxiliaryCounterFrequencyWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryAuxiliaryCounterFrequency(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
