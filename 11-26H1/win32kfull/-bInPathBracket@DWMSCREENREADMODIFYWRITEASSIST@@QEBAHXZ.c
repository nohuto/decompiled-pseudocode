/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x140326118
 * Callers:
 *     NtGdiLineTo @ 0x14006DF40 (NtGdiLineTo.c)
 *     GrePolyPolyline @ 0x140114480 (GrePolyPolyline.c)
 *     GrePolyPolygon @ 0x1401146C0 (GrePolyPolygon.c)
 *     NtGdiRectangle @ 0x1401166F0 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x14023D9D0 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x140326620 (GrePolyBezier.c)
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
