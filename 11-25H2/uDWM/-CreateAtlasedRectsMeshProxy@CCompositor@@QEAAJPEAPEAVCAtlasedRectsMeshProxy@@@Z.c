/*
 * XREFs of ?CreateAtlasedRectsMeshProxy@CCompositor@@QEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z @ 0x180003D18
 * Callers:
 *     ?EnsureAtlasResource@CAtlasedImage@@AEAAJXZ @ 0x180005404 (-EnsureAtlasResource@CAtlasedImage@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateAtlasedRectsMeshProxy(CCompositor *this, struct CAtlasedRectsMeshProxy **a2)
{
  return CCompositor::CreateProxy<CAtlasedRectsMeshProxy>(this, a2);
}
