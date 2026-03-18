/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1400AB290
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x140068CCC (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x14001C638 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x14001CC70 (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001DB24 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1400A9D98 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v4; // rax
  FX_POOL **v5; // rax
  unsigned __int8 v6; // dl
  FX_POOL **v7; // rbx
  __int64 v8; // r8
  char v9; // r9
  _FX_DRIVER_GLOBALS *v10; // rdx
  signed int v11; // eax
  unsigned int _a3; // edi
  FxPkgPnp *v13; // rcx
  FxDeviceBase *v14; // rax
  const void *_a1; // r10
  bool v16; // zf
  _DEVICE_OBJECT *_a2; // rax
  FxPkgPnp *v18; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v20; // r8
  FxPkgPnp *v21; // rcx
  FxDeviceBase *v22; // rdx
  _FX_DRIVER_GLOBALS *v23; // rcx
  const void *v24; // r8
  __m128i v26; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_PkgPnp = this->m_PkgPnp;
  v26.m128i_i64[0] = 0LL;
  v26.m128i_i64[1] = 64LL;
  m_Globals = m_PkgPnp->m_Globals;
  v4 = retaddr;
  if ( !m_Globals->FxPoolTrackingOn )
    v4 = 0LL;
  v5 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v26, 0xC8uLL, m_Globals->Tag, v4);
  v7 = v5;
  if ( v5 )
  {
    FxThreadedEventQueue::FxThreadedEventQueue((FxThreadedEventQueue *)v5, v6);
    *((_BYTE *)v7 + 152) = 1;
    *(_OWORD *)((char *)v7 + 156) = 0LL;
    *(_OWORD *)((char *)v7 + 172) = 0LL;
    *(FX_POOL **)((char *)v7 + 188) = 0LL;
    v8 = *((unsigned __int8 *)v7 + 3);
    v9 = *((_BYTE *)v7 + 152);
    v10 = (_FX_DRIVER_GLOBALS *)(((int)v8 + 1) % (unsigned int)*((unsigned __int8 *)v7 + 2));
    *((_BYTE *)v7 + 3) = (_BYTE)v10;
    *((_BYTE *)v7 + v8 + 188) = v9;
    v7[18] = (FX_POOL *)this;
    v11 = FxEventQueue::Initialize((FxEventQueue *)v7, v10);
    _a3 = v11;
    if ( v11 < 0 )
    {
      v18 = this->m_PkgPnp;
      m_DeviceBase = v18->m_DeviceBase;
      v20 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        v20 = 0LL;
      WPP_IFR_SF_qqd(
        v18->m_Globals,
        2u,
        0xCu,
        0xBu,
        WPP_PoxInterface_cpp_Traceguids,
        v20,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        v11);
      goto LABEL_13;
    }
    _a3 = FxThreadedEventQueue::Init(
            (FxThreadedEventQueue *)v7,
            this->m_PkgPnp,
            FxDevicePwrRequirementMachine::_ProcessEventInner,
            0LL);
    if ( (_a3 & 0x80000000) != 0 )
    {
      v13 = this->m_PkgPnp;
      v14 = v13->m_DeviceBase;
      _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v16 = v14->m_ObjectSize == 0;
      _a2 = v14->m_DeviceObject.m_DeviceObject;
      if ( v16 )
        _a1 = 0LL;
      WPP_IFR_SF_qqd(v13->m_Globals, 2u, 0xCu, 0xCu, WPP_PoxInterface_cpp_Traceguids, _a1, _a2, _a3);
LABEL_13:
      FxWakeInterruptMachine::`scalar deleting destructor'((FxDevicePwrRequirementMachine *)v7);
      return _a3;
    }
    this->m_DevicePowerRequirementMachine = (FxDevicePwrRequirementMachine *)v7;
    return 0;
  }
  else
  {
    _a3 = -1073741670;
    v21 = this->m_PkgPnp;
    v22 = v21->m_DeviceBase;
    v23 = v21->m_Globals;
    v24 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v22->m_ObjectSize )
      v24 = 0LL;
    WPP_IFR_SF_qqd(
      v23,
      2u,
      0xCu,
      0xAu,
      WPP_PoxInterface_cpp_Traceguids,
      v24,
      v22->m_DeviceObject.m_DeviceObject,
      0xC000009A);
  }
  return _a3;
}
