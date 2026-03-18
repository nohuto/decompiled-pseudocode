/*
 * XREFs of ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x14021AD34
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x140084FB0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::bRedirHooked(XDCOBJ *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx

  v3 = *(_QWORD *)(W32GetSessionState((_DWORD)this, a2) + 96);
  v4 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  return v4 == *(_QWORD *)(v3 + 4728) || v4 == *(_QWORD *)(v3 + 8);
}
