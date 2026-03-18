/*
 * XREFs of ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1400A8494
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x14004CC54 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x14003F684 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1400575F8 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x14007A67C (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::UpdateWmiInstanceForSxWake(FxPkgPnp *this, FxWmiInstanceAction Action, unsigned __int8 a3)
{
  int v3; // edx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  unsigned int v6; // ebx
  FxWmiInstance **p_WmiInstance; // r9
  int v8; // eax
  FxWmiInstanceInternalCallbacks cb; // [rsp+20h] [rbp-28h] BYREF

  v3 = Action - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      WmiInstance = m_Owner->m_WakeSettings.WmiInstance;
      if ( WmiInstance )
        FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_WakeSettings.WmiInstance, a3);
    }
    return 0LL;
  }
  v6 = 0;
  p_WmiInstance = &this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.WmiInstance;
  if ( *p_WmiInstance )
  {
    FxWmiProvider::AddInstance((*p_WmiInstance)->m_Provider, *p_WmiInstance, 1u);
    return 0LL;
  }
  cb.ExecuteMethod = 0LL;
  cb.SetInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *))FxPkgPnp::_SxWakeSetInstance;
  cb.QueryInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *, unsigned int *))FxPkgPnp::_SxWakeQueryInstance;
  cb.SetItem = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, unsigned int, void *))FxPkgPnp::_SxWakeSetItem;
  v8 = FxPkgPnp::RegisterPowerPolicyWmiInstance(
         this,
         &GUID_POWER_DEVICE_WAKE_ENABLE,
         &cb,
         (FxWmiInstanceInternal **)p_WmiInstance);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v6;
}
