/*
 * XREFs of ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14001C2C0
 * Callers:
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14001C20C (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x14001A8D0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x14001AA98 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxDpc::Initialize(
        FxDpc *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_DPC_CONFIG *Config,
        FxObject *ParentObject,
        WDFDPC__ **Dpc)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v10; // r8d
  FxTagTracker *DpcData; // rcx
  FxDeviceBase *v12; // rax
  int EffectiveLock; // esi
  unsigned int v14; // edx
  FxTagTracker *m_Lock; // rcx
  void **v16; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  this->m_Callback = Config->EvtDpcFunc;
  pCallbacks = 0LL;
  KeInitializeDpc(&this->m_Dpc, FxDpc::FxDpcThunk, this);
  v10 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    DpcData = (FxTagTracker *)this[-1].m_Dpc.DpcData;
    if ( DpcData )
      FxTagTracker::UpdateTagHistory(
        DpcData,
        this,
        170,
        "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp",
        TagAddRef,
        v10);
  }
  v12 = FxDeviceBase::_SearchForDevice((unsigned __int64)ParentObject, &pCallbacks);
  this->m_DeviceBase = v12;
  if ( !v12 )
    return 3221225488LL;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    0,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xBu, WPP_FxDpc_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return (unsigned int)EffectiveLock;
  }
  else
  {
    v14 = _InterlockedIncrement(&ParentObject->m_Refcnt);
    if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
    {
      m_Lock = (FxTagTracker *)ParentObject[-1].m_SpinLock.m_Lock;
      if ( m_Lock )
        FxTagTracker::UpdateTagHistory(
          m_Lock,
          this,
          242,
          "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp",
          TagAddRef,
          v14);
    }
    v16 = (void **)Dpc;
    this->m_Object = ParentObject;
    return FxObject::Commit(this, Attributes, v16, ParentObject, 1u);
  }
}
