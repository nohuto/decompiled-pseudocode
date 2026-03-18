/*
 * XREFs of ?PowerUpFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x140045168 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerUpFailedPowerDown(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v3; // rdx

  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v3 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  This->m_DeviceD0Exit.m_TargetState = WdfPowerDeviceD3Final;
  if ( !m_ObjectSize )
    v3 = 0LL;
  This->m_DeviceD0Exit.m_Device = v3;
  FxPrePostCallback::InvokeStateless(&This->m_DeviceD0Exit);
  return 852LL;
}
