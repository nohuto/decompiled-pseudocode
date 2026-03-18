/*
 * XREFs of ??0CSpringAccelerator@@QEAA@MM@Z @ 0x18027B1EC
 * Callers:
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801E2E9C (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CSpringAccelerator *__fastcall CSpringAccelerator::CSpringAccelerator(CSpringAccelerator *this, float a2, float a3)
{
  float *v3; // rcx
  CSpringAccelerator *result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  v3[8] = a2;
  v3[7] = a3;
  result = (CSpringAccelerator *)v3;
  *(_QWORD *)v3 = &CSpringAccelerator::`vftable';
  v3[5] = a2 * a2;
  v3[6] = (float)(a3 + a3) * a2;
  return result;
}
