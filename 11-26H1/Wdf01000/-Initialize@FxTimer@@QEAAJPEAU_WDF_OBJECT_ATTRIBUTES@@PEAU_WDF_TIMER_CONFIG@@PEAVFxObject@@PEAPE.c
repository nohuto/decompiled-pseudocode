/*
 * XREFs of ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x140019E60
 * Callers:
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x140019D0C (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?InitializeEx@MxTimer@@QEAAJPEAXP6AXPEAU_EX_TIMER@@0@ZJKE@Z @ 0x14001A114 (-InitializeEx@MxTimer@@QEAAJPEAXP6AXPEAU_EX_TIMER@@0@ZJKE@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x14001A8D0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x14001AA98 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14001AE64 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x14006065C (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 */

__int64 __fastcall FxTimer::Initialize(
        FxTimer *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_TIMER_CONFIG *Config,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int Period; // r9d
  bool v10; // cc
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  signed int v13; // eax
  unsigned int v14; // ebp
  unsigned int v15; // edx
  FxObject *m_CallbackLockObject; // rcx
  FxDeviceBase *v17; // rax
  _WDF_EXECUTION_LEVEL ExecutionLevel; // ebp
  int EffectiveLock; // esi
  signed int v20; // eax
  unsigned int v21; // edx
  FxTagTracker *m_Lock; // rcx
  void **v23; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  Period = Config->Period;
  this->m_Period = Period;
  v10 = Config->Size <= 0x18;
  pCallbacks = 0LL;
  if ( !v10 )
    this->m_TolerableDelay = Config->TolerableDelay;
  if ( Config->Size > 0x20 )
    this->m_UseHighResolutionTimer = Config->UseHighResolutionTimer;
  this->m_Callback = Config->EvtTimerFunc;
  WdfBindInfo = m_Globals->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xD )
    v13 = MxTimer::InitializeEx(
            &this->m_Timer,
            this,
            (void (__fastcall *)(struct _EX_TIMER *, void *))Config,
            Period,
            this->m_TolerableDelay,
            this->m_UseHighResolutionTimer);
  else
    v13 = MxTimer::Initialize(
            &this->m_Timer,
            this,
            (void (__fastcall *)(_KDPC *, void *, void *, void *))FxTimer::_FxTimerDpcThunk,
            Period);
  v14 = v13;
  if ( v13 < 0 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xBu, WPP_FxTimer_cpp_Traceguids, v13);
    return v14;
  }
  v15 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_CallbackLockObject = this[-1].m_CallbackLockObject;
    if ( m_CallbackLockObject )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_CallbackLockObject,
        this,
        191,
        "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
        TagAddRef,
        v15);
  }
  v17 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v17;
  if ( !v17 )
    return 3221225488LL;
  ExecutionLevel = Attributes->ExecutionLevel;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    ExecutionLevel == WdfExecutionLevelPassive,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxTimer_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return (unsigned int)EffectiveLock;
  }
  if ( ExecutionLevel == WdfExecutionLevelPassive )
  {
    v20 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SystemWorkItem);
    EffectiveLock = v20;
    if ( v20 < 0 )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxTimer_cpp_Traceguids, v20);
      return (unsigned int)EffectiveLock;
    }
  }
  v21 = _InterlockedIncrement(&ParentObject->m_Refcnt);
  if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)ParentObject[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(
        m_Lock,
        this,
        299,
        "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
        TagAddRef,
        v21);
  }
  v23 = (void **)Timer;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v23, ParentObject, 1u);
}
