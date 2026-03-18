/*
 * XREFs of ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x18012F7A4
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x18012F694 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x1800E9694 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 */

void __fastcall CRegionShape::BuildFromCRegion(CRegionShape *this, const struct CRegion *a2)
{
  CRegionShape::SetEmpty(this);
  CRegion::Copy((CRegionShape *)((char *)this + 16), a2);
}
