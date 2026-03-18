/*
 * XREFs of NtGdiSetRectRgn @ 0x1401C8030
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x140014720 (GreSetRectRgn.c)
 */

__int64 __fastcall NtGdiSetRectRgn(HRGN a1, signed int a2, int a3, signed int a4, struct REGION_CORE *a5)
{
  struct REGION_CORE *v6; // [rsp+20h] [rbp-18h]

  LODWORD(v6) = (_DWORD)a5;
  return GreSetRectRgn(a1, a2, a3, a4, v6);
}
