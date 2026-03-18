/*
 * XREFs of ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140020954
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14002008C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6C0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001AB6C (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDeviceBase::ConfigureConstraints(FxDeviceBase *this, _WDF_OBJECT_ATTRIBUTES *ObjectAttributes)
{
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // rsi
  _WDF_SYNCHRONIZATION_SCOPE *p_m_SynchronizationScope; // rdi
  _WDF_EXECUTION_LEVEL v5; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int Tag; // r8d
  unsigned __int8 FxPoolTrackingOn; // al
  bool v9; // zf
  void *v10; // rax
  FxCallbackLock *v11; // rax
  FxCallbackLock *v12; // rcx
  unsigned int v13; // edi
  void *v15; // rax
  FxCallbackMutexLock *v16; // rax
  FxCallbackLock *v17; // rax
  const void *_a1; // rcx
  FxPoolTypeOrPoolFlags v19; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  _WDF_EXECUTION_LEVEL driverLevel; // [rsp+70h] [rbp+20h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE driverScope; // [rsp+78h] [rbp+28h] BYREF

  p_m_ExecutionLevel = &this->m_ExecutionLevel;
  driverLevel = WdfExecutionLevelInvalid;
  driverScope = WdfSynchronizationScopeInvalid;
  p_m_SynchronizationScope = &this->m_SynchronizationScope;
  if ( ObjectAttributes )
  {
    *p_m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    *p_m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_Driver->GetConstraints(&this->m_Driver->IFxHasCallbacks, &driverLevel, &driverScope);
  v5 = *p_m_ExecutionLevel;
  if ( *p_m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
  {
    v5 = driverLevel;
    *p_m_ExecutionLevel = driverLevel;
  }
  if ( *p_m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    *p_m_SynchronizationScope = driverScope;
  m_Globals = this->m_Globals;
  *(_QWORD *)&v19.UsePoolType = 0LL;
  v19.u.PoolFlags = 64LL;
  Tag = m_Globals->Tag;
  FxPoolTrackingOn = m_Globals->FxPoolTrackingOn;
  if ( v5 != WdfExecutionLevelPassive )
  {
    v9 = FxPoolTrackingOn == 0;
    v10 = retaddr;
    if ( v9 )
      v10 = 0LL;
    v11 = (FxCallbackLock *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v19, 0x40uLL, Tag, v10);
    v12 = v11;
    if ( v11 )
    {
      v11->m_Globals = this->m_Globals;
      v11->__vftable = (FxCallbackLock_vtbl *)FxCallbackSpinLock::`vftable';
      v11->m_OwnerThread = 0LL;
      v11->m_RecursionCount = 0;
      v11->m_Verifier = 0LL;
      v11[1].m_Globals = 0LL;
      LOBYTE(v11[1].__vftable) = 1;
      goto LABEL_12;
    }
    goto LABEL_18;
  }
  v9 = FxPoolTrackingOn == 0;
  v15 = retaddr;
  if ( v9 )
    v15 = 0LL;
  v16 = (FxCallbackMutexLock *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v19, 0x70uLL, Tag, v15);
  if ( !v16 )
  {
LABEL_18:
    v12 = 0LL;
    goto LABEL_12;
  }
  FxCallbackMutexLock::FxCallbackMutexLock(v16, this->m_Globals);
  v12 = v17;
LABEL_12:
  this->m_CallbackLockPtr = v12;
  if ( v12 )
  {
    v12->Initialize(v12, this);
    this->m_CallbackLockObjectPtr = this;
    return 0;
  }
  else
  {
    v13 = -1073741670;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x14u, 0xAu, WPP_FxDeviceBase_cpp_Traceguids, _a1, -1073741670);
  }
  return v13;
}
