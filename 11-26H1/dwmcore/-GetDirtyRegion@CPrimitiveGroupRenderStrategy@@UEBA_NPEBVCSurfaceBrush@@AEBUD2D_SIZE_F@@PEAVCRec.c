/*
 * XREFs of ?GetDirtyRegion@CPrimitiveGroupRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180188530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroupRenderStrategy::GetDirtyRegion(
        CPrimitiveGroupRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        struct CRectanglesShape *a4)
{
  return CSurfaceBrush::CSurfaceRenderStrategy::GetDirtyRegionFromSurface(a2, 0LL, a3, a4);
}
