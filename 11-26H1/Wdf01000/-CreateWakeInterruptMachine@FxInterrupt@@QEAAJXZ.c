/*
 * XREFs of ?CreateWakeInterruptMachine@FxInterrupt@@QEAAJXZ @ 0x1400A9DC0
 * Callers:
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1400AA6CC (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x14001C638 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x14001CC70 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001DB24 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1400A9D98 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxInterrupt::CreateWakeInterruptMachine(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  _FX_DRIVER_GLOBALS *v3; // rcx
  void *v4; // rax
  FX_POOL **v5; // rax
  _FX_DRIVER_GLOBALS *v6; // rdx
  FX_POOL **v7; // rbx
  __int64 v8; // r8
  char v9; // r9
  unsigned int v10; // esi
  int v11; // eax
  FxPkgPnp **_a1; // rcx
  unsigned __int16 v13; // r9
  int _a2; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __m128i v17; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_DeviceBase = this->m_DeviceBase;
  v17.m128i_i64[0] = 0LL;
  v17.m128i_i64[1] = 64LL;
  v3 = *(_FX_DRIVER_GLOBALS **)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 16LL);
  if ( v3->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v5 = FxPoolAllocator(v3, &v3->FxPoolFrameworks, &v17, 0xF0uLL, v3->Tag, v4);
  v7 = v5;
  if ( v5 )
  {
    FxThreadedEventQueue::FxThreadedEventQueue((FxThreadedEventQueue *)v5, (unsigned __int8)v6);
    *((_BYTE *)v7 + 184) = 0;
    *((_BYTE *)v7 + 192) = 2;
    *(_OWORD *)((char *)v7 + 196) = 0LL;
    HIDWORD(v6) = 0;
    *(_OWORD *)((char *)v7 + 212) = 0LL;
    *(FX_POOL **)((char *)v7 + 228) = 0LL;
    v8 = *((unsigned __int8 *)v7 + 3);
    v9 = *((_BYTE *)v7 + 192);
    LODWORD(v6) = ((int)v8 + 1) % (unsigned int)*((unsigned __int8 *)v7 + 2);
    *((_BYTE *)v7 + 3) = (_BYTE)v6;
    *((_BYTE *)v7 + v8 + 228) = v9;
    v7[18] = (FX_POOL *)this;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v10 = -1073741670;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xCu, WPP_InterruptObject_cpp_Traceguids, this->m_DeviceBase, -1073741670);
    return v10;
  }
  v11 = FxEventQueue::Initialize((FxEventQueue *)v7, v6);
  _a1 = (FxPkgPnp **)this->m_DeviceBase;
  v10 = v11;
  if ( v11 < 0 )
  {
    v13 = 13;
    _a2 = v11;
LABEL_13:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, v13, WPP_InterruptObject_cpp_Traceguids, _a1, _a2);
    FxWakeInterruptMachine::`scalar deleting destructor'((FxDevicePwrRequirementMachine *)v7);
    return v10;
  }
  v10 = FxThreadedEventQueue::Init((FxThreadedEventQueue *)v7, _a1[81], FxWakeInterruptMachine::_ProcessEventInner, v7);
  _a2 = v10;
  if ( (v10 & 0x80000000) != 0 )
  {
    _a1 = (FxPkgPnp **)this->m_DeviceBase;
    v13 = 14;
    goto LABEL_13;
  }
  this->m_WakeInterruptMachine = (FxWakeInterruptMachine *)v7;
  KeInitializeEvent((PRKEVENT)(v7 + 20), SynchronizationEvent, 0);
  *((_BYTE *)v7 + 184) = 1;
  ++*(_DWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 1216LL);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xFu, WPP_InterruptObject_cpp_Traceguids, this->m_DeviceBase);
  return v10;
}
