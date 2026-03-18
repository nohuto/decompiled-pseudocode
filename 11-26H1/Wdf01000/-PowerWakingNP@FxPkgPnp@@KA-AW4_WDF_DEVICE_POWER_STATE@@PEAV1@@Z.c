/*
 * XREFs of ?PowerWakingNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007B8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1400461DC (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _WDF_POWER_DEVICE_STATE m_DevicePowerState; // r8d
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v4; // rdx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = This->m_DeviceBase;
  m_DevicePowerState = This->m_DevicePowerState;
  progress = FxCxCallbackProgressInitialized;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  This->m_DeviceD0Entry.m_PreviousState = m_DevicePowerState;
  if ( !m_ObjectSize )
    v4 = 0LL;
  This->m_DeviceD0Entry.m_Device = v4;
  if ( (int)FxPrePostCallback::InvokeStateful(&This->m_DeviceD0Entry, &progress, FxCxCleanupAfterPreOrClientFailure) >= 0 )
    return 33628LL;
  else
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 33624 : 33631;
}
