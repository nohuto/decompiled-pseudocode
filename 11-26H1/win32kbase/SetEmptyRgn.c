/*
 * XREFs of SetEmptyRgn @ 0x140147480
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  return GreSetRectRgn(a1, 0, 0, 0, 0);
}
