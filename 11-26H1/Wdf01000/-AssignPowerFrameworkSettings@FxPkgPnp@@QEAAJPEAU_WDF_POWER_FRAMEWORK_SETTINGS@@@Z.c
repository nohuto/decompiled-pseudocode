/*
 * XREFs of ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1400A6804
 * Callers:
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x140092540 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1400A85A8 (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  _PO_FX_COMPONENT_V1 *Component; // rax
  unsigned __int64 v5; // rbx
  unsigned int v6; // ebp
  int v7; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 v9; // r9
  const void *_a1; // rdx
  bool v11; // zf
  __int64 Pool2; // rax
  _PO_FX_COMPONENT_IDLE_STATE *v13; // r15
  _POX_SETTINGS *v14; // r14
  _PO_FX_COMPONENT_V1 *v15; // rcx
  _PO_FX_COMPONENT_V1 *v16; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rbp
  FxDeviceBase *v18; // rcx
  _DEVICE_OBJECT *_a2; // [rsp+30h] [rbp-28h]
  unsigned int _a3; // [rsp+38h] [rbp-20h]

  Component = PowerFrameworkSettings->Component;
  LODWORD(v5) = 0;
  v6 = 0;
  if ( Component )
  {
    v5 = 24LL * Component->IdleStateCount;
    if ( v5 > 0xFFFFFFFF )
    {
      v7 = -1073741675;
      m_DeviceBase = this->m_DeviceBase;
      v9 = 85;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      v11 = m_DeviceBase->m_ObjectSize == 0;
      goto LABEL_5;
    }
    v6 = v5 + 32;
    if ( (int)v5 + 32 < (unsigned int)v5 )
    {
      v7 = -1073741675;
      m_DeviceBase = this->m_DeviceBase;
      v9 = 86;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      v11 = m_DeviceBase->m_ObjectSize == 0;
LABEL_5:
      _a3 = -1073741675;
LABEL_6:
      _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
LABEL_17:
      if ( v11 )
        _a1 = 0LL;
      WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xCu, v9, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2, _a3);
      return (unsigned int)v7;
    }
  }
  if ( v6 + 64 < v6 )
  {
    v7 = -1073741675;
    v18 = this->m_DeviceBase;
    v9 = 87;
    _a3 = -1073741675;
    _a1 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v11 = v18->m_ObjectSize == 0;
    _a2 = v18->m_DeviceObject.m_DeviceObject;
    goto LABEL_17;
  }
  Pool2 = ExAllocatePool2(64LL, v6 + 64, this->m_Globals->Tag);
  v13 = (_PO_FX_COMPONENT_IDLE_STATE *)Pool2;
  if ( !Pool2 )
  {
    v7 = -1073741670;
    m_DeviceBase = this->m_DeviceBase;
    v9 = 88;
    _a3 = -1073741670;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v11 = m_DeviceBase->m_ObjectSize == 0;
    goto LABEL_6;
  }
  v14 = (_POX_SETTINGS *)(Pool2 + v6);
  v14->EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
  v14->EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
  v14->Component = PowerFrameworkSettings->Component;
  v14->ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
  v14->ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback;
  v14->ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback;
  v14->PowerControlCallback = PowerFrameworkSettings->PowerControlCallback;
  v14->PoFxDeviceContext = PowerFrameworkSettings->PoFxDeviceContext;
  if ( PowerFrameworkSettings->Component )
  {
    v15 = (_PO_FX_COMPONENT_V1 *)((unsigned int)v5 + Pool2);
    v14->Component = v15;
    v16 = PowerFrameworkSettings->Component;
    v15->Id = v16->Id;
    *(_OWORD *)&v15->IdleStateCount = *(_OWORD *)&v16->IdleStateCount;
    v14->Component->IdleStates = v13;
    memmove(v14->Component->IdleStates, PowerFrameworkSettings->Component->IdleStates, (unsigned int)v5);
  }
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v7 = IdleTimeoutManagement::CommitPowerFrameworkSettings(&m_Owner->m_IdleSettings.m_TimeoutMgmt, this->m_Globals, v14);
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v13, 0);
  }
  else
  {
    v7 = 0;
    m_Owner->m_IdleSettings.m_TimeoutMgmt.m_DirectedTransitionsSupported = PowerFrameworkSettings->DirectedPoFxEnabled != WdfFalse;
    m_Owner->m_IdleSettings.m_TimeoutMgmt.m_PoFxDeviceFlags = PowerFrameworkSettings->PoFxDeviceFlags;
  }
  return (unsigned int)v7;
}
