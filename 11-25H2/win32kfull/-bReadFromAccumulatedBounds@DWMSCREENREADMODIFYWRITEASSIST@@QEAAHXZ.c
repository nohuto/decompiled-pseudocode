/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x14030EAD8
 * Callers:
 *     NtGdiLineTo @ 0x140083430 (NtGdiLineTo.c)
 *     GrePolyPolygon @ 0x1400A1DE0 (GrePolyPolygon.c)
 *     NtGdiRectangle @ 0x1400E7030 (NtGdiRectangle.c)
 *     GrePolyPolyline @ 0x1401C6160 (GrePolyPolyline.c)
 *     NtGdiInvertRgn @ 0x140208F00 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x140332F90 (GrePolyBezier.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140177478 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1401E7990 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  _QWORD **v1; // rax
  unsigned int v3; // ebx
  struct _RECTL v5; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)*((_QWORD *)this + 3);
  v3 = 0;
  if ( *v1 )
  {
    if ( (unsigned int)GreGetBounds(**v1, &v5, 4LL) )
    {
      ERECTL::bOffsetSubtract(
        (ERECTL *)&v5,
        (const struct _POINTL *)(**((_QWORD **)this + 3) + 8LL * (*(_DWORD *)(**((_QWORD **)this + 3) + 40LL) & 1) + 1016),
        0);
      if ( !ERECTL::bEmpty((ERECTL *)&v5) )
        return (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, &v5);
    }
  }
  return v3;
}
