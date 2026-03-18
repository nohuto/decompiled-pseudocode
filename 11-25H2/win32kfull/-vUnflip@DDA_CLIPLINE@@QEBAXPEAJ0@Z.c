/*
 * XREFs of ?vUnflip@DDA_CLIPLINE@@QEBAXPEAJ0@Z @ 0x1400F5C9C
 * Callers:
 *     ?vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1400F3DB8 (-vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1400F3EC8 (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400F4200 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DDA_CLIPLINE::vUnflip(DDA_CLIPLINE *this, int *a2, int *a3)
{
  int v3; // r9d

  if ( (*(_DWORD *)this & 5) != 0 )
  {
    v3 = *a2;
    *a2 = *a3;
    *a3 = v3;
  }
  if ( (*(_DWORD *)this & 8) != 0 )
    *a3 = -*a3;
  if ( (*(_DWORD *)this & 0x20) != 0 )
    *a2 = -*a2;
}
