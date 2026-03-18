/*
 * XREFs of ZwCreateIoRing @ 0x140724A50
 * Callers:
 *     DifZwCreateIoRingWrapper @ 0x14069F5A0 (DifZwCreateIoRingWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateIoRing(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
