/*
 * XREFs of ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x14001C46C
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x14001BB34 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x14001C578 (--0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::_CreateAndInit(
        FxSelfManagedIoMachine **SelfManagedIoMachine,
        FxPkgPnp *PkgPnp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v5; // rax
  FxSelfManagedIoMachine *v6; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  __int64 result; // rax
  FxSelfManagedIoMachine *v11; // rax
  FxSelfManagedIoMachine *v12; // rdi
  FxWaitLockInternal *p_m_StateMachineLock; // rbx
  FxPoolTypeOrPoolFlags v14; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  *SelfManagedIoMachine = 0LL;
  m_Globals = PkgPnp->m_Globals;
  *(_QWORD *)&v14.UsePoolType = 0LL;
  v14.u.PoolFlags = 64LL;
  v5 = retaddr;
  if ( !m_Globals->FxPoolTrackingOn )
    v5 = 0LL;
  v6 = (FxSelfManagedIoMachine *)FxPoolAllocator(
                                   m_Globals,
                                   &m_Globals->FxPoolFrameworks,
                                   &v14,
                                   0x118uLL,
                                   m_Globals->Tag,
                                   v5);
  if ( v6 && (FxSelfManagedIoMachine::FxSelfManagedIoMachine(v6, PkgPnp), (v12 = v11) != 0LL) )
  {
    p_m_StateMachineLock = &v11->m_StateMachineLock;
    KeInitializeEvent(&v11->m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    p_m_StateMachineLock->m_Event.m_DbgFlagIsInitialized = 1;
    result = 0LL;
    *SelfManagedIoMachine = v12;
  }
  else
  {
    m_DeviceBase = PkgPnp->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(PkgPnp->m_Globals, 2u, 0xCu, 0xAu, WPP_SelfManagedIoStateMachine_cpp_Traceguids, _a1);
    return 3221225626LL;
  }
  return result;
}
