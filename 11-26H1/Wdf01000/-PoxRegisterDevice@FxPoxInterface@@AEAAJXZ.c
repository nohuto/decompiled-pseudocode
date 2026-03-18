/*
 * XREFs of ?PoxRegisterDevice@FxPoxInterface@@AEAAJXZ @ 0x14006922C
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x140068CCC (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x1400691F4 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxPoxInterface::PoxRegisterDevice(FxPoxInterface *this)
{
  FxPkgPnp *m_PkgPnp; // rcx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  int v4; // r10d
  _POX_SETTINGS *v5; // r9
  _PO_FX_COMPONENT_V1 *Component; // rax
  signed int v7; // ebx
  FxPkgPnp *v8; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r8
  _BYTE poxDevice_8[176]; // [rsp+48h] [rbp-69h] OVERLAPPED BYREF
  __int64 v14; // [rsp+F8h] [rbp+47h]

  memset(poxDevice_8, 0, sizeof(poxDevice_8));
  m_PkgPnp = this->m_PkgPnp;
  v14 = 0LL;
  *(_DWORD *)poxDevice_8 = 3;
  *(_QWORD *)&poxDevice_8[32] = FxPoxInterface::StateCallback;
  *(_QWORD *)&poxDevice_8[88] = this;
  *(_QWORD *)&poxDevice_8[16] = FxPoxInterface::ComponentActiveCallback;
  *(_QWORD *)&poxDevice_8[24] = FxPoxInterface::ComponentIdleCallback;
  *(_QWORD *)&poxDevice_8[40] = FxPoxInterface::PowerRequiredCallback;
  *(_QWORD *)&poxDevice_8[48] = FxPoxInterface::PowerNotRequiredCallback;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported )
  {
    *(_QWORD *)&poxDevice_8[64] = FxPoxInterface::DirectedPowerUpCallback;
    *(_QWORD *)&poxDevice_8[72] = FxPoxInterface::DirectedPowerDownCallback;
  }
  *(_QWORD *)&poxDevice_8[8] = m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags;
  *(_DWORD *)&poxDevice_8[96] = 1;
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(this);
  v5 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->PowerControlCallback )
  {
    *(_QWORD *)&poxDevice_8[56] = FxPoxInterface::PowerControlCallback;
  }
  else
  {
    *(_QWORD *)&poxDevice_8[56] = 0LL;
    if ( !PowerFrameworkSettings )
      goto LABEL_9;
  }
  Component = PowerFrameworkSettings->Component;
  if ( Component )
  {
    *(_GUID *)&poxDevice_8[104] = Component->Id;
    *(_DWORD *)&poxDevice_8[132] = v5->Component->IdleStateCount;
    *(_DWORD *)&poxDevice_8[128] = v5->Component->DeepestWakeableIdleState;
    *(_QWORD *)&poxDevice_8[136] = v5->Component->IdleStates;
    goto LABEL_10;
  }
LABEL_9:
  *(_DWORD *)&poxDevice_8[132] = v4;
  *(_QWORD *)&poxDevice_8[136] = &poxDevice_8[160];
  LODWORD(v14) = -1;
LABEL_10:
  v7 = PoFxRegisterDevice(this->m_PkgPnp->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, poxDevice_8, &this->m_PoHandle);
  if ( v7 >= 0 )
  {
    return 0;
  }
  else
  {
    v8 = this->m_PkgPnp;
    m_DeviceBase = v8->m_DeviceBase;
    m_Globals = v8->m_Globals;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(
      m_Globals,
      2u,
      0xCu,
      0x12u,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      v7);
  }
  return (unsigned int)v7;
}
