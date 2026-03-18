/*
 * XREFs of ?PowerWakingDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A6100
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x140045404 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x14006B634 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     WPP_IFR_SF_qqLd @ 0x14009D2BC (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableFailed(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v4; // rdx
  int v5; // r8d
  FxDeviceBase *v6; // rax
  const void *_a2; // rdx

  FxPkgPnp::PowerDmaPowerDown(This);
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v4 = 0LL;
  v5 = (unsigned int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(&This->m_DeviceD0ExitPreInterruptsDisabled, v4, 5u);
  if ( v5 < 0 )
  {
    v6 = This->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)_a2,
      0xCu,
      0x1Bu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v6->m_DeviceObject.m_DeviceObject,
      5u,
      v5);
  }
  return 823LL;
}
