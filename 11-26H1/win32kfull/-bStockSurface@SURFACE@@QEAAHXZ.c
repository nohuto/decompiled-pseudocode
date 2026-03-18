/*
 * XREFs of ?bStockSurface@SURFACE@@QEAAHXZ @ 0x14030CD24
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x140198020 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x14019AE90 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bStockSurface(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && _bittest16((const signed __int16 *)this + 51, 9u);
}
