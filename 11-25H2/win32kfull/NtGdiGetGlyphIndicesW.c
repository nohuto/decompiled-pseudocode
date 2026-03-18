/*
 * XREFs of NtGdiGetGlyphIndicesW @ 0x1401B6A80
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1401B6AB0 (NtGdiGetGlyphIndicesWInternal.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesW(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return NtGdiGetGlyphIndicesWInternal(a1, a5, 0);
}
