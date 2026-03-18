/*
 * XREFs of ZwSubmitIoRing @ 0x140726D90
 * Callers:
 *     DifZwSubmitIoRingWrapper @ 0x1406BD1A0 (DifZwSubmitIoRingWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSubmitIoRing(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
