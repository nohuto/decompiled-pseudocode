/*
 * XREFs of RaspRectangleDestroy @ 0x140531D80
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140C54EA4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x140355DE4 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, _QWORD *a2)
{
  return RaspFreeMemory(a1, a2);
}
