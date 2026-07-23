/*
 * XREFs of RaspRectangleDestroy @ 0x140534220
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140C5AEA4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x140357B8C (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, _QWORD *a2)
{
  return RaspFreeMemory(a1, a2);
}
