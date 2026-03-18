/*
 * XREFs of ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140073E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1400461DC (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ @ 0x140073F1C (-SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0Starting(FxPkgPnp *This)
{
  FxPnpDeviceD0Entry *p_m_DeviceD0Entry; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v5; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  p_m_DeviceD0Entry = &This->m_DeviceD0Entry;
  progress = FxCxCallbackProgressInitialized;
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_DeviceD0Entry->m_PreviousState = This->m_DevicePowerState;
  if ( !m_ObjectSize )
    v5 = 0LL;
  p_m_DeviceD0Entry->m_Device = (WDFDEVICE__ *)v5;
  if ( (int)FxPrePostCallback::InvokeStateful(p_m_DeviceD0Entry, &progress, FxCxCleanupAfterPreOrClientFailure) < 0 )
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 836 : 861;
  if ( This->m_SleepStudyTrackReferences == 1 )
    FxPkgPnp::SleepStudyResetBlockersForD0(This);
  return 784LL;
}
