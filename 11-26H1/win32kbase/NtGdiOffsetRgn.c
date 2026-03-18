/*
 * XREFs of NtGdiOffsetRgn @ 0x140159460
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1400208C0 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1, int a2, int a3)
{
  return GreOffsetRgn(a1, a2, a3);
}
