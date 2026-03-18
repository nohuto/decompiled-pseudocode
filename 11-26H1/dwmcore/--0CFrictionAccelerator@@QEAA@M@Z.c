/*
 * XREFs of ??0CFrictionAccelerator@@QEAA@M@Z @ 0x18027B120
 * Callers:
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x18027B804 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CFrictionAccelerator *__fastcall CFrictionAccelerator::CFrictionAccelerator(CFrictionAccelerator *this, float a2)
{
  float *v2; // rcx
  CFrictionAccelerator *result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  result = (CFrictionAccelerator *)v2;
  *(_QWORD *)v2 = &CFrictionAccelerator::`vftable';
  v2[4] = a2 / 0.0099999998;
  return result;
}
