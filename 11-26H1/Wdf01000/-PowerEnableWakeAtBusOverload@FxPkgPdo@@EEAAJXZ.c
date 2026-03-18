/*
 * XREFs of ?PowerEnableWakeAtBusOverload@FxPkgPdo@@EEAAJXZ @ 0x140070460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPdo::PowerEnableWakeAtBusOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _SYSTEM_POWER_STATE); // rax
  unsigned __int16 m_ObjectSize; // r8
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  FxDeviceBase *v7; // rcx
  __int64 v8; // rdx

  m_DeviceBase = this->m_DeviceBase;
  m_Method = this->m_DeviceEnableWakeAtBus.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( !m_Method )
  {
    result = 0LL;
LABEL_5:
    v7 = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 1;
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v7[1].m_ObjectFlags + 648LL) + 888LL);
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 904));
    return result;
  }
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v5 = 0LL;
  result = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))m_Method)(v5, this->m_SystemPowerState);
  if ( (int)result >= 0 )
    goto LABEL_5;
  return result;
}
