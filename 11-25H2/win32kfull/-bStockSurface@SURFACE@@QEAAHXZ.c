/*
 * XREFs of ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1402FDBF8
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x140164880 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x14016A050 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bStockSurface(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && _bittest16((const signed __int16 *)this + 51, 9u);
}
