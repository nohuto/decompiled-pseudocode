/*
 * XREFs of ??0CNaturalAnimationScalarForceAdapter@@QEAA@XZ @ 0x18027B1C8
 * Callers:
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18027B4B0 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CNaturalAnimationScalarForceAdapter *__fastcall CNaturalAnimationScalarForceAdapter::CNaturalAnimationScalarForceAdapter(
        CNaturalAnimationScalarForceAdapter *this)
{
  CNaturalAnimationScalarForceAdapter *v1; // rcx
  CNaturalAnimationScalarForceAdapter *result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  result = v1;
  *(_QWORD *)v1 = &CNaturalAnimationScalarForceAdapter::`vftable';
  return result;
}
