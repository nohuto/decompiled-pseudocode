/*
 * XREFs of ?load@?$_Atomic_storage@PEAUID2D1PathGeometry@@$07@std@@QEBAPEAUID2D1PathGeometry@@W4memory_order@2@@Z @ 0x180050A1C
 * Callers:
 *     ??1CPathData@@MEAA@XZ @ 0x1800502C8 (--1CPathData@@MEAA@XZ.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x180050390 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800505E0 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_storage<ID2D1PathGeometry *,8>::load(__int64 a1)
{
  return *(_QWORD *)a1;
}
