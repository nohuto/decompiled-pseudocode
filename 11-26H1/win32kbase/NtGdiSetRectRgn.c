/*
 * XREFs of NtGdiSetRectRgn @ 0x1401F09D0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 */

__int64 __fastcall NtGdiSetRectRgn(HRGN a1, signed int a2, unsigned int a3, signed int a4, unsigned int a5)
{
  return GreSetRectRgn(a1, a2, a3, a4, a5);
}
