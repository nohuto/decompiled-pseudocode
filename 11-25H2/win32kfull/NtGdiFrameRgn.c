/*
 * XREFs of NtGdiFrameRgn @ 0x1400E45F0
 * Callers:
 *     <none>
 * Callees:
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  return GreFrameRgn(a1, a2, a3, a4, a5);
}
