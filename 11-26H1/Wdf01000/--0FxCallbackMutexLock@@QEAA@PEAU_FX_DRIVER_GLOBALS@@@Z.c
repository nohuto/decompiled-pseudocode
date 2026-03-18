/*
 * XREFs of ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001AB6C
 * Callers:
 *     ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x140019604 (--0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140020954 (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14006C2C8 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxCallbackMutexLock::FxCallbackMutexLock(
        FxCallbackMutexLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackMutexLock::`vftable';
  this->m_OwnerThread = 0LL;
  this->m_RecursionCount = 0;
  this->m_Verifier = 0LL;
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  this->m_Lock.m_Lock.Count = 1;
  this->m_Lock.m_Lock.Owner = 0LL;
  this->m_Lock.m_Lock.Contention = 0;
  KeInitializeEvent(&this->m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_Lock.m_Lock.Count = 1;
  this->m_Lock.m_Lock.Owner = 0LL;
  this->m_Lock.m_Lock.Contention = 0;
  KeInitializeEvent(&this->m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_Lock.m_DbgFlagIsInitialized = 1;
}
