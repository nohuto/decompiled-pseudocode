/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x14030EAB0
 * Callers:
 *     NtGdiLineTo @ 0x140083430 (NtGdiLineTo.c)
 *     GrePolyPolygon @ 0x1400A1DE0 (GrePolyPolygon.c)
 *     NtGdiRectangle @ 0x1400E7030 (NtGdiRectangle.c)
 *     GrePolyPolyline @ 0x1401C6160 (GrePolyPolyline.c)
 *     NtGdiInvertRgn @ 0x140208F00 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x140332F90 (GrePolyBezier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = **((_QWORD **)this + 3);
  if ( !v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 248) & 1) == 0 )
    return 0;
  return v2;
}
