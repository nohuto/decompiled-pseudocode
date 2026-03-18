/*
 * XREFs of ?AddDirtyRect@CDDisplayRenderTarget@@UEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B5D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::AddDirtyRect(__int64 a1, __int64 a2)
{
  return CTargetDirtyBase<8>::AddDirtyRect(a1 + 30064, a2);
}
