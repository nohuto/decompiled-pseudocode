/*
 * XREFs of ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x14001A658
 * Callers:
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x14001A400 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x14001A8D0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?IsPassiveCallbacks@FxObject@@QEAAEE@Z @ 0x14001AFC8 (-IsPassiveCallbacks@FxObject@@QEAAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWorkItem::Initialize(
        FxWorkItem *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_WORKITEM_CONFIG *Config,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int v10; // r9d
  void (__fastcall *m_Callback)(WDFWORKITEM__ *); // rcx
  FxDeviceBase *v12; // rax
  unsigned __int8 AutomaticSerialization; // al
  _FX_DRIVER_GLOBALS *v14; // r12
  IFxHasCallbacks *v15; // rsi
  unsigned __int8 v16; // dl
  struct _IO_WORKITEM *v17; // rax
  unsigned int v18; // edx
  FxTagTracker *m_Lock; // rcx
  void **v20; // r8
  unsigned int v22; // ebx
  IFxHasCallbacks *pCallbacks; // [rsp+40h] [rbp-38h] BYREF
  int v24; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+90h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  this->m_Callback = Config->EvtWorkItemFunc;
  pCallbacks = 0LL;
  v10 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Callback = this[-1].m_Callback;
    if ( m_Callback )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_Callback,
        this,
        178,
        "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
        TagAddRef,
        v10);
  }
  v12 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v12;
  if ( !v12 )
    return 3221225488LL;
  AutomaticSerialization = Config->AutomaticSerialization;
  v14 = ParentObject->m_Globals;
  v15 = pCallbacks;
  this->m_CallbackLock = 0LL;
  v25 = 0;
  v24 = 0;
  this->m_CallbackLockObject = 0LL;
  if ( AutomaticSerialization )
  {
    if ( !v15 )
      return (unsigned int)-1073741808;
    v15->GetConstraints(v15, (_WDF_EXECUTION_LEVEL *)&v25, (_WDF_SYNCHRONIZATION_SCOPE *)&v24);
    if ( v24 != 4 && v24 != 1 )
    {
      if ( FxObject::IsPassiveCallbacks(ParentObject, v16) )
      {
        this->m_CallbackLock = v15->GetCallbackLockPtr(v15, &this->m_CallbackLockObject);
        goto LABEL_8;
      }
      FxVerifierDbgBreakPoint(v14);
      v22 = -1071644148;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxWorkItem_cpp_Traceguids, Attributes->ParentObject, -1071644148);
      return v22;
    }
  }
LABEL_8:
  v17 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  this->m_WorkItem.m_WorkItem = v17;
  if ( !v17 )
  {
    v22 = -1073741670;
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxWorkItem_cpp_Traceguids, 0xC000009A);
    return v22;
  }
  v18 = _InterlockedIncrement(&ParentObject->m_Refcnt);
  if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)ParentObject[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(
        m_Lock,
        this,
        269,
        "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
        TagAddRef,
        v18);
  }
  v20 = (void **)WorkItem;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v20, ParentObject, 1u);
}
