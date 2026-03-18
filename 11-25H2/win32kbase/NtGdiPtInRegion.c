/*
 * XREFs of NtGdiPtInRegion @ 0x1401223F0
 * Callers:
 *     <none>
 * Callees:
 *     GrePtInRegion @ 0x140013490 (GrePtInRegion.c)
 */

__int64 __fastcall NtGdiPtInRegion(HRGN a1, int a2, int a3)
{
  return GrePtInRegion(a1, a2, a3);
}
