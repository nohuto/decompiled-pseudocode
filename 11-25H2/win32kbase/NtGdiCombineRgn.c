/*
 * XREFs of NtGdiCombineRgn @ 0x14000DFA0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 */

__int64 __fastcall NtGdiCombineRgn(HRGN a1, HRGN a2, HRGN a3)
{
  return GreCombineRgn(a1, a2, a3);
}
