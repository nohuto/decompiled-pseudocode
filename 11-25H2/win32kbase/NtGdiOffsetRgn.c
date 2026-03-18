/*
 * XREFs of NtGdiOffsetRgn @ 0x14011A1E0
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x140014370 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1, int a2, int a3)
{
  return GreOffsetRgn(a1, a2, a3);
}
