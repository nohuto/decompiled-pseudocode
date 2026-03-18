/*
 * XREFs of ZwSetInformationIoRing @ 0x140726910
 * Callers:
 *     DifZwSetInformationIoRingWrapper @ 0x1406B9FC0 (DifZwSetInformationIoRingWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationIoRing(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
