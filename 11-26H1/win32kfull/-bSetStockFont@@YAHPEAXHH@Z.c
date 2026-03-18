/*
 * XREFs of ?bSetStockFont@@YAHPEAXHH@Z @ 0x140232C6C
 * Callers:
 *     FinishStockFontInit @ 0x14010FBC0 (FinishStockFontInit.c)
 *     FinishStockFontReinit @ 0x140232B40 (FinishStockFontReinit.c)
 *     bInitSystemFont @ 0x1403FA27C (bInitSystemFont.c)
 *     bInitOneStockFontInternal @ 0x1403FB108 (bInitOneStockFontInternal.c)
 *     bInitStockFontsInternal @ 0x1403FBDC8 (bInitStockFontsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetStockFont(Gre::Base *a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  struct Gre::Base::SESSION_GLOBALS *v7; // rax

  v3 = 0;
  v4 = a2;
  if ( a1 )
  {
    v7 = Gre::Base::Globals(a1);
    if ( a3 )
      *(_QWORD *)(*((_QWORD *)v7 + 387) + 8 * v4) = a1;
    else
      *(_QWORD *)(*((_QWORD *)v7 + 386) + 8 * v4) = a1;
  }
  LOBYTE(v3) = a1 != 0LL;
  return v3;
}
