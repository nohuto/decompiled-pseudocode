/*
 * XREFs of ??0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F7410
 * Callers:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x14012B798 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ??1CInputConfig@@AEAA@XZ @ 0x1401F7468 (--1CInputConfig@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

CEResourceLockExclusive *__fastcall CEResourceLockExclusive::CEResourceLockExclusive(
        CEResourceLockExclusive *this,
        PERESOURCE *a2)
{
  *(_QWORD *)this = a2;
  ExEnterCriticalRegionAndAcquireResourceExclusive(*a2);
  return this;
}
