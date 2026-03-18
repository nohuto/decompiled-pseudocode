/*
 * XREFs of ??0CClockBase@@IEAA@XZ @ 0x1801668C0
 * Callers:
 *     ??0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180166330 (--0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??0CDefaultClock@@QEAA@XZ @ 0x18020AA2C (--0CDefaultClock@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

CClockBase *__fastcall CClockBase::CClockBase(CClockBase *this)
{
  __int64 v2; // rcx

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  memset_0((void *)(v2 + 16), 0, 0x48uLL);
  *((_BYTE *)this + 88) = 0;
  CClockBase::s_allowableTimeDriftMs = (unsigned int)CCommonRegistryData::AllowableTimeDriftMs;
  return this;
}
