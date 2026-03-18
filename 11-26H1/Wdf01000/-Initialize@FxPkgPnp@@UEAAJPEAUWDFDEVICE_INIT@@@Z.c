/*
 * XREFs of ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001B4B0
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140022370 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140056090 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x14001B774 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x14001BB34 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1400603BC (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1400645D0 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x140075458 (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?RegisterPowerPolicyCallbacks@FxPkgPnp@@QEAAXPEAU_WDF_POWER_POLICY_EVENT_CALLBACKS@@@Z @ 0x14007B438 (-RegisterPowerPolicyCallbacks@FxPkgPnp@@QEAAXPEAU_WDF_POWER_POLICY_EVENT_CALLBACKS@@@Z.c)
 */

int __fastcall FxPkgPnp::Initialize(FxPkgPnp *this, WDFDEVICE_INIT *DeviceInit)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDevice *v6; // r8
  _WDF_OBJECT_ATTRIBUTES *v7; // r9
  PnpPowerInit *p_PnpPower; // r14
  _WDF_TRI_STATE PowerPolicyOwner; // eax
  FxObject **p_m_Resources; // rbx
  int result; // eax
  int v12; // eax
  FxDevice *v13; // r8
  _WDF_OBJECT_ATTRIBUTES *v14; // r9
  FxObject *v15; // rcx
  int v16; // esi
  unsigned int RefCount; // edx
  FxTagTracker *m_Lock; // rcx
  int v19; // eax
  unsigned int v20; // edx
  FxTagTracker *v21; // rcx
  int v22; // r10d
  bool v23; // zf
  unsigned int Tag; // ecx
  void *v25; // rax
  FxPowerPolicyOwnerSettings *v26; // rax
  FxPoolTypeOrPoolFlags v27; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  m_Globals = this->m_Globals;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = DeviceInit->ReleaseHardwareOrderOnFailure == WdfReleaseHardwareOrderOnFailureAfterDescendants;
  KeInitializeEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  p_m_QueryInterfaceLock->m_Event.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_DeviceInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  p_PnpPower = &DeviceInit->PnpPower;
  this->m_DeviceInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  PowerPolicyOwner = DeviceInit->PnpPower.PowerPolicyOwner;
  if ( PowerPolicyOwner != WdfTrue )
  {
    if ( PowerPolicyOwner == WdfFalse )
      goto LABEL_5;
    if ( DeviceInit->InitType == FxDeviceInitTypePdo )
    {
      if ( !DeviceInit->Pdo.Raw )
        goto LABEL_5;
    }
    else if ( DeviceInit->Fdo.Filter )
    {
      goto LABEL_5;
    }
  }
  v23 = m_Globals->FxPoolTrackingOn == 0;
  Tag = m_Globals->Tag;
  *(_QWORD *)&v27.UsePoolType = 0LL;
  v27.u.PoolFlags = 64LL;
  if ( v23 )
    v25 = 0LL;
  else
    v25 = retaddr;
  v26 = (FxPowerPolicyOwnerSettings *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v27, 0x3B8uLL, Tag, v25);
  if ( v26 )
    FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings(v26, this);
  this->m_PowerPolicyMachine.m_Owner = v26;
  if ( !v26 )
    return -1073741670;
  result = FxPowerPolicyOwnerSettings::Init(v26);
  if ( result < 0 )
    return result;
  FxPkgPnp::QueryForD3ColdInterface(this);
LABEL_5:
  p_m_Resources = &this->m_Resources;
  result = FxCmResList::_CreateAndInit(&this->m_Resources, m_Globals, v6, v7, 0);
  if ( result < 0 )
    return result;
  v12 = FxObject::Commit(*p_m_Resources, 0LL, 0LL, this->m_DeviceBase, 1u);
  v15 = *p_m_Resources;
  v16 = v12;
  if ( v12 < 0 )
    goto LABEL_32;
  RefCount = _InterlockedIncrement(&v15->m_Refcnt);
  if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)v15[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(
        m_Lock,
        this,
        598,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
        TagAddRef,
        RefCount);
  }
  p_m_Resources = &this->m_ResourcesRaw;
  result = FxCmResList::_CreateAndInit(&this->m_ResourcesRaw, m_Globals, v13, v14, 0);
  if ( result >= 0 )
  {
    v19 = FxObject::Commit(*p_m_Resources, 0LL, 0LL, this->m_DeviceBase, 1u);
    v15 = *p_m_Resources;
    v16 = v19;
    if ( v19 >= 0 )
    {
      v20 = _InterlockedIncrement(&v15->m_Refcnt);
      if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
      {
        v21 = (FxTagTracker *)v15[-1].m_SpinLock.m_Lock;
        if ( v21 )
          FxTagTracker::UpdateTagHistory(
            v21,
            this,
            627,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
            TagAddRef,
            v20);
      }
      v22 = FxPkgPnp::RegisterCallbacks(this, &p_PnpPower->PnpPowerEventCallbacks);
      if ( v22 >= 0 )
      {
        if ( this->m_PowerPolicyMachine.m_Owner )
          FxPkgPnp::RegisterPowerPolicyCallbacks(this, &p_PnpPower->PolicyEventCallbacks);
      }
      return v22;
    }
LABEL_32:
    FxObject::DeleteFromFailedCreate(v15);
    result = v16;
    *p_m_Resources = 0LL;
  }
  return result;
}
