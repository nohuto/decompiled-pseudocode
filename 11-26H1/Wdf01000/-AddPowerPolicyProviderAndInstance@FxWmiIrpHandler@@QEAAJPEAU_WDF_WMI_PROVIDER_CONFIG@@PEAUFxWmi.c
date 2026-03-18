/*
 * XREFs of ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1400576AC
 * Callers:
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1400575F8 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1400101A0 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x14003F7D4 (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     FxIsEqualGuid @ 0x1400422A4 (FxIsEqualGuid.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x140057F34 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x140058B80 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DC04 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x140079B18 (-RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1400839D0 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x14008DD48 (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x14008E274 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
        FxWmiIrpHandler *this,
        _WDF_WMI_PROVIDER_CONFIG *ProviderConfig,
        FxWmiInstanceInternalCallbacks *InstanceCallbacks,
        FxWmiInstanceInternal **Instance)
{
  char m_ObjectFlags; // al
  FxWmiInstanceInternalCallbacks *v6; // r12
  char v8; // r14
  unsigned __int8 updated; // r15
  unsigned __int64 v10; // rsi
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v12; // di
  unsigned __int64 v13; // rdx
  FxWmiProvider *ProviderLocked; // rbx
  unsigned int v15; // r9d
  FX_POOL **v16; // rax
  unsigned __int8 v17; // r8
  FxWmiProvider *v18; // rax
  int v19; // edi
  FX_POOL **v20; // rax
  FxObject *v21; // rax
  char v22; // al
  unsigned __int8 update; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+A8h] [rbp+10h] BYREF
  FxWmiInstanceInternalCallbacks *Callbacks; // [rsp+B0h] [rbp+18h]
  volatile signed __int64 *v27; // [rsp+B8h] [rbp+20h]

  v27 = (volatile signed __int64 *)Instance;
  Callbacks = InstanceCallbacks;
  m_ObjectFlags = this->m_ObjectFlags;
  v6 = InstanceCallbacks;
  irql = 0;
  update = 0;
  v8 = 0;
  updated = 0;
  v10 = 0LL;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)InstanceCallbacks);
    v12 = irql;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v12;
  }
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(this, &ProviderConfig->Guid);
  if ( ProviderLocked )
  {
    if ( ProviderLocked->m_NumInstances
      && (FxIsEqualGuid(&ProviderLocked->m_Guid, &GUID_POWER_DEVICE_ENABLE)
       || FxIsEqualGuid(&ProviderLocked->m_Guid, &GUID_POWER_DEVICE_WAKE_ENABLE)) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xDu, 0xDu, WPP_FxWmiIrpHandler_cpp_Traceguids);
      v19 = -1073741055;
      goto LABEL_29;
    }
    goto LABEL_17;
  }
  v16 = FxObjectHandleAlloc2(this->m_Globals, v13, 0xD8uLL, v15, 0LL, 0, FxObjectTypeExternal);
  if ( !v16 )
  {
    ProviderLocked = 0LL;
    goto LABEL_12;
  }
  FxWmiProvider::FxWmiProvider((FxWmiProvider *)v16, this->m_Globals, ProviderConfig, this->m_Device);
  ProviderLocked = v18;
  if ( !v18 )
  {
LABEL_12:
    v19 = -1073741670;
    goto LABEL_29;
  }
  v8 = 1;
  v19 = FxWmiIrpHandler::AddProviderLocked(this, v18, v12, 0LL);
  if ( v19 < 0 )
    goto LABEL_29;
  v19 = FxObject::AssignParentObject(ProviderLocked, this->m_DeviceBase);
  if ( v19 < 0 )
  {
LABEL_28:
    FxWmiIrpHandler::RemoveProviderLocked(this, ProviderLocked);
    goto LABEL_29;
  }
  v6 = Callbacks;
LABEL_17:
  v20 = FxObjectHandleAlloc2(this->m_Globals, v13, 0xB0uLL, v15, 0LL, 0, FxObjectTypeExternal);
  if ( !v20
    || (FxWmiInstanceInternal::FxWmiInstanceInternal((FxWmiInstanceInternal *)v20, this->m_Globals, v6, ProviderLocked),
        (v10 = (unsigned __int64)v21) == 0) )
  {
    v19 = -1073741670;
    goto LABEL_27;
  }
  v19 = FxObject::AssignParentObject(v21, ProviderLocked);
  if ( v19 < 0 )
    goto LABEL_27;
  if ( _InterlockedCompareExchange64(v27, v10, 0LL) )
  {
    v19 = -1073741771;
    goto LABEL_27;
  }
  v19 = FxWmiProvider::AddInstanceLocked(ProviderLocked, v10, 0, &update, AddInstanceToHead);
  updated = update;
  v22 = v8;
  if ( v19 < 0 )
  {
LABEL_27:
    if ( !v8 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( update )
  {
    updated = FxWmiIrpHandler::DeferUpdateLocked(this, irql);
    v22 = v8;
  }
  v8 = v22;
LABEL_29:
  FxNonPagedObject::Unlock(this, irql, v17);
  if ( v19 < 0 )
  {
    if ( v10 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 48LL))(v10);
    if ( v8 )
      ProviderLocked->DeleteObject(ProviderLocked);
  }
  else if ( updated )
  {
    FxWmiIrpHandler::UpdateGuids(this);
  }
  return (unsigned int)v19;
}
