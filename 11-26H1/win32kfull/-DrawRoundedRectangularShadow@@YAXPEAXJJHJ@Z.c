/*
 * XREFs of ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x140207B60
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1400833C0 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z @ 0x140207BF8 (-DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z.c)
 *     ?DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z @ 0x140207CC4 (-DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z.c)
 *     ?DrawBottomSide@@YAXPEAXJHJ@Z @ 0x140207D80 (-DrawBottomSide@@YAXPEAXJHJ@Z.c)
 *     ?DrawLogicallyRightSide@@YAXPEAXJJHJ@Z @ 0x140207E30 (-DrawLogicallyRightSide@@YAXPEAXJJHJ@Z.c)
 *     ?DrawBottomLogicallyLeftCorner@@YAXPEAXJHJ@Z @ 0x140207EF0 (-DrawBottomLogicallyLeftCorner@@YAXPEAXJHJ@Z.c)
 */

void __fastcall DrawRoundedRectangularShadow(void *a1, int a2, int a3, int a4, int a5)
{
  DrawTopLogicallyRightCorner(a1, a2, a3, a4, a5);
  DrawLogicallyRightSide(a1, a2, a3, a4, a5);
  DrawBottomLogicallyRightCorner(a1, a2, a4, a5);
  DrawBottomSide(a1, a2, a4, a5);
  DrawBottomLogicallyLeftCorner(a1, a2, a4, a5);
}
