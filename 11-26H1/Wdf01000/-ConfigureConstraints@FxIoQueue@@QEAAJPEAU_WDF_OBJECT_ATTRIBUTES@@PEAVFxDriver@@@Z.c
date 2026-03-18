/*
 * XREFs of ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x14001AC1C
 * Callers:
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x140019968 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDDd @ 0x140092DAC (WPP_IFR_SF_qDDd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoQueue::ConfigureConstraints(
        FxIoQueue *this,
        _WDF_OBJECT_ATTRIBUTES *ObjectAttributes,
        FxDriver *Caller)
{
  FxCallbackSpinLock *p_m_CallbackSpinLock; // r12
  FxCallbackMutexLock *p_m_CallbackMutexLock; // rdi
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // r14
  _WDF_SYNCHRONIZATION_SCOPE *p_m_SynchronizationScope; // rsi
  _WDF_EXECUTION_LEVEL v10; // ecx
  _WDF_EXECUTION_LEVEL v11; // edx
  __int64 result; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rcx
  unsigned __int16 v14; // ax
  const void *_a1; // rbx
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *v17; // rcx
  const void *v18; // rbx
  _WDF_EXECUTION_LEVEL globals; // r8d
  int v20; // [rsp+40h] [rbp-48h]
  _WDF_EXECUTION_LEVEL ParentLevel; // [rsp+90h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE ParentScope; // [rsp+98h] [rbp+10h] BYREF

  p_m_CallbackSpinLock = &this->m_CallbackSpinLock;
  ParentLevel = WdfExecutionLevelInvalid;
  ParentScope = WdfSynchronizationScopeInvalid;
  this->m_CallbackSpinLock.Initialize(&this->m_CallbackSpinLock, this);
  p_m_CallbackMutexLock = &this->m_CallbackMutexLock;
  this->m_CallbackMutexLock.Initialize(&this->m_CallbackMutexLock, this);
  p_m_ExecutionLevel = &this->m_ExecutionLevel;
  p_m_SynchronizationScope = &this->m_SynchronizationScope;
  if ( ObjectAttributes )
  {
    *p_m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    *p_m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_DeviceBase->GetConstraints(&this->m_DeviceBase->IFxHasCallbacks, &ParentLevel, &ParentScope);
  v10 = *p_m_ExecutionLevel;
  v11 = ParentLevel;
  if ( *p_m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
  {
    *p_m_ExecutionLevel = ParentLevel;
    v10 = v11;
  }
  if ( *p_m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    *p_m_SynchronizationScope = ParentScope;
  if ( v10 == WdfExecutionLevelPassive )
  {
    this->m_ObjectFlags |= 0x11u;
    this->m_PassiveLevel = 1;
  }
  else
  {
    p_m_CallbackMutexLock = (FxCallbackMutexLock *)p_m_CallbackSpinLock;
  }
  this->m_CallbackLockPtr = p_m_CallbackMutexLock;
  this->m_CallbackLockObjectPtr = this;
  if ( *p_m_SynchronizationScope != WdfSynchronizationScopeDevice )
  {
    if ( *p_m_SynchronizationScope != WdfSynchronizationScopeQueue )
      p_m_CallbackMutexLock = 0LL;
    goto LABEL_12;
  }
  p_m_Globals = &this->m_Globals;
  if ( !Caller || Caller == (*p_m_Globals)->Driver )
  {
    globals = this->m_ExecutionLevel;
    if ( v11 == globals )
    {
      p_m_CallbackMutexLock = (FxCallbackMutexLock *)this->m_DeviceBase->GetCallbackLockPtr(
                                                       &this->m_DeviceBase->IFxHasCallbacks,
                                                       &this->m_CallbackLockObjectPtr);
      this->m_CallbackLockPtr = p_m_CallbackMutexLock;
LABEL_12:
      this->m_IoDefault.m_CallbackLock = p_m_CallbackMutexLock;
      result = 0LL;
      this->m_IoStop.m_CallbackLock = p_m_CallbackMutexLock;
      this->m_IoResume.m_CallbackLock = p_m_CallbackMutexLock;
      this->m_IoRead.m_CallbackLock = p_m_CallbackMutexLock;
      this->m_IoWrite.m_CallbackLock = p_m_CallbackMutexLock;
      this->m_IoDeviceControl.m_CallbackLock = p_m_CallbackMutexLock;
      this->m_IoInternalDeviceControl.m_CallbackLock = p_m_CallbackMutexLock;
      this->m_PurgeComplete.m_CallbackLock = p_m_CallbackMutexLock;
      this->m_ReadyNotify.m_CallbackLock = p_m_CallbackMutexLock;
      this->m_IoCanceledOnQueue.m_CallbackLock = p_m_CallbackMutexLock;
      this->m_IoCancelCallbackLockPtr = p_m_CallbackMutexLock;
      return result;
    }
    m_ObjectSize = this->m_ObjectSize;
    v17 = *p_m_Globals;
    v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v18 = 0LL;
    WPP_IFR_SF_qDDd(v17, v11, 0xDu, 0x15u, WPP_FxIoQueue_cpp_Traceguids, v18, v11, globals, v20);
  }
  else
  {
    v14 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v14 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xDu, 0x14u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741811);
  }
  return 3221225485LL;
}
