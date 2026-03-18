/*
 * XREFs of ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800D9B1C
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CComplexShape *__fastcall CComplexShape::CComplexShape(CComplexShape *this, struct ID2D1Geometry *a2)
{
  __int64 *v3; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CComplexShape::`vftable';
  v3 = (__int64 *)((char *)this + 16);
  *v3 = (__int64)a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v3);
  return this;
}
