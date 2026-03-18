/*
 * XREFs of NtGdiPtInRegion @ 0x140106D70
 * Callers:
 *     <none>
 * Callees:
 *     GrePtInRegion @ 0x140106D90 (GrePtInRegion.c)
 */

__int64 __fastcall NtGdiPtInRegion(HRGN a1)
{
  return GrePtInRegion(a1);
}
