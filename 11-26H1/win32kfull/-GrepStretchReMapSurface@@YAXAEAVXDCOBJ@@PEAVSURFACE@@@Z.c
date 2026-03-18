/*
 * XREFs of ?GrepStretchReMapSurface@@YAXAEAVXDCOBJ@@PEAVSURFACE@@@Z @ 0x140219284
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GrepStretchReMapSurface(struct XDCOBJ *a1, struct SURFACE *a2, __int64 a3)
{
  if ( a2 )
  {
    if ( (unsigned int)SURFACE::Map(a2, a2, a3) == 2 )
      *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
  }
}
